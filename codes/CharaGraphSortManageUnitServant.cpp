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
  int v2; // w2
  __int64 v3; // x3
  ServantCharaGraphFilterLogic_o *v4; // x19

  if ( (byte_42E96FE & 1) == 0 )
  {
    sub_B5D5C4(&ServantCharaGraphFilterLogic_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E96FE = 1;
  }
  v4 = (ServantCharaGraphFilterLogic_o *)sub_B5D694(ServantCharaGraphFilterLogic_TypeInfo);
  ServantCharaGraphFilterLogic___ctor(v4, 0LL);
  return (CharaGraphFilterLogicBase_o *)v4;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitServant__CreateSortLogic(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantCharaGraphSortLogic_o *v4; // x19

  if ( (byte_42E96FD & 1) == 0 )
  {
    sub_B5D5C4(&ServantCharaGraphSortLogic_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E96FD = 1;
  }
  v4 = (ServantCharaGraphSortLogic_o *)sub_B5D694(ServantCharaGraphSortLogic_TypeInfo);
  ServantCharaGraphSortLogic___ctor(v4, 0LL);
  return (CharaGraphSortLogicBase_o *)v4;
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E96FC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1026/*"1"*/, (_DWORD)method, v2, v3);
    byte_42E96FC = 1;
  }
  return (System_String_o *)StringLiteral_1026/*"1"*/;
}