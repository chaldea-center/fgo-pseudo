void __fastcall CharaGraphListViewPatternServantMission___ctor(
        CharaGraphListViewPatternServantMission_o *this,
        const MethodInfo *method)
{
  CharaGraphListViewPatternServantCollection___ctor((CharaGraphListViewPatternServantCollection_o *)this, 0LL);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *__fastcall CharaGraphListViewPatternServantMission__GenerateListViewItem(
        CharaGraphListViewPatternServantMission_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x20
  System_Func_T1__T2__TResult__o *v4; // x21

  if ( (byte_4BD87EA & 1) == 0 )
  {
    sub_1C21E38(&Method_CharaGraphListViewPatternServantMission__GenerateListViewItem_b__0_0__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_UserServantCollectionEntity__CharaGraphServantMissionListViewItem___);
    sub_1C21E38(&System_Func_UserServantCollectionEntity__int__CharaGraphServantMissionListViewItem__TypeInfo);
    byte_4BD87EA = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(CharaGraphListViewPatternServantMission_o *, void *))this->klass->vtable._14_GetServantArray.method)(
                                                              this,
                                                              this->klass[1]._1.image);
  v4 = (System_Func_T1__T2__TResult__o *)sub_1C22084(System_Func_UserServantCollectionEntity__int__CharaGraphServantMissionListViewItem__TypeInfo);
  System_Func_object__int__object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_CharaGraphListViewPatternServantMission__GenerateListViewItem_b__0_0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__Select_object__object__50206892(
                                                                                   v3,
                                                                                   (System_Func_TSource__int__TResult__o *)v4,
                                                                                   (const MethodInfo_2FE18AC *)Method_System_Linq_Enumerable_Select_UserServantCollectionEntity__CharaGraphServantMissionListViewItem___);
}


CharaGraphListViewItemDrawPatternBase_o *__fastcall CharaGraphListViewPatternServantMission__GetItemDrawPattern(
        CharaGraphListViewPatternServantMission_o *this,
        const MethodInfo *method)
{
  CharaGraphListViewItemDrawPatternServantCollection_o *v2; // x19

  if ( (byte_4BD87EB & 1) == 0 )
  {
    sub_1C21E38(&CharaGraphListViewItemDrawPatternServantMission_TypeInfo);
    byte_4BD87EB = 1;
  }
  v2 = (CharaGraphListViewItemDrawPatternServantCollection_o *)sub_1C22084(CharaGraphListViewItemDrawPatternServantMission_TypeInfo);
  CharaGraphListViewItemDrawPatternServantCollection___ctor(v2, 0LL);
  return (CharaGraphListViewItemDrawPatternBase_o *)v2;
}


CharaGraphServantMissionListViewItem_o *__fastcall CharaGraphListViewPatternServantMission___GenerateListViewItem_b__0_0(
        CharaGraphListViewPatternServantMission_o *this,
        UserServantCollectionEntity_o *elem,
        int32_t i,
        const MethodInfo *method)
{
  CharaGraphServantCollectionListViewItem_o *v7; // x22

  if ( (byte_4BD87EC & 1) == 0 )
  {
    sub_1C21E38(&CharaGraphServantMissionListViewItem_TypeInfo);
    byte_4BD87EC = 1;
  }
  v7 = (CharaGraphServantCollectionListViewItem_o *)sub_1C22084(CharaGraphServantMissionListViewItem_TypeInfo);
  CharaGraphServantCollectionListViewItem___ctor(v7, i, (CharaGraphListViewPatternBase_o *)this, elem, 0LL);
  return (CharaGraphServantMissionListViewItem_o *)v7;
}