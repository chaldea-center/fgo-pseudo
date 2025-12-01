void GrandServantListSlotData___ctor(
        GrandServantListSlotData_o *this,
        int32_t grandGraphId,
        bool isOtherUserData,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC21C4 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__);
    byte_4CC21C4 = 1;
  }
  entity = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._GrandGraphId_k__BackingField = grandGraphId;
  if ( !isOtherUserData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_GrandGraphMaster___);
    if ( !Master_object )
      goto LABEL_11;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            this->fields._GrandGraphId_k__BackingField,
            (const MethodInfo_3408ECC *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__) )
      return;
    Master_object = entity;
    if ( !entity )
LABEL_11:
      sub_1C71608(Master_object, v8);
    this->fields.isOpen = GrandGraphEntity__IsOpen((GrandGraphEntity_o *)entity, 0);
    v9 = (int)entity;
    this->fields._GrandGraphEntity_k__BackingField = (struct GrandGraphEntity_o *)entity;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields._GrandGraphEntity_k__BackingField,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
}


void GrandServantListSlotData___ctor_33190872(
        GrandServantListSlotData_o *this,
        int32_t grandGraphId,
        int64_t userServantId,
        System_Int64_array *equipUserServantIds,
        int32_t equipFriendShipSkillChange,
        const MethodInfo *method)
{
  __int64 v11; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  int32_t *p_GrandGraphId_k__BackingField; // x23
  System_Func_T__TResult__o *v29; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Object_array *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *EquipUserServantEntities_k__BackingField; // x20
  GrandServantListSlotData___c_c *v39; // x0
  System_Func_object__long__o *_9__35_1; // x21
  Il2CppObject *v41; // x22
  struct GrandServantListSlotData___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  struct System_Int64_array *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  int32_t v63; // w1
  Il2CppObject v64; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v65; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+20h] [xbp-80h]
  Il2CppObject *v68; // [xsp+48h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_4CC21C5 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_long__UserServantEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_UserServantEntity__long___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
    sub_1C713B0(&System_Func_UserServantEntity__long__TypeInfo);
    sub_1C713B0(&System_Func_long__UserServantEntity__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_GrandServantListSlotData___c___ctor_b__35_1__);
    sub_1C713B0(&Method_GrandServantListSlotData___c__DisplayClass35_0___ctor_b__0__);
    sub_1C713B0(&GrandServantListSlotData___c__DisplayClass35_0_TypeInfo);
    sub_1C713B0(&GrandServantListSlotData___c_TypeInfo);
    byte_4CC21C5 = 1;
  }
  entity = 0;
  v68 = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  v11 = sub_1C715FC(GrandServantListSlotData___c__DisplayClass35_0_TypeInfo);
  GrandServantListSlotData___c__DisplayClass35_0___ctor((GrandServantListSlotData___c__DisplayClass35_0_o *)v11, 0);
  this->fields._EquipFriendShipSkillChange_k__BackingField = equipFriendShipSkillChange;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v11 )
    goto LABEL_29;
  *(_QWORD *)(v11 + 16) = Master_object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)Master_object, v14, v15, v16, v17, v18, v19);
  Master_object = *(DataMasterBase_TMaster__TEntity__PKType__o **)(v11 + 16);
  if ( !Master_object )
    goto LABEL_29;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         Master_object,
         &entity,
         userServantId,
         (const MethodInfo_340B428 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v26 = (int)entity;
    this->fields._UserServantEntity_k__BackingField = (struct UserServantEntity_o *)entity;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
      v26,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    this->fields.userServantId = userServantId;
    if ( !UserServantEntity_k__BackingField )
      return;
    this->fields._GrandGraphId_k__BackingField = grandGraphId;
    p_GrandGraphId_k__BackingField = &this->fields._GrandGraphId_k__BackingField;
    if ( equipUserServantIds )
    {
      v29 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_long__UserServantEntity__TypeInfo);
      System_Func_long__object____ctor(
        v29,
        (Il2CppObject *)v11,
        Method_GrandServantListSlotData___c__DisplayClass35_0___ctor_b__0__,
        0);
      v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)equipUserServantIds,
                                                                   (System_Func_TSource__TResult__o *)v29,
                                                                   (const MethodInfo_3180398 *)Method_System_Linq_Enumerable_Select_long__UserServantEntity___);
      v31 = System_Linq_Enumerable__ToArray_object_(
              v30,
              (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
      this->fields._EquipUserServantEntities_k__BackingField = (struct UserServantEntity_array *)v31;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields._EquipUserServantEntities_k__BackingField,
        (int32_t)v31,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      EquipUserServantEntities_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._EquipUserServantEntities_k__BackingField;
      v39 = GrandServantListSlotData___c_TypeInfo;
      if ( !GrandServantListSlotData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GrandServantListSlotData___c_TypeInfo);
        v39 = GrandServantListSlotData___c_TypeInfo;
      }
      _9__35_1 = (System_Func_object__long__o *)v39->static_fields->__9__35_1;
      if ( !_9__35_1 )
      {
        if ( !v39->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v39);
          v39 = GrandServantListSlotData___c_TypeInfo;
        }
        v41 = (Il2CppObject *)v39->static_fields->__9;
        _9__35_1 = (System_Func_object__long__o *)sub_1C715FC(System_Func_UserServantEntity__long__TypeInfo);
        System_Func_object__long____ctor(_9__35_1, v41, Method_GrandServantListSlotData___c___ctor_b__35_1__, 0);
        static_fields = GrandServantListSlotData___c_TypeInfo->static_fields;
        static_fields->__9__35_1 = (struct System_Func_UserServantEntity__long__o *)_9__35_1;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__35_1,
          (int32_t)_9__35_1,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
      }
      v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                                   EquipUserServantEntities_k__BackingField,
                                                                   (System_Func_TSource__TResult__o *)_9__35_1,
                                                                   (const MethodInfo_31815C0 *)Method_System_Linq_Enumerable_Select_UserServantEntity__long___);
      v50 = System_Linq_Enumerable__ToArray_long_(
              v49,
              (const MethodInfo_318AF64 *)Method_System_Linq_Enumerable_ToArray_long___);
      this->fields._EquipUserServantIds_k__BackingField = v50;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields._EquipUserServantIds_k__BackingField,
        (int32_t)v50,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
    }
  }
  else
  {
    if ( !this->fields._UserServantEntity_k__BackingField )
      return;
    this->fields._GrandGraphId_k__BackingField = grandGraphId;
    p_GrandGraphId_k__BackingField = &this->fields._GrandGraphId_k__BackingField;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !Master_object )
    goto LABEL_29;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &v68,
          *p_GrandGraphId_k__BackingField,
          (const MethodInfo_3408ECC *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__) )
    return;
  v63 = (int)v68;
  this->fields._GrandGraphEntity_k__BackingField = (struct GrandGraphEntity_o *)v68;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandGraphEntity_k__BackingField,
    v63,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  this->fields.isOpen = 1;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserGameMaster__getSelfUserGame(0);
  if ( !entity )
    goto LABEL_29;
  v64 = entity[2];
  v65 = Master_object;
  *(Il2CppObject *)&v67.fields.currentCryptoKey = entity[1];
  *(Il2CppObject *)&v67.fields.fakeValue = v64;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v66 = v67;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                                                  &v66,
                                                                  0);
  if ( !v65 )
LABEL_29:
    sub_1C71608(Master_object, v13);
  this->fields._IsPushServant_k__BackingField = Master_object == (DataMasterBase_TMaster__TEntity__PKType__o *)v65[1].fields.seriazlier;
}


void GrandServantListSlotData___ctor_33192320(
        GrandServantListSlotData_o *this,
        int32_t grandGraphId,
        ServantLeaderInfo_o *servantLeaderInfo,
        bool isPushServant,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  ServantLeaderInfo_o *ServantLeaderInfo_k__BackingField; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x0
  GrandServantListSlotData___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x21
  System_Func_object__long__o *_9__36_0; // x22
  Il2CppObject *v21; // x23
  struct GrandServantListSlotData___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  struct System_Int64_array *v30; // x0
  struct System_Int64_array **p_EquipUserServantIds_k__BackingField; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4CC21C6 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_EquipTargetInfo__long___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C713B0(&System_Func_EquipTargetInfo__long__TypeInfo);
    sub_1C713B0(&Method_GrandServantListSlotData___c___ctor_b__36_0__);
    sub_1C713B0(&GrandServantListSlotData___c_TypeInfo);
    byte_4CC21C6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._ServantLeaderInfo_k__BackingField = servantLeaderInfo;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantLeaderInfo_k__BackingField,
    (int32_t)servantLeaderInfo,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( this->fields._ServantLeaderInfo_k__BackingField )
  {
    this->fields._GrandGraphId_k__BackingField = grandGraphId;
    if ( !servantLeaderInfo
      || (this->fields.userServantId = servantLeaderInfo->fields.userSvtId,
          this->fields._EquipFriendShipSkillChange_k__BackingField = ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(
                                                                       servantLeaderInfo,
                                                                       0),
          ServantLeaderInfo__SetSkillChangeInfo(servantLeaderInfo, 0),
          (ServantLeaderInfo_k__BackingField = this->fields._ServantLeaderInfo_k__BackingField) == 0) )
    {
      sub_1C71608(ServantLeaderInfo_k__BackingField, v16);
    }
    EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList(ServantLeaderInfo_k__BackingField, 0);
    v18 = GrandServantListSlotData___c_TypeInfo;
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)EquipTargetInfoList;
    if ( !GrandServantListSlotData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GrandServantListSlotData___c_TypeInfo);
      v18 = GrandServantListSlotData___c_TypeInfo;
    }
    _9__36_0 = (System_Func_object__long__o *)v18->static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = GrandServantListSlotData___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v18->static_fields->__9;
      _9__36_0 = (System_Func_object__long__o *)sub_1C715FC(System_Func_EquipTargetInfo__long__TypeInfo);
      System_Func_object__long____ctor(_9__36_0, v21, Method_GrandServantListSlotData___c___ctor_b__36_0__, 0);
      static_fields = GrandServantListSlotData___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Func_EquipTargetInfo__long__o *)_9__36_0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__36_0,
        (int32_t)_9__36_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                                 v19,
                                                                 (System_Func_TSource__TResult__o *)_9__36_0,
                                                                 (const MethodInfo_31815C0 *)Method_System_Linq_Enumerable_Select_EquipTargetInfo__long___);
    v30 = System_Linq_Enumerable__ToArray_long_(
            v29,
            (const MethodInfo_318AF64 *)Method_System_Linq_Enumerable_ToArray_long___);
    this->fields._EquipUserServantIds_k__BackingField = v30;
    p_EquipUserServantIds_k__BackingField = &this->fields._EquipUserServantIds_k__BackingField;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)p_EquipUserServantIds_k__BackingField,
      (int32_t)v30,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    *((_BYTE *)p_EquipUserServantIds_k__BackingField - 16) = 1;
    *((_BYTE *)p_EquipUserServantIds_k__BackingField + 40) = isPushServant;
  }
}


int32_t GrandServantListSlotData__GetParentClassBoardBaseId(GrandServantListSlotData_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  ClassBoardClassMaster_o *v6; // x19

  if ( (byte_4CC21C7 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC21C7 = 1;
  }
  if ( !this->fields._UserServantEntity_k__BackingField )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField
    || (v6 = (ClassBoardClassMaster_o *)Master_object,
        Master_object = (Il2CppObject *)UserServantEntity__getSvtClassId(UserServantEntity_k__BackingField, 0, 0, 0),
        !v6) )
  {
    sub_1C71608(Master_object, v4);
  }
  return ClassBoardClassMaster__GetClassBoardBaseId(v6, (int32_t)Master_object, 0);
}


bool GrandServantListSlotData__IsEmptyEquip(GrandServantListSlotData_o *this, int32_t index, const MethodInfo *method)
{
  struct System_Int64_array *EquipUserServantIds_k__BackingField; // x8
  int32_t max_length; // w9

  EquipUserServantIds_k__BackingField = this->fields._EquipUserServantIds_k__BackingField;
  if ( !EquipUserServantIds_k__BackingField )
    return 1;
  max_length = EquipUserServantIds_k__BackingField->max_length;
  if ( max_length <= index )
    return 1;
  if ( max_length <= (unsigned int)index )
    sub_1C71610(this);
  return EquipUserServantIds_k__BackingField->m_Items[index] == 0;
}


bool GrandServantListSlotData__IsEmptyServant(GrandServantListSlotData_o *this, const MethodInfo *method)
{
  return this->fields.userServantId == 0;
}


bool GrandServantListSlotData__IsOpen(GrandServantListSlotData_o *this, const MethodInfo *method)
{
  return this->fields.isOpen;
}


int32_t GrandServantListSlotData__get_EquipFriendShipSkillChange(
        GrandServantListSlotData_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipFriendShipSkillChange_k__BackingField;
}


UserServantEntity_array *GrandServantListSlotData__get_EquipUserServantEntities(
        GrandServantListSlotData_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipUserServantEntities_k__BackingField;
}


System_Int64_array *GrandServantListSlotData__get_EquipUserServantIds(
        GrandServantListSlotData_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipUserServantIds_k__BackingField;
}


GrandGraphEntity_o *GrandServantListSlotData__get_GrandGraphEntity(
        GrandServantListSlotData_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandGraphEntity_k__BackingField;
}


int32_t GrandServantListSlotData__get_GrandGraphId(GrandServantListSlotData_o *this, const MethodInfo *method)
{
  return this->fields._GrandGraphId_k__BackingField;
}


bool GrandServantListSlotData__get_IsPushServant(GrandServantListSlotData_o *this, const MethodInfo *method)
{
  return this->fields._IsPushServant_k__BackingField;
}


ServantLeaderInfo_o *GrandServantListSlotData__get_ServantLeaderInfo(
        GrandServantListSlotData_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantLeaderInfo_k__BackingField;
}


UserServantEntity_o *GrandServantListSlotData__get_UserServantEntity(
        GrandServantListSlotData_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantEntity_k__BackingField;
}


void GrandServantListSlotData__set_EquipFriendShipSkillChange(
        GrandServantListSlotData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EquipFriendShipSkillChange_k__BackingField = value;
}


void GrandServantListSlotData__set_EquipUserServantEntities(
        GrandServantListSlotData_o *this,
        UserServantEntity_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._EquipUserServantEntities_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._EquipUserServantEntities_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GrandServantListSlotData__set_EquipUserServantIds(
        GrandServantListSlotData_o *this,
        System_Int64_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._EquipUserServantIds_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._EquipUserServantIds_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GrandServantListSlotData__set_GrandGraphEntity(
        GrandServantListSlotData_o *this,
        GrandGraphEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._GrandGraphEntity_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandGraphEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GrandServantListSlotData__set_GrandGraphId(
        GrandServantListSlotData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._GrandGraphId_k__BackingField = value;
}


void GrandServantListSlotData__set_IsPushServant(
        GrandServantListSlotData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPushServant_k__BackingField = value;
}


void GrandServantListSlotData__set_ServantLeaderInfo(
        GrandServantListSlotData_o *this,
        ServantLeaderInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ServantLeaderInfo_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantLeaderInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GrandServantListSlotData__set_UserServantEntity(
        GrandServantListSlotData_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._UserServantEntity_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GrandServantListSlotData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC21CC & 1) == 0 )
  {
    sub_1C713B0(&GrandServantListSlotData___c_TypeInfo);
    byte_4CC21CC = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(GrandServantListSlotData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandServantListSlotData___c_TypeInfo->static_fields->__9 = (struct GrandServantListSlotData___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)GrandServantListSlotData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GrandServantListSlotData___c___ctor(GrandServantListSlotData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t GrandServantListSlotData___c____ctor_b__35_1(
        GrandServantListSlotData___c_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  __int128 v4; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+40h] [xbp-40h]

  if ( (byte_4CC21CD & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC21CD = 1;
  }
  if ( e )
  {
    v4 = *(_OWORD *)&e->fields.id.fields.fakeValue;
    *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&e->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v8.fields.fakeValue = v4;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v7, 0, 0);
    v8 = v7;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v6, 0);
}


int64_t GrandServantListSlotData___c____ctor_b__36_0(
        GrandServantListSlotData___c_o *this,
        EquipTargetInfo_o *e,
        const MethodInfo *method)
{
  __int128 v4; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+40h] [xbp-40h]

  if ( (byte_4CC21CE & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC21CE = 1;
  }
  if ( e )
  {
    v4 = *(_OWORD *)&e->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&e->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v8.fields.fakeValue = v4;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v7, 0, 0);
    v8 = v7;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v6, 0);
}


void GrandServantListSlotData___c__DisplayClass35_0___ctor(
        GrandServantListSlotData___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UserServantEntity_o *GrandServantListSlotData___c__DisplayClass35_0____ctor_b__0(
        GrandServantListSlotData___c__DisplayClass35_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *userServantMaster; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC21CF & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    byte_4CC21CF = 1;
  }
  entity = 0;
  userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userServantMaster;
  if ( !userServantMaster )
    sub_1C71608(0, id);
  if ( DataMasterBase_object__object__long___TryGetEntity(
         userServantMaster,
         &entity,
         id,
         (const MethodInfo_340B428 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    return (UserServantEntity_o *)entity;
  }
  else
  {
    return 0;
  }
}