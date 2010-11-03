<Style name="land_areas">
    <Rule>
      <Filter>[natural] = 'land'</Filter>
      <PolygonSymbolizer>
        <CssParameter name="fill">#f2efe9</CssParameter>
     </PolygonSymbolizer>
    </Rule>
</Style>

<Layer name="land_areas" status="on" srs="&osm2pgsql_projection;">
    <StyleName>land_areas</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,"natural",name
      from &prefix;_polygon
      where "natural" in ('land')
      order by z_order,way_area desc
      ) as land_areas</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

