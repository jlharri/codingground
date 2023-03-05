// New comment - JS only, no CSS here
// No Colors. Change.
$(() => {
    $('#gridContainer').dxDataGrid({
      dataSource: 'data/customers.json',
      columns: ['CompanyName', 'City', 'State', 'Phone', 'Fax'],
      showBorders: true,
    });
  });
