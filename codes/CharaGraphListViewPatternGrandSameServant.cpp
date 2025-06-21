void __fastcall CharaGraphListViewPatternGrandSameServant___ctor(
        CharaGraphListViewPatternGrandSameServant_o *this,
        GrandServantListSlotData_o *grandServantData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct GrandServantListSlotData_o **p_grandSvtData; // x21
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1

  if ( (byte_4B17377 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_GrandGraphMaster___, grandServantData);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__, v6);
    byte_4B17377 = 1;
  }
  CharaGraphListViewPatternServant___ctor((CharaGraphListViewPatternServant_o *)this, 0LL);
  this->fields.grandSvtData = grandServantData;
  p_grandSvtData = &this->fields.grandSvtData;
  sub_1BCAF9C(&this->fields.grandSvtData);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !*p_grandSvtData || !Master_object )
    sub_1BCB254(Master_object, v9);
  this->fields.grandGraphEntity = (struct GrandGraphEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                 (*p_grandSvtData)->fields._GrandGraphId_k__BackingField,
                                                                 (const MethodInfo_32C7E00 *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__);
  sub_1BCAF9C(&this->fields.grandGraphEntity);
}


bool __fastcall CharaGraphListViewPatternGrandSameServant__Filter(
        CharaGraphListViewPatternGrandSameServant_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  CharaGraphListViewPatternGrandSameServant_o *v4; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  struct GrandServantListSlotData_o *grandSvtData; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *UserServantEntity_k__BackingField; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_4B17379 & 1) == 0 )
  {
    this = (CharaGraphListViewPatternGrandSameServant_o *)sub_1BCAFF8(
                                                            &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                            userSvtEntity);
    byte_4B17379 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_12;
  v6 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  this = (CharaGraphListViewPatternGrandSameServant_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                          v10,
                                                          0LL);
  grandSvtData = v4->fields.grandSvtData;
  if ( !grandSvtData )
    goto LABEL_12;
  UserServantEntity_k__BackingField = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)grandSvtData->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_12;
  if ( (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                         UserServantEntity_k__BackingField[5],
                         0LL) )
  {
    this = (CharaGraphListViewPatternGrandSameServant_o *)v4->fields.grandGraphEntity;
    if ( this )
      return GrandGraphEntity__CanSelectToGrand((GrandGraphEntity_o *)this, userSvtEntity, 0LL);
LABEL_12:
    sub_1BCB254(this, userSvtEntity);
  }
  return 0;
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *__fastcall CharaGraphListViewPatternGrandSameServant__GenerateListViewItem(
        CharaGraphListViewPatternGrandSameServant_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_UserServantEntity__o *ServantList; // x20
  System_Func_object__bool__o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  System_Func_T1__T2__TResult__o *v14; // x21

  if ( (byte_4B17378 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___, method);
    sub_1BCAFF8(&Method_CharaGraphListViewPatternGrandSameServant_Filter__, v3);
    sub_1BCAFF8(&Method_CharaGraphListViewPatternGrandSameServant__GenerateListViewItem_b__5_0__, v4);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_UserServantEntity__CharaGraphGrandSameServantListViewItem___, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v6);
    sub_1BCAFF8(&System_Func_UserServantEntity__bool__TypeInfo, v7);
    sub_1BCAFF8(&System_Func_UserServantEntity__int__CharaGraphGrandSameServantListViewItem__TypeInfo, v8);
    byte_4B17378 = 1;
  }
  Master_object = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_300E224 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
  if ( !Master_object )
    sub_1BCB254(0LL, v10);
  ServantList = UserServantMaster__getServantList((UserServantMaster_o *)Master_object, 0LL);
  v12 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)this,
    Method_CharaGraphListViewPatternGrandSameServant_Filter__,
    0LL);
  v13 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)ServantList,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  v14 = (System_Func_T1__T2__TResult__o *)sub_1BCB244(System_Func_UserServantEntity__int__CharaGraphGrandSameServantListViewItem__TypeInfo);
  System_Func_object__int__object____ctor(
    v14,
    (Il2CppObject *)this,
    Method_CharaGraphListViewPatternGrandSameServant__GenerateListViewItem_b__5_0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__Select_object__object__50655936(
                                                                                   v13,
                                                                                   (System_Func_TSource__int__TResult__o *)v14,
                                                                                   (const MethodInfo_304F2C0 *)Method_System_Linq_Enumerable_Select_UserServantEntity__CharaGraphGrandSameServantListViewItem___);
}


CharaGraphGrandSameServantListViewItem_o *__fastcall CharaGraphListViewPatternGrandSameServant___GenerateListViewItem_b__5_0(
        CharaGraphListViewPatternGrandSameServant_o *this,
        UserServantEntity_o *userSvtEntity,
        int32_t i,
        const MethodInfo *method)
{
  CharaGraphServantListViewItem_o *v7; // x22

  if ( (byte_4B1737A & 1) == 0 )
  {
    sub_1BCAFF8(&CharaGraphGrandSameServantListViewItem_TypeInfo, userSvtEntity);
    byte_4B1737A = 1;
  }
  v7 = (CharaGraphServantListViewItem_o *)sub_1BCB244(CharaGraphGrandSameServantListViewItem_TypeInfo);
  CharaGraphServantListViewItem___ctor(v7, i, (CharaGraphListViewPatternBase_o *)this, userSvtEntity, 0LL);
  return (CharaGraphGrandSameServantListViewItem_o *)v7;
}


System_String_o *__fastcall CharaGraphListViewPatternGrandSameServant__get_EmptyMessageCode(
        CharaGraphListViewPatternGrandSameServant_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B17376 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_11498/*"SERVANT_EMPTY"*/, method);
    byte_4B17376 = 1;
  }
  return (System_String_o *)StringLiteral_11498/*"SERVANT_EMPTY"*/;
}