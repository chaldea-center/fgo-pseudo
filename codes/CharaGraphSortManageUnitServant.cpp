void __fastcall CharaGraphSortManageUnitServant___ctor(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


CharaGraphFilterLogicBase_o *__fastcall CharaGraphSortManageUnitServant__CreateFilterLogic(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantCharaGraphFilterLogic_o *v3; // x19

  if ( (byte_4214248 & 1) == 0 )
  {
    sub_B0D8A4(&ServantCharaGraphFilterLogic_TypeInfo, method);
    byte_4214248 = 1;
  }
  v3 = (ServantCharaGraphFilterLogic_o *)sub_B0D974(ServantCharaGraphFilterLogic_TypeInfo, method, v2);
  ServantCharaGraphFilterLogic___ctor(v3, 0LL);
  return (CharaGraphFilterLogicBase_o *)v3;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitServant__CreateSortLogic(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantCharaGraphSortLogic_o *v3; // x19

  if ( (byte_4214247 & 1) == 0 )
  {
    sub_B0D8A4(&ServantCharaGraphSortLogic_TypeInfo, method);
    byte_4214247 = 1;
  }
  v3 = (ServantCharaGraphSortLogic_o *)sub_B0D974(ServantCharaGraphSortLogic_TypeInfo, method, v2);
  ServantCharaGraphSortLogic___ctor(v3, 0LL);
  return (CharaGraphSortLogicBase_o *)v3;
}


int32_t __fastcall CharaGraphSortManageUnitServant__get_FilterKind(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  return 0;
}


int32_t __fastcall CharaGraphSortManageUnitServant__get_ListKind(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  return 0;
}


int32_t __fastcall CharaGraphSortManageUnitServant__get_ListViewSortKind(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  return 3;
}


int32_t __fastcall CharaGraphSortManageUnitServant__get_SortKind(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  return 3;
}


System_String_o *__fastcall CharaGraphSortManageUnitServant__get_SortSaveKeySuffix(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  if ( (byte_4214246 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1013/*"1"*/, method);
    byte_4214246 = 1;
  }
  return (System_String_o *)StringLiteral_1013/*"1"*/;
}