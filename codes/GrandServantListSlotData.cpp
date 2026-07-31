void GrandServantListSlotData___ctor(
        GrandServantListSlotData_o *this,
        int32_t grandGraphId,
        bool isOtherUserData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  bool IsOpen; // w0
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5933289 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__);
    byte_5933289 = 1;
  }
  entity = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._GrandGraphId_k__BackingField = grandGraphId;
  if ( !isOtherUserData )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GrandGraphMaster___);
    if ( !Master_object )
      goto LABEL_11;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            this->fields._GrandGraphId_k__BackingField,
            (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__) )
      return;
    Master_object = entity;
    if ( !entity )
LABEL_11:
      sub_21FFECC(Master_object, v10);
    IsOpen = GrandGraphEntity__IsOpen((GrandGraphEntity_o *)entity, 0);
    v12 = (int)entity;
    this->fields._GrandGraphEntity_k__BackingField = (struct GrandGraphEntity_o *)entity;
    this->fields.isOpen = IsOpen;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._GrandGraphEntity_k__BackingField,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
}


void GrandServantListSlotData___ctor_39648856(
        GrandServantListSlotData_o *this,
        int32_t grandGraphId,
        int64_t userServantId,
        System_Int64_array *equipUserServantIds,
        int32_t equipFriendShipSkillChange,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x1
  __int64 v13; // x2
  DataManager_c *v14; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int32_t v30; // w1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  int32_t *p_GrandGraphId_k__BackingField; // x23
  System_Func_T__TResult__o *v33; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Object_array *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_IEnumerable_TSource__o *EquipUserServantEntities_k__BackingField; // x20
  GrandServantListSlotData___c_c *v45; // x0
  struct GrandServantListSlotData___c_StaticFields *static_fields; // x8
  System_Func_object__long__o *_9__35_1; // x21
  Il2CppObject *v48; // x22
  struct GrandServantListSlotData___c_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  struct System_Int64_array *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  int32_t v70; // w1
  __int64 v71; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v72; // x20
  Il2CppObject v73; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+20h] [xbp-80h]
  Il2CppObject *v76; // [xsp+48h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_593328A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_long__UserServantEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_UserServantEntity__long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
    sub_21FFC50(&System_Func_UserServantEntity__long__TypeInfo);
    sub_21FFC50(&System_Func_long__UserServantEntity__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_GrandServantListSlotData___c___ctor_b__35_1__);
    sub_21FFC50(&Method_GrandServantListSlotData___c__DisplayClass35_0___ctor_b__0__);
    sub_21FFC50(&GrandServantListSlotData___c__DisplayClass35_0_TypeInfo);
    sub_21FFC50(&GrandServantListSlotData___c_TypeInfo);
    byte_593328A = 1;
  }
  entity = 0;
  v76 = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  v11 = sub_21FFEBC(GrandServantListSlotData___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  v14 = DataManager_TypeInfo;
  this->fields._EquipFriendShipSkillChange_k__BackingField = equipFriendShipSkillChange;
  if ( !*(&v14->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v14, v12, v13);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v11 )
    goto LABEL_29;
  *(_QWORD *)(v11 + 16) = Master_object;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)Master_object, v17, v18, v19, v20, v21, v22);
  Master_object = *(DataMasterBase_TMaster__TEntity__PKType__o **)(v11 + 16);
  if ( !Master_object )
    goto LABEL_29;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         Master_object,
         &entity,
         userServantId,
         (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v30 = (int)entity;
    this->fields._UserServantEntity_k__BackingField = (struct UserServantEntity_o *)entity;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
      v30,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    this->fields.userServantId = userServantId;
    if ( !UserServantEntity_k__BackingField )
      return;
    this->fields._GrandGraphId_k__BackingField = grandGraphId;
    p_GrandGraphId_k__BackingField = &this->fields._GrandGraphId_k__BackingField;
    if ( equipUserServantIds )
    {
      v33 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_long__UserServantEntity__TypeInfo);
      System_Func_long__object____ctor(
        v33,
        (Il2CppObject *)v11,
        Method_GrandServantListSlotData___c__DisplayClass35_0___ctor_b__0__,
        0);
      v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)equipUserServantIds,
                                                                   (System_Func_TSource__TResult__o *)v33,
                                                                   (const MethodInfo_385C370 *)Method_System_Linq_Enumerable_Select_long__UserServantEntity___);
      v35 = System_Linq_Enumerable__ToArray_object_(
              v34,
              (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
      this->fields._EquipUserServantEntities_k__BackingField = (struct UserServantEntity_array *)v35;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields._EquipUserServantEntities_k__BackingField,
        (int32_t)v35,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      EquipUserServantEntities_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._EquipUserServantEntities_k__BackingField;
      v45 = GrandServantListSlotData___c_TypeInfo;
      if ( !*(&GrandServantListSlotData___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(GrandServantListSlotData___c_TypeInfo, v42, v43);
        v45 = GrandServantListSlotData___c_TypeInfo;
      }
      static_fields = v45->static_fields;
      _9__35_1 = (System_Func_object__long__o *)static_fields->__9__35_1;
      if ( !_9__35_1 )
      {
        if ( !*(&v45->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v45, v42, v43);
          static_fields = GrandServantListSlotData___c_TypeInfo->static_fields;
        }
        v48 = (Il2CppObject *)static_fields->__9;
        _9__35_1 = (System_Func_object__long__o *)sub_21FFEBC(System_Func_UserServantEntity__long__TypeInfo);
        System_Func_object__long____ctor(_9__35_1, v48, Method_GrandServantListSlotData___c___ctor_b__35_1__, 0);
        v49 = GrandServantListSlotData___c_TypeInfo->static_fields;
        v49->__9__35_1 = (struct System_Func_UserServantEntity__long__o *)_9__35_1;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v49->__9__35_1,
          (int32_t)_9__35_1,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55);
      }
      v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                                   EquipUserServantEntities_k__BackingField,
                                                                   (System_Func_TSource__TResult__o *)_9__35_1,
                                                                   (const MethodInfo_385D9DC *)Method_System_Linq_Enumerable_Select_UserServantEntity__long___);
      v57 = System_Linq_Enumerable__ToArray_long_(
              v56,
              (const MethodInfo_38685DC *)Method_System_Linq_Enumerable_ToArray_long___);
      this->fields._EquipUserServantIds_k__BackingField = v57;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields._EquipUserServantIds_k__BackingField,
        (int32_t)v57,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
    }
  }
  else
  {
    if ( !this->fields._UserServantEntity_k__BackingField )
      return;
    this->fields._GrandGraphId_k__BackingField = grandGraphId;
    p_GrandGraphId_k__BackingField = &this->fields._GrandGraphId_k__BackingField;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23, v24);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !Master_object )
    goto LABEL_29;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &v76,
          *p_GrandGraphId_k__BackingField,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__) )
    return;
  v70 = (int)v76;
  this->fields._GrandGraphEntity_k__BackingField = (struct GrandGraphEntity_o *)v76;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandGraphEntity_k__BackingField,
    v70,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  this->fields.isOpen = 1;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserGameMaster__getSelfUserGame(0);
  if ( !entity )
    goto LABEL_29;
  v72 = Master_object;
  v73 = entity[2];
  *(Il2CppObject *)&v75.fields.currentCryptoKey = entity[1];
  *(Il2CppObject *)&v75.fields.fakeValue = v73;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16, v71);
  v74 = v75;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                                  &v74,
                                                                  0);
  if ( !v72 )
LABEL_29:
    sub_21FFECC(Master_object, v16);
  this->fields._IsPushServant_k__BackingField = Master_object == (DataMasterBase_TMaster__TEntity__PKType__o *)v72[1].fields.seriazlier;
}


void GrandServantListSlotData___ctor_39650304(
        GrandServantListSlotData_o *this,
        int32_t grandGraphId,
        ServantLeaderInfo_o *servantLeaderInfo,
        bool isPushServant,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  ServantLeaderInfo_o *ServantLeaderInfo_k__BackingField; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  GrandServantListSlotData___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x21
  struct GrandServantListSlotData___c_StaticFields *static_fields; // x9
  System_Func_object__long__o *_9__36_0; // x22
  Il2CppObject *v24; // x23
  struct GrandServantListSlotData___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  struct System_Int64_array *v33; // x0
  struct System_Int64_array **p_EquipUserServantIds_k__BackingField; // x20
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7

  if ( (byte_593328B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_EquipTargetInfo__long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_21FFC50(&System_Func_EquipTargetInfo__long__TypeInfo);
    sub_21FFC50(&Method_GrandServantListSlotData___c___ctor_b__36_0__);
    sub_21FFC50(&GrandServantListSlotData___c_TypeInfo);
    byte_593328B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._ServantLeaderInfo_k__BackingField = servantLeaderInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantLeaderInfo_k__BackingField,
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
      sub_21FFECC(ServantLeaderInfo_k__BackingField, v16);
    }
    EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList(ServantLeaderInfo_k__BackingField, 0);
    v20 = GrandServantListSlotData___c_TypeInfo;
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)EquipTargetInfoList;
    if ( !*(&GrandServantListSlotData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(GrandServantListSlotData___c_TypeInfo, v18, v19);
      v20 = GrandServantListSlotData___c_TypeInfo;
    }
    static_fields = v20->static_fields;
    _9__36_0 = (System_Func_object__long__o *)static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !*(&v20->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v20, v18, v19);
        static_fields = GrandServantListSlotData___c_TypeInfo->static_fields;
      }
      v24 = (Il2CppObject *)static_fields->__9;
      _9__36_0 = (System_Func_object__long__o *)sub_21FFEBC(System_Func_EquipTargetInfo__long__TypeInfo);
      System_Func_object__long____ctor(_9__36_0, v24, Method_GrandServantListSlotData___c___ctor_b__36_0__, 0);
      v25 = GrandServantListSlotData___c_TypeInfo->static_fields;
      v25->__9__36_0 = (struct System_Func_EquipTargetInfo__long__o *)_9__36_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->__9__36_0, (int32_t)_9__36_0, v26, v27, v28, v29, v30, v31);
    }
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                                 v21,
                                                                 (System_Func_TSource__TResult__o *)_9__36_0,
                                                                 (const MethodInfo_385D9DC *)Method_System_Linq_Enumerable_Select_EquipTargetInfo__long___);
    v33 = System_Linq_Enumerable__ToArray_long_(
            v32,
            (const MethodInfo_38685DC *)Method_System_Linq_Enumerable_ToArray_long___);
    this->fields._EquipUserServantIds_k__BackingField = v33;
    p_EquipUserServantIds_k__BackingField = &this->fields._EquipUserServantIds_k__BackingField;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)p_EquipUserServantIds_k__BackingField,
      (int32_t)v33,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    *((_BYTE *)p_EquipUserServantIds_k__BackingField - 16) = 1;
    *((_BYTE *)p_EquipUserServantIds_k__BackingField + 40) = isPushServant;
  }
}


int32_t GrandServantListSlotData__GetParentClassBoardBaseId(GrandServantListSlotData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  ClassBoardClassMaster_o *v7; // x19

  if ( (byte_593328C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_593328C = 1;
  }
  if ( !this->fields._UserServantEntity_k__BackingField )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField
    || (v7 = (ClassBoardClassMaster_o *)Master_object,
        Master_object = (Il2CppObject *)UserServantEntity__getSvtClassId(UserServantEntity_k__BackingField, 0, 0, 0),
        !v7) )
  {
    sub_21FFECC(Master_object, v5);
  }
  return ClassBoardClassMaster__GetClassBoardBaseId(v7, (int32_t)Master_object, 0);
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
    sub_21FFED4(this);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EquipUserServantEntities_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EquipUserServantEntities_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EquipUserServantIds_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EquipUserServantIds_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._GrandGraphEntity_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandGraphEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ServantLeaderInfo_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantLeaderInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._UserServantEntity_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GrandServantListSlotData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593328D & 1) == 0 )
  {
    sub_21FFC50(&GrandServantListSlotData___c_TypeInfo);
    byte_593328D = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(GrandServantListSlotData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandServantListSlotData___c_TypeInfo->static_fields->__9 = (struct GrandServantListSlotData___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)GrandServantListSlotData___c_TypeInfo->static_fields,
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
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_593328E & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_593328E = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( e )
  {
    v4 = *(_OWORD *)&e->fields.id.fields.fakeValue;
    *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&e->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v7.fields.fakeValue = v4;
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, e, method);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v7, 0, 0);
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, e, method);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v6, 0);
}


int64_t GrandServantListSlotData___c____ctor_b__36_0(
        GrandServantListSlotData___c_o *this,
        EquipTargetInfo_o *e,
        const MethodInfo *method)
{
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_593328F & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_593328F = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( e )
  {
    v4 = *(_OWORD *)&e->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&e->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v7.fields.fakeValue = v4;
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, e, method);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v7, 0, 0);
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, e, method);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v6, 0);
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

  if ( (byte_5933290 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    byte_5933290 = 1;
  }
  userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userServantMaster;
  entity = 0;
  if ( !userServantMaster )
    sub_21FFECC(0, id);
  if ( DataMasterBase_object__object__long___TryGetEntity(
         userServantMaster,
         &entity,
         id,
         (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    return (UserServantEntity_o *)entity;
  }
  else
  {
    return 0;
  }
}