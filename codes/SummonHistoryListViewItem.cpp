void __fastcall SummonHistoryListViewItem___ctor(
        SummonHistoryListViewItem_o *this,
        int32_t index,
        System_String_o *message,
        int32_t layout,
        const MethodInfo *method)
{
  SummonHistoryListViewItem_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  v7 = this;
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  v7->fields._Message_k__BackingField = message;
  v7 = (SummonHistoryListViewItem_o *)((char *)v7 + 112);
  sub_B16F98((BattleServantConfConponent_o *)v7, (System_Int32_array **)message, v8, v9, v10, v11, v12, v13);
  LODWORD(v7->monitor) = layout;
}


void __fastcall SummonHistoryListViewItem___ctor_28733976(
        SummonHistoryListViewItem_o *this,
        int32_t index,
        System_String_o *message,
        System_String_o *title,
        int32_t objectId,
        int32_t layout,
        const MethodInfo *method)
{
  SummonHistoryListViewItem_o *v11; // x23
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  v11 = this;
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  v11->fields._Message_k__BackingField = message;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v11->fields._Message_k__BackingField,
    (System_Int32_array **)message,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v11->fields._Title_k__BackingField = title;
  v11 = (SummonHistoryListViewItem_o *)((char *)v11 + 128);
  v11[-1].fields._itemID_k__BackingField = layout;
  sub_B16F98((BattleServantConfConponent_o *)v11, (System_Int32_array **)title, v18, v19, v20, v21, v22, v23);
  LODWORD(v11->monitor) = objectId;
}


int32_t __fastcall SummonHistoryListViewItem__get_Layout(SummonHistoryListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Layout_k__BackingField;
}


System_String_o *__fastcall SummonHistoryListViewItem__get_Message(
        SummonHistoryListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Message_k__BackingField;
}


System_String_o *__fastcall SummonHistoryListViewItem__get_Title(
        SummonHistoryListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Title_k__BackingField;
}


int32_t __fastcall SummonHistoryListViewItem__get_itemID(SummonHistoryListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._itemID_k__BackingField;
}


void __fastcall SummonHistoryListViewItem__set_Layout(
        SummonHistoryListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Layout_k__BackingField = value;
}


void __fastcall SummonHistoryListViewItem__set_Message(
        SummonHistoryListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Message_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._Message_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SummonHistoryListViewItem__set_Title(
        SummonHistoryListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Title_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._Title_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SummonHistoryListViewItem__set_itemID(
        SummonHistoryListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._itemID_k__BackingField = value;
}