void CharaGraphListViewPatternGrandSameServant___ctor(
        CharaGraphListViewPatternGrandSameServant_o *this,
        GrandServantListSlotData_o *grandServantData,
        const MethodInfo *method)
{
  struct GrandServantListSlotData_o **p_grandSvtData; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4CC210C & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__);
    byte_4CC210C = 1;
  }
  CharaGraphListViewPatternServant___ctor((CharaGraphListViewPatternServant_o *)this, 0);
  this->fields.grandSvtData = grandServantData;
  p_grandSvtData = &this->fields.grandSvtData;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandSvtData,
    (int32_t)grandServantData,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !*p_grandSvtData || !Master_object )
    sub_1C71608(Master_object, v13);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             (*p_grandSvtData)->fields._GrandGraphId_k__BackingField,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__);
  this->fields.grandGraphEntity = (struct GrandGraphEntity_o *)Entity;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandGraphEntity,
    (int32_t)Entity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


bool CharaGraphListViewPatternGrandSameServant__Filter(
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
  if ( (byte_4CC210E & 1) == 0 )
  {
    this = (CharaGraphListViewPatternGrandSameServant_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC210E = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_12;
  v6 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  this = (CharaGraphListViewPatternGrandSameServant_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                          v10,
                                                          0);
  grandSvtData = v4->fields.grandSvtData;
  if ( !grandSvtData )
    goto LABEL_12;
  UserServantEntity_k__BackingField = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)grandSvtData->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_12;
  if ( (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                         UserServantEntity_k__BackingField[5],
                         0) )
  {
    this = (CharaGraphListViewPatternGrandSameServant_o *)v4->fields.grandGraphEntity;
    if ( this )
      return GrandGraphEntity__CanSelectToGrand((GrandGraphEntity_o *)this, userSvtEntity, 0);
LABEL_12:
    sub_1C71608(this, userSvtEntity);
  }
  return 0;
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *CharaGraphListViewPatternGrandSameServant__GenerateListViewItem(
        CharaGraphListViewPatternGrandSameServant_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_UserServantEntity__o *ServantList; // x20
  System_Func_object__bool__o *v6; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  System_Func_T1__T2__TResult__o *v8; // x21

  if ( (byte_4CC210D & 1) == 0 )
  {
    sub_1C713B0(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
    sub_1C713B0(&Method_CharaGraphListViewPatternGrandSameServant_Filter__);
    sub_1C713B0(&Method_CharaGraphListViewPatternGrandSameServant__GenerateListViewItem_b__5_0__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_UserServantEntity__CharaGraphGrandSameServantListViewItem___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1C713B0(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C713B0(&System_Func_UserServantEntity__int__CharaGraphGrandSameServantListViewItem__TypeInfo);
    byte_4CC210D = 1;
  }
  Master_object = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_313E784 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
  if ( !Master_object )
    sub_1C71608(0, v4);
  ServantList = UserServantMaster__getServantList((UserServantMaster_o *)Master_object, 0);
  v6 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v6,
    (Il2CppObject *)this,
    Method_CharaGraphListViewPatternGrandSameServant_Filter__,
    0);
  v7 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)ServantList,
         (System_Func_TSource__bool__o *)v6,
         (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  v8 = (System_Func_T1__T2__TResult__o *)sub_1C715FC(System_Func_UserServantEntity__int__CharaGraphGrandSameServantListViewItem__TypeInfo);
  System_Func_object__int__object____ctor(
    v8,
    (Il2CppObject *)this,
    Method_CharaGraphListViewPatternGrandSameServant__GenerateListViewItem_b__5_0__,
    0);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__Select_object__object__51911592(
                                                                                   v7,
                                                                                   (System_Func_TSource__int__TResult__o *)v8,
                                                                                   (const MethodInfo_3181BA8 *)Method_System_Linq_Enumerable_Select_UserServantEntity__CharaGraphGrandSameServantListViewItem___);
}


CharaGraphGrandSameServantListViewItem_o *CharaGraphListViewPatternGrandSameServant___GenerateListViewItem_b__5_0(
        CharaGraphListViewPatternGrandSameServant_o *this,
        UserServantEntity_o *userSvtEntity,
        int32_t i,
        const MethodInfo *method)
{
  CharaGraphServantListViewItem_o *v7; // x22

  if ( (byte_4CC210F & 1) == 0 )
  {
    sub_1C713B0(&CharaGraphGrandSameServantListViewItem_TypeInfo);
    byte_4CC210F = 1;
  }
  v7 = (CharaGraphServantListViewItem_o *)sub_1C715FC(CharaGraphGrandSameServantListViewItem_TypeInfo);
  CharaGraphServantListViewItem___ctor(v7, i, (CharaGraphListViewPatternBase_o *)this, userSvtEntity, 0);
  return (CharaGraphGrandSameServantListViewItem_o *)v7;
}


System_String_o *CharaGraphListViewPatternGrandSameServant__get_EmptyMessageCode(
        CharaGraphListViewPatternGrandSameServant_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC210B & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_11608/*"SERVANT_EMPTY"*/);
    byte_4CC210B = 1;
  }
  return (System_String_o *)StringLiteral_11608/*"SERVANT_EMPTY"*/;
}