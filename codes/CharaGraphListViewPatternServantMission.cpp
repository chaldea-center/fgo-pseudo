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
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  System_Func_T1__T2__TResult__o *v8; // x21

  if ( (byte_49F888E & 1) == 0 )
  {
    sub_1B640C8(&Method_CharaGraphListViewPatternServantMission__GenerateListViewItem_b__0_0__, method);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_Select_UserServantCollectionEntity__CharaGraphServantMissionListViewItem___,
      v3);
    sub_1B640C8(&System_Func_UserServantCollectionEntity__int__CharaGraphServantMissionListViewItem__TypeInfo, v4);
    byte_49F888E = 1;
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(CharaGraphListViewPatternServantMission_o *, void *))this->klass->vtable._14_GetServantArray.method)(
                                                              this,
                                                              this->klass[1]._1.image);
  v8 = (System_Func_T1__T2__TResult__o *)sub_1B64314(
                                           System_Func_UserServantCollectionEntity__int__CharaGraphServantMissionListViewItem__TypeInfo,
                                           v6,
                                           v7);
  System_Func_object__int__object____ctor(
    v8,
    (Il2CppObject *)this,
    Method_CharaGraphListViewPatternServantMission__GenerateListViewItem_b__0_0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__Select_object__object__48666272(
                                                                                   v5,
                                                                                   (System_Func_TSource__int__TResult__o *)v8,
                                                                                   (const MethodInfo_2E696A0 *)Method_System_Linq_Enumerable_Select_UserServantCollectionEntity__CharaGraphServantMissionListViewItem___);
}


CharaGraphListViewItemDrawPatternBase_o *__fastcall CharaGraphListViewPatternServantMission__GetItemDrawPattern(
        CharaGraphListViewPatternServantMission_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CharaGraphListViewItemDrawPatternServantCollection_o *v3; // x19

  if ( (byte_49F888F & 1) == 0 )
  {
    sub_1B640C8(&CharaGraphListViewItemDrawPatternServantMission_TypeInfo, method);
    byte_49F888F = 1;
  }
  v3 = (CharaGraphListViewItemDrawPatternServantCollection_o *)sub_1B64314(
                                                                 CharaGraphListViewItemDrawPatternServantMission_TypeInfo,
                                                                 method,
                                                                 v2);
  CharaGraphListViewItemDrawPatternServantCollection___ctor(v3, 0LL);
  return (CharaGraphListViewItemDrawPatternBase_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
CharaGraphServantMissionListViewItem_o *__fastcall CharaGraphListViewPatternServantMission___GenerateListViewItem_b__0_0(
        CharaGraphListViewPatternServantMission_o *this,
        UserServantCollectionEntity_o *elem,
        int32_t i,
        const MethodInfo *method)
{
  CharaGraphServantCollectionListViewItem_o *v7; // x22

  if ( (byte_49F8890 & 1) == 0 )
  {
    sub_1B640C8(&CharaGraphServantMissionListViewItem_TypeInfo, elem);
    byte_49F8890 = 1;
  }
  v7 = (CharaGraphServantCollectionListViewItem_o *)sub_1B64314(
                                                      CharaGraphServantMissionListViewItem_TypeInfo,
                                                      elem,
                                                      *(_QWORD *)&i);
  CharaGraphServantCollectionListViewItem___ctor(v7, i, (CharaGraphListViewPatternBase_o *)this, elem, 0LL);
  return (CharaGraphServantMissionListViewItem_o *)v7;
}