void __fastcall BattleServantConfConponent___cctor(const MethodInfo *method)
{
  if ( (byte_4BDF6D3 & 1) == 0 )
  {
    sub_1C21E38(&BattleServantConfConponent_TypeInfo);
    byte_4BDF6D3 = 1;
  }
  *BattleServantConfConponent_TypeInfo->static_fields = (struct BattleServantConfConponent_StaticFields)xmmword_BFF380;
}


void __fastcall BattleServantConfConponent___ctor(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDF6D2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo);
    byte_4BDF6D2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__);
  this->fields.equipPossessionSkillInfoComponentList = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)v3;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.equipPossessionSkillInfoComponentList,
    (int64_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  this->fields.NotEquipObjHeightPos = 45.0;
  this->fields.ClassSkillInitPosY = -633.0;
  this->fields.AppendSkillInitPosY = -679.0;
  this->fields.isOpenAfter = 1;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleServantConfConponent__ChangeLayout(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  long double v2; // q8
  UnityEngine_Object_o *equipObj; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20
  float LocalPositionY; // s0
  System_Collections_Generic_List_object__o *equipPossessionSkillInfoComponentList; // x0
  float v9; // s8
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x9
  BattleServantConfConponent_c *v14; // x8
  int32_t implementedInterfaces_high; // w25
  Il2CppClass *v16; // x9
  BattleServantConfConponent_c *v17; // x0
  UnityEngine_Object_o *CardAndCommandObj; // x20
  unsigned __int64 CommandCodeIds; // x0
  System_Int32_array *v20; // x20
  BattleServantConfConponent___c_c *v21; // x0
  System_Predicate_int__o *_9__78_0; // x21
  Il2CppObject *v23; // x22
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  unsigned __int64 v32; // x9
  unsigned __int64 v33; // x8
  int v34; // w12
  UnityEngine_Object_o *npSpeedChange; // x20
  struct BattleServantNPSpeedChangeComponent_o *v36; // x8
  UnityEngine_Object_o *ClassSkillObj; // x20
  UnityEngine_Object_o *AppendSkillObj; // x20
  UnityEngine_Object_o *classBoardSkillObj; // x20
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BDF6BD & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_FindIndex_int___);
    sub_1C21E38(&BattleServantConfConponent_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&System_Predicate_int__TypeInfo);
    sub_1C21E38(&Method_BattleServantConfConponent___c__ChangeLayout_b__78_0__);
    sub_1C21E38(&BattleServantConfConponent___c_TypeInfo);
    byte_4BDF6BD = 1;
  }
  memset(&v41, 0, sizeof(v41));
  equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipObj, 0LL, 0LL) )
  {
    v6 = this->fields.equipObj;
    LocalPositionY = GameObjectExtensions__GetLocalPositionY(v6, 0LL);
    GameObjectExtensions__SetLocalPositionY(v6, LocalPositionY + (float)this->fields.adjustHeight, 0LL);
  }
  if ( this->fields.isEquip )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.equipPossessionSkillInfoComponentList;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_73;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      equipPossessionSkillInfoComponentList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    v9 = 0.0;
    v41 = v40;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v41,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
      if ( !v10 )
        break;
      current = v41.fields._current;
      if ( !v41.fields._current )
        sub_1C22094(v10, v11);
      klass = v41.fields._current[3].klass;
      if ( !klass )
        sub_1C22094(v10, v11);
      v14 = BattleServantConfConponent_TypeInfo;
      implementedInterfaces_high = HIDWORD(klass->_1.implementedInterfaces);
      if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
        v14 = BattleServantConfConponent_TypeInfo;
      }
      if ( implementedInterfaces_high > v14->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT )
      {
        if ( !v14->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v14);
        v16 = current[3].klass;
        if ( !v16 )
          sub_1C22094(v10, v11);
        v14 = BattleServantConfConponent_TypeInfo;
        v9 = v9
           + (float)(BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT
                   - HIDWORD(v16->_1.implementedInterfaces));
      }
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = BattleServantConfConponent_TypeInfo;
      }
      v9 = v9 - (float)v14->static_fields->EQIUP_SKILL_OBJ_HEIGHT;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v41,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    v17 = BattleServantConfConponent_TypeInfo;
    if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
      v17 = BattleServantConfConponent_TypeInfo;
    }
    *(float *)&v2 = v9 + (float)v17->static_fields->EQIUP_SKILL_OBJ_HEIGHT;
  }
  else
  {
    *(float *)&v2 = this->fields.NotEquipObjHeightPos;
  }
  CardAndCommandObj = (UnityEngine_Object_o *)this->fields.CardAndCommandObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(CardAndCommandObj, 0LL, 0LL) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.CardAndCommandObj,
      *(float *)&v2 + (float)this->fields.adjustHeight,
      0LL);
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.bsvtData;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_73;
    CommandCodeIds = (unsigned __int64)BattleServantData__GetCommandCodeIds(
                                         (BattleServantData_o *)equipPossessionSkillInfoComponentList,
                                         0LL);
    if ( CommandCodeIds )
    {
      v20 = (System_Int32_array *)CommandCodeIds;
      v21 = BattleServantConfConponent___c_TypeInfo;
      if ( !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
        v21 = BattleServantConfConponent___c_TypeInfo;
      }
      _9__78_0 = v21->static_fields->__9__78_0;
      if ( !_9__78_0 )
      {
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = BattleServantConfConponent___c_TypeInfo;
        }
        v23 = (Il2CppObject *)v21->static_fields->__9;
        _9__78_0 = (System_Predicate_int__o *)sub_1C22084(System_Predicate_int__TypeInfo);
        System_Predicate_int____ctor(_9__78_0, v23, Method_BattleServantConfConponent___c__ChangeLayout_b__78_0__, 0LL);
        static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
        static_fields->__9__78_0 = _9__78_0;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__78_0,
          (int64_t)_9__78_0,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
      }
      if ( System_Array__FindIndex_int_(
             v20,
             (System_Predicate_T__o *)_9__78_0,
             (const MethodInfo_30AB808 *)Method_System_Array_FindIndex_int___) == -1
        || (int)*(_QWORD *)&v20->max_length < 1 )
      {
        LODWORD(CommandCodeIds) = 0;
      }
      else
      {
        v32 = (unsigned int)*(_QWORD *)&v20->max_length;
        v33 = 0LL;
        CommandCodeIds = 0LL;
        do
        {
          if ( v33 >= v32 )
            sub_1C2209C(CommandCodeIds, v31);
          v34 = v20->m_Items[++v33];
          if ( v34 <= 0 )
            CommandCodeIds = (unsigned int)CommandCodeIds;
          else
            CommandCodeIds = (unsigned int)(CommandCodeIds + 1);
        }
        while ( (__int64)v33 < (int)v32 );
      }
    }
    *(float *)&v2 = *(float *)&v2 - BattleServantNPSpeedChangeComponent__CalcCommandCodeOffset(CommandCodeIds, 0LL);
  }
  npSpeedChange = (UnityEngine_Object_o *)this->fields.npSpeedChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(npSpeedChange, 0LL, 0LL) )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.npSpeedChange;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_73;
    *(float *)&equipPossessionSkillInfoComponentList[3].klass = *(float *)&v2 + (float)this->fields.adjustHeight;
    BattleServantNPSpeedChangeComponent__SetButtonPosition(
      (BattleServantNPSpeedChangeComponent_o *)equipPossessionSkillInfoComponentList,
      0LL);
    v36 = this->fields.npSpeedChange;
    if ( !v36 )
      goto LABEL_73;
    *(float *)&v2 = *(float *)&v2 - (float)v36->fields.contentsHeight;
  }
  ClassSkillObj = (UnityEngine_Object_o *)this->fields.ClassSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ClassSkillObj, 0LL, 0LL) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.ClassSkillObj,
      (float)(*(float *)&v2 + this->fields.ClassSkillInitPosY) + (float)this->fields.adjustHeight,
      0LL);
    *(float *)&v2 = *(float *)&v2 + this->fields.ClassSkillOffset;
  }
  AppendSkillObj = (UnityEngine_Object_o *)this->fields.AppendSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(AppendSkillObj, 0LL, 0LL) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.AppendSkillObj,
      (float)(*(float *)&v2 + this->fields.AppendSkillInitPosY) + (float)this->fields.adjustHeight,
      0LL);
    *(float *)&v2 = *(float *)&v2 + this->fields.AppendSkillOffset;
  }
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0LL, 0LL) )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.classBoardSkillObj;
    if ( !equipPossessionSkillInfoComponentList
      || (equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer, long double, float))equipPossessionSkillInfoComponentList->klass->vtable._4_unknown.method)(
                                                                                                 equipPossessionSkillInfoComponentList,
                                                                                                 equipPossessionSkillInfoComponentList->klass->vtable._5_set_Item.methodPtr,
                                                                                                 v2,
                                                                                                 (float)this->fields.adjustHeight),
          !this->fields.classBoardSkillObj) )
    {
LABEL_73:
      sub_1C22094(equipPossessionSkillInfoComponentList, v5);
    }
  }
}


void __fastcall BattleServantConfConponent__Close(
        BattleServantConfConponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_1C22094(0LL, call);
  BattleViewBufflistComponent__setHide(buffListView, 1, 0LL);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleServantConfConponent__CompOpen(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *started; // x0

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_1C22094(0LL, method);
  BattleViewBufflistComponent__setShow(buffListView, 0LL);
  started = BattleServantConfConponent__StartOpenTab(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleServantConfConponent__GetAppendSkillInfo(
        BattleServantConfConponent_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        System_Int32_array *releaseSkillIds,
        System_Int32_array *releaseSkillLvs,
        const MethodInfo *method)
{
  __int64 max_length; // x1
  System_Int32_array *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_String_array *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_String_array *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Boolean_array *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Int32_array *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t Master_object; // x0
  __int64 v51; // x1
  __int64 v52; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v53; // x19
  unsigned __int64 v54; // x27
  int32_t *v55; // x26
  __int64 v56; // x23
  System_Int32_array *v57; // x8
  System_Boolean_array *v58; // x9
  int32_t v59; // w8
  System_Int32_array *v60; // x9
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_Boolean_array *v67; // x8
  System_String_array *v68; // x29
  SkillEntity_o *v69; // x28
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_String_array *v76; // x25
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  PartyOrganizationUtility_o *v83; // x28
  Il2CppClass **v84; // x8
  System_String_o *v85; // x1
  System_String_array *v86; // x28
  int64_t v87; // x1
  System_String_array *v88; // x8
  Il2CppClass **v89; // x28
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  System_String_array *v96; // x25
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  System_String_array *v103; // x8
  System_String_array *v104; // x25
  System_String_o **v105; // x28
  System_String_o *v106; // x0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  System_String_array *v113; // x8
  Il2CppClass **v114; // x25
  System_String_o *v115; // x29
  System_String_o *v116; // x0
  System_String_o *v117; // x0
  System_Int32_array *v118; // x0
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  System_String_array *v125; // x0
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  System_String_array *v132; // x0
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  System_Boolean_array *v139; // x0
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  System_Int32_array *v146; // x1
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  System_Int32_array **v153; // [xsp+8h] [xbp-88h]
  System_String_array **v154; // [xsp+10h] [xbp-80h]
  int32_t *v155; // [xsp+18h] [xbp-78h]

  if ( (byte_4BDF6C1 & 1) == 0 )
  {
    sub_1C21E38(&bool___TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_3858/*"COND_TYPE_TITLE"*/);
    sub_1C21E38(&StringLiteral_3846/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF6C1 = 1;
  }
  if ( releaseSkillIds
    && releaseSkillLvs
    && (max_length = releaseSkillIds->max_length, (_DWORD)max_length == releaseSkillLvs->max_length) )
  {
    v15 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, max_length);
    *idList = v15;
    sub_1C21DDC((PartyOrganizationUtility_o *)idList, (int64_t)v15, v16, v17, v18, v19, v20, v21);
    v22 = (System_String_array *)sub_1C21EE0(string___TypeInfo, releaseSkillIds->max_length);
    *titleList = v22;
    sub_1C21DDC((PartyOrganizationUtility_o *)titleList, (int64_t)v22, v23, v24, v25, v26, v27, v28);
    v29 = (System_String_array *)sub_1C21EE0(string___TypeInfo, releaseSkillIds->max_length);
    *explanationList = v29;
    sub_1C21DDC((PartyOrganizationUtility_o *)explanationList, (int64_t)v29, v30, v31, v32, v33, v34, v35);
    v36 = (System_Boolean_array *)sub_1C21EE0(bool___TypeInfo, releaseSkillIds->max_length);
    *releaseStateList = v36;
    sub_1C21DDC((PartyOrganizationUtility_o *)releaseStateList, (int64_t)v36, v37, v38, v39, v40, v41, v42);
    v43 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, releaseSkillIds->max_length);
    *lvList = v43;
    sub_1C21DDC((PartyOrganizationUtility_o *)lvList, (int64_t)v43, v44, v45, v46, v47, v48, v49);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillMaster___);
    v52 = *(_QWORD *)&releaseSkillIds->max_length;
    if ( (int)v52 >= 1 )
    {
      v53 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      v54 = 0LL;
      v155 = &releaseSkillLvs->m_Items[1];
      v55 = &releaseSkillIds->m_Items[1];
      v56 = 32LL;
      v153 = lvList;
      v154 = titleList;
      while ( v54 < (unsigned int)v52 )
      {
        v57 = *idList;
        if ( !*idList )
          goto LABEL_62;
        if ( v54 >= v57->max_length )
          break;
        v57->m_Items[v54 + 1] = v55[v54];
        if ( v54 >= releaseSkillLvs->max_length )
          break;
        v58 = *releaseStateList;
        if ( !*releaseStateList )
          goto LABEL_62;
        if ( v54 >= v58->max_length )
          break;
        v59 = v155[v54];
        v58->m_Items[v54 + 4] = v59 > 0;
        v60 = *lvList;
        if ( !*lvList )
          goto LABEL_62;
        if ( v54 >= v60->max_length )
          break;
        v60->m_Items[v54 + 1] = v59;
        if ( !v53 )
          goto LABEL_62;
        Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                   v53,
                                   v55[v54],
                                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Master_object )
        {
          v67 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_62;
          if ( v54 >= v67->max_length )
            break;
          v68 = *titleList;
          v69 = (SkillEntity_o *)Master_object;
          if ( v67->m_Items[v54 + 4] )
          {
            if ( v54 >= releaseSkillLvs->max_length )
              break;
            Master_object = (int64_t)SkillEntity__getEffectTitle((SkillEntity_o *)Master_object, v155[v54], 0LL);
            if ( !v68 )
              goto LABEL_62;
            if ( v54 >= v68->max_length )
              break;
            v68->m_Items[v54] = (System_String_o *)Master_object;
            sub_1C21DDC((PartyOrganizationUtility_o *)((char *)v68 + v56), Master_object, v70, v71, v72, v73, v74, v75);
            if ( v54 >= releaseSkillLvs->max_length )
              break;
            v76 = *explanationList;
            Master_object = (int64_t)SkillEntity__getEffectExplanation(v69, v155[v54], 0LL);
            titleList = v154;
            if ( !v76 )
              goto LABEL_62;
            if ( v54 >= v76->max_length )
              break;
            v83 = (PartyOrganizationUtility_o *)((char *)v76 + v56);
            v84 = &v76->obj.klass + v54;
            lvList = v153;
            v85 = (System_String_o *)Master_object;
            v84[4] = (Il2CppClass *)Master_object;
          }
          else
          {
            Master_object = (int64_t)SkillEntity__getEffectTitle((SkillEntity_o *)Master_object, 1, 0LL);
            if ( !v68 )
              goto LABEL_62;
            if ( v54 >= v68->max_length )
              break;
            v68->m_Items[v54] = (System_String_o *)Master_object;
            sub_1C21DDC((PartyOrganizationUtility_o *)((char *)v68 + v56), Master_object, v90, v91, v92, v93, v94, v95);
            v96 = *explanationList;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3858/*"COND_TYPE_TITLE"*/, 0LL);
            if ( !v96 )
              goto LABEL_62;
            if ( v54 >= v96->max_length )
              break;
            v96->m_Items[v54] = (System_String_o *)Master_object;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)((char *)v96 + v56),
              Master_object,
              v97,
              v98,
              v99,
              v100,
              v101,
              v102);
            v103 = *explanationList;
            if ( !*explanationList )
LABEL_62:
              sub_1C22094(Master_object, v51);
            if ( v54 >= v103->max_length )
              break;
            Master_object = System_String__op_Inequality(v103->m_Items[v54], (System_String_o *)StringLiteral_1/*""*/, 0LL);
            if ( (Master_object & 1) != 0 )
            {
              v104 = *explanationList;
              if ( !*explanationList )
                goto LABEL_62;
              if ( v54 >= v104->max_length )
                break;
              v105 = (System_String_o **)(&v104->obj.klass + v54);
              v106 = System_String__Concat_63115476(v105[4], (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
              v105[4] = v106;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)((char *)v104 + v56),
                (int64_t)v106,
                v107,
                v108,
                v109,
                v110,
                v111,
                v112);
            }
            v113 = *explanationList;
            if ( !*explanationList )
              goto LABEL_62;
            if ( v54 >= v113->max_length )
              break;
            v114 = &v113->obj.klass + v54;
            v83 = (PartyOrganizationUtility_o *)(v114 + 4);
            v115 = (System_String_o *)v114[4];
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v116 = LocalizationManager__Get((System_String_o *)StringLiteral_3846/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
            v117 = System_String__Concat_63115476(v115, v116, 0LL);
            v114[4] = (Il2CppClass *)v117;
            lvList = v153;
            titleList = v154;
            v85 = v117;
          }
        }
        else
        {
          v86 = *titleList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( !byte_4BD7BC3 )
          {
            sub_1C21E38(&LocalizationManager_TypeInfo);
            byte_4BD7BC3 = 1;
          }
          Master_object = (int64_t)LocalizationManager_TypeInfo;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Master_object = (int64_t)LocalizationManager_TypeInfo;
          }
          if ( !v86 )
            goto LABEL_62;
          if ( v54 >= v86->max_length )
            break;
          v87 = *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 32LL);
          v86->m_Items[v54] = (System_String_o *)v87;
          sub_1C21DDC((PartyOrganizationUtility_o *)((char *)v86 + v56), v87, v61, v62, v63, v64, v65, v66);
          v88 = *explanationList;
          if ( !*explanationList )
            goto LABEL_62;
          if ( v54 >= v88->max_length )
            break;
          v89 = &v88->obj.klass + v54;
          v85 = (System_String_o *)StringLiteral_1/*""*/;
          v89[4] = (Il2CppClass *)StringLiteral_1/*""*/;
          v83 = (PartyOrganizationUtility_o *)(v89 + 4);
        }
        sub_1C21DDC(v83, (int64_t)v85, v77, v78, v79, v80, v81, v82);
        LODWORD(v52) = releaseSkillIds->max_length;
        ++v54;
        v56 += 8LL;
        if ( (__int64)v54 >= (int)v52 )
          return;
      }
      sub_1C2209C(Master_object, v51);
    }
  }
  else
  {
    v118 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
    *idList = v118;
    sub_1C21DDC((PartyOrganizationUtility_o *)idList, (int64_t)v118, v119, v120, v121, v122, v123, v124);
    v125 = (System_String_array *)sub_1C21EE0(string___TypeInfo, 0LL);
    *titleList = v125;
    sub_1C21DDC((PartyOrganizationUtility_o *)titleList, (int64_t)v125, v126, v127, v128, v129, v130, v131);
    v132 = (System_String_array *)sub_1C21EE0(string___TypeInfo, 0LL);
    *explanationList = v132;
    sub_1C21DDC((PartyOrganizationUtility_o *)explanationList, (int64_t)v132, v133, v134, v135, v136, v137, v138);
    v139 = (System_Boolean_array *)sub_1C21EE0(bool___TypeInfo, 0LL);
    *releaseStateList = v139;
    sub_1C21DDC((PartyOrganizationUtility_o *)releaseStateList, (int64_t)v139, v140, v141, v142, v143, v144, v145);
    v146 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
    *lvList = v146;
    sub_1C21DDC((PartyOrganizationUtility_o *)lvList, (int64_t)v146, v147, v148, v149, v150, v151, v152);
  }
}


void __fastcall BattleServantConfConponent__GetAttributeValue(
        BattleServantConfConponent_o *this,
        int32_t *policy,
        int32_t *personality,
        const MethodInfo *method)
{
  BattleServantData_o *bsvtData; // x0
  int32_t v8; // w0
  int32_t deckIndex; // w0
  struct BattleServantData_o *v10; // x8
  ServantLimitMaster_o *v11; // x22
  __int64 v12; // x23
  __int64 v13; // x24
  const MethodInfo *v14; // x2
  struct BattleServantData_o *v15; // x8
  __int64 v16; // x23
  __int64 v17; // x24
  BattleServantData_o *v18; // x8
  int32_t v19; // w21
  int32_t v20; // w3
  ServantLimitMaster_o *v21; // x0
  int32_t v22; // w2
  struct BattleServantData_o *v23; // x8
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  struct BattleServantData_o *v25; // x8
  struct ServantLimitAddEntity_o *v26; // x8
  struct BattleServantData_o *v27; // x8
  __int64 v28; // x21
  __int64 v29; // x23
  ServantLimitEntity_o *v30; // x8
  int32_t v31; // w9
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4BDF6D1 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int__GetEntity__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDF6D1 = 1;
  }
  entity = 0LL;
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_53;
  v8 = BattleServantData__GetChangePolicy(bsvtData, 0LL);
  *policy = v8;
  if ( (v8 & 0x80000000) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    if ( !bsvtData )
      goto LABEL_53;
    bsvtData = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)bsvtData,
                                        *policy,
                                        (const MethodInfo_325BDC8 *)Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int__GetEntity__);
    if ( !bsvtData )
      goto LABEL_53;
    *policy = bsvtData->fields.deckIndex;
  }
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_53;
  deckIndex = BattleServantData__GetChangePersonality(bsvtData, 0LL);
  *personality = deckIndex;
  if ( (deckIndex & 0x80000000) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    if ( !bsvtData )
      goto LABEL_53;
    bsvtData = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)bsvtData,
                                        *personality,
                                        (const MethodInfo_325BDC8 *)Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int__GetEntity__);
    if ( !bsvtData )
      goto LABEL_53;
    deckIndex = bsvtData->fields.deckIndex;
    *personality = deckIndex;
  }
  if ( ((*policy | deckIndex) & 0x80000000) == 0 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v10 = this->fields.bsvtData;
  if ( !v10 )
    goto LABEL_53;
  v11 = (ServantLimitMaster_o *)bsvtData;
  v13 = *(_QWORD *)&v10->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
  v12 = *(_QWORD *)&v10->fields._dispLimitCount_k__BackingField.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = v13;
  *(_QWORD *)&v33.fields.fakeValue = v12;
  bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v33, 0LL);
  if ( (int)bsvtData < 11 )
  {
    v15 = this->fields.bsvtData;
    if ( v15 )
    {
      v17 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
      v16 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v34.fields.currentCryptoKey = v17;
      *(_QWORD *)&v34.fields.fakeValue = v16;
      bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v34, 0LL);
      v18 = this->fields.bsvtData;
      if ( v18 )
      {
        v19 = (int)bsvtData;
        bsvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(v18, 1, 0LL);
        if ( v11 )
        {
          v20 = (int)bsvtData;
          v21 = v11;
          v22 = v19;
          goto LABEL_44;
        }
      }
    }
    goto LABEL_53;
  }
  if ( (*policy & 0x80000000) != 0 )
  {
    v23 = this->fields.bsvtData;
    if ( !v23 )
      goto LABEL_53;
    svtlimitaddent = v23->fields.svtlimitaddent;
    if ( !svtlimitaddent )
      goto LABEL_53;
    bsvtData = (BattleServantData_o *)BattleServantConfConponent__GetPolicy(
                                        (BattleServantConfConponent_o *)bsvtData,
                                        (System_Collections_Generic_IEnumerable_int__o *)svtlimitaddent->fields.individuality,
                                        v14);
    *policy = (int)bsvtData;
  }
  if ( (*personality & 0x80000000) != 0 )
  {
    v25 = this->fields.bsvtData;
    if ( !v25 )
      goto LABEL_53;
    v26 = v25->fields.svtlimitaddent;
    if ( !v26 )
      goto LABEL_53;
    bsvtData = (BattleServantData_o *)BattleServantConfConponent__GetPersonality(
                                        (BattleServantConfConponent_o *)bsvtData,
                                        (System_Collections_Generic_IEnumerable_int__o *)v26->fields.individuality,
                                        v14);
    *personality = (int)bsvtData;
  }
  v27 = this->fields.bsvtData;
  if ( !v27 )
    goto LABEL_53;
  v29 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = v29;
  *(_QWORD *)&v35.fields.fakeValue = v28;
  bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v35, 0LL);
  if ( !v11 )
LABEL_53:
    sub_1C22094(bsvtData, policy);
  v22 = (int)bsvtData;
  v21 = v11;
  v20 = 0;
LABEL_44:
  ServantLimitMaster__TryGetEntity(v21, &entity, v22, v20, 0LL);
  v30 = entity;
  v31 = *policy;
  if ( entity )
  {
    if ( (v31 & 0x80000000) != 0 )
      *policy = entity->fields.policy;
    if ( (*personality & 0x80000000) != 0 )
      *personality = v30->fields.personality;
  }
  else
  {
    if ( (v31 & 0x80000000) != 0 )
      *policy = 0;
    if ( (*personality & 0x80000000) != 0 )
      *personality = 0;
  }
}


System_String_o *__fastcall BattleServantConfConponent__GetHideStr(
        BattleServantConfConponent_o *this,
        int32_t hideStatus,
        System_String_o *defaultStr,
        const MethodInfo *method)
{
  __int64 *v6; // x8

  if ( (byte_4BDF6CE & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11761/*"SERVANT_ATTRIBUTE_HIDE"*/);
    sub_1C21E38(&StringLiteral_11762/*"SERVANT_ATTRIBUTE_NONE"*/);
    byte_4BDF6CE = 1;
  }
  if ( hideStatus == 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_11762/*"SERVANT_ATTRIBUTE_NONE"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0LL);
  }
  if ( hideStatus == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_11761/*"SERVANT_ATTRIBUTE_HIDE"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0LL);
  }
  return defaultStr;
}


int32_t __fastcall BattleServantConfConponent__GetPersonality(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *individualityArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x19
  System_Int32_array *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  int32_t v21; // w21
  __int64 v22; // x0
  __int64 v23; // x1
  double v24; // d0
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  Il2CppObject *Master_object; // x20

  if ( (byte_4BDF6D0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BDF6D0 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_51;
  klass = individualityArray->klass;
  v8 = *(unsigned __int16 *)(&individualityArray->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&individualityArray->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C73E18(individualityArray, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          individualityArray,
          *(_QWORD *)(p_method + 8));
  if ( !v12 )
    sub_1C22094(0LL, v11);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_15;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_15:
      v16 = sub_1C73E18(v12, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    v17 = *(_QWORD *)v12;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v19 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_22;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_22:
      v20 = sub_1C73E18(v12, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8));
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v24 = log10((double)v21);
    if ( (unsigned int)(v21 - 300) <= 0x63
      && v24 != INFINITY
      && (int)v24 == 2
      && (unsigned int)(v21 - 303) <= 6
      && v21 != 307 )
    {
      if ( !v4 )
        sub_1C22094(v22, v23);
      items = v4->fields._items;
      v26 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !items )
        sub_1C22094(v22, v23);
      size = v4->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          v21,
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size + 1] = v21;
      }
    }
  }
  v28 = *(_QWORD *)v12;
  v29 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_40;
    }
    v31 = v28 + 16LL * *v30 + 312;
  }
  else
  {
LABEL_40:
    v31 = sub_1C73E18(v12, System_IDisposable_TypeInfo, 0LL);
  }
  v5 = (System_Int32_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v12, *(_QWORD *)(v31 + 8));
  if ( !v4 )
    goto LABEL_51;
  if ( v4->fields._size > 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    v5 = System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( Master_object )
      return IndividualityPersonalityMaster__GetPersonalityValue(
               (IndividualityPersonalityMaster_o *)Master_object,
               v5,
               0LL);
LABEL_51:
    sub_1C22094(v5, v6);
  }
  return -1;
}


int32_t __fastcall BattleServantConfConponent__GetPolicy(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *individualityArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x19
  System_Int32_array *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  int32_t v21; // w21
  __int64 v22; // x0
  __int64 v23; // x1
  double v24; // d0
  unsigned int v25; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  Il2CppObject *Master_object; // x20

  if ( (byte_4BDF6CF & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BDF6CF = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_51;
  klass = individualityArray->klass;
  v8 = *(unsigned __int16 *)(&individualityArray->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&individualityArray->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C73E18(individualityArray, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          individualityArray,
          *(_QWORD *)(p_method + 8));
  if ( !v12 )
    sub_1C22094(0LL, v11);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_15;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_15:
      v16 = sub_1C73E18(v12, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    v17 = *(_QWORD *)v12;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v19 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_22;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_22:
      v20 = sub_1C73E18(v12, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8));
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v24 = log10((double)v21);
    v25 = v21 - 300;
    if ( (unsigned int)(v21 - 300) <= 0x63 && v24 != INFINITY && (int)v24 == 2 && v25 <= 7 && ((1 << v25) & 0x87) != 0 )
    {
      if ( !v4 )
        sub_1C22094(v22, v23);
      items = v4->fields._items;
      v27 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !items )
        sub_1C22094(v22, v23);
      size = v4->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          v21,
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size + 1] = v21;
      }
    }
  }
  v29 = *(_QWORD *)v12;
  v30 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_40;
    }
    v32 = v29 + 16LL * *v31 + 312;
  }
  else
  {
LABEL_40:
    v32 = sub_1C73E18(v12, System_IDisposable_TypeInfo, 0LL);
  }
  v5 = (System_Int32_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v12, *(_QWORD *)(v32 + 8));
  if ( !v4 )
    goto LABEL_51;
  if ( v4->fields._size > 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    v5 = System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( Master_object )
      return IndividualityPolicyMaster__GetPolicyValue((IndividualityPolicyMaster_o *)Master_object, v5, 0LL);
LABEL_51:
    sub_1C22094(v5, v6);
  }
  return -1;
}


int32_t __fastcall BattleServantConfConponent__GetSpecialPassiveSkillStartIndex(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_List_int__o *skillIdList,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int32_t result; // w0
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  struct BattleServantData_o *bsvtData; // x8
  ServantPassiveSkillMaster_o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *v13; // x21
  BattleServantConfConponent___c_c *v14; // x8
  System_Func_object__int__o *_9__80_0; // x22
  Il2CppObject *v16; // x23
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_T__o *v24; // x22
  System_Collections_Generic_HashSet_int__o *v25; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Predicate_int__o *v32; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4BDF6BF & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_ServantPassiveSkillEntity__int___);
    sub_1C21E38(&System_Func_ServantPassiveSkillEntity__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int___ctor___77556136);
    sub_1C21E38(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__FindIndex__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&System_Predicate_int__TypeInfo);
    sub_1C21E38(&Method_BattleServantConfConponent___c__GetSpecialPassiveSkillStartIndex_b__80_0__);
    sub_1C21E38(&Method_BattleServantConfConponent___c__DisplayClass80_0__GetSpecialPassiveSkillStartIndex_b__1__);
    sub_1C21E38(&BattleServantConfConponent___c__DisplayClass80_0_TypeInfo);
    sub_1C21E38(&BattleServantConfConponent___c_TypeInfo);
    byte_4BDF6BF = 1;
  }
  v5 = sub_1C22084(BattleServantConfConponent___c__DisplayClass80_0_TypeInfo);
  BattleServantConfConponent___c__DisplayClass80_0___ctor((BattleServantConfConponent___c__DisplayClass80_0_o *)v5, 0LL);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillIdList, 0LL) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_22;
  v10 = (ServantPassiveSkillMaster_o *)Master_object;
  v12 = *(_QWORD *)&bsvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&bsvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = v12;
  *(_QWORD *)&v33.fields.fakeValue = v11;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v33, 0LL);
  if ( !v10 )
    goto LABEL_22;
  v13 = ServantPassiveSkillMaster__EnumerateSpecialSkillsBySvtId(v10, (int32_t)Master_object, 0LL);
  v14 = BattleServantConfConponent___c_TypeInfo;
  if ( !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
    v14 = BattleServantConfConponent___c_TypeInfo;
  }
  _9__80_0 = (System_Func_object__int__o *)v14->static_fields->__9__80_0;
  if ( !_9__80_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BattleServantConfConponent___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__80_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_ServantPassiveSkillEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__80_0,
      v16,
      Method_BattleServantConfConponent___c__GetSpecialPassiveSkillStartIndex_b__80_0__,
      0LL);
    static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    static_fields->__9__80_0 = (struct System_Func_ServantPassiveSkillEntity__int__o *)_9__80_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__80_0,
      (int64_t)_9__80_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                         (System_Func_TSource__TResult__o *)_9__80_0,
                                                         (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_ServantPassiveSkillEntity__int___);
  v25 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_55584880(
    v25,
    v24,
    (const MethodInfo_3502870 *)Method_System_Collections_Generic_HashSet_int___ctor___77556136);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = v25,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)v25, v26, v27, v28, v29, v30, v31),
        v32 = (System_Predicate_int__o *)sub_1C22084(System_Predicate_int__TypeInfo),
        System_Predicate_int____ctor(
          v32,
          (Il2CppObject *)v5,
          Method_BattleServantConfConponent___c__DisplayClass80_0__GetSpecialPassiveSkillStartIndex_b__1__,
          0LL),
        !skillIdList) )
  {
LABEL_22:
    sub_1C22094(Master_object, v8);
  }
  result = System_Collections_Generic_List_int___FindIndex(
             skillIdList,
             (System_Predicate_T__o *)v32,
             (const MethodInfo_36328C4 *)Method_System_Collections_Generic_List_int__FindIndex__);
  if ( (result & 0x80000000) != 0 )
    return skillIdList->fields._size;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantConfConponent__Initialize(
        BattleServantConfConponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v11; // x1
  UnityEngine_Transform_o *transform; // x20
  int v13; // s1
  int v14; // s0
  int v15; // s2
  UnityEngine_Object_o *commandCard; // x20
  Il2CppObject *Component_object; // x20
  UILabel_o *havenotTdLabel; // x20
  UnityEngine_Object_o *classBoardSkillObj; // x20

  if ( (byte_4BDF6BA & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_2932/*"BATTLE_HASNOT_TD"*/);
    byte_4BDF6BA = 1;
  }
  this->fields.data = data;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  *(UnityEngine_Vector3_o *)(&v13 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
  if ( !transform )
    goto LABEL_30;
  v14 = 0;
  v15 = 0;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v13 - 1), 0LL);
  commandCard = (UnityEngine_Object_o *)this->fields.commandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commandCard, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !gameObject )
      goto LABEL_30;
    if ( !this->fields.commandCard )
      goto LABEL_30;
    BattleCommandComponent__setDepth(this->fields.commandCard, LODWORD(gameObject[7].monitor) + 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.commandCard;
    if ( !gameObject )
      goto LABEL_30;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0LL,
                                               0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_30;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 0, 0LL);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.commandCard;
    if ( !gameObject
      || (BattleCommandComponent__InitTreasureDeviceErrorSpriteMark((BattleCommandComponent_o *)gameObject, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.commandCard) == 0LL) )
    {
LABEL_30:
      sub_1C22094(gameObject, v11);
    }
    BattleCommandComponent__SetDownloadEventSprite((BattleCommandComponent_o *)gameObject, 0LL);
  }
  havenotTdLabel = this->fields.havenotTdLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2932/*"BATTLE_HASNOT_TD"*/, 0LL);
  if ( !havenotTdLabel )
    goto LABEL_30;
  UILabel__set_text(havenotTdLabel, (System_String_o *)gameObject, 0LL);
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.classBoardSkillObj;
    if ( gameObject )
    {
      BattleServantClassBoardSkillEffectListComponent__Init(
        (BattleServantClassBoardSkillEffectListComponent_o *)gameObject,
        v11);
      goto LABEL_29;
    }
    goto LABEL_30;
  }
LABEL_29:
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0LL);
}


bool __fastcall BattleServantConfConponent__IsHideAttribute(
        BattleServantConfConponent_o *this,
        bool isSvtTypeSpecific,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleServantData_o *bsvtData; // x0
  int v7; // w24
  int v8; // w22
  int32_t HideStateSubAttribute; // w21
  char v10; // w8
  System_String_o *v11; // x26
  System_String_o *v12; // x25
  System_String_o *OverwriteSubAttribute; // x23
  const MethodInfo *v14; // x3
  bool IsNullOrEmpty; // w24
  bool v16; // w22
  bool v17; // w0
  int32_t Attri; // w8
  int32_t personality[2]; // [xsp+8h] [xbp-48h] BYREF

  *(_QWORD *)personality = 0LL;
  if ( ConstantMaster__IsNotDisplayBattleAttribute(0LL) )
    goto LABEL_8;
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_30;
  bsvtData = (BattleServantData_o *)BattleServantData__GetHideStatePolicy(bsvtData, 0LL);
  if ( !this->fields.bsvtData )
    goto LABEL_30;
  v7 = (int)bsvtData;
  bsvtData = (BattleServantData_o *)BattleServantData__GetHideStatePersonality(this->fields.bsvtData, 0LL);
  if ( !this->fields.bsvtData )
    goto LABEL_30;
  v8 = (int)bsvtData;
  HideStateSubAttribute = BattleServantData__GetHideStateSubAttribute(this->fields.bsvtData, 0LL);
  if ( v7 != 3 || v8 != 3 || HideStateSubAttribute != 3 )
  {
    bsvtData = this->fields.bsvtData;
    if ( bsvtData )
    {
      bsvtData = (BattleServantData_o *)BattleServantData__GetOverwritePolicy(bsvtData, 0LL);
      if ( this->fields.bsvtData )
      {
        v11 = (System_String_o *)bsvtData;
        bsvtData = (BattleServantData_o *)BattleServantData__GetOverwritePersonality(this->fields.bsvtData, 0LL);
        if ( this->fields.bsvtData )
        {
          v12 = (System_String_o *)bsvtData;
          OverwriteSubAttribute = BattleServantData__GetOverwriteSubAttribute(this->fields.bsvtData, 0LL);
          BattleServantConfConponent__GetAttributeValue(this, &personality[1], personality, v14);
          if ( v7 == 3 )
          {
            IsNullOrEmpty = 1;
          }
          else
          {
            IsNullOrEmpty = 0;
            if ( !personality[1] && !isSvtTypeSpecific )
              IsNullOrEmpty = System_String__IsNullOrEmpty(v11, 0LL);
          }
          if ( v8 == 3 )
          {
            v16 = 1;
          }
          else
          {
            v16 = 0;
            if ( !personality[0] && !isSvtTypeSpecific )
              v16 = System_String__IsNullOrEmpty(v12, 0LL);
          }
          if ( HideStateSubAttribute == 3 )
          {
            v17 = 1;
LABEL_28:
            v10 = IsNullOrEmpty && v16 && v17;
            return v10 & 1;
          }
          bsvtData = this->fields.bsvtData;
          if ( bsvtData )
          {
            Attri = BattleServantData__getAttri(bsvtData, 0LL);
            v17 = 0;
            if ( !Attri && !isSvtTypeSpecific )
              v17 = System_String__IsNullOrEmpty(OverwriteSubAttribute, 0LL);
            goto LABEL_28;
          }
        }
      }
    }
LABEL_30:
    sub_1C22094(bsvtData, v5);
  }
LABEL_8:
  v10 = 1;
  return v10 & 1;
}


bool __fastcall BattleServantConfConponent__IsLastOpenServantAbility(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDF6C7 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3294/*"BattleServantDetailTab"*/);
    byte_4BDF6C7 = 1;
  }
  return !UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_3294/*"BattleServantDetailTab"*/, 0LL)
      || !UnityEngine_PlayerPrefs__GetInt_70827320((System_String_o *)StringLiteral_3294/*"BattleServantDetailTab"*/, 0LL)
      || UnityEngine_PlayerPrefs__GetInt_70827320((System_String_o *)StringLiteral_3294/*"BattleServantDetailTab"*/, 0LL) != 1;
}


void __fastcall BattleServantConfConponent__OnClick(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *isOpening; // x0
  __int64 v4; // x1
  struct BattleCommandComponent_array *CommandCardList; // x8
  __int64 v6; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x20
  struct BattleCommandComponent_array *v10; // x8
  struct BattleServantConfConponent_CloseButtonCallBack_o *callback_close; // x8
  __int64 v12; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *equipPossessionSkillInfoComponentList; // x8
  int64_t size; // x2
  int v21; // w9
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDF6C4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF6C4 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  isOpening = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)BattleWindowComponent__isOpening(
                                                                                               (BattleWindowComponent_o *)this,
                                                                                               0LL);
  if ( ((unsigned __int8)isOpening & 1) == 0 )
  {
    CommandCardList = this->fields.CommandCardList;
    if ( !CommandCardList )
      goto LABEL_16;
    v6 = 4LL;
    while ( 1 )
    {
      max_length = CommandCardList->max_length;
      v8 = v6 - 4;
      if ( v6 - 4 >= (int)max_length )
        break;
      if ( v8 >= max_length )
        goto LABEL_31;
      v9 = (UnityEngine_Object_o *)*((_QWORD *)&CommandCardList->obj.klass + v6);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      isOpening = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)UnityEngine_Object__op_Equality(
                                                                                                   v9,
                                                                                                   0LL,
                                                                                                   0LL);
      if ( ((unsigned __int8)isOpening & 1) == 0 )
      {
        v10 = this->fields.CommandCardList;
        if ( !v10 )
          goto LABEL_16;
        if ( v8 >= v10->max_length )
LABEL_31:
          sub_1C2209C(isOpening, v4);
        isOpening = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)*((_QWORD *)&v10->obj.klass + v6);
        if ( !isOpening )
          goto LABEL_16;
        BattleCommandComponent__ClearCardEffect((BattleCommandComponent_o *)isOpening, 0LL);
      }
      CommandCardList = this->fields.CommandCardList;
      ++v6;
      if ( !CommandCardList )
        goto LABEL_16;
    }
    callback_close = this->fields.callback_close;
    if ( callback_close )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback_close->fields.m_target)(
        callback_close->fields.original_method_info,
        *(_QWORD *)&callback_close->fields.extra_arg);
    isOpening = this->fields.equipPossessionSkillInfoComponentList;
    if ( !isOpening )
      goto LABEL_16;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)isOpening,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__) )
    {
      if ( !v22.fields._current )
        sub_1C22094(0LL, v12);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v22.fields._current,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    equipPossessionSkillInfoComponentList = this->fields.equipPossessionSkillInfoComponentList;
    if ( !equipPossessionSkillInfoComponentList )
LABEL_16:
      sub_1C22094(isOpening, v4);
    size = (unsigned int)equipPossessionSkillInfoComponentList->fields._size;
    v21 = equipPossessionSkillInfoComponentList->fields._version + 1;
    equipPossessionSkillInfoComponentList->fields._size = 0;
    equipPossessionSkillInfoComponentList->fields._version = v21;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)equipPossessionSkillInfoComponentList->fields._items, 0, size, 0LL);
    this->fields.bsvtData = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.bsvtData, 0LL, size, v14, v15, v16, v17, v18);
  }
}


void __fastcall BattleServantConfConponent__OnClickServantAbility(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v2; // x19
  UnityEngine_GameObject_o *BattleServantAbilityObj; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  v2 = this;
  if ( (byte_4BDF6C8 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleServantConfConponent_OnClickServantAbility__);
    sub_1C21E38(&StringLiteral_17784/*"btn_bg_on_1"*/);
    sub_1C21E38(&StringLiteral_17779/*"btn_bg_off_1"*/);
    sub_1C21E38(&StringLiteral_17909/*"btn_txt_servant_states_off"*/);
    sub_1C21E38(&StringLiteral_3294/*"BattleServantDetailTab"*/);
    this = (BattleServantConfConponent_o *)sub_1C21E38(&StringLiteral_17907/*"btn_txt_servant_property_on"*/);
    byte_4BDF6C8 = 1;
  }
  if ( !v2->fields.isOpenAfter )
  {
    if ( BattleServantConfConponent__IsLastOpenServantAbility(this, method) )
      return;
    if ( !v2->fields.isOpenAfter )
    {
      v4 = Method_BattleServantConfConponent_OnClickServantAbility__;
      if ( (*((_BYTE *)Method_BattleServantConfConponent_OnClickServantAbility__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C21E50(Method_BattleServantConfConponent_OnClickServantAbility__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    }
  }
  BattleServantAbilityObj = v2->fields.BattleServantAbilityObj;
  v2->fields.isOpenAfter = 0;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL);
  BattleServantAbilityObj = v2->fields.AbillityTab;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL);
  BattleServantAbilityObj = v2->fields.AbillityBtnBg;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityBtn;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17784/*"btn_bg_on_1"*/, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17907/*"btn_txt_servant_property_on"*/, 0LL);
  BattleServantAbilityObj = v2->fields.BattleServantStateObj;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL);
  BattleServantAbilityObj = v2->fields.StateTab;
  if ( !BattleServantAbilityObj
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL),
        (BattleServantAbilityObj = v2->fields.StateBtnBg) == 0LL)
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateBtn) == 0LL)
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17779/*"btn_bg_off_1"*/, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateName) == 0LL) )
  {
LABEL_20:
    sub_1C22094(BattleServantAbilityObj, method);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17909/*"btn_txt_servant_states_off"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_3294/*"BattleServantDetailTab"*/, 0, 0LL);
}


void __fastcall BattleServantConfConponent__OnClickServantState(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v2; // x19
  UnityEngine_GameObject_o *BattleServantAbilityObj; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  v2 = this;
  if ( (byte_4BDF6C9 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleServantConfConponent_OnClickServantState__);
    sub_1C21E38(&StringLiteral_17784/*"btn_bg_on_1"*/);
    sub_1C21E38(&StringLiteral_17910/*"btn_txt_servant_states_on"*/);
    sub_1C21E38(&StringLiteral_17906/*"btn_txt_servant_property_off"*/);
    sub_1C21E38(&StringLiteral_17779/*"btn_bg_off_1"*/);
    this = (BattleServantConfConponent_o *)sub_1C21E38(&StringLiteral_3294/*"BattleServantDetailTab"*/);
    byte_4BDF6C9 = 1;
  }
  if ( !v2->fields.isOpenAfter )
  {
    if ( !BattleServantConfConponent__IsLastOpenServantAbility(this, method) )
      return;
    if ( !v2->fields.isOpenAfter )
    {
      v4 = Method_BattleServantConfConponent_OnClickServantState__;
      if ( (*((_BYTE *)Method_BattleServantConfConponent_OnClickServantState__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C21E50(Method_BattleServantConfConponent_OnClickServantState__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    }
  }
  BattleServantAbilityObj = v2->fields.BattleServantAbilityObj;
  v2->fields.isOpenAfter = 0;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL);
  BattleServantAbilityObj = v2->fields.AbillityTab;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL);
  BattleServantAbilityObj = v2->fields.AbillityBtnBg;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityBtn;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17779/*"btn_bg_off_1"*/, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17906/*"btn_txt_servant_property_off"*/, 0LL);
  BattleServantAbilityObj = v2->fields.BattleServantStateObj;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL);
  BattleServantAbilityObj = v2->fields.StateTab;
  if ( !BattleServantAbilityObj
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL),
        (BattleServantAbilityObj = v2->fields.StateBtnBg) == 0LL)
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateBtn) == 0LL)
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17784/*"btn_bg_on_1"*/, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateName) == 0LL) )
  {
LABEL_21:
    sub_1C22094(BattleServantAbilityObj, method);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17910/*"btn_txt_servant_states_on"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_3294/*"BattleServantDetailTab"*/, 1, 0LL);
}


void __fastcall BattleServantConfConponent__Open(
        BattleServantConfConponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0
  const MethodInfo *v6; // x1

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_1C22094(0LL, call);
  BattleViewBufflistComponent__setHide(buffListView, 0, 0LL);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  BattleServantConfConponent__ResetScroll(this, v6);
}


void __fastcall BattleServantConfConponent__ResetScroll(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *BattleServantAbilityObj; // x20
  UnityEngine_Object_o *BattleServantStateObj; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *buffListView; // x0
  UnityEngine_Object_o *AbillityScrollView; // x20
  UnityEngine_Object_o *AbillityScrollBarWiget; // x20
  UnityEngine_Object_o *StateScrollView; // x20
  UnityEngine_Object_o *StateScrollBarWiget; // x20

  if ( (byte_4BDF6C5 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF6C5 = 1;
  }
  BattleServantAbilityObj = (UnityEngine_Object_o *)this->fields.BattleServantAbilityObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(BattleServantAbilityObj, 0LL, 0LL) )
  {
    BattleServantStateObj = (UnityEngine_Object_o *)this->fields.BattleServantStateObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(BattleServantStateObj, 0LL, 0LL) )
    {
      buffListView = this->fields.BattleServantAbilityObj;
      if ( buffListView )
      {
        UnityEngine_GameObject__SetActive(buffListView, 1, 0LL);
        buffListView = this->fields.BattleServantStateObj;
        if ( buffListView )
        {
          UnityEngine_GameObject__SetActive(buffListView, 1, 0LL);
          buffListView = (UnityEngine_GameObject_o *)this->fields.buffListView;
          if ( buffListView )
          {
            BattleViewBufflistComponent__setShow((BattleViewBufflistComponent_o *)buffListView, 0LL);
            AbillityScrollView = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(AbillityScrollView, 0LL, 0LL) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.AbillityScrollView;
              if ( !buffListView )
                goto LABEL_37;
              UIScrollView__ResetPosition((UIScrollView_o *)buffListView, 0LL);
            }
            AbillityScrollBarWiget = (UnityEngine_Object_o *)this->fields.AbillityScrollBarWiget;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(AbillityScrollBarWiget, 0LL, 0LL) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.AbillityScrollBarWiget;
              if ( !buffListView )
                goto LABEL_37;
              UIWidget__ResizeCollider((UIWidget_o *)buffListView, 0LL);
            }
            StateScrollView = (UnityEngine_Object_o *)this->fields.StateScrollView;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(StateScrollView, 0LL, 0LL) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.StateScrollView;
              if ( !buffListView )
                goto LABEL_37;
              UIScrollView__ResetPosition((UIScrollView_o *)buffListView, 0LL);
            }
            StateScrollBarWiget = (UnityEngine_Object_o *)this->fields.StateScrollBarWiget;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(StateScrollBarWiget, 0LL, 0LL) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.StateScrollBarWiget;
              if ( !buffListView )
                goto LABEL_37;
              UIWidget__ResizeCollider((UIWidget_o *)buffListView, 0LL);
            }
            buffListView = this->fields.BattleServantAbilityObj;
            if ( buffListView )
            {
              UnityEngine_GameObject__SetActive(buffListView, 0, 0LL);
              buffListView = (UnityEngine_GameObject_o *)this->fields.buffListView;
              if ( buffListView )
              {
                BattleViewBufflistComponent__setHide((BattleViewBufflistComponent_o *)buffListView, 0, 0LL);
                buffListView = this->fields.BattleServantStateObj;
                if ( buffListView )
                {
                  UnityEngine_GameObject__SetActive(buffListView, 0, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_37:
      sub_1C22094(buffListView, v5);
    }
  }
}


void __fastcall BattleServantConfConponent__SetAppendSkillList(
        BattleServantConfConponent_o *this,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *AppendSkillObj; // x21
  const MethodInfo *v6; // x1
  __int64 AppendSkillTitle; // x0
  UnityEngine_Object_o *AppendSkillListParent; // x21
  UnityEngine_Object_o *AppendSkillInfoPrefab; // x21
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  struct BattleServantData_o *bsvtData; // x8
  __int128 v12; // q1
  int64_t v13; // x0
  struct BattleServantData_o *v14; // x8
  __int64 v15; // x20
  _BOOL8 IsNpc; // x0
  Il2CppObject *Master_object; // x21
  System_Int32_array *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x23
  int32_t v20; // w21
  System_Int32_array *v21; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x20
  unsigned __int64 v23; // x21
  int32_t v24; // w22
  float v25; // s8
  unsigned __int64 max_length; // x9
  int32_t v27; // w25
  int32_t v28; // w26
  System_String_o *v29; // x28
  System_String_o *v30; // x27
  _BOOL4 v31; // w20
  UnityEngine_GameObject_o *v32; // x29
  Il2CppObject *v33; // x23
  UnityEngine_Transform_o *v34; // x23
  UnityEngine_Transform_o *v35; // x23
  UnityEngine_Transform_o *v36; // x23
  Il2CppObject *Component_object; // x29
  System_Int32_array *releaseSkillLvs; // [xsp+0h] [xbp-100h]
  System_Collections_Generic_IEnumerable_TSource__o *v39; // [xsp+10h] [xbp-F0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // [xsp+18h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-C0h]
  Il2CppObject *entity; // [xsp+68h] [xbp-98h] BYREF
  System_Int32_array *lvList; // [xsp+70h] [xbp-90h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+78h] [xbp-88h] BYREF
  System_String_array *explanationList; // [xsp+80h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+88h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+98h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDF6C0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&StringLiteral_20899/*"img_txt_extraskill"*/);
    byte_4BDF6C0 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  lvList = 0LL;
  releaseStateList = 0LL;
  entity = 0LL;
  AppendSkillObj = (UnityEngine_Object_o *)this->fields.AppendSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(AppendSkillObj, 0LL, 0LL) )
  {
    AppendSkillTitle = (__int64)this->fields.AppendSkillObj;
    if ( !AppendSkillTitle )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 0, 0LL);
  }
  if ( !battleInfoData )
    return;
  AppendSkillListParent = (UnityEngine_Object_o *)this->fields.AppendSkillListParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(AppendSkillListParent, 0LL, 0LL) || !this->fields.bsvtData )
    return;
  AppendSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.AppendSkillInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(AppendSkillInfoPrefab, 0LL, 0LL) )
    return;
  this->fields.AppendSkillOffset = 0.0;
  BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL) && !BattleServantConfConponent__SetAtlas(this, v6) )
    return;
  AppendSkillTitle = (__int64)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  UISprite__set_atlas((UISprite_o *)AppendSkillTitle, this->fields.BattleAssetUIAtlas, 0LL);
  AppendSkillTitle = (__int64)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  UISprite__set_spriteName((UISprite_o *)AppendSkillTitle, (System_String_o *)StringLiteral_20899/*"img_txt_extraskill"*/, 0LL);
  AppendSkillTitle = (__int64)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  AppendSkillTitle = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)AppendSkillTitle + 840LL))(
                       AppendSkillTitle,
                       *(_QWORD *)(*(_QWORD *)AppendSkillTitle + 848LL));
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_98;
  v12 = *(_OWORD *)&bsvtData->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&bsvtData->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v41 = v42;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v41, 0LL);
  AppendSkillTitle = (__int64)BattleInfoData__getUserServantFromID(battleInfoData, v13, 0LL);
  if ( !AppendSkillTitle )
    return;
  v14 = this->fields.bsvtData;
  if ( !v14 )
    goto LABEL_98;
  v15 = AppendSkillTitle;
  IsNpc = Follower__IsNpc(v14->fields.followerType, 0LL);
  if ( IsNpc )
  {
    BattleServantConfConponent__GetAppendSkillInfo(
      (BattleServantConfConponent_o *)IsNpc,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      *(System_Int32_array **)(v15 + 488),
      *(System_Int32_array **)(v15 + 496),
      (const MethodInfo *)releaseSkillLvs);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    AppendSkillTitle = UserServantEntity__getSvtId((UserServantEntity_o *)v15, 0LL);
    if ( !Master_object )
      goto LABEL_98;
    ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_40869040(
      (ServantAppendPassiveSkillMaster_o *)Master_object,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      AppendSkillTitle,
      *(System_Int32_array **)(v15 + 488),
      *(System_Int32_array **)(v15 + 496),
      0LL);
  }
  AppendSkillTitle = (__int64)this->fields.bsvtData;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  v18 = BattleServantData__FilterDisplayingSkillIdArray((BattleServantData_o *)AppendSkillTitle, idList, 1, 0LL);
  if ( !v18 )
    return;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v18;
  if ( !*(_QWORD *)&v18->max_length )
    return;
  AppendSkillTitle = (__int64)this->fields.AppendSkillObj;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 1, 0LL);
  AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  v20 = 0;
  while ( 1 )
  {
    AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)AppendSkillTitle, 0LL);
    if ( !AppendSkillTitle )
      goto LABEL_98;
    if ( v20 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AppendSkillTitle, 0LL) )
      break;
    AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
    if ( AppendSkillTitle )
    {
      AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(
                                    (UnityEngine_GameObject_o *)AppendSkillTitle,
                                    0LL);
      if ( AppendSkillTitle )
      {
        AppendSkillTitle = (__int64)UnityEngine_Transform__GetChild(
                                      (UnityEngine_Transform_o *)AppendSkillTitle,
                                      v20,
                                      0LL);
        if ( AppendSkillTitle )
        {
          AppendSkillTitle = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)AppendSkillTitle,
                                        0LL);
          if ( AppendSkillTitle )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 0, 0LL);
            AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
            ++v20;
            if ( AppendSkillTitle )
              continue;
          }
        }
      }
    }
    goto LABEL_98;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  AppendSkillTitle = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillMaster___);
  v21 = idList;
  entity = 0LL;
  if ( !idList )
LABEL_98:
    sub_1C22094(AppendSkillTitle, v6);
  v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)AppendSkillTitle;
  v23 = 0LL;
  v24 = 0;
  v25 = 0.0;
  v39 = v19;
  v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)AppendSkillTitle;
  while ( 1 )
  {
    max_length = v21->max_length;
    if ( (__int64)v23 >= (int)max_length )
      break;
    if ( v23 >= max_length )
      goto LABEL_101;
    AppendSkillTitle = System_Linq_Enumerable__Contains_int_(
                         v19,
                         v21->m_Items[v23 + 1],
                         (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
    if ( (AppendSkillTitle & 1) != 0 )
    {
      if ( !idList )
        goto LABEL_98;
      if ( v23 >= idList->max_length )
        goto LABEL_101;
      if ( !lvList )
        goto LABEL_98;
      if ( v23 >= lvList->max_length )
        goto LABEL_101;
      v27 = idList->m_Items[v23 + 1];
      if ( v27 >= 1 )
      {
        if ( !v22 )
          goto LABEL_98;
        v28 = lvList->m_Items[v23 + 1];
        AppendSkillTitle = DataMasterBase_object__object__int___TryGetEntity(
                             v22,
                             &entity,
                             v27,
                             (const MethodInfo_325BE14 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( (AppendSkillTitle & 1) == 0 )
          return;
        if ( !titleList )
          goto LABEL_98;
        if ( v23 >= titleList->max_length )
          goto LABEL_101;
        if ( !explanationList )
          goto LABEL_98;
        if ( v23 >= explanationList->max_length )
          goto LABEL_101;
        if ( !releaseStateList )
          goto LABEL_98;
        if ( v23 >= releaseStateList->max_length )
LABEL_101:
          sub_1C2209C(AppendSkillTitle, v6);
        AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
        if ( !AppendSkillTitle )
          goto LABEL_98;
        v29 = titleList->m_Items[v23];
        v30 = explanationList->m_Items[v23];
        v31 = releaseStateList->m_Items[v23 + 4];
        AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(
                                      (UnityEngine_GameObject_o *)AppendSkillTitle,
                                      0LL);
        if ( !AppendSkillTitle )
          goto LABEL_98;
        if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AppendSkillTitle, 0LL) <= v24 )
        {
          v33 = (Il2CppObject *)this->fields.AppendSkillInfoPrefab;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          AppendSkillTitle = (__int64)UnityEngine_Object__Instantiate_object_(
                                        v33,
                                        (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          v32 = (UnityEngine_GameObject_o *)AppendSkillTitle;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 1, 0LL);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v32, 0LL);
          if ( !this->fields.AppendSkillListParent )
            goto LABEL_98;
          v34 = (UnityEngine_Transform_o *)AppendSkillTitle;
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(this->fields.AppendSkillListParent, 0LL);
          if ( !v34 )
            goto LABEL_98;
          UnityEngine_Transform__set_parent(v34, (UnityEngine_Transform_o *)AppendSkillTitle, 0LL);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v32, 0LL);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          v50.fields.y = -v25;
          v50.fields.x = 0.0;
          v50.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AppendSkillTitle, v50, 0LL);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v32, 0LL);
          v35 = (UnityEngine_Transform_o *)AppendSkillTitle;
          if ( !byte_4BD6BB6 )
          {
            AppendSkillTitle = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
            byte_4BD6BB6 = 1;
          }
          if ( !v35 )
            goto LABEL_98;
          UnityEngine_Transform__set_localScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v32, 0LL);
          v36 = (UnityEngine_Transform_o *)AppendSkillTitle;
          if ( !byte_4BD6BB7 )
          {
            AppendSkillTitle = sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
            byte_4BD6BB7 = 1;
          }
          if ( !v36 )
            goto LABEL_98;
          UnityEngine_Transform__set_localRotation(
            v36,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0LL);
          v19 = v39;
        }
        else
        {
          AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
          if ( !AppendSkillTitle )
            goto LABEL_98;
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)AppendSkillTitle,
                                        0LL);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          AppendSkillTitle = (__int64)UnityEngine_Transform__GetChild(
                                        (UnityEngine_Transform_o *)AppendSkillTitle,
                                        v24,
                                        0LL);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          AppendSkillTitle = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)AppendSkillTitle,
                                        0LL);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          v32 = (UnityEngine_GameObject_o *)AppendSkillTitle;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 1, 0LL);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v32, 0LL);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          v49.fields.y = -v25;
          v49.fields.x = 0.0;
          v49.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AppendSkillTitle, v49, 0LL);
        }
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v32,
                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AppendSkillTitle = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( (AppendSkillTitle & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_98;
          BattleServantConfSkillComponent__SetItem(
            (BattleServantConfSkillComponent_o *)Component_object,
            v24 + 1,
            v27,
            v29,
            v30,
            v31,
            v28,
            0LL);
        }
        else if ( !Component_object )
        {
          goto LABEL_98;
        }
        AppendSkillTitle = BattleServantConfSkillComponent__GetHeight(
                             (BattleServantConfSkillComponent_o *)Component_object,
                             0LL);
        v22 = v40;
        v25 = v25 + (float)((float)(AppendSkillTitle - HIDWORD(Component_object[5].klass)) + 110.0);
        ++v24;
      }
    }
    v21 = idList;
    ++v23;
    if ( !idList )
      goto LABEL_98;
  }
  this->fields.AppendSkillOffset = -(float)(v25 + 1.0);
}


bool __fastcall BattleServantConfConponent__SetAtlas(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  __int64 v4; // x1
  Il2CppObject *Object_object__49880776; // x20
  char v6; // w21
  Il2CppObject *Component_object; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDF6CA & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_3256/*"Battle/Common"*/);
    sub_1C21E38(&StringLiteral_3274/*"BattleAssetUIAtlas"*/);
    byte_4BDF6CA = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3256/*"Battle/Common"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_12;
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              AssetStorage,
                              (System_String_o *)StringLiteral_3274/*"BattleAssetUIAtlas"*/,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(
                                  (UnityEngine_Object_o *)Object_object__49880776,
                                  0LL,
                                  0LL);
  v6 = (char)AssetStorage;
  if ( ((unsigned __int8)AssetStorage & 1) != 0 )
  {
    if ( Object_object__49880776 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Object_object__49880776,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      this->fields.BattleAssetUIAtlas = (struct UIAtlas_o *)Component_object;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.BattleAssetUIAtlas,
        (int64_t)Component_object,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      return v6 & 1;
    }
LABEL_12:
    sub_1C22094(AssetStorage, v4);
  }
  return v6 & 1;
}


void __fastcall BattleServantConfConponent__SetAttribute(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *attributeLabel; // x20
  const MethodInfo *v4; // x1
  UILabel_o *mPanel; // x0
  const MethodInfo *v6; // x2
  struct BattleServantData_o *bsvtData; // x8
  struct ServantEntity_o *svtdata; // x8
  bool v9; // w20
  bool IsHideAttribute; // w0
  UnityEngine_Object_o *attributeObj; // x22
  bool v12; // w21
  bool v13; // w0
  UnityEngine_Object_o *AbillityScrollView; // x20
  struct UIScrollView_o *v15; // x8
  UnityEngine_Object_o *npRoot; // x20
  int v17; // w8
  UnityEngine_Object_o *v18; // x21
  struct UIScrollView_o *v19; // x8
  UnityEngine_Object_o *v20; // x21
  int v21; // w8
  float v22; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIScrollView_o *v24; // x8
  struct UIScrollView_o *v25; // x8
  struct UIProgressBar_o *verticalScrollBar; // x8
  struct UIScrollView_o *v27; // x8
  struct UIProgressBar_o *v28; // x8
  float v29; // s8
  UnityEngine_GameObject_o *v30; // x0
  struct UIScrollView_o *v31; // x8
  struct UIScrollView_o *v32; // x8
  struct UIProgressBar_o *v33; // x8
  struct UIScrollView_o *v34; // x8
  struct UIProgressBar_o *v35; // x8
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  const MethodInfo *v37; // x3
  int32_t v38; // w24
  int32_t v39; // w23
  int32_t HideStateSubAttribute; // w21
  System_Collections_Generic_List_object__o *v41; // x22
  System_String_o *OverwritePolicy; // x25
  System_String_o *IsNullOrEmpty; // x0
  const MethodInfo *v44; // x3
  System_String_o *v45; // x0
  System_String_o *v46; // x25
  System_String_o *HideStr; // x24
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  System_String_o *OverwritePersonality; // x24
  System_String_o *v59; // x0
  const MethodInfo *v60; // x3
  System_String_o *v61; // x0
  System_String_o *v62; // x24
  System_String_o *v63; // x23
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  System_String_o *v74; // x0
  System_String_o *v75; // x23
  System_String_o *v76; // x22
  System_String_o *OverwriteSubAttribute; // x24
  System_String_o *Attri; // x0
  const MethodInfo *v79; // x3
  System_String_o *v80; // x0
  System_String_o *v81; // x20
  System_String_o *v82; // x20
  UILabel_o *v83; // x19
  System_String_o *v84; // x0
  Il2CppObject *v85; // x1
  bool v86; // w0
  bool v87; // w20
  System_String_o *v88; // x0
  int v89; // [xsp+Ch] [xbp-54h] BYREF
  int32_t personality[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4BDF6CD & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_11849/*"SERVANT_PERSONALITY_"*/);
    sub_1C21E38(&StringLiteral_11763/*"SERVANT_ATTRIBUTE_SPLIT"*/);
    sub_1C21E38(&StringLiteral_21496/*"line_whiteAlpha_Noblur"*/);
    sub_1C21E38(&StringLiteral_12167/*"SERVANT_SUB_ATTRIBUTE_"*/);
    sub_1C21E38(&StringLiteral_11759/*"SERVANT_ATTRIBUTE_FORMAT_ATTRIBUTE"*/);
    sub_1C21E38(&StringLiteral_11760/*"SERVANT_ATTRIBUTE_FORMAT_SUB_ATTRIBUTE"*/);
    sub_1C21E38(&StringLiteral_11850/*"SERVANT_POLICY_"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_11758/*"SERVANT_ATTRIBUTE_FORMAT"*/);
    byte_4BDF6CD = 1;
  }
  *(_QWORD *)personality = 0LL;
  v89 = 0;
  attributeLabel = (UnityEngine_Object_o *)this->fields.attributeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(attributeLabel, 0LL, 0LL) )
  {
    mPanel = this->fields.attributeLabel;
    if ( !mPanel )
      goto LABEL_137;
    UILabel__set_text(mPanel, string_TypeInfo->static_fields->Empty, 0LL);
    bsvtData = this->fields.bsvtData;
    if ( !bsvtData )
      goto LABEL_137;
    svtdata = bsvtData->fields.svtdata;
    if ( !svtdata )
      goto LABEL_137;
    v9 = svtdata->fields.type == 5 || (unsigned int)(svtdata->fields.type - 1) < 2;
    IsHideAttribute = BattleServantConfConponent__IsHideAttribute(this, v9, v6);
    attributeObj = (UnityEngine_Object_o *)this->fields.attributeObj;
    v12 = IsHideAttribute;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__op_Inequality(attributeObj, 0LL, 0LL);
    if ( v12 )
    {
      if ( v13 )
      {
        mPanel = (UILabel_o *)this->fields.attributeObj;
        if ( !mPanel )
          goto LABEL_137;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 0, 0LL);
      }
      AbillityScrollView = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      mPanel = (UILabel_o *)UnityEngine_Object__op_Inequality(AbillityScrollView, 0LL, 0LL);
      if ( ((unsigned __int8)mPanel & 1) == 0 )
        goto LABEL_53;
      v15 = this->fields.AbillityScrollView;
      if ( !v15 )
        goto LABEL_137;
      mPanel = (UILabel_o *)v15->fields.mPanel;
      if ( !mPanel )
        goto LABEL_137;
      if ( UIPanel__get_height((UIPanel_o *)mPanel, 0LL) > 430.0 )
        goto LABEL_53;
      if ( !this->fields.isEquip )
        goto LABEL_42;
      npRoot = (UnityEngine_Object_o *)this->fields.npRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(npRoot, 0LL, 0LL) )
      {
        mPanel = (UILabel_o *)this->fields.AbillityScrollView;
        if ( !mPanel )
          goto LABEL_137;
        v17 = 1110966272;
      }
      else
      {
LABEL_42:
        mPanel = (UILabel_o *)this->fields.AbillityScrollView;
        if ( !mPanel )
          goto LABEL_137;
        v17 = -1034158080;
      }
      v22 = *(float *)&v17;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0LL);
      GameObjectExtensions__SetLocalPositionY(gameObject, v22, 0LL);
      v24 = this->fields.AbillityScrollView;
      if ( v24 )
      {
        mPanel = (UILabel_o *)v24->fields.mPanel;
        if ( mPanel )
        {
          ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer, float, float, float, float))mPanel->klass->vtable._18_SetRect.method)(
            mPanel,
            mPanel->klass->vtable._19_ParentHasChanged.methodPtr,
            0.0,
            -127.0,
            670.0,
            460.0);
          GameObjectExtensions__SetLocalPositionY(this->fields.abillityScrollBarObject, -227.0, 0LL);
          v25 = this->fields.AbillityScrollView;
          if ( v25 )
          {
            verticalScrollBar = v25->fields.verticalScrollBar;
            if ( verticalScrollBar )
            {
              mPanel = (UILabel_o *)verticalScrollBar->fields.mBG;
              if ( mPanel )
              {
                UIWidget__set_height((UIWidget_o *)mPanel, 448, 0LL);
                v27 = this->fields.AbillityScrollView;
                if ( v27 )
                {
                  v28 = v27->fields.verticalScrollBar;
                  if ( v28 )
                  {
                    mPanel = (UILabel_o *)v28->fields.mFG;
                    if ( mPanel )
                    {
                      UIWidget__set_height((UIWidget_o *)mPanel, 460, 0LL);
LABEL_53:
                      mPanel = (UILabel_o *)this->fields.buffListView;
                      if ( mPanel )
                      {
                        BattleViewBufflistComponent__UpdateBuffListScrollView(
                          (BattleViewBufflistComponent_o *)mPanel,
                          1,
                          0LL);
                        mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
                        if ( mPanel )
                        {
                          mPanel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)mPanel,
                                                  0LL);
                          if ( mPanel )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 0, 0LL);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_137:
      sub_1C22094(mPanel, v4);
    }
    if ( v13 )
    {
      mPanel = (UILabel_o *)this->fields.attributeObj;
      if ( !mPanel )
        goto LABEL_137;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 1, 0LL);
    }
    v18 = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mPanel = (UILabel_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
    if ( ((unsigned __int8)mPanel & 1) != 0 )
    {
      v19 = this->fields.AbillityScrollView;
      if ( !v19 )
        goto LABEL_137;
      mPanel = (UILabel_o *)v19->fields.mPanel;
      if ( !mPanel )
        goto LABEL_137;
      if ( UIPanel__get_height((UIPanel_o *)mPanel, 0LL) > 430.0 )
      {
        if ( !this->fields.isEquip )
          goto LABEL_57;
        v20 = (UnityEngine_Object_o *)this->fields.npRoot;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v20, 0LL, 0LL) )
        {
          mPanel = (UILabel_o *)this->fields.AbillityScrollView;
          if ( !mPanel )
            goto LABEL_137;
          v21 = 1110966272;
        }
        else
        {
LABEL_57:
          mPanel = (UILabel_o *)this->fields.AbillityScrollView;
          if ( !mPanel )
            goto LABEL_137;
          v21 = -1034158080;
        }
        v29 = *(float *)&v21;
        v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0LL);
        GameObjectExtensions__SetLocalPositionY(v30, v29, 0LL);
        v31 = this->fields.AbillityScrollView;
        if ( !v31 )
          goto LABEL_137;
        mPanel = (UILabel_o *)v31->fields.mPanel;
        if ( !mPanel )
          goto LABEL_137;
        ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer, float, float, float, float))mPanel->klass->vtable._18_SetRect.method)(
          mPanel,
          mPanel->klass->vtable._19_ParentHasChanged.methodPtr,
          0.0,
          -127.0,
          670.0,
          430.0);
        GameObjectExtensions__SetLocalPositionY(this->fields.abillityScrollBarObject, -238.0, 0LL);
        v32 = this->fields.AbillityScrollView;
        if ( !v32 )
          goto LABEL_137;
        v33 = v32->fields.verticalScrollBar;
        if ( !v33 )
          goto LABEL_137;
        mPanel = (UILabel_o *)v33->fields.mBG;
        if ( !mPanel )
          goto LABEL_137;
        UIWidget__set_height((UIWidget_o *)mPanel, 430, 0LL);
        v34 = this->fields.AbillityScrollView;
        if ( !v34 )
          goto LABEL_137;
        v35 = v34->fields.verticalScrollBar;
        if ( !v35 )
          goto LABEL_137;
        mPanel = (UILabel_o *)v35->fields.mFG;
        if ( !mPanel )
          goto LABEL_137;
        UIWidget__set_height((UIWidget_o *)mPanel, 430, 0LL);
      }
    }
    mPanel = (UILabel_o *)this->fields.buffListView;
    if ( !mPanel )
      goto LABEL_137;
    BattleViewBufflistComponent__UpdateBuffListScrollView((BattleViewBufflistComponent_o *)mPanel, 0, 0LL);
    BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL)
      || BattleServantConfConponent__SetAtlas(this, v4) )
    {
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_137;
      mPanel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0LL);
      if ( !mPanel )
        goto LABEL_137;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 1, 0LL);
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_137;
      UISprite__set_atlas((UISprite_o *)mPanel, this->fields.BattleAssetUIAtlas, 0LL);
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_137;
      UISprite__set_spriteName((UISprite_o *)mPanel, (System_String_o *)StringLiteral_21496/*"line_whiteAlpha_Noblur"*/, 0LL);
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_137;
      ((void (__fastcall *)(UILabel_o *, __int64, void *))mPanel->klass[1]._1.namespaze)(
        mPanel,
        1LL,
        mPanel->klass[1]._1.byval_arg.data);
      BattleServantConfConponent__GetAttributeValue(this, &personality[1], personality, v37);
      mPanel = (UILabel_o *)this->fields.bsvtData;
      if ( !mPanel )
        goto LABEL_137;
      mPanel = (UILabel_o *)BattleServantData__GetHideStatePolicy((BattleServantData_o *)mPanel, 0LL);
      if ( !this->fields.bsvtData )
        goto LABEL_137;
      v38 = (int)mPanel;
      mPanel = (UILabel_o *)BattleServantData__GetHideStatePersonality(this->fields.bsvtData, 0LL);
      if ( !this->fields.bsvtData )
        goto LABEL_137;
      v39 = (int)mPanel;
      HideStateSubAttribute = BattleServantData__GetHideStateSubAttribute(this->fields.bsvtData, 0LL);
      v41 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v41,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
      if ( v38 != 3 )
      {
        mPanel = (UILabel_o *)this->fields.bsvtData;
        if ( !mPanel )
          goto LABEL_137;
        OverwritePolicy = BattleServantData__GetOverwritePolicy((BattleServantData_o *)mPanel, 0LL);
        IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(OverwritePolicy, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( v9 && (personality[1] | v38) == 0 )
            v38 = 2;
          if ( personality[1] )
          {
            v45 = System_Int32__ToString((int32_t)&personality[1], 0LL);
            v46 = System_String__Concat_63115476((System_String_o *)StringLiteral_11850/*"SERVANT_POLICY_"*/, v45, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            IsNullOrEmpty = LocalizationManager__Get(v46, 0LL);
            OverwritePolicy = IsNullOrEmpty;
          }
        }
        HideStr = BattleServantConfConponent__GetHideStr(
                    (BattleServantConfConponent_o *)IsNullOrEmpty,
                    v38,
                    OverwritePolicy,
                    v44);
        mPanel = (UILabel_o *)System_String__IsNullOrEmpty(HideStr, 0LL);
        if ( ((unsigned __int8)mPanel & 1) == 0 )
        {
          if ( !v41 )
            goto LABEL_137;
          items = v41->fields._items;
          v55 = Method_System_Collections_Generic_List_string__Add__;
          ++v41->fields._version;
          if ( !items )
            goto LABEL_137;
          size = v41->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v41,
              (Il2CppObject *)HideStr,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v57 = &items->obj.klass + size;
            v41->fields._size = size + 1;
            v57[4] = (Il2CppClass *)HideStr;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)HideStr, v48, v49, v50, v51, v52, v53);
          }
        }
      }
      if ( v39 != 3 )
      {
        mPanel = (UILabel_o *)this->fields.bsvtData;
        if ( !mPanel )
          goto LABEL_137;
        OverwritePersonality = BattleServantData__GetOverwritePersonality((BattleServantData_o *)mPanel, 0LL);
        v59 = (System_String_o *)System_String__IsNullOrEmpty(OverwritePersonality, 0LL);
        if ( ((unsigned __int8)v59 & 1) != 0 )
        {
          if ( v9 && (personality[0] | v39) == 0 )
            v39 = 2;
          if ( personality[0] )
          {
            v61 = System_Int32__ToString((int32_t)personality, 0LL);
            v62 = System_String__Concat_63115476((System_String_o *)StringLiteral_11849/*"SERVANT_PERSONALITY_"*/, v61, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v59 = LocalizationManager__Get(v62, 0LL);
            OverwritePersonality = v59;
          }
        }
        v63 = BattleServantConfConponent__GetHideStr(
                (BattleServantConfConponent_o *)v59,
                v39,
                OverwritePersonality,
                v60);
        mPanel = (UILabel_o *)System_String__IsNullOrEmpty(v63, 0LL);
        if ( ((unsigned __int8)mPanel & 1) == 0 )
        {
          if ( !v41 )
            goto LABEL_137;
          v70 = v41->fields._items;
          v71 = Method_System_Collections_Generic_List_string__Add__;
          ++v41->fields._version;
          if ( !v70 )
            goto LABEL_137;
          v72 = v41->fields._size;
          if ( (unsigned int)v72 >= v70->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v41,
              (Il2CppObject *)v63,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          }
          else
          {
            v73 = &v70->obj.klass + v72;
            v41->fields._size = v72 + 1;
            v73[4] = (Il2CppClass *)v63;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v73 + 4), (int64_t)v63, v64, v65, v66, v67, v68, v69);
          }
        }
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v74 = LocalizationManager__Get((System_String_o *)StringLiteral_11763/*"SERVANT_ATTRIBUTE_SPLIT"*/, 0LL);
      v75 = System_String__Join_63131132(v74, (System_Collections_Generic_IEnumerable_string__o *)v41, 0LL);
      v76 = (System_String_o *)StringLiteral_1/*""*/;
      if ( HideStateSubAttribute != 3 )
      {
        mPanel = (UILabel_o *)this->fields.bsvtData;
        if ( !mPanel )
          goto LABEL_137;
        OverwriteSubAttribute = BattleServantData__GetOverwriteSubAttribute((BattleServantData_o *)mPanel, 0LL);
        Attri = (System_String_o *)System_String__IsNullOrEmpty(OverwriteSubAttribute, 0LL);
        if ( ((unsigned __int8)Attri & 1) != 0 )
        {
          mPanel = (UILabel_o *)this->fields.bsvtData;
          if ( !mPanel )
            goto LABEL_137;
          Attri = (System_String_o *)BattleServantData__getAttri((BattleServantData_o *)mPanel, 0LL);
          if ( v9 && ((unsigned int)Attri | HideStateSubAttribute) == 0 )
            HideStateSubAttribute = 2;
          v89 = (int)Attri;
          if ( (_DWORD)Attri )
          {
            v80 = System_Int32__ToString((int32_t)&v89, 0LL);
            v81 = System_String__Concat_63115476((System_String_o *)StringLiteral_12167/*"SERVANT_SUB_ATTRIBUTE_"*/, v80, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Attri = LocalizationManager__Get(v81, 0LL);
            OverwriteSubAttribute = Attri;
          }
        }
        v82 = BattleServantConfConponent__GetHideStr(
                (BattleServantConfConponent_o *)Attri,
                HideStateSubAttribute,
                OverwriteSubAttribute,
                v79);
        if ( !System_String__IsNullOrEmpty(v82, 0LL) )
          v76 = v82;
      }
      if ( System_String__IsNullOrEmpty(v75, 0LL) )
      {
        v83 = this->fields.attributeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v84 = LocalizationManager__Get((System_String_o *)StringLiteral_11760/*"SERVANT_ATTRIBUTE_FORMAT_SUB_ATTRIBUTE"*/, 0LL);
        v85 = (Il2CppObject *)v76;
LABEL_132:
        mPanel = (UILabel_o *)System_String__Format(v84, v85, 0LL);
        if ( !v83 )
          goto LABEL_137;
LABEL_133:
        UILabel__set_text(v83, (System_String_o *)mPanel, 0LL);
        return;
      }
      v86 = System_String__IsNullOrEmpty(v76, 0LL);
      v83 = this->fields.attributeLabel;
      v87 = v86;
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v86 )
        {
LABEL_131:
          v84 = LocalizationManager__Get((System_String_o *)StringLiteral_11759/*"SERVANT_ATTRIBUTE_FORMAT_ATTRIBUTE"*/, 0LL);
          v85 = (Il2CppObject *)v75;
          goto LABEL_132;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v87 )
          goto LABEL_131;
      }
      v88 = LocalizationManager__Get((System_String_o *)StringLiteral_11758/*"SERVANT_ATTRIBUTE_FORMAT"*/, 0LL);
      mPanel = (UILabel_o *)System_String__Format_63129848(v88, (Il2CppObject *)v75, (Il2CppObject *)v76, 0LL);
      if ( !v83 )
        goto LABEL_137;
      goto LABEL_133;
    }
  }
}


void __fastcall BattleServantConfConponent__SetClassBoardSkillList(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *classBoardSkillObj; // x20
  const MethodInfo *v4; // x1
  BattleServantConfWindowPassiveSkillListComponent_o *v5; // x0
  struct BattleServantData_o *bsvtData; // x8
  UnityEngine_Object_o *BattleAssetUIAtlas; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4BDF6CC & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_21777/*"menu_txt_class_score"*/);
    byte_4BDF6CC = 1;
  }
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0LL, 0LL) )
  {
    v5 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
    if ( !v5 )
      goto LABEL_19;
    BattleServantConfWindowPassiveSkillListComponent__SetActive(v5, 0, 0LL);
  }
  bsvtData = this->fields.bsvtData;
  if ( bsvtData
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)bsvtData->fields.classBoardAddPassiveSkills, 0LL) )
  {
    BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL)
      || BattleServantConfConponent__SetAtlas(this, v4) )
    {
      v5 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
      if ( v5 )
      {
        ((void (__fastcall *)(BattleServantConfWindowPassiveSkillListComponent_o *, struct UIAtlas_o *, __int64, Il2CppMethodPointer))v5->klass->vtable._5_SetSkillTitle.method)(
          v5,
          this->fields.BattleAssetUIAtlas,
          StringLiteral_21777/*"menu_txt_class_score"*/,
          v5->klass->vtable._6_SetSkillInfoObject.methodPtr);
        v5 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
        if ( v5 )
        {
          BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
            (BattleServantClassBoardSkillEffectListComponent_o *)v5,
            this->fields.bsvtData,
            v8);
          v5 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
          if ( v5 )
          {
            BattleServantConfWindowPassiveSkillListComponent__SetActive(v5, 1, 0LL);
            return;
          }
        }
      }
LABEL_19:
      sub_1C22094(v5, v4);
    }
  }
}


void __fastcall BattleServantConfConponent__SetClassSkillList(
        BattleServantConfConponent_o *this,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *ClassSkillObj; // x21
  const MethodInfo *v6; // x1
  __int64 bsvtData; // x0
  UnityEngine_Object_o *ClassSkillListParent; // x21
  UnityEngine_Object_o *ClassSkillInfoPrefab; // x21
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  struct BattleServantData_o *v11; // x8
  __int64 v12; // x21
  __int64 v13; // x22
  int32_t v14; // w0
  struct BattleServantData_o *v15; // x8
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t userSvtId; // x1
  __int128 v18; // q1
  BattleUserServantData_o *UserServantFromID; // x21
  System_Collections_Generic_IEnumerable_T__o *v20; // x22
  System_Collections_Generic_List_int__o *v21; // x20
  BattleServantData_o *v22; // x22
  System_Collections_ICollection_o *v23; // x21
  const MethodInfo *v24; // x2
  int32_t v25; // w21
  Il2CppObject *Master_object; // x21
  Il2CppObject *v27; // x0
  SkillLvMaster_o *v28; // x26
  int32_t v29; // w22
  int32_t v30; // w24
  float v31; // s8
  int32_t v32; // w27
  System_String_o *v33; // x28
  System_String_o *v34; // x29
  UnityEngine_GameObject_o *v35; // x25
  Il2CppObject *v36; // x25
  SkillLvMaster_o *v37; // x21
  UnityEngine_Transform_o *v38; // x26
  UnityEngine_Transform_o *v39; // x26
  UnityEngine_Transform_o *v40; // x26
  Il2CppObject *Component_object; // x25
  Il2CppObject *v42; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+30h] [xbp-A0h]
  SkillLvEntity_o *v45; // [xsp+58h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDF6BE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__InsertRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor___77576624);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&StringLiteral_20886/*"img_txt_classskill"*/);
    byte_4BDF6BE = 1;
  }
  entity = 0LL;
  v45 = 0LL;
  ClassSkillObj = (UnityEngine_Object_o *)this->fields.ClassSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ClassSkillObj, 0LL, 0LL) )
  {
    bsvtData = (__int64)this->fields.ClassSkillObj;
    if ( !bsvtData )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0LL);
  }
  if ( battleInfoData )
  {
    ClassSkillListParent = (UnityEngine_Object_o *)this->fields.ClassSkillListParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(ClassSkillListParent, 0LL, 0LL) && this->fields.bsvtData )
    {
      ClassSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.ClassSkillInfoPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(ClassSkillInfoPrefab, 0LL, 0LL) )
      {
        bsvtData = (__int64)this->fields.bsvtData;
        if ( !bsvtData )
          goto LABEL_54;
        if ( !BattleServantData__IsHideClassSkillNpcFollower((BattleServantData_o *)bsvtData, 0LL) )
        {
          this->fields.ClassSkillOffset = 0.0;
          BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL)
            || BattleServantConfConponent__SetAtlas(this, v6) )
          {
            bsvtData = (__int64)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_54;
            UISprite__set_atlas((UISprite_o *)bsvtData, this->fields.BattleAssetUIAtlas, 0LL);
            bsvtData = (__int64)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_54;
            UISprite__set_spriteName((UISprite_o *)bsvtData, (System_String_o *)StringLiteral_20886/*"img_txt_classskill"*/, 0LL);
            bsvtData = (__int64)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_54;
            bsvtData = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bsvtData + 840LL))(
                         bsvtData,
                         *(_QWORD *)(*(_QWORD *)bsvtData + 848LL));
            v11 = this->fields.bsvtData;
            if ( !v11 )
              goto LABEL_54;
            v13 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
            v12 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v47.fields.currentCryptoKey = v13;
            *(_QWORD *)&v47.fields.fakeValue = v12;
            v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v47, 0LL);
            bsvtData = BattleInfoData__IsUseNewTransformLogic(battleInfoData, v14, 0LL);
            v15 = this->fields.bsvtData;
            if ( !v15 )
              goto LABEL_54;
            if ( (bsvtData & 1) != 0 )
            {
              deckSvt = v15->fields.deckSvt;
              if ( !deckSvt )
                goto LABEL_54;
              userSvtId = deckSvt->fields.userSvtId;
            }
            else
            {
              v18 = *(_OWORD *)&v15->fields.userSvtId.fields.fakeValue;
              *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v15->fields.userSvtId.fields.currentCryptoKey;
              *(_OWORD *)&v44.fields.fakeValue = v18;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v43 = v44;
              userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v43, 0LL);
            }
            UserServantFromID = BattleInfoData__getUserServantFromID(battleInfoData, userSvtId, 0LL);
            if ( UserServantFromID )
            {
              bsvtData = (__int64)this->fields.bsvtData;
              if ( !bsvtData )
                goto LABEL_54;
              v20 = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__FilterDisplayingSkillIdArray(
                                                                     (BattleServantData_o *)bsvtData,
                                                                     UserServantFromID->fields.classPassive,
                                                                     1,
                                                                     0LL);
              v21 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_56826212(
                v21,
                v20,
                (const MethodInfo_3631964 *)Method_System_Collections_Generic_List_int___ctor___77576624);
              v22 = this->fields.bsvtData;
              bsvtData = (__int64)BattleUserServantData__getAddPassiveSkill(UserServantFromID, 0LL);
              if ( !v22 )
                goto LABEL_54;
              v23 = (System_Collections_ICollection_o *)BattleServantData__FilterDisplayingSkillIdArray(
                                                          v22,
                                                          (System_Int32_array *)bsvtData,
                                                          0,
                                                          0LL);
              bsvtData = BasicHelper__IsNullOrEmpty(v23, 0LL);
              if ( (bsvtData & 1) != 0 )
              {
                if ( !v21 )
                  goto LABEL_54;
              }
              else
              {
                bsvtData = BattleServantConfConponent__GetSpecialPassiveSkillStartIndex(this, v21, v24);
                if ( !v21 )
                  goto LABEL_54;
                System_Collections_Generic_List_int___InsertRange(
                  v21,
                  bsvtData,
                  (System_Collections_Generic_IEnumerable_T__o *)v23,
                  (const MethodInfo_3633048 *)Method_System_Collections_Generic_List_int__InsertRange__);
              }
              if ( v21->fields._size >= 1 )
              {
                bsvtData = (__int64)this->fields.ClassSkillObj;
                if ( bsvtData )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                  bsvtData = (__int64)this->fields.ClassSkillListParent;
                  if ( bsvtData )
                  {
                    v25 = 0;
                    while ( 1 )
                    {
                      bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                            (UnityEngine_GameObject_o *)bsvtData,
                                            0LL);
                      if ( !bsvtData )
                        goto LABEL_54;
                      if ( v25 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0LL) )
                        break;
                      bsvtData = (__int64)this->fields.ClassSkillListParent;
                      if ( bsvtData )
                      {
                        bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)bsvtData,
                                              0LL);
                        if ( bsvtData )
                        {
                          bsvtData = (__int64)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)bsvtData,
                                                v25,
                                                0LL);
                          if ( bsvtData )
                          {
                            bsvtData = (__int64)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)bsvtData,
                                                  0LL);
                            if ( bsvtData )
                            {
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0LL);
                              bsvtData = (__int64)this->fields.ClassSkillListParent;
                              ++v25;
                              if ( bsvtData )
                                continue;
                            }
                          }
                        }
                      }
                      goto LABEL_54;
                    }
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillMaster___);
                    entity = 0LL;
                    v27 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillLvMaster___);
                    v45 = 0LL;
                    if ( v21->fields._size >= 1 )
                    {
                      v28 = (SkillLvMaster_o *)v27;
                      v29 = 0;
                      v30 = 0;
                      v31 = 0.0;
                      v42 = Master_object;
                      while ( 1 )
                      {
                        bsvtData = System_Collections_Generic_List_int___get_Item(
                                     v21,
                                     v30,
                                     (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
                        if ( (int)bsvtData >= 1 )
                        {
                          if ( !Master_object )
                            goto LABEL_54;
                          v32 = bsvtData;
                          bsvtData = DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       &entity,
                                       bsvtData,
                                       (const MethodInfo_325BE14 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                          if ( (bsvtData & 1) == 0 )
                            return;
                          if ( !v28 )
                            goto LABEL_54;
                          if ( !SkillLvMaster__TryGetEntity(v28, &v45, v32, 1, 0LL) )
                            return;
                          bsvtData = (__int64)entity;
                          if ( !entity )
                            goto LABEL_54;
                          bsvtData = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                          if ( !v45 )
                            goto LABEL_54;
                          v33 = (System_String_o *)bsvtData;
                          bsvtData = (__int64)SkillLvEntity__getDetail_41206052(v45, 1, 0, 0LL);
                          if ( !this->fields.ClassSkillListParent )
                            goto LABEL_54;
                          v34 = (System_String_o *)bsvtData;
                          bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                                this->fields.ClassSkillListParent,
                                                0LL);
                          if ( !bsvtData )
                            goto LABEL_54;
                          if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0LL) <= v29 )
                          {
                            v36 = (Il2CppObject *)this->fields.ClassSkillInfoPrefab;
                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                            v37 = v28;
                            bsvtData = (__int64)UnityEngine_Object__Instantiate_object_(
                                                  v36,
                                                  (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v35 = (UnityEngine_GameObject_o *)bsvtData;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v35, 0LL);
                            if ( !this->fields.ClassSkillListParent )
                              goto LABEL_54;
                            v38 = (UnityEngine_Transform_o *)bsvtData;
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                                  this->fields.ClassSkillListParent,
                                                  0LL);
                            if ( !v38 )
                              goto LABEL_54;
                            UnityEngine_Transform__set_parent(v38, (UnityEngine_Transform_o *)bsvtData, 0LL);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v35, 0LL);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v49.fields.y = -v31;
                            v49.fields.x = 0.0;
                            v49.fields.z = 0.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v49, 0LL);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v35, 0LL);
                            v39 = (UnityEngine_Transform_o *)bsvtData;
                            if ( !byte_4BD6BB6 )
                            {
                              bsvtData = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                              byte_4BD6BB6 = 1;
                            }
                            if ( !v39 )
                              goto LABEL_54;
                            UnityEngine_Transform__set_localScale(
                              v39,
                              UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                              0LL);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v35, 0LL);
                            v40 = (UnityEngine_Transform_o *)bsvtData;
                            if ( !byte_4BD6BB7 )
                            {
                              bsvtData = sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
                              byte_4BD6BB7 = 1;
                            }
                            if ( !v40 )
                              goto LABEL_54;
                            UnityEngine_Transform__set_localRotation(
                              v40,
                              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                              0LL);
                            v28 = v37;
                            Master_object = v42;
                          }
                          else
                          {
                            bsvtData = (__int64)this->fields.ClassSkillListParent;
                            if ( !bsvtData )
                              goto LABEL_54;
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)bsvtData,
                                                  0LL);
                            if ( !bsvtData )
                              goto LABEL_54;
                            bsvtData = (__int64)UnityEngine_Transform__GetChild(
                                                  (UnityEngine_Transform_o *)bsvtData,
                                                  v29,
                                                  0LL);
                            if ( !bsvtData )
                              goto LABEL_54;
                            bsvtData = (__int64)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)bsvtData,
                                                  0LL);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v35 = (UnityEngine_GameObject_o *)bsvtData;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v35, 0LL);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v48.fields.y = -v31;
                            v48.fields.x = 0.0;
                            v48.fields.z = 0.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v48, 0LL);
                          }
                          Component_object = UnityEngine_GameObject__GetComponent_object_(
                                               v35,
                                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          bsvtData = UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_object,
                                       0LL,
                                       0LL);
                          if ( (bsvtData & 1) != 0 )
                          {
                            if ( !Component_object )
                              goto LABEL_54;
                            BattleServantConfSkillComponent__SetItem(
                              (BattleServantConfSkillComponent_o *)Component_object,
                              v30 + 1,
                              v32,
                              v33,
                              v34,
                              1,
                              0,
                              0LL);
                          }
                          else if ( !Component_object )
                          {
                            goto LABEL_54;
                          }
                          ++v29;
                          v31 = v31
                              + (float)((float)(BattleServantConfSkillComponent__GetHeight(
                                                  (BattleServantConfSkillComponent_o *)Component_object,
                                                  0LL)
                                              - HIDWORD(Component_object[5].klass))
                                      + 110.0);
                        }
                        if ( ++v30 >= v21->fields._size )
                          goto LABEL_98;
                      }
                    }
                    v31 = 0.0;
LABEL_98:
                    this->fields.ClassSkillOffset = -(float)(v31 + 1.0);
                    return;
                  }
                }
LABEL_54:
                sub_1C22094(bsvtData, v6);
              }
            }
          }
        }
      }
    }
  }
}


void __fastcall BattleServantConfConponent__SetCommandCard(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *bsvtData; // x0
  System_Int32_array *CommandCodeIdsEX; // x0
  __int64 v5; // x1
  struct BattleCommandComponent_array *CommandCardList; // x8
  System_Int32_array *v7; // x20
  unsigned __int64 v8; // x21
  int32_t *v9; // x23
  unsigned __int64 max_length; // x9
  BattleCommandComponent_o *v11; // x22
  const MethodInfo *v12; // x2
  struct BattleCommandData_o *data; // x8
  Il2CppObject *component; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDF6C2 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_TryGetComponent_UIWidget___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF6C2 = 1;
  }
  component = 0LL;
  bsvtData = this->fields.bsvtData;
  if ( bsvtData && this->fields.CommandCardList )
  {
    CommandCodeIdsEX = BattleServantData__GetCommandCodeIdsEX(bsvtData, 0LL);
    CommandCardList = this->fields.CommandCardList;
    this->fields.isCommandCardUnderIcon = 0;
    if ( !CommandCardList )
LABEL_23:
      sub_1C22094(CommandCodeIdsEX, v5);
    v7 = CommandCodeIdsEX;
    v8 = 0LL;
    v9 = &CommandCodeIdsEX->m_Items[1];
    while ( 1 )
    {
      max_length = CommandCardList->max_length;
      if ( (__int64)v8 >= (int)max_length )
        break;
      if ( v8 >= max_length )
        goto LABEL_25;
      v11 = CommandCardList->m_Items[v8];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v11, 0LL, 0LL);
      if ( ((unsigned __int8)CommandCodeIdsEX & 1) == 0 )
      {
        if ( !v11 )
          goto LABEL_23;
        BattleCommandComponent__Initialize(v11, 0LL);
        v11->fields.isCodeTextureView = 1;
        BattleCommandComponent__setData_44414320(v11, this->fields.bsvtData, v8, 0LL);
        CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Component__TryGetComponent_object_(
                                                   (UnityEngine_Component_o *)this,
                                                   &component,
                                                   (const MethodInfo_2FA776C *)Method_UnityEngine_Component_TryGetComponent_UIWidget___);
        if ( ((unsigned __int8)CommandCodeIdsEX & 1) != 0 )
        {
          if ( !component )
            goto LABEL_23;
          BattleCommandComponent__setDepth(v11, LODWORD(component[11].klass) + 1, 0LL);
        }
        BattleCommandComponent__SetDownloadEventSprite(v11, 0LL);
        if ( !v7 )
          goto LABEL_23;
        if ( v8 >= v7->max_length
          || (BattleCommandComponent__SetCommandCodeView_44418656(v11, v9[v8], 0LL), v8 >= v7->max_length)
          || (BattleCommandComponent__SetLockInfo(v11, v9[v8] == -1, 0LL),
              BattleServantConfConponent__SetCommandCardTypeChangeBuff(this, v11, v12),
              BattleCommandComponent__HidePowerUpValueLabelActive(v11, this->fields.isCommandCardUnderIcon, 0LL),
              BattleCommandComponent__ResetCardBuffIconAlphaAnim(v11, 0LL),
              BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(v11, 0LL),
              v8 >= v7->max_length) )
        {
LABEL_25:
          sub_1C2209C(CommandCodeIdsEX, v5);
        }
        data = v11->fields.data;
        if ( !data )
          goto LABEL_23;
        data->fields.commandCodeId = v9[v8];
        BattleCommandComponent__UpdateCommandCardEffect(v11, 0LL);
        BattleCommandComponent__ChangeCardEffectMaskForInside(v11, 0LL);
      }
      CommandCardList = this->fields.CommandCardList;
      ++v8;
      if ( !CommandCardList )
        goto LABEL_23;
    }
  }
}


void __fastcall BattleServantConfConponent__SetCommandCardTypeChangeBuff(
        BattleServantConfConponent_o *this,
        BattleCommandComponent_o *commandCard,
        const MethodInfo *method)
{
  BattleCommandData_o *data; // x21
  int32_t addOrder; // w3
  int v7; // w2
  BattleBuffData_BuffData_o *v8; // x0
  BattleBuffData_BuffData_o *v9; // x22
  int32_t turn; // w8
  int v11; // w8
  bool v12; // w20

  if ( !commandCard )
    sub_1C22094(this, 0LL);
  data = commandCard->fields.data;
  if ( data && !BattleCommandData__isTreasureDvc(commandCard->fields.data, 0LL) )
  {
    v8 = BattleCommandData__GetCommandCardTypeChangeBuff(data, 0LL);
    if ( v8 )
    {
      v9 = v8;
      LOBYTE(v8) = BattleCommandData__IsCommandCardTypeChanged(data, 0LL);
      turn = v9->fields.turn;
      addOrder = v9->fields.addOrder;
      this->fields.isCommandCardUnderIcon = 1;
      if ( turn + 1 >= 0 )
        v11 = turn + 1;
      else
        v11 = turn + 2;
      v7 = v11 >> 1;
    }
    else
    {
      addOrder = 0;
      v7 = 0;
    }
  }
  else
  {
    addOrder = 0;
    v7 = 0;
    LOBYTE(v8) = 0;
  }
  v12 = (unsigned __int8)v8 & 1;
  BattleCommandComponent__SetCommandCardTypeChange(commandCard, (unsigned __int8)v8 & 1, v7, addOrder, 0LL);
  BattleCommandComponent__SetActiveSpecialCardBuffIcon(commandCard, v12, 0LL);
}


void __fastcall BattleServantConfConponent__SetCommandCodeSkillList(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *CommandCodeListParent; // x20
  UnityEngine_Object_o *CommandCodeInfoPrefab; // x20
  __int64 v5; // x1
  __int64 transform; // x0
  int32_t v7; // w20
  System_Int32_array *CommandCodeIds; // x24
  BattleServantConfConponent___c_c *v9; // x8
  System_Predicate_int__o *_9__84_0; // x21
  Il2CppObject *v11; // x22
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int v19; // w21
  __int64 v20; // x8
  int32_t v21; // w22
  unsigned __int64 v22; // x29
  float v23; // s8
  int32_t v24; // w25
  System_Int32_array *v25; // x8
  unsigned __int64 v26; // x24
  unsigned __int64 max_length; // x9
  UnityEngine_GameObject_o *v28; // x26
  Il2CppObject *v29; // x26
  UnityEngine_Transform_o *v30; // x27
  UnityEngine_Transform_o *v31; // x27
  UnityEngine_Transform_o *v32; // x27
  Il2CppObject *Component_object; // x26
  float v34; // s0
  UILabel_o *NoCommandCodeLabel; // x19
  System_Int32_array *v36; // [xsp+0h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+8h] [xbp-88h]
  System_String_array *explanationList; // [xsp+10h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDF6C3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_FindIndex_int___);
    sub_1C21E38(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C21E38(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&System_Predicate_int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__84_0__);
    sub_1C21E38(&BattleServantConfConponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_2898/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/);
    byte_4BDF6C3 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  CommandCodeListParent = (UnityEngine_Object_o *)this->fields.CommandCodeListParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(CommandCodeListParent, 0LL, 0LL) || !this->fields.bsvtData )
    return;
  CommandCodeInfoPrefab = (UnityEngine_Object_o *)this->fields.CommandCodeInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(CommandCodeInfoPrefab, 0LL, 0LL) )
    return;
  transform = (__int64)this->fields.CommandCodeInfoPrefab;
  if ( !transform )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)this->fields.CommandCodeListParent;
  if ( !transform )
    goto LABEL_90;
  v7 = 0;
  while ( 1 )
  {
    transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_90;
    if ( v7 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) )
      break;
    transform = (__int64)this->fields.CommandCodeListParent;
    if ( transform )
    {
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
      if ( transform )
      {
        transform = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v7, 0LL);
        if ( transform )
        {
          transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          if ( transform )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
            transform = (__int64)this->fields.CommandCodeListParent;
            ++v7;
            if ( transform )
              continue;
          }
        }
      }
    }
    goto LABEL_90;
  }
  transform = (__int64)this->fields.bsvtData;
  if ( !transform )
    goto LABEL_90;
  CommandCodeIds = BattleServantData__GetCommandCodeIds((BattleServantData_o *)transform, 0LL);
  v9 = BattleServantConfConponent___c_TypeInfo;
  if ( !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
    v9 = BattleServantConfConponent___c_TypeInfo;
  }
  _9__84_0 = v9->static_fields->__9__84_0;
  if ( !_9__84_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BattleServantConfConponent___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__84_0 = (System_Predicate_int__o *)sub_1C22084(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__84_0,
      v11,
      Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__84_0__,
      0LL);
    static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    static_fields->__9__84_0 = _9__84_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__84_0,
      (int64_t)_9__84_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  transform = System_Array__FindIndex_int_(
                CommandCodeIds,
                (System_Predicate_T__o *)_9__84_0,
                (const MethodInfo_30AB808 *)Method_System_Array_FindIndex_int___);
  if ( !this->fields.NoCommandCodeLabel
    || (v19 = transform,
        (transform = (__int64)UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)this->fields.NoCommandCodeLabel,
                                0LL)) == 0) )
  {
LABEL_90:
    sub_1C22094(transform, v5);
  }
  if ( v19 == -1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
    NoCommandCodeLabel = this->fields.NoCommandCodeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2898/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/, 0LL);
    if ( NoCommandCodeLabel )
    {
      UILabel__set_text(NoCommandCodeLabel, (System_String_o *)transform, 0LL);
      return;
    }
    goto LABEL_90;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_90;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)transform,
                                                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_90;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !CommandCodeIds )
    goto LABEL_90;
  v20 = *(_QWORD *)&CommandCodeIds->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0;
    v22 = 0LL;
    v23 = 0.0;
    v36 = CommandCodeIds;
    do
    {
      if ( v22 >= (unsigned int)v20 )
LABEL_91:
        sub_1C2209C(transform, v5);
      v24 = CommandCodeIds->m_Items[v22 + 1];
      if ( v24 >= 1 )
      {
        transform = (__int64)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_90;
        transform = (__int64)DataMasterBase_object__object__int___GetEntity(
                               MasterData_object,
                               v24,
                               (const MethodInfo_325BDC8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( transform )
        {
          CommandCodeEntity__GetSkillInfo((CommandCodeEntity_o *)transform, &idList, &titleList, &explanationList, 0LL);
          v25 = idList;
          if ( !idList )
            goto LABEL_90;
          v26 = 0LL;
          while ( 1 )
          {
            max_length = v25->max_length;
            if ( (__int64)v26 >= (int)max_length )
              break;
            if ( v26 >= max_length )
              goto LABEL_91;
            if ( v25->m_Items[v26 + 1] >= 1 )
            {
              transform = (__int64)this->fields.CommandCodeListParent;
              if ( !transform )
                goto LABEL_90;
              transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
              if ( !transform )
                goto LABEL_90;
              if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) <= v21 )
              {
                v29 = (Il2CppObject *)this->fields.CommandCodeInfoPrefab;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                transform = (__int64)UnityEngine_Object__Instantiate_object_(
                                       v29,
                                       (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
                if ( !transform )
                  goto LABEL_90;
                v28 = (UnityEngine_GameObject_o *)transform;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
                transform = (__int64)UnityEngine_GameObject__get_transform(v28, 0LL);
                if ( !this->fields.CommandCodeListParent )
                  goto LABEL_90;
                v30 = (UnityEngine_Transform_o *)transform;
                transform = (__int64)UnityEngine_GameObject__get_transform(this->fields.CommandCodeListParent, 0LL);
                if ( !v30 )
                  goto LABEL_90;
                UnityEngine_Transform__set_parent(v30, (UnityEngine_Transform_o *)transform, 0LL);
                transform = (__int64)UnityEngine_GameObject__get_transform(v28, 0LL);
                if ( !transform )
                  goto LABEL_90;
                v41.fields.x = 0.0;
                v41.fields.z = 0.0;
                v41.fields.y = v23;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v41, 0LL);
                transform = (__int64)UnityEngine_GameObject__get_transform(v28, 0LL);
                v31 = (UnityEngine_Transform_o *)transform;
                if ( !byte_4BD6BB6 )
                {
                  transform = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                  byte_4BD6BB6 = 1;
                }
                if ( !v31 )
                  goto LABEL_90;
                UnityEngine_Transform__set_localScale(v31, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
                transform = (__int64)UnityEngine_GameObject__get_transform(v28, 0LL);
                v32 = (UnityEngine_Transform_o *)transform;
                if ( !byte_4BD6BB7 )
                {
                  transform = sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
                  byte_4BD6BB7 = 1;
                }
                if ( !v32 )
                  goto LABEL_90;
                UnityEngine_Transform__set_localRotation(
                  v32,
                  UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                  0LL);
              }
              else
              {
                transform = (__int64)this->fields.CommandCodeListParent;
                if ( !transform )
                  goto LABEL_90;
                transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
                if ( !transform )
                  goto LABEL_90;
                transform = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v21, 0LL);
                if ( !transform )
                  goto LABEL_90;
                transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
                if ( !transform )
                  goto LABEL_90;
                v28 = (UnityEngine_GameObject_o *)transform;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
              }
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   v28,
                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
              if ( (transform & 1) != 0 )
              {
                if ( !idList )
                  goto LABEL_90;
                if ( v26 >= idList->max_length )
                  goto LABEL_91;
                if ( !titleList )
                  goto LABEL_90;
                if ( v26 >= titleList->max_length )
                  goto LABEL_91;
                if ( !explanationList )
                  goto LABEL_90;
                if ( v26 >= explanationList->max_length )
                  goto LABEL_91;
                if ( !Component_object )
                  goto LABEL_90;
                CommandCodeSkillInfo__Set(
                  (CommandCodeSkillInfo_o *)Component_object,
                  v24,
                  idList->m_Items[v26 + 1],
                  titleList->m_Items[v26],
                  explanationList->m_Items[v26],
                  v26 == 0,
                  0LL);
              }
              v25 = idList;
              v34 = -100.0;
              if ( !v26 )
                v34 = -126.0;
              v23 = v23 + v34;
              ++v21;
            }
            ++v26;
            if ( !v25 )
              goto LABEL_90;
          }
          CommandCodeIds = v36;
        }
      }
      LODWORD(v20) = CommandCodeIds->max_length;
      ++v22;
    }
    while ( (__int64)v22 < (int)v20 );
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantConfConponent__StartOpenTab(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDF6C6 & 1) == 0 )
  {
    sub_1C21E38(&BattleServantConfConponent__StartOpenTab_d__91_TypeInfo);
    byte_4BDF6C6 = 1;
  }
  v3 = sub_1C22084(BattleServantConfConponent__StartOpenTab_d__91_TypeInfo);
  BattleServantConfConponent__StartOpenTab_d__91___ctor((BattleServantConfConponent__StartOpenTab_d__91_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_String_o *__fastcall BattleServantConfConponent__get_closeBtnPath(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x19
  __int64 *v6; // x8

  if ( (byte_4BDF6CB & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_18324/*"close"*/);
    sub_1C21E38(&StringLiteral_14794/*"Top/close"*/);
    byte_4BDF6CB = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1C22094(0LL, v4);
  v5 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_14794/*"Top/close"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
    v6 = &StringLiteral_14794/*"Top/close"*/;
  else
    v6 = &StringLiteral_18324/*"close"*/;
  return (System_String_o *)*v6;
}


BattleServantData_o *__fastcall BattleServantConfConponent__get_svtData(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  return this->fields.bsvtData;
}


bool __fastcall BattleServantConfConponent__isTargetSvt(
        BattleServantConfConponent_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleServantData_o *bsvtData; // x8

  bsvtData = this->fields.bsvtData;
  return bsvtData && bsvtData->fields.uniqueId == uniqueId;
}


void __fastcall BattleServantConfConponent__setCallBackPushClose(
        BattleServantConfConponent_o *this,
        BattleServantConfConponent_CloseButtonCallBack_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.callback_close = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.callback_close,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantConfConponent__setConfData(
        BattleServantConfConponent_o *this,
        BattleServantData_o *inbsvtData,
        bool isShowBuffIcon,
        BattleInfoData_o *battleInfoData,
        bool isNpc,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleInfoData_o *battle_info; // x24
  BattleServantData_o **p_bsvtData; // x21
  UnityEngine_Object_o *data; // x24
  BattleServantData_o *bsvtData; // x0
  System_String_o *v16; // x1
  struct BattleData_o *v17; // x8
  UnityEngine_Object_o *shortNameLabel; // x25
  UILabel_o *v19; // x25
  UnityEngine_Object_o *atklabel; // x25
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  struct BattleServantData_o *v24; // x8
  UILabel_o *v25; // x25
  Il2CppObject *v26; // x0
  struct BattleServantData_o *v27; // x8
  BattleViewBufflistComponent_o *buffListView; // x25
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  int32_t v34; // w23
  UnityEngine_Object_o *equipObj; // x24
  UnityEngine_GameObject_o *v36; // x24
  float LocalPositionY; // s0
  UnityEngine_Object_o *npRoot; // x24
  bool v39; // w0
  TreasureDvcLvEntity_o *v40; // x24
  UIWidget_o *npdetail; // x25
  UILabel_o *v42; // x25
  System_String_o *DetalShort_41303728; // x0
  UILabel_o *maxNp; // x25
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  Il2CppObject *v48; // x0
  struct UILabel_o *v49; // x8
  UILabel_o *nplevel; // x24
  System_String_o *v51; // x1
  UnityEngine_Object_o *v52; // x24
  bool IsNpDetailActive; // w24
  UITexture_o *facetex; // x23
  int32_t v55; // w24
  int32_t v56; // w25
  int32_t CommandDispLimitCount; // w26
  struct UITexture_o *Manager__loadCommandCard; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  UnityEngine_Object_o *havenotTdLabel; // x22
  bool v66; // w1
  System_String_o **p_svtOverwriteName; // x8
  UnityEngine_Object_o *unknownNp; // x25
  UILabel_o *v69; // x25
  UnityEngine_Object_o *commandCard; // x24
  BattleCommandData_o *v71; // x24
  UnityEngine_Object_o *npSpeedChange; // x22
  UnityEngine_Object_o *classIcon; // x21
  ServantClassIconComponent_o *v74; // x21
  int32_t IconSpriteScaledWidth; // w0
  UnityEngine_Object_o *v76; // x21
  int32_t v77; // w20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v79; // x1
  int v80; // [xsp+Ch] [xbp-64h] BYREF
  int32_t atk; // [xsp+18h] [xbp-58h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-54h] BYREF

  battle_info = battleInfoData;
  if ( (byte_4BDF6BB & 1) == 0 )
  {
    sub_1C21E38(&BattleCommandData_TypeInfo);
    sub_1C21E38(&BattleServantConfConponent_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIAnchor___);
    sub_1C21E38(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_9526/*"NP_UNKNOWN"*/);
    sub_1C21E38(&StringLiteral_25376/*"{0:#,0}"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_9117/*"Max {0}%"*/);
    byte_4BDF6BB = 1;
  }
  lv = 0;
  this->fields.bsvtData = inbsvtData;
  p_bsvtData = &this->fields.bsvtData;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.bsvtData,
    (int64_t)inbsvtData,
    isShowBuffIcon,
    (int32_t)battleInfoData,
    (System_String_o *)isNpc,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  if ( this->fields.bsvtData )
  {
    if ( !battle_info )
    {
      data = (UnityEngine_Object_o *)this->fields.data;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
      battle_info = 0LL;
      if ( ((unsigned __int8)bsvtData & 1) != 0 )
      {
        v17 = this->fields.data;
        if ( !v17 )
          goto LABEL_144;
        battle_info = v17->fields.battle_info;
      }
    }
    shortNameLabel = (UnityEngine_Object_o *)this->fields.shortNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(shortNameLabel, 0LL, 0LL) )
    {
      bsvtData = this->fields.bsvtData;
      if ( !bsvtData )
        goto LABEL_144;
      v19 = this->fields.shortNameLabel;
      bsvtData = (BattleServantData_o *)BattleServantData__getServantShortName(bsvtData, 0LL);
      if ( !v19 )
        goto LABEL_144;
      UILabel__set_text(v19, (System_String_o *)bsvtData, 0LL);
      CommonFunction__ScalingLabelWidth(this->fields.shortNameLabel, 270, 0LL);
    }
    atklabel = (UnityEngine_Object_o *)this->fields.atklabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(atklabel, 0LL, 0LL);
    if ( ((unsigned __int8)bsvtData & 1) != 0 )
    {
      v24 = this->fields.bsvtData;
      if ( !v24 )
        goto LABEL_144;
      v25 = this->fields.atklabel;
      atk = v24->fields.atk;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &atk, v21, v22, v23);
      bsvtData = (BattleServantData_o *)System_String__Format((System_String_o *)StringLiteral_25376/*"{0:#,0}"*/, v26, 0LL);
      if ( !v25 )
        goto LABEL_144;
      UILabel__set_text(v25, (System_String_o *)bsvtData, 0LL);
    }
    bsvtData = (BattleServantData_o *)this->fields.buffListView;
    if ( bsvtData )
    {
      BattleViewBufflistComponent__setClassIcon((BattleViewBufflistComponent_o *)bsvtData, this->fields.bsvtData, 0LL);
      v27 = this->fields.bsvtData;
      if ( v27 )
      {
        bsvtData = (BattleServantData_o *)v27->fields.buffData;
        if ( bsvtData )
        {
          buffListView = this->fields.buffListView;
          bsvtData = (BattleServantData_o *)BattleBuffData__getShowServantConf((BattleBuffData_o *)bsvtData, 0LL);
          if ( buffListView )
          {
            BattleViewBufflistComponent__setBuffList(buffListView, (BattleBuffData_ShowBuffData_array *)bsvtData, 0LL);
            BattleServantConfConponent__setEquipList(this, v29);
            BattleServantConfConponent__SetClassSkillList(this, battle_info, v30);
            BattleServantConfConponent__SetAppendSkillList(this, battle_info, v31);
            if ( !isNpc )
              BattleServantConfConponent__SetClassBoardSkillList(this, v32);
            BattleServantConfConponent__SetCommandCard(this, v32);
            BattleServantConfConponent__SetCommandCodeSkillList(this, v33);
            bsvtData = this->fields.bsvtData;
            if ( bsvtData )
            {
              bsvtData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(bsvtData, 1, 0LL, 0LL);
              if ( *p_bsvtData )
              {
                v34 = (int)bsvtData;
                lv = (*p_bsvtData)->fields.treasuredvcLevel;
                equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(equipObj, 0LL, 0LL) )
                {
                  v36 = this->fields.equipObj;
                  LocalPositionY = GameObjectExtensions__GetLocalPositionY(v36, 0LL);
                  GameObjectExtensions__SetLocalPositionY(v36, LocalPositionY - (float)this->fields.adjustHeight, 0LL);
                }
                this->fields.adjustHeight = 0;
                npRoot = (UnityEngine_Object_o *)this->fields.npRoot;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v39 = UnityEngine_Object__op_Inequality(npRoot, 0LL, 0LL);
                if ( v34 < 1 )
                {
                  if ( v39 )
                  {
                    bsvtData = (BattleServantData_o *)this->fields.npRoot;
                    if ( !bsvtData )
                      goto LABEL_144;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0LL);
                    bsvtData = (BattleServantData_o *)this->fields.commandCard;
                    if ( !bsvtData )
                      goto LABEL_144;
                    bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)bsvtData,
                                                        0LL);
                    if ( !bsvtData )
                      goto LABEL_144;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0LL);
                  }
                  facetex = this->fields.facetex;
                  bsvtData = this->fields.bsvtData;
                  if ( !bsvtData )
                    goto LABEL_144;
                  bsvtData = (BattleServantData_o *)BattleServantData__GetCommandImageSvtId(bsvtData, 0LL);
                  if ( !*p_bsvtData )
                    goto LABEL_144;
                  v55 = (int)bsvtData;
                  bsvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(*p_bsvtData, 1, 0LL);
                  if ( !*p_bsvtData )
                    goto LABEL_144;
                  v56 = (int)bsvtData;
                  CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(*p_bsvtData, 0LL);
                  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                  Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(
                                               facetex,
                                               v55,
                                               v56,
                                               CommandDispLimitCount,
                                               0LL);
                  this->fields.facetex = Manager__loadCommandCard;
                  sub_1C21DDC(
                    (PartyOrganizationUtility_o *)&this->fields.facetex,
                    (int64_t)Manager__loadCommandCard,
                    v59,
                    v60,
                    v61,
                    v62,
                    v63,
                    v64);
                  havenotTdLabel = (UnityEngine_Object_o *)this->fields.havenotTdLabel;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( !UnityEngine_Object__op_Inequality(havenotTdLabel, 0LL, 0LL) )
                    goto LABEL_119;
                  bsvtData = (BattleServantData_o *)this->fields.havenotTdLabel;
                  if ( !bsvtData )
                    goto LABEL_144;
                  bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)bsvtData,
                                                      0LL);
                  if ( !bsvtData )
                    goto LABEL_144;
                  v66 = 1;
                  goto LABEL_118;
                }
                if ( !v39 )
                  goto LABEL_119;
                bsvtData = (BattleServantData_o *)this->fields.npRoot;
                if ( !bsvtData )
                  goto LABEL_144;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                bsvtData = (BattleServantData_o *)this->fields.commandCard;
                if ( !bsvtData )
                  goto LABEL_144;
                bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)bsvtData,
                                                    0LL);
                if ( !bsvtData )
                  goto LABEL_144;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                bsvtData = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !bsvtData )
                  goto LABEL_144;
                bsvtData = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)bsvtData,
                                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                if ( !bsvtData )
                  goto LABEL_144;
                bsvtData = (BattleServantData_o *)TreasureDvcLvMaster__GetEntity(
                                                    (TreasureDvcLvMaster_o *)bsvtData,
                                                    v34,
                                                    lv,
                                                    0LL);
                if ( !this->fields.maxNp )
                  goto LABEL_144;
                v40 = (TreasureDvcLvEntity_o *)bsvtData;
                UILabel__set_text(this->fields.maxNp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                if ( v40 )
                {
                  npdetail = (UIWidget_o *)this->fields.npdetail;
                  bsvtData = (BattleServantData_o *)BattleServantConfConponent_TypeInfo;
                  if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
                  if ( !npdetail )
                    goto LABEL_144;
                  UIWidget__set_height(
                    npdetail,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                    0LL);
                  v42 = this->fields.npdetail;
                  DetalShort_41303728 = TreasureDvcLvEntity__getDetalShort_41303728(v40, lv, 0LL);
                  WrapControlText__textBBCodeAdjust(
                    v42,
                    DetalShort_41303728,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    0LL);
                  maxNp = this->fields.maxNp;
                  v80 = 100 * v40->fields.gaugeCount;
                  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80, v45, v46, v47);
                  bsvtData = (BattleServantData_o *)System_String__Format(
                                                      (System_String_o *)StringLiteral_9117/*"Max {0}%"*/,
                                                      v48,
                                                      0LL);
                  if ( !maxNp )
                    goto LABEL_144;
                  UILabel__set_text(maxNp, (System_String_o *)bsvtData, 0LL);
                  v49 = this->fields.npdetail;
                  if ( !v49 )
                    goto LABEL_144;
                  if ( BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT < v49->fields.mHeight )
                  {
                    if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
                      v49 = this->fields.npdetail;
                      if ( !v49 )
                        goto LABEL_144;
                    }
                    this->fields.adjustHeight = BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT
                                              - v49->fields.mHeight;
                  }
                }
                nplevel = this->fields.nplevel;
                bsvtData = (BattleServantData_o *)System_Int32__ToString((int32_t)&lv, 0LL);
                if ( !nplevel )
                  goto LABEL_144;
                if ( bsvtData )
                  v51 = (System_String_o *)bsvtData;
                else
                  v51 = (System_String_o *)StringLiteral_1/*""*/;
                UILabel__set_text(nplevel, v51, 0LL);
                v52 = (UnityEngine_Object_o *)this->fields.data;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v52, 0LL, 0LL) )
                {
                  bsvtData = (BattleServantData_o *)this->fields.data;
                  if ( !bsvtData )
                    goto LABEL_144;
                  IsNpDetailActive = BattleData__IsNpDetailActive((BattleData_o *)bsvtData, *p_bsvtData, 1, 0LL);
                }
                else
                {
                  IsNpDetailActive = 1;
                }
                bsvtData = (BattleServantData_o *)this->fields.maxNp;
                if ( bsvtData )
                {
                  bsvtData = (BattleServantData_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)bsvtData,
                                                      0LL);
                  if ( bsvtData )
                  {
                    bsvtData = (BattleServantData_o *)UnityEngine_Transform__get_parent(
                                                        (UnityEngine_Transform_o *)bsvtData,
                                                        0LL);
                    if ( bsvtData )
                    {
                      bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)bsvtData,
                                                          0LL);
                      if ( bsvtData )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, IsNpDetailActive, 0LL);
                        bsvtData = (BattleServantData_o *)this->fields.nplevel;
                        if ( bsvtData )
                        {
                          bsvtData = (BattleServantData_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)bsvtData,
                                                              0LL);
                          if ( bsvtData )
                          {
                            bsvtData = (BattleServantData_o *)UnityEngine_Transform__get_parent(
                                                                (UnityEngine_Transform_o *)bsvtData,
                                                                0LL);
                            if ( bsvtData )
                            {
                              bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)bsvtData,
                                                                  0LL);
                              if ( bsvtData )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)bsvtData,
                                  IsNpDetailActive,
                                  0LL);
                                bsvtData = (BattleServantData_o *)this->fields.npdetail;
                                if ( IsNpDetailActive )
                                {
                                  if ( !bsvtData )
                                    goto LABEL_144;
                                  p_svtOverwriteName = &bsvtData->fields.svtOverwriteName;
                                }
                                else
                                {
                                  if ( !bsvtData )
                                    goto LABEL_144;
                                  p_svtOverwriteName = (System_String_o **)&StringLiteral_1/*""*/;
                                }
                                UILabel__set_text((UILabel_o *)bsvtData, *p_svtOverwriteName, 0LL);
                                unknownNp = (UnityEngine_Object_o *)this->fields.unknownNp;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(unknownNp, 0LL, 0LL);
                                if ( ((unsigned __int8)bsvtData & 1) != 0 )
                                {
                                  v69 = this->fields.unknownNp;
                                  if ( IsNpDetailActive )
                                  {
                                    v16 = (System_String_o *)StringLiteral_1/*""*/;
                                  }
                                  else
                                  {
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    bsvtData = (BattleServantData_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_9526/*"NP_UNKNOWN"*/,
                                                                        0LL);
                                    v16 = (System_String_o *)bsvtData;
                                  }
                                  if ( !v69 )
                                    goto LABEL_144;
                                  UILabel__set_text(v69, v16, 0LL);
                                }
                                commandCard = (UnityEngine_Object_o *)this->fields.commandCard;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( UnityEngine_Object__op_Inequality(commandCard, 0LL, 0LL) )
                                {
                                  v71 = (BattleCommandData_o *)sub_1C22084(BattleCommandData_TypeInfo);
                                  BattleCommandData___ctor(v71, 0LL);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_144;
                                  bsvtData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId_44291700(
                                                                      bsvtData,
                                                                      0,
                                                                      0LL);
                                  if ( !v71 )
                                    goto LABEL_144;
                                  v71->fields._type = (int)bsvtData;
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_144;
                                  v71->fields.svtlimit = BattleServantData__getCommandDispLimitCount(bsvtData, 0LL);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_144;
                                  v71->fields._loadsvtLimit = BattleServantData__getDispLimitCount(bsvtData, 1, 0LL);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_144;
                                  v71->fields.uniqueId = bsvtData->fields.uniqueId;
                                  v71->fields.svtId = BattleServantData__getSvtId(bsvtData, 0LL);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_144;
                                  v71->fields.imageSvtId = BattleServantData__GetCommandImageSvtId(bsvtData, 0LL);
                                  v71->fields.treasureDvc = v34;
                                  bsvtData = (BattleServantData_o *)this->fields.commandCard;
                                  if ( !bsvtData )
                                    goto LABEL_144;
                                  BattleCommandComponent__setData(
                                    (BattleCommandComponent_o *)bsvtData,
                                    v71,
                                    this->fields.bsvtData,
                                    0,
                                    isShowBuffIcon,
                                    0,
                                    1,
                                    0LL);
                                  bsvtData = (BattleServantData_o *)this->fields.commandCard;
                                  if ( !bsvtData )
                                    goto LABEL_144;
                                  BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(
                                    (BattleCommandComponent_o *)bsvtData,
                                    0LL);
                                }
                                bsvtData = (BattleServantData_o *)this->fields.havenotTdLabel;
                                if ( !bsvtData )
                                  goto LABEL_144;
                                bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)bsvtData,
                                                                    0LL);
                                if ( !bsvtData )
                                  goto LABEL_144;
                                v66 = 0;
LABEL_118:
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, v66, 0LL);
LABEL_119:
                                npSpeedChange = (UnityEngine_Object_o *)this->fields.npSpeedChange;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( UnityEngine_Object__op_Inequality(npSpeedChange, 0LL, 0LL) )
                                {
                                  bsvtData = (BattleServantData_o *)this->fields.npSpeedChange;
                                  if ( !bsvtData )
                                    goto LABEL_144;
                                  BattleServantNPSpeedChangeComponent__SetData(
                                    (BattleServantNPSpeedChangeComponent_o *)bsvtData,
                                    *p_bsvtData,
                                    0LL);
                                }
                                classIcon = (UnityEngine_Object_o *)this->fields.classIcon;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(classIcon, 0LL, 0LL);
                                if ( ((unsigned __int8)bsvtData & 1) == 0 )
                                  goto LABEL_142;
                                if ( inbsvtData )
                                {
                                  v74 = this->fields.classIcon;
                                  bsvtData = (BattleServantData_o *)BattleServantData__getClassId(inbsvtData, 0LL);
                                  if ( v74 )
                                  {
                                    ServantClassIconComponent__SetImage(
                                      v74,
                                      (int32_t)bsvtData,
                                      inbsvtData->fields._frameType_k__BackingField,
                                      0LL);
                                    bsvtData = (BattleServantData_o *)this->fields.classIcon;
                                    if ( bsvtData )
                                    {
                                      IconSpriteScaledWidth = ServantClassIconComponent__GetIconSpriteScaledWidth(
                                                                (ServantClassIconComponent_o *)bsvtData,
                                                                0LL);
                                      v76 = (UnityEngine_Object_o *)this->fields.shortNameLabel;
                                      v77 = IconSpriteScaledWidth;
                                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                      if ( UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
                                      {
                                        bsvtData = (BattleServantData_o *)this->fields.shortNameLabel;
                                        if ( !bsvtData )
                                          goto LABEL_144;
                                        if ( bsvtData->fields._iconLimitCount_k__BackingField.fields.fakeValue + v77 >= 270 )
                                          CommonFunction__ScalingLabelWidth((UILabel_o *)bsvtData, 270 - v77, 0LL);
                                      }
                                      bsvtData = (BattleServantData_o *)this->fields.classIcon;
                                      if ( bsvtData )
                                      {
                                        Component_object = UnityEngine_Component__GetComponent_object_(
                                                             (UnityEngine_Component_o *)bsvtData,
                                                             (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIAnchor___);
                                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                        bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(
                                                                            (UnityEngine_Object_o *)Component_object,
                                                                            0LL,
                                                                            0LL);
                                        if ( ((unsigned __int8)bsvtData & 1) == 0 )
                                          goto LABEL_142;
                                        if ( Component_object )
                                        {
                                          UnityEngine_Behaviour__set_enabled(
                                            (UnityEngine_Behaviour_o *)Component_object,
                                            1,
                                            0LL);
LABEL_142:
                                          BattleServantConfConponent__SetAttribute(this, (const MethodInfo *)v16);
                                          BattleServantConfConponent__ChangeLayout(this, v79);
                                          return;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_144:
    sub_1C22094(bsvtData, v16);
  }
}


void __fastcall BattleServantConfConponent__setEquipList(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseEquipSkillInfoPrefab; // x20
  UnityEngine_Object_o *equipSkillInfoRoot; // x20
  Il2CppObject *Master_object; // x20
  __int64 BattleSkillIdList; // x0
  __int64 v7; // x1
  struct BattleServantData_o *bsvtData; // x8
  struct BattleUserServantData_array *equipList; // x27
  __int64 v10; // x8
  SkillLvMaster_o *v11; // x21
  unsigned __int64 v12; // x29
  Il2CppClass **v13; // x19
  __int64 *v14; // x19
  __int64 v15; // t1
  __int64 v16; // x22
  __int64 v17; // x23
  unsigned __int64 v18; // x19
  float v19; // s8
  int32_t v20; // w25
  int32_t v21; // w26
  unsigned __int64 v22; // x20
  struct BattleUserServantData_array *v23; // x29
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_List_object__o *equipPossessionSkillInfoComponentList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v32; // x10
  __int64 size; // x11
  EquipPossessionSkillInfoComponent_o *v34; // x27
  Il2CppClass **v35; // x0
  BattleServantConfConponent_o *v36; // x21
  System_String_o *v37; // x28
  float v38; // s0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_List_object__o *v45; // x8
  struct System_Object_array *v46; // x9
  _QWORD *v47; // x10
  __int64 v48; // x11
  int64_t v49; // x1
  Il2CppClass **v50; // x0
  Il2CppObject *v51; // [xsp+0h] [xbp-A0h]
  SkillLvMaster_o *v52; // [xsp+8h] [xbp-98h]
  __int64 v53; // [xsp+18h] [xbp-88h]
  int32_t index; // [xsp+24h] [xbp-7Ch]
  SkillLvEntity_o *v55; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4BDF6BC & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF6BC = 1;
  }
  entity = 0LL;
  v55 = 0LL;
  if ( this->fields.bsvtData )
  {
    baseEquipSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.baseEquipSkillInfoPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(baseEquipSkillInfoPrefab, 0LL, 0LL) )
    {
      equipSkillInfoRoot = (UnityEngine_Object_o *)this->fields.equipSkillInfoRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(equipSkillInfoRoot, 0LL, 0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillMaster___);
        BattleSkillIdList = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillLvMaster___);
        bsvtData = this->fields.bsvtData;
        this->fields.isEquip = 0;
        if ( !bsvtData )
          goto LABEL_51;
        equipList = bsvtData->fields.equipList;
        if ( !equipList )
          goto LABEL_51;
        v10 = *(_QWORD *)&equipList->max_length;
        if ( (int)v10 >= 1 )
        {
          v11 = (SkillLvMaster_o *)BattleSkillIdList;
          v12 = 0LL;
          v51 = Master_object;
          v52 = (SkillLvMaster_o *)BattleSkillIdList;
          do
          {
            if ( v12 >= (unsigned int)v10 )
LABEL_52:
              sub_1C2209C(BattleSkillIdList, v7);
            v13 = &equipList->obj.klass + v12;
            v15 = (__int64)v13[4];
            v14 = (__int64 *)(v13 + 4);
            BattleSkillIdList = v15;
            if ( v15 )
            {
              BattleSkillIdList = (__int64)BattleUserServantData__getBattleSkillIdList(
                                             (BattleUserServantData_o *)BattleSkillIdList,
                                             0LL);
              if ( v12 >= equipList->max_length )
                goto LABEL_52;
              v16 = BattleSkillIdList;
              BattleSkillIdList = *v14;
              if ( !*v14 )
                goto LABEL_51;
              BattleSkillIdList = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)BattleSkillIdList + 408LL))(
                                    BattleSkillIdList,
                                    *(_QWORD *)(*(_QWORD *)BattleSkillIdList + 416LL));
              if ( !v16 )
                goto LABEL_51;
              if ( *(int *)(v16 + 24) >= 1 )
              {
                v17 = BattleSkillIdList;
                v18 = 0LL;
                v19 = 0.0;
                index = 0;
                v53 = BattleSkillIdList + 32;
                do
                {
                  BattleSkillIdList = (__int64)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    BattleSkillIdList = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( *(_DWORD *)(*(_QWORD *)(BattleSkillIdList + 184) + 44LL) <= index )
                    break;
                  if ( v18 >= *(unsigned int *)(v16 + 24) )
                    goto LABEL_52;
                  if ( !v17 )
                    goto LABEL_51;
                  if ( v18 >= *(unsigned int *)(v17 + 24) )
                    goto LABEL_52;
                  v20 = *(_DWORD *)(v16 + 32 + 4 * v18);
                  v21 = *(_DWORD *)(v53 + 4 * v18);
                  entity = 0LL;
                  if ( !Master_object )
                    goto LABEL_51;
                  BattleSkillIdList = DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        v20,
                                        (const MethodInfo_325BE14 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                  if ( (BattleSkillIdList & 1) != 0 )
                  {
                    v55 = 0LL;
                    if ( !v11 )
                      goto LABEL_51;
                    BattleSkillIdList = SkillLvMaster__TryGetEntity(v11, &v55, v20, v21, 0LL);
                    if ( (BattleSkillIdList & 1) != 0 )
                    {
                      v22 = v12;
                      v23 = equipList;
                      BattleSkillIdList = (__int64)EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
                                                     this->fields.baseEquipSkillInfoPrefab,
                                                     this->fields.equipSkillInfoRoot,
                                                     index,
                                                     v19,
                                                     0LL);
                      equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.equipPossessionSkillInfoComponentList;
                      if ( !equipPossessionSkillInfoComponentList )
                        goto LABEL_51;
                      items = equipPossessionSkillInfoComponentList->fields._items;
                      v32 = Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__;
                      ++equipPossessionSkillInfoComponentList->fields._version;
                      if ( !items )
                        goto LABEL_51;
                      size = equipPossessionSkillInfoComponentList->fields._size;
                      v34 = (EquipPossessionSkillInfoComponent_o *)BattleSkillIdList;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          equipPossessionSkillInfoComponentList,
                          (Il2CppObject *)BattleSkillIdList,
                          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v35 = &items->obj.klass + size;
                        equipPossessionSkillInfoComponentList->fields._size = size + 1;
                        v35[4] = (Il2CppClass *)v34;
                        sub_1C21DDC((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v34, v24, v25, v26, v27, v28, v29);
                      }
                      BattleSkillIdList = (__int64)entity;
                      if ( !entity )
                        goto LABEL_51;
                      v36 = this;
                      BattleSkillIdList = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                      if ( !v55 )
                        goto LABEL_51;
                      v37 = (System_String_o *)BattleSkillIdList;
                      BattleSkillIdList = (__int64)SkillLvEntity__getDetail_41206052(v55, v21, 0, 0LL);
                      if ( !v34 )
                        goto LABEL_51;
                      v38 = EquipPossessionSkillInfoComponent__SetSkill(
                              v34,
                              v20,
                              v37,
                              (System_String_o *)BattleSkillIdList,
                              0LL);
                      v36->fields.isEquip = 1;
                      this = v36;
                      equipList = v23;
                      v12 = v22;
                      Master_object = v51;
                      v11 = v52;
                      v19 = v19 + v38;
                      ++index;
                    }
                  }
                  ++v18;
                }
                while ( (__int64)v18 < *(int *)(v16 + 24) );
              }
            }
            LODWORD(v10) = equipList->max_length;
            ++v12;
          }
          while ( (__int64)v12 < (int)v10 );
        }
        if ( !this->fields.isEquip )
        {
          BattleSkillIdList = (__int64)EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
                                         this->fields.baseEquipSkillInfoPrefab,
                                         this->fields.equipSkillInfoRoot,
                                         0,
                                         0.0,
                                         0LL);
          v45 = (System_Collections_Generic_List_object__o *)this->fields.equipPossessionSkillInfoComponentList;
          if ( v45 )
          {
            v46 = v45->fields._items;
            v47 = Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__;
            ++v45->fields._version;
            if ( v46 )
            {
              v48 = v45->fields._size;
              v49 = BattleSkillIdList;
              if ( (unsigned int)v48 >= v46->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v45,
                  (Il2CppObject *)BattleSkillIdList,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
              }
              else
              {
                v50 = &v46->obj.klass + v48;
                v45->fields._size = v48 + 1;
                v50[4] = (Il2CppClass *)v49;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v50 + 4), v49, v39, v40, v41, v42, v43, v44);
              }
              return;
            }
          }
LABEL_51:
          sub_1C22094(BattleSkillIdList, v7);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantConfConponent_CloseButtonCallBack___ctor(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A66AA4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A66A64;
}


System_IAsyncResult_o *__fastcall BattleServantConfConponent_CloseButtonCallBack__BeginInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1C21DEC(this, &v5, callback, object);
}


void __fastcall BattleServantConfConponent_CloseButtonCallBack__EndInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
}


void __fastcall BattleServantConfConponent_CloseButtonCallBack__Invoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall BattleServantConfConponent__StartOpenTab_d__91___ctor(
        BattleServantConfConponent__StartOpenTab_d__91_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantConfConponent__StartOpenTab_d__91__MoveNext(
        BattleServantConfConponent__StartOpenTab_d__91_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent__StartOpenTab_d__91_o *v2; // x19
  int32_t _1__state; // w8
  struct BattleServantConfConponent_o *_4__this; // x20
  UnityEngine_Object_o *BattleServantAbilityObj; // x21
  bool v6; // w21
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  v2 = this;
  if ( (byte_4BDF6D7 & 1) == 0 )
  {
    this = (BattleServantConfConponent__StartOpenTab_d__91_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF6D7 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
LABEL_17:
      sub_1C22094(this, method);
    if ( BattleServantConfConponent__IsLastOpenServantAbility(_4__this, 0LL) )
      BattleServantConfConponent__OnClickServantAbility(_4__this, 0LL);
    else
      BattleServantConfConponent__OnClickServantState(_4__this, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_17;
  BattleServantAbilityObj = (UnityEngine_Object_o *)_4__this->fields.BattleServantAbilityObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(BattleServantAbilityObj, 0LL, 0LL) )
    return 0;
  this = (BattleServantConfConponent__StartOpenTab_d__91_o *)_4__this->fields.BattleServantAbilityObj;
  v6 = 1;
  _4__this->fields.isOpenAfter = 1;
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v2->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C21DDC(p__2__current, 0LL, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return v6;
}


Il2CppObject *__fastcall BattleServantConfConponent__StartOpenTab_d__91__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantConfConponent__StartOpenTab_d__91_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantConfConponent__StartOpenTab_d__91__System_Collections_IEnumerator_Reset(
        BattleServantConfConponent__StartOpenTab_d__91_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleServantConfConponent__StartOpenTab_d__91_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattleServantConfConponent__StartOpenTab_d__91__System_Collections_IEnumerator_get_Current(
        BattleServantConfConponent__StartOpenTab_d__91_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantConfConponent__StartOpenTab_d__91__System_IDisposable_Dispose(
        BattleServantConfConponent__StartOpenTab_d__91_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantConfConponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDF6D5 & 1) == 0 )
  {
    sub_1C21E38(&BattleServantConfConponent___c_TypeInfo);
    byte_4BDF6D5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattleServantConfConponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleServantConfConponent___c_TypeInfo->static_fields->__9 = (struct BattleServantConfConponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleServantConfConponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleServantConfConponent___c___ctor(BattleServantConfConponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantConfConponent___c___ChangeLayout_b__78_0(
        BattleServantConfConponent___c_o *this,
        int32_t codeId,
        const MethodInfo *method)
{
  return codeId > 0;
}


int32_t __fastcall BattleServantConfConponent___c___GetSpecialPassiveSkillStartIndex_b__80_0(
        BattleServantConfConponent___c_o *this,
        ServantPassiveSkillEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.skillId;
}


bool __fastcall BattleServantConfConponent___c___SetCommandCodeSkillList_b__84_0(
        BattleServantConfConponent___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id > 0;
}


void __fastcall BattleServantConfConponent___c__DisplayClass80_0___ctor(
        BattleServantConfConponent___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantConfConponent___c__DisplayClass80_0___GetSpecialPassiveSkillStartIndex_b__1(
        BattleServantConfConponent___c__DisplayClass80_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *passiveIdHashSet; // x0

  if ( (byte_4BDF6D6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4BDF6D6 = 1;
  }
  passiveIdHashSet = this->fields.passiveIdHashSet;
  if ( !passiveIdHashSet )
    sub_1C22094(0LL, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           passiveIdHashSet,
           x,
           (const MethodInfo_3502E74 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}