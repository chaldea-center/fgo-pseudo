void __fastcall CombineListViewItem___ctor(
        CombineListViewItem_o *this,
        int32_t index,
        CombineListItemInfo_o *info,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v6 = (BattleServantConfConponent_o *)this;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v6->fields.commandCard = (struct BattleCommandComponent_o *)info;
  v6 = (BattleServantConfConponent_o *)((char *)v6 + 112);
  LODWORD(v6[-1].fields.ClassSkillInitPosY) = index;
  sub_B2C2F8(v6, (System_Int32_array **)info, v7, v8, v9, v10, v11, v12);
}


void __fastcall CombineListViewItem__Finalize(CombineListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall CombineListViewItem__get_EventData(CombineListViewItem_o *this, const MethodInfo *method)
{
  struct CombineListItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B2C434(this, method);
  return info->fields.eventData;
}


CombineListItemInfo_o *__fastcall CombineListViewItem__get_Info(CombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.info;
}


System_String_o *__fastcall CombineListViewItem__get_SpriteName(CombineListViewItem_o *this, const MethodInfo *method)
{
  struct CombineListItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B2C434(this, method);
  return info->fields.spriteName;
}


int32_t __fastcall CombineListViewItem__get_Type(CombineListViewItem_o *this, const MethodInfo *method)
{
  struct CombineListItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B2C434(this, method);
  return info->fields.type;
}