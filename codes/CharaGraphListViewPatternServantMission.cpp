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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Func_T1__T2__TResult__o *v12; // x21

  if ( (byte_4B12539 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListViewPatternServantMission__GenerateListViewItem_b__0_0__, method, v2);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_UserServantCollectionEntity__CharaGraphServantMissionListViewItem___,
      v4,
      v5);
    sub_1BCA7E0(&System_Func_UserServantCollectionEntity__int__CharaGraphServantMissionListViewItem__TypeInfo, v6, v7);
    byte_4B12539 = 1;
  }
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(CharaGraphListViewPatternServantMission_o *, void *))this->klass->vtable._14_GetServantArray.method)(
                                                              this,
                                                              this->klass[1]._1.image);
  v12 = (System_Func_T1__T2__TResult__o *)sub_1BCAA2C(
                                            System_Func_UserServantCollectionEntity__int__CharaGraphServantMissionListViewItem__TypeInfo,
                                            v9,
                                            v10,
                                            v11);
  System_Func_object__int__object____ctor(
    v12,
    (Il2CppObject *)this,
    Method_CharaGraphListViewPatternServantMission__GenerateListViewItem_b__0_0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__Select_object__object__49560932(
                                                                                   v8,
                                                                                   (System_Func_TSource__int__TResult__o *)v12,
                                                                                   (const MethodInfo_2F43D64 *)Method_System_Linq_Enumerable_Select_UserServantCollectionEntity__CharaGraphServantMissionListViewItem___);
}


CharaGraphListViewItemDrawPatternBase_o *__fastcall CharaGraphListViewPatternServantMission__GetItemDrawPattern(
        CharaGraphListViewPatternServantMission_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  CharaGraphListViewItemDrawPatternServantCollection_o *v4; // x19

  if ( (byte_4B1253A & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListViewItemDrawPatternServantMission_TypeInfo, method, v2);
    byte_4B1253A = 1;
  }
  v4 = (CharaGraphListViewItemDrawPatternServantCollection_o *)sub_1BCAA2C(
                                                                 CharaGraphListViewItemDrawPatternServantMission_TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
  CharaGraphListViewItemDrawPatternServantCollection___ctor(v4, 0LL);
  return (CharaGraphListViewItemDrawPatternBase_o *)v4;
}


// local variable allocation has failed, the output may be wrong!
CharaGraphServantMissionListViewItem_o *__fastcall CharaGraphListViewPatternServantMission___GenerateListViewItem_b__0_0(
        CharaGraphListViewPatternServantMission_o *this,
        UserServantCollectionEntity_o *elem,
        int32_t i,
        const MethodInfo *method)
{
  CharaGraphServantCollectionListViewItem_o *v7; // x22

  if ( (byte_4B1253B & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphServantMissionListViewItem_TypeInfo, elem, *(_QWORD *)&i);
    byte_4B1253B = 1;
  }
  v7 = (CharaGraphServantCollectionListViewItem_o *)sub_1BCAA2C(
                                                      CharaGraphServantMissionListViewItem_TypeInfo,
                                                      elem,
                                                      *(_QWORD *)&i,
                                                      method);
  CharaGraphServantCollectionListViewItem___ctor(v7, i, (CharaGraphListViewPatternBase_o *)this, elem, 0LL);
  return (CharaGraphServantMissionListViewItem_o *)v7;
}