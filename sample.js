// New comment - JS only, no CSS here
// Cool features! And colors
$(() => {
    $('#gridContainer').dxDataGrid({
      dataSource: 'data/customers.json',
      columns: ['CompanyName', 'City', 'State', 'Phone', 'Fax'],
      showBorders: true,
    });
  });
