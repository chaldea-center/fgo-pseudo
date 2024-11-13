void __fastcall BattleServantConfConponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct BattleServantConfConponent_StaticFields *static_fields; // x8

  if ( (byte_4B19296 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantConfConponent_TypeInfo, v1, v2);
    byte_4B19296 = 1;
  }
  static_fields = BattleServantConfConponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->DETAIL_FONT_SIZE = xmmword_BD3040;
  static_fields->EQIUP_SKILL_OBJ_HEIGHT = 110;
}


void __fastcall BattleServantConfConponent___ctor(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B19295 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo, v5, v6);
    byte_4B19295 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__);
  this->fields.equipPossessionSkillInfoComponentList = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)v7;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.equipPossessionSkillInfoComponentList,
    (int64_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.NotEquipObjHeightPos = 45.0;
  this->fields.ClassSkillInitPosY = -633.0;
  this->fields.AppendSkillInitPosY = -679.0;
  this->fields.isOpenAfter = 1;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleServantConfConponent__ChangeLayout(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q8
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *equipObj; // x20
  __int64 v24; // x1
  UnityEngine_GameObject_o *v25; // x20
  float LocalPositionY; // s0
  System_Collections_Generic_List_object__o *equipPossessionSkillInfoComponentList; // x0
  float v28; // s8
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x9
  BattleServantConfConponent_c *v33; // x8
  int32_t implementedInterfaces_high; // w25
  Il2CppClass *v35; // x9
  BattleServantConfConponent_c *v36; // x0
  UnityEngine_Object_o *CardAndCommandObj; // x20
  __int64 v38; // x1
  unsigned __int64 CommandCodeIds; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Int32_array *v43; // x20
  BattleServantConfConponent___c_c *v44; // x0
  System_Predicate_int__o *_9__79_0; // x21
  Il2CppObject *v46; // x22
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x1
  unsigned __int64 v55; // x9
  unsigned __int64 v56; // x8
  int v57; // w12
  UnityEngine_Object_o *npSpeedChange; // x20
  struct BattleServantNPSpeedChangeComponent_o *v59; // x8
  UnityEngine_Object_o *ClassSkillObj; // x20
  __int64 v61; // x1
  UnityEngine_Object_o *AppendSkillObj; // x20
  __int64 v63; // x1
  UnityEngine_Object_o *classBoardSkillObj; // x20
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B19280 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_FindIndex_int___, method, v2);
    sub_1BCA7E0(&BattleServantConfConponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Predicate_int__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_BattleServantConfConponent___c__ChangeLayout_b__79_0__, v19, v20);
    sub_1BCA7E0(&BattleServantConfConponent___c_TypeInfo, v21, v22);
    byte_4B19280 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(equipObj, 0LL, 0LL) )
  {
    v25 = this->fields.equipObj;
    LocalPositionY = GameObjectExtensions__GetLocalPositionY(v25, 0LL);
    GameObjectExtensions__SetLocalPositionY(v25, LocalPositionY + (float)this->fields.adjustHeight, 0LL);
  }
  if ( this->fields.isEquip )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.equipPossessionSkillInfoComponentList;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_73;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v65,
      equipPossessionSkillInfoComponentList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    v28 = 0.0;
    v66 = v65;
    while ( 1 )
    {
      v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v66,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
      if ( !v29 )
        break;
      current = v66.fields._current;
      if ( !v66.fields._current )
        sub_1BCAA3C(v29, v30);
      klass = v66.fields._current[3].klass;
      if ( !klass )
        sub_1BCAA3C(v29, v30);
      v33 = BattleServantConfConponent_TypeInfo;
      implementedInterfaces_high = HIDWORD(klass->_1.implementedInterfaces);
      if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo, v30);
        v33 = BattleServantConfConponent_TypeInfo;
      }
      if ( implementedInterfaces_high > v33->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT )
      {
        if ( !v33->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v33, v30);
        v35 = current[3].klass;
        if ( !v35 )
          sub_1BCAA3C(v29, v30);
        v33 = BattleServantConfConponent_TypeInfo;
        v28 = v28
            + (float)(BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT
                    - HIDWORD(v35->_1.implementedInterfaces));
      }
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33, v30);
        v33 = BattleServantConfConponent_TypeInfo;
      }
      v28 = v28 - (float)v33->static_fields->EQIUP_SKILL_OBJ_HEIGHT;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v66,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    v36 = BattleServantConfConponent_TypeInfo;
    if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo, v24);
      v36 = BattleServantConfConponent_TypeInfo;
    }
    *(float *)&v3 = v28 + (float)v36->static_fields->EQIUP_SKILL_OBJ_HEIGHT;
  }
  else
  {
    *(float *)&v3 = this->fields.NotEquipObjHeightPos;
  }
  CardAndCommandObj = (UnityEngine_Object_o *)this->fields.CardAndCommandObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  if ( UnityEngine_Object__op_Inequality(CardAndCommandObj, 0LL, 0LL) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.CardAndCommandObj,
      *(float *)&v3 + (float)this->fields.adjustHeight,
      0LL);
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.bsvtData;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_73;
    CommandCodeIds = (unsigned __int64)BattleServantData__GetCommandCodeIds(
                                         (BattleServantData_o *)equipPossessionSkillInfoComponentList,
                                         0LL);
    if ( CommandCodeIds )
    {
      v43 = (System_Int32_array *)CommandCodeIds;
      v44 = BattleServantConfConponent___c_TypeInfo;
      if ( !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo, v40);
        v44 = BattleServantConfConponent___c_TypeInfo;
      }
      _9__79_0 = v44->static_fields->__9__79_0;
      if ( !_9__79_0 )
      {
        if ( !v44->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v44, v40);
          v44 = BattleServantConfConponent___c_TypeInfo;
        }
        v46 = (Il2CppObject *)v44->static_fields->__9;
        _9__79_0 = (System_Predicate_int__o *)sub_1BCAA2C(System_Predicate_int__TypeInfo, v40, v41, v42);
        System_Predicate_int____ctor(_9__79_0, v46, Method_BattleServantConfConponent___c__ChangeLayout_b__79_0__, 0LL);
        static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
        static_fields->__9__79_0 = _9__79_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__79_0,
          (int64_t)_9__79_0,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53);
      }
      if ( System_Array__FindIndex_int_(
             v43,
             (System_Predicate_T__o *)_9__79_0,
             (const MethodInfo_300D4DC *)Method_System_Array_FindIndex_int___) == -1
        || (int)*(_QWORD *)&v43->max_length < 1 )
      {
        LODWORD(CommandCodeIds) = 0;
      }
      else
      {
        v55 = (unsigned int)*(_QWORD *)&v43->max_length;
        v56 = 0LL;
        CommandCodeIds = 0LL;
        do
        {
          if ( v56 >= v55 )
            sub_1BCAA44(CommandCodeIds, v54);
          v57 = v43->m_Items[++v56];
          if ( v57 <= 0 )
            CommandCodeIds = (unsigned int)CommandCodeIds;
          else
            CommandCodeIds = (unsigned int)(CommandCodeIds + 1);
        }
        while ( (__int64)v56 < (int)v55 );
      }
    }
    *(float *)&v3 = *(float *)&v3 - BattleServantNPSpeedChangeComponent__CalcCommandCodeOffset(CommandCodeIds, 0LL);
  }
  npSpeedChange = (UnityEngine_Object_o *)this->fields.npSpeedChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
  if ( UnityEngine_Object__op_Inequality(npSpeedChange, 0LL, 0LL) )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.npSpeedChange;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_73;
    *(float *)&equipPossessionSkillInfoComponentList[3].klass = *(float *)&v3 + (float)this->fields.adjustHeight;
    BattleServantNPSpeedChangeComponent__SetButtonPosition(
      (BattleServantNPSpeedChangeComponent_o *)equipPossessionSkillInfoComponentList,
      0LL);
    v59 = this->fields.npSpeedChange;
    if ( !v59 )
      goto LABEL_73;
    *(float *)&v3 = *(float *)&v3 - (float)v59->fields.contentsHeight;
  }
  ClassSkillObj = (UnityEngine_Object_o *)this->fields.ClassSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  if ( UnityEngine_Object__op_Inequality(ClassSkillObj, 0LL, 0LL) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.ClassSkillObj,
      (float)(*(float *)&v3 + this->fields.ClassSkillInitPosY) + (float)this->fields.adjustHeight,
      0LL);
    *(float *)&v3 = *(float *)&v3 + this->fields.ClassSkillOffset;
  }
  AppendSkillObj = (UnityEngine_Object_o *)this->fields.AppendSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61);
  if ( UnityEngine_Object__op_Inequality(AppendSkillObj, 0LL, 0LL) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.AppendSkillObj,
      (float)(*(float *)&v3 + this->fields.AppendSkillInitPosY) + (float)this->fields.adjustHeight,
      0LL);
    *(float *)&v3 = *(float *)&v3 + this->fields.AppendSkillOffset;
  }
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63);
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0LL, 0LL) )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.classBoardSkillObj;
    if ( !equipPossessionSkillInfoComponentList
      || (equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer, long double, float))equipPossessionSkillInfoComponentList->klass->vtable._4_unknown.method)(
                                                                                                 equipPossessionSkillInfoComponentList,
                                                                                                 equipPossessionSkillInfoComponentList->klass->vtable._5_set_Item.methodPtr,
                                                                                                 v3,
                                                                                                 (float)this->fields.adjustHeight),
          !this->fields.classBoardSkillObj) )
    {
LABEL_73:
      sub_1BCAA3C(equipPossessionSkillInfoComponentList, v24);
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
    sub_1BCAA3C(0LL, call);
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
    sub_1BCAA3C(0LL, method);
  BattleViewBufflistComponent__setShow(buffListView, 0LL);
  started = BattleServantConfConponent__StartOpenTab(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
  PartyOrganizationUtility_o *v12; // x29
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 max_length; // x1
  System_Int32_array *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_String_array *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Boolean_array *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_Int32_array *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x1
  int64_t Master_object; // x0
  __int64 v72; // x1
  __int64 v73; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v74; // x19
  unsigned __int64 v75; // x27
  int32_t *v76; // x26
  __int64 v77; // x23
  System_Int32_array *v78; // x8
  System_Boolean_array *v79; // x9
  int32_t v80; // w8
  System_Int32_array *v81; // x9
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_Boolean_array *v88; // x8
  PartyOrganizationUtility_c *klass; // x29
  SkillEntity_o *v90; // x28
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  System_String_array *v97; // x25
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  PartyOrganizationUtility_o *v104; // x28
  Il2CppClass **v105; // x8
  System_String_o *v106; // x1
  PartyOrganizationUtility_c *v107; // x28
  int64_t v108; // x1
  System_String_array *v109; // x8
  Il2CppClass **v110; // x28
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  __int64 v117; // x1
  System_String_array *v118; // x25
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  System_String_array *v125; // x8
  System_String_array *v126; // x25
  System_String_o **v127; // x28
  System_String_o *v128; // x0
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  System_String_array *v135; // x8
  Il2CppClass **v136; // x25
  System_String_o *v137; // x29
  System_String_o *v138; // x0
  System_String_o *v139; // x0
  System_Int32_array *v140; // x0
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  int64_t v147; // x0
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  System_String_array *v154; // x0
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  System_Boolean_array *v161; // x0
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  System_Int32_array *v168; // x1
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  System_Int32_array **v175; // [xsp+8h] [xbp-88h]
  PartyOrganizationUtility_o *v176; // [xsp+10h] [xbp-80h]
  int32_t *v177; // [xsp+18h] [xbp-78h]

  v12 = (PartyOrganizationUtility_o *)titleList;
  if ( (byte_4B19284 & 1) == 0 )
  {
    sub_1BCA7E0(&bool___TypeInfo, idList, titleList);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v14, v15);
    sub_1BCA7E0(&DataManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v18, v19);
    sub_1BCA7E0(&int___TypeInfo, v20, v21);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&string___TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_3834/*"COND_TYPE_TITLE"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_3822/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v32, v33);
    byte_4B19284 = 1;
  }
  if ( releaseSkillIds
    && releaseSkillLvs
    && (max_length = releaseSkillIds->max_length, (_DWORD)max_length == releaseSkillLvs->max_length) )
  {
    v35 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, max_length);
    *idList = v35;
    sub_1BCA784((PartyOrganizationUtility_o *)idList, (int64_t)v35, v36, v37, v38, v39, v40, v41);
    v42 = sub_1BCA888(string___TypeInfo, releaseSkillIds->max_length);
    v12->klass = (PartyOrganizationUtility_c *)v42;
    sub_1BCA784(v12, v42, v43, v44, v45, v46, v47, v48);
    v49 = (System_String_array *)sub_1BCA888(string___TypeInfo, releaseSkillIds->max_length);
    *explanationList = v49;
    sub_1BCA784((PartyOrganizationUtility_o *)explanationList, (int64_t)v49, v50, v51, v52, v53, v54, v55);
    v56 = (System_Boolean_array *)sub_1BCA888(bool___TypeInfo, releaseSkillIds->max_length);
    *releaseStateList = v56;
    sub_1BCA784((PartyOrganizationUtility_o *)releaseStateList, (int64_t)v56, v57, v58, v59, v60, v61, v62);
    v63 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, releaseSkillIds->max_length);
    *lvList = v63;
    sub_1BCA784((PartyOrganizationUtility_o *)lvList, (int64_t)v63, v64, v65, v66, v67, v68, v69);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v70);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
    v73 = *(_QWORD *)&releaseSkillIds->max_length;
    if ( (int)v73 >= 1 )
    {
      v74 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      v75 = 0LL;
      v177 = &releaseSkillLvs->m_Items[1];
      v76 = &releaseSkillIds->m_Items[1];
      v77 = 32LL;
      v175 = lvList;
      v176 = v12;
      while ( v75 < (unsigned int)v73 )
      {
        v78 = *idList;
        if ( !*idList )
          goto LABEL_62;
        if ( v75 >= v78->max_length )
          break;
        v78->m_Items[v75 + 1] = v76[v75];
        if ( v75 >= releaseSkillLvs->max_length )
          break;
        v79 = *releaseStateList;
        if ( !*releaseStateList )
          goto LABEL_62;
        if ( v75 >= v79->max_length )
          break;
        v80 = v177[v75];
        v79->m_Items[v75 + 4] = v80 > 0;
        v81 = *lvList;
        if ( !*lvList )
          goto LABEL_62;
        if ( v75 >= v81->max_length )
          break;
        v81->m_Items[v75 + 1] = v80;
        if ( !v74 )
          goto LABEL_62;
        Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                   v74,
                                   v76[v75],
                                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Master_object )
        {
          v88 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_62;
          if ( v75 >= v88->max_length )
            break;
          klass = v12->klass;
          v90 = (SkillEntity_o *)Master_object;
          if ( v88->m_Items[v75 + 4] )
          {
            if ( v75 >= releaseSkillLvs->max_length )
              break;
            Master_object = (int64_t)SkillEntity__getEffectTitle((SkillEntity_o *)Master_object, v177[v75], 0LL);
            if ( !klass )
              goto LABEL_62;
            if ( v75 >= LODWORD(klass->_1.namespaze) )
              break;
            *((_QWORD *)&klass->_1.byval_arg.data + v75) = Master_object;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)((char *)klass + v77),
              Master_object,
              v91,
              v92,
              v93,
              v94,
              v95,
              v96);
            if ( v75 >= releaseSkillLvs->max_length )
              break;
            v97 = *explanationList;
            Master_object = (int64_t)SkillEntity__getEffectExplanation(v90, v177[v75], 0LL);
            v12 = v176;
            if ( !v97 )
              goto LABEL_62;
            if ( v75 >= v97->max_length )
              break;
            v104 = (PartyOrganizationUtility_o *)((char *)v97 + v77);
            v105 = &v97->obj.klass + v75;
            lvList = v175;
            v106 = (System_String_o *)Master_object;
            v105[4] = (Il2CppClass *)Master_object;
          }
          else
          {
            Master_object = (int64_t)SkillEntity__getEffectTitle((SkillEntity_o *)Master_object, 1, 0LL);
            if ( !klass )
              goto LABEL_62;
            if ( v75 >= LODWORD(klass->_1.namespaze) )
              break;
            *((_QWORD *)&klass->_1.byval_arg.data + v75) = Master_object;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)((char *)klass + v77),
              Master_object,
              v111,
              v112,
              v113,
              v114,
              v115,
              v116);
            v118 = *explanationList;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v117);
            Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3834/*"COND_TYPE_TITLE"*/, 0LL);
            if ( !v118 )
              goto LABEL_62;
            if ( v75 >= v118->max_length )
              break;
            v118->m_Items[v75] = (System_String_o *)Master_object;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)((char *)v118 + v77),
              Master_object,
              v119,
              v120,
              v121,
              v122,
              v123,
              v124);
            v125 = *explanationList;
            if ( !*explanationList )
LABEL_62:
              sub_1BCAA3C(Master_object, v72);
            if ( v75 >= v125->max_length )
              break;
            Master_object = System_String__op_Inequality(v125->m_Items[v75], (System_String_o *)StringLiteral_1/*""*/, 0LL);
            if ( (Master_object & 1) != 0 )
            {
              v126 = *explanationList;
              if ( !*explanationList )
                goto LABEL_62;
              if ( v75 >= v126->max_length )
                break;
              v127 = (System_String_o **)(&v126->obj.klass + v75);
              v128 = System_String__Concat_62401220(v127[4], (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
              v127[4] = v128;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)((char *)v126 + v77),
                (int64_t)v128,
                v129,
                v130,
                v131,
                v132,
                v133,
                v134);
            }
            v135 = *explanationList;
            if ( !*explanationList )
              goto LABEL_62;
            if ( v75 >= v135->max_length )
              break;
            v136 = &v135->obj.klass + v75;
            v104 = (PartyOrganizationUtility_o *)(v136 + 4);
            v137 = (System_String_o *)v136[4];
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
            v138 = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
            v139 = System_String__Concat_62401220(v137, v138, 0LL);
            v136[4] = (Il2CppClass *)v139;
            lvList = v175;
            v12 = v176;
            v106 = v139;
          }
        }
        else
        {
          v107 = v12->klass;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
          if ( !byte_4B1194D )
          {
            sub_1BCA7E0(&LocalizationManager_TypeInfo, v72, v82);
            byte_4B1194D = 1;
          }
          Master_object = (int64_t)LocalizationManager_TypeInfo;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
            Master_object = (int64_t)LocalizationManager_TypeInfo;
          }
          if ( !v107 )
            goto LABEL_62;
          if ( v75 >= LODWORD(v107->_1.namespaze) )
            break;
          v108 = *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 32LL);
          *((_QWORD *)&v107->_1.byval_arg.data + v75) = v108;
          sub_1BCA784((PartyOrganizationUtility_o *)((char *)v107 + v77), v108, v82, v83, v84, v85, v86, v87);
          v109 = *explanationList;
          if ( !*explanationList )
            goto LABEL_62;
          if ( v75 >= v109->max_length )
            break;
          v110 = &v109->obj.klass + v75;
          v106 = (System_String_o *)StringLiteral_1/*""*/;
          v110[4] = (Il2CppClass *)StringLiteral_1/*""*/;
          v104 = (PartyOrganizationUtility_o *)(v110 + 4);
        }
        sub_1BCA784(v104, (int64_t)v106, v98, v99, v100, v101, v102, v103);
        LODWORD(v73) = releaseSkillIds->max_length;
        ++v75;
        v77 += 8LL;
        if ( (__int64)v75 >= (int)v73 )
          return;
      }
      sub_1BCAA44(Master_object, v72);
    }
  }
  else
  {
    v140 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
    *idList = v140;
    sub_1BCA784((PartyOrganizationUtility_o *)idList, (int64_t)v140, v141, v142, v143, v144, v145, v146);
    v147 = sub_1BCA888(string___TypeInfo, 0LL);
    v12->klass = (PartyOrganizationUtility_c *)v147;
    sub_1BCA784(v12, v147, v148, v149, v150, v151, v152, v153);
    v154 = (System_String_array *)sub_1BCA888(string___TypeInfo, 0LL);
    *explanationList = v154;
    sub_1BCA784((PartyOrganizationUtility_o *)explanationList, (int64_t)v154, v155, v156, v157, v158, v159, v160);
    v161 = (System_Boolean_array *)sub_1BCA888(bool___TypeInfo, 0LL);
    *releaseStateList = v161;
    sub_1BCA784((PartyOrganizationUtility_o *)releaseStateList, (int64_t)v161, v162, v163, v164, v165, v166, v167);
    v168 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
    *lvList = v168;
    sub_1BCA784((PartyOrganizationUtility_o *)lvList, (int64_t)v168, v169, v170, v171, v172, v173, v174);
  }
}


void __fastcall BattleServantConfConponent__GetAttributeValue(
        BattleServantConfConponent_o *this,
        int32_t *policy,
        int32_t *personality,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  BattleServantData_o *bsvtData; // x0
  int32_t v20; // w0
  int32_t deckIndex; // w0
  struct BattleServantData_o *v22; // x8
  ServantLimitMaster_o *v23; // x22
  __int64 v24; // x23
  __int64 v25; // x24
  const MethodInfo *v26; // x2
  struct BattleServantData_o *v27; // x8
  __int64 v28; // x23
  __int64 v29; // x24
  BattleServantData_o *v30; // x8
  int32_t v31; // w21
  int32_t v32; // w3
  ServantLimitMaster_o *v33; // x0
  int32_t v34; // w2
  struct BattleServantData_o *v35; // x8
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  struct BattleServantData_o *v37; // x8
  struct ServantLimitAddEntity_o *v38; // x8
  struct BattleServantData_o *v39; // x8
  __int64 v40; // x21
  __int64 v41; // x23
  ServantLimitEntity_o *v42; // x8
  int32_t v43; // w9
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4B19294 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___, policy, personality);
    sub_1BCA7E0(&Method_DataManager_GetMaster_IndividualityPolicyMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(
      &Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int__GetEntity__,
      v13,
      v14);
    sub_1BCA7E0(&Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    byte_4B19294 = 1;
  }
  entity = 0LL;
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_53;
  v20 = BattleServantData__GetChangePolicy(bsvtData, 0LL);
  *policy = v20;
  if ( (v20 & 0x80000000) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, policy);
    bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    if ( !bsvtData )
      goto LABEL_53;
    bsvtData = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)bsvtData,
                                        *policy,
                                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int__GetEntity__);
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, policy);
    bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    if ( !bsvtData )
      goto LABEL_53;
    bsvtData = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)bsvtData,
                                        *personality,
                                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int__GetEntity__);
    if ( !bsvtData )
      goto LABEL_53;
    deckIndex = bsvtData->fields.deckIndex;
    *personality = deckIndex;
  }
  if ( ((*policy | deckIndex) & 0x80000000) == 0 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, policy);
  bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v22 = this->fields.bsvtData;
  if ( !v22 )
    goto LABEL_53;
  v23 = (ServantLimitMaster_o *)bsvtData;
  v25 = *(_QWORD *)&v22->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
  v24 = *(_QWORD *)&v22->fields._dispLimitCount_k__BackingField.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, policy);
  *(_QWORD *)&v45.fields.currentCryptoKey = v25;
  *(_QWORD *)&v45.fields.fakeValue = v24;
  bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v45, 0LL);
  if ( (int)bsvtData < 11 )
  {
    v27 = this->fields.bsvtData;
    if ( v27 )
    {
      v29 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
      v28 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, policy);
      *(_QWORD *)&v46.fields.currentCryptoKey = v29;
      *(_QWORD *)&v46.fields.fakeValue = v28;
      bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v46, 0LL);
      v30 = this->fields.bsvtData;
      if ( v30 )
      {
        v31 = (int)bsvtData;
        bsvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(v30, 1, 0LL);
        if ( v23 )
        {
          v32 = (int)bsvtData;
          v33 = v23;
          v34 = v31;
          goto LABEL_44;
        }
      }
    }
    goto LABEL_53;
  }
  if ( (*policy & 0x80000000) != 0 )
  {
    v35 = this->fields.bsvtData;
    if ( !v35 )
      goto LABEL_53;
    svtlimitaddent = v35->fields.svtlimitaddent;
    if ( !svtlimitaddent )
      goto LABEL_53;
    bsvtData = (BattleServantData_o *)BattleServantConfConponent__GetPolicy(
                                        (BattleServantConfConponent_o *)bsvtData,
                                        (System_Collections_Generic_IEnumerable_int__o *)svtlimitaddent->fields.individuality,
                                        v26);
    *policy = (int)bsvtData;
  }
  if ( (*personality & 0x80000000) != 0 )
  {
    v37 = this->fields.bsvtData;
    if ( !v37 )
      goto LABEL_53;
    v38 = v37->fields.svtlimitaddent;
    if ( !v38 )
      goto LABEL_53;
    bsvtData = (BattleServantData_o *)BattleServantConfConponent__GetPersonality(
                                        (BattleServantConfConponent_o *)bsvtData,
                                        (System_Collections_Generic_IEnumerable_int__o *)v38->fields.individuality,
                                        v26);
    *personality = (int)bsvtData;
  }
  v39 = this->fields.bsvtData;
  if ( !v39 )
    goto LABEL_53;
  v41 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, policy);
  *(_QWORD *)&v47.fields.currentCryptoKey = v41;
  *(_QWORD *)&v47.fields.fakeValue = v40;
  bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v47, 0LL);
  if ( !v23 )
LABEL_53:
    sub_1BCAA3C(bsvtData, policy);
  v34 = (int)bsvtData;
  v33 = v23;
  v32 = 0;
LABEL_44:
  ServantLimitMaster__TryGetEntity(v33, &entity, v34, v32, 0LL);
  v42 = entity;
  v43 = *policy;
  if ( entity )
  {
    if ( (v43 & 0x80000000) != 0 )
      *policy = entity->fields.policy;
    if ( (*personality & 0x80000000) != 0 )
      *personality = v42->fields.personality;
  }
  else
  {
    if ( (v43 & 0x80000000) != 0 )
      *policy = 0;
    if ( (*personality & 0x80000000) != 0 )
      *personality = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleServantConfConponent__GetHideStr(
        BattleServantConfConponent_o *this,
        int32_t hideStatus,
        System_String_o *defaultStr,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 *v10; // x8

  if ( (byte_4B19291 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&hideStatus, defaultStr);
    sub_1BCA7E0(&StringLiteral_11681/*"SERVANT_ATTRIBUTE_HIDE"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_11682/*"SERVANT_ATTRIBUTE_NONE"*/, v8, v9);
    byte_4B19291 = 1;
  }
  if ( hideStatus == 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&hideStatus);
    v10 = &StringLiteral_11682/*"SERVANT_ATTRIBUTE_NONE"*/;
    return LocalizationManager__Get((System_String_o *)*v10, 0LL);
  }
  if ( hideStatus == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&hideStatus);
    v10 = &StringLiteral_11681/*"SERVANT_ATTRIBUTE_HIDE"*/;
    return LocalizationManager__Get((System_String_o *)*v10, 0LL);
  }
  return defaultStr;
}


int32_t __fastcall BattleServantConfConponent__GetPersonality(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *individualityArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_int__o *v27; // x19
  System_Int32_array *v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v34; // x1
  __int64 v35; // x20
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x1
  int32_t v45; // w21
  __int64 v46; // x0
  __int64 v47; // x1
  double v48; // d0
  struct System_Int32_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  Il2CppObject *Master_object; // x20

  if ( (byte_4B19293 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___, individualityArray, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_int__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_int__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Math_TypeInfo, v25, v26);
    byte_4B19293 = 1;
  }
  v27 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    individualityArray,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_51;
  klass = individualityArray->klass;
  v31 = *(unsigned __int16 *)(&individualityArray->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&individualityArray->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(individualityArray, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          individualityArray,
          *(_QWORD *)(p_method + 8));
  if ( !v35 )
    sub_1BCAA3C(0LL, v34);
  while ( 1 )
  {
    v36 = *(_QWORD *)v35;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_15;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_15:
      v39 = sub_1C1C7C0(v35, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      break;
    v40 = *(_QWORD *)v35;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v42 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_22;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_22:
      v43 = sub_1C1C7C0(v35, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v35, *(_QWORD *)(v43 + 8));
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v44);
    v48 = log10((double)v45);
    if ( (unsigned int)(v45 - 300) <= 0x63
      && v48 != INFINITY
      && (int)v48 == 2
      && (unsigned int)(v45 - 303) <= 6
      && v45 != 307 )
    {
      if ( !v27 )
        sub_1BCAA3C(v46, v47);
      items = v27->fields._items;
      v50 = Method_System_Collections_Generic_List_int__Add__;
      ++v27->fields._version;
      if ( !items )
        sub_1BCAA3C(v46, v47);
      size = v27->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v27,
          v45,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v27->fields._size = size + 1;
        items->m_Items[size + 1] = v45;
      }
    }
  }
  v52 = *(_QWORD *)v35;
  v53 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
  {
    v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      --v53;
      v54 += 4;
      if ( !v53 )
        goto LABEL_40;
    }
    v55 = v52 + 16LL * *v54 + 312;
  }
  else
  {
LABEL_40:
    v55 = sub_1C1C7C0(v35, System_IDisposable_TypeInfo, 0LL);
  }
  v28 = (System_Int32_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v35, *(_QWORD *)(v55 + 8));
  if ( !v27 )
    goto LABEL_51;
  if ( v27->fields._size > 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    v28 = System_Collections_Generic_List_int___ToArray(
            v27,
            (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( Master_object )
      return IndividualityPersonalityMaster__GetPersonalityValue(
               (IndividualityPersonalityMaster_o *)Master_object,
               v28,
               0LL);
LABEL_51:
    sub_1BCAA3C(v28, v29);
  }
  return -1;
}


int32_t __fastcall BattleServantConfConponent__GetPolicy(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *individualityArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_int__o *v27; // x19
  System_Int32_array *v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v34; // x1
  __int64 v35; // x20
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x1
  int32_t v45; // w21
  __int64 v46; // x0
  __int64 v47; // x1
  double v48; // d0
  unsigned int v49; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  Il2CppObject *Master_object; // x20

  if ( (byte_4B19292 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_IndividualityPolicyMaster___, individualityArray, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_int__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_int__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Math_TypeInfo, v25, v26);
    byte_4B19292 = 1;
  }
  v27 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    individualityArray,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_51;
  klass = individualityArray->klass;
  v31 = *(unsigned __int16 *)(&individualityArray->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&individualityArray->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(individualityArray, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          individualityArray,
          *(_QWORD *)(p_method + 8));
  if ( !v35 )
    sub_1BCAA3C(0LL, v34);
  while ( 1 )
  {
    v36 = *(_QWORD *)v35;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_15;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_15:
      v39 = sub_1C1C7C0(v35, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      break;
    v40 = *(_QWORD *)v35;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v42 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_22;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_22:
      v43 = sub_1C1C7C0(v35, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v35, *(_QWORD *)(v43 + 8));
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v44);
    v48 = log10((double)v45);
    v49 = v45 - 300;
    if ( (unsigned int)(v45 - 300) <= 0x63 && v48 != INFINITY && (int)v48 == 2 && v49 <= 7 && ((1 << v49) & 0x87) != 0 )
    {
      if ( !v27 )
        sub_1BCAA3C(v46, v47);
      items = v27->fields._items;
      v51 = Method_System_Collections_Generic_List_int__Add__;
      ++v27->fields._version;
      if ( !items )
        sub_1BCAA3C(v46, v47);
      size = v27->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v27,
          v45,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v27->fields._size = size + 1;
        items->m_Items[size + 1] = v45;
      }
    }
  }
  v53 = *(_QWORD *)v35;
  v54 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
  {
    v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      --v54;
      v55 += 4;
      if ( !v54 )
        goto LABEL_40;
    }
    v56 = v53 + 16LL * *v55 + 312;
  }
  else
  {
LABEL_40:
    v56 = sub_1C1C7C0(v35, System_IDisposable_TypeInfo, 0LL);
  }
  v28 = (System_Int32_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v35, *(_QWORD *)(v56 + 8));
  if ( !v27 )
    goto LABEL_51;
  if ( v27->fields._size > 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    v28 = System_Collections_Generic_List_int___ToArray(
            v27,
            (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( Master_object )
      return IndividualityPolicyMaster__GetPolicyValue((IndividualityPolicyMaster_o *)Master_object, v28, 0LL);
LABEL_51:
    sub_1BCAA3C(v28, v29);
  }
  return -1;
}


int32_t __fastcall BattleServantConfConponent__GetSpecialPassiveSkillStartIndex(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_List_int__o *skillIdList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x20
  __int64 v33; // x1
  int32_t result; // w0
  Il2CppObject *Master_object; // x0
  __int64 v36; // x1
  struct BattleServantData_o *bsvtData; // x8
  ServantPassiveSkillMaster_o *v38; // x21
  __int64 v39; // x22
  __int64 v40; // x23
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *v44; // x21
  BattleServantConfConponent___c_c *v45; // x8
  System_Func_object__int__o *_9__81_0; // x22
  Il2CppObject *v47; // x23
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Collections_Generic_IEnumerable_T__o *v55; // x22
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Collections_Generic_HashSet_int__o *v59; // x21
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  System_Predicate_int__o *v69; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_4B19282 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___, skillIdList, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_ServantPassiveSkillEntity__int___, v8, v9);
    sub_1BCA7E0(&System_Func_ServantPassiveSkillEntity__int__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor___76767240, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__FindIndex__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Predicate_int__TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_BattleServantConfConponent___c__GetSpecialPassiveSkillStartIndex_b__81_0__, v24, v25);
    sub_1BCA7E0(
      &Method_BattleServantConfConponent___c__DisplayClass81_0__GetSpecialPassiveSkillStartIndex_b__1__,
      v26,
      v27);
    sub_1BCA7E0(&BattleServantConfConponent___c__DisplayClass81_0_TypeInfo, v28, v29);
    sub_1BCA7E0(&BattleServantConfConponent___c_TypeInfo, v30, v31);
    byte_4B19282 = 1;
  }
  v32 = sub_1BCAA2C(BattleServantConfConponent___c__DisplayClass81_0_TypeInfo, skillIdList, method, v3);
  BattleServantConfConponent___c__DisplayClass81_0___ctor(
    (BattleServantConfConponent___c__DisplayClass81_0_o *)v32,
    0LL);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillIdList, 0LL) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_22;
  v38 = (ServantPassiveSkillMaster_o *)Master_object;
  v40 = *(_QWORD *)&bsvtData->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&bsvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36);
  *(_QWORD *)&v70.fields.currentCryptoKey = v40;
  *(_QWORD *)&v70.fields.fakeValue = v39;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v70, 0LL);
  if ( !v38 )
    goto LABEL_22;
  v44 = ServantPassiveSkillMaster__EnumerateSpecialSkillsBySvtId(v38, (int32_t)Master_object, 0LL);
  v45 = BattleServantConfConponent___c_TypeInfo;
  if ( !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo, v41);
    v45 = BattleServantConfConponent___c_TypeInfo;
  }
  _9__81_0 = (System_Func_object__int__o *)v45->static_fields->__9__81_0;
  if ( !_9__81_0 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45, v41);
      v45 = BattleServantConfConponent___c_TypeInfo;
    }
    v47 = (Il2CppObject *)v45->static_fields->__9;
    _9__81_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_ServantPassiveSkillEntity__int__TypeInfo,
                                               v41,
                                               v42,
                                               v43);
    System_Func_object__int____ctor(
      _9__81_0,
      v47,
      Method_BattleServantConfConponent___c__GetSpecialPassiveSkillStartIndex_b__81_0__,
      0LL);
    static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    static_fields->__9__81_0 = (struct System_Func_ServantPassiveSkillEntity__int__o *)_9__81_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__81_0,
      (int64_t)_9__81_0,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  v55 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v44,
                                                         (System_Func_TSource__TResult__o *)_9__81_0,
                                                         (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_ServantPassiveSkillEntity__int___);
  v59 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v56,
                                                       v57,
                                                       v58);
  System_Collections_Generic_HashSet_int____ctor_54873236(
    v59,
    v55,
    (const MethodInfo_3454C94 *)Method_System_Collections_Generic_HashSet_int___ctor___76767240);
  if ( !v32
    || (*(_QWORD *)(v32 + 16) = v59,
        sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 16), (int64_t)v59, v60, v61, v62, v63, v64, v65),
        v69 = (System_Predicate_int__o *)sub_1BCAA2C(System_Predicate_int__TypeInfo, v66, v67, v68),
        System_Predicate_int____ctor(
          v69,
          (Il2CppObject *)v32,
          Method_BattleServantConfConponent___c__DisplayClass81_0__GetSpecialPassiveSkillStartIndex_b__1__,
          0LL),
        !skillIdList) )
  {
LABEL_22:
    sub_1BCAA3C(Master_object, v36);
  }
  result = System_Collections_Generic_List_int___FindIndex(
             skillIdList,
             (System_Predicate_T__o *)v69,
             (const MethodInfo_358546C *)Method_System_Collections_Generic_List_int__FindIndex__);
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x1
  UnityEngine_Transform_o *transform; // x20
  int v21; // s1
  int v22; // s0
  int v23; // s2
  __int64 v24; // x1
  UnityEngine_Object_o *commandCard; // x20
  __int64 v26; // x1
  __int64 v27; // x1
  Il2CppObject *Component_object; // x20
  UILabel_o *havenotTdLabel; // x20
  __int64 v30; // x1
  UnityEngine_Object_o *classBoardSkillObj; // x20

  if ( (byte_4B1927D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, data, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_2913/*"BATTLE_HASNOT_TD"*/, v16, v17);
    byte_4B1927D = 1;
  }
  this->fields.data = data;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
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
  *(UnityEngine_Vector3_o *)(&v21 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
  if ( !transform )
    goto LABEL_30;
  v22 = 0;
  v23 = 0;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v21 - 1), 0LL);
  commandCard = (UnityEngine_Object_o *)this->fields.commandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  if ( UnityEngine_Object__op_Inequality(commandCard, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
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
      sub_1BCAA3C(gameObject, v19);
    }
    BattleCommandComponent__SetDownloadEventSprite((BattleCommandComponent_o *)gameObject, 0LL);
  }
  havenotTdLabel = this->fields.havenotTdLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2913/*"BATTLE_HASNOT_TD"*/, 0LL);
  if ( !havenotTdLabel )
    goto LABEL_30;
  UILabel__set_text(havenotTdLabel, (System_String_o *)gameObject, 0LL);
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.classBoardSkillObj;
    if ( gameObject )
    {
      BattleServantClassBoardSkillEffectListComponent__Init(
        (BattleServantClassBoardSkillEffectListComponent_o *)gameObject,
        v19);
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
    sub_1BCAA3C(bsvtData, v5);
  }
LABEL_8:
  v10 = 1;
  return v10 & 1;
}


bool __fastcall BattleServantConfConponent__IsLastOpenServantAbility(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1928A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3271/*"BattleServantDetailTab"*/, method, v2);
    byte_4B1928A = 1;
  }
  return !UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_3271/*"BattleServantDetailTab"*/, 0LL)
      || !UnityEngine_PlayerPrefs__GetInt_70111952((System_String_o *)StringLiteral_3271/*"BattleServantDetailTab"*/, 0LL)
      || UnityEngine_PlayerPrefs__GetInt_70111952((System_String_o *)StringLiteral_3271/*"BattleServantDetailTab"*/, 0LL) != 1;
}


void __fastcall BattleServantConfConponent__OnClick(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantConfConponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct BattleCommandComponent_array *CommandCardList; // x8
  __int64 v15; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v17; // x26
  UnityEngine_Object_o *v18; // x20
  struct BattleCommandComponent_array *v19; // x8
  struct BattleServantConfConponent_CloseButtonCallBack_o *callback_close; // x8
  __int64 v21; // x1
  __int64 v22; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *equipPossessionSkillInfoComponentList; // x8
  int64_t size; // x2
  int v31; // w9
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-68h] BYREF

  v3 = this;
  if ( (byte_4B19287 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__, v10, v11);
    this = (BattleServantConfConponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B19287 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  CommandCardList = v3->fields.CommandCardList;
  if ( !CommandCardList )
    goto LABEL_15;
  v15 = 4LL;
  while ( 1 )
  {
    max_length = CommandCardList->max_length;
    v17 = v15 - 4;
    if ( v15 - 4 >= (int)max_length )
      break;
    if ( v17 >= max_length )
      goto LABEL_29;
    v18 = (UnityEngine_Object_o *)*((_QWORD *)&CommandCardList->obj.klass + v15);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (BattleServantConfConponent_o *)UnityEngine_Object__op_Equality(v18, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v19 = v3->fields.CommandCardList;
      if ( !v19 )
        goto LABEL_15;
      if ( v17 >= v19->max_length )
LABEL_29:
        sub_1BCAA44(this, method);
      this = (BattleServantConfConponent_o *)*((_QWORD *)&v19->obj.klass + v15);
      if ( !this )
        goto LABEL_15;
      BattleCommandComponent__ClearCardEffect((BattleCommandComponent_o *)this, 0LL);
    }
    CommandCardList = v3->fields.CommandCardList;
    ++v15;
    if ( !CommandCardList )
      goto LABEL_15;
  }
  callback_close = v3->fields.callback_close;
  if ( callback_close )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback_close->fields.m_target)(
      callback_close->fields.original_method_info,
      *(_QWORD *)&callback_close->fields.extra_arg);
  this = (BattleServantConfConponent_o *)v3->fields.equipPossessionSkillInfoComponentList;
  if ( !this )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__) )
  {
    if ( !v32.fields._current )
      sub_1BCAA3C(0LL, v21);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v32.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
  equipPossessionSkillInfoComponentList = v3->fields.equipPossessionSkillInfoComponentList;
  if ( !equipPossessionSkillInfoComponentList )
LABEL_15:
    sub_1BCAA3C(this, method);
  size = (unsigned int)equipPossessionSkillInfoComponentList->fields._size;
  v31 = equipPossessionSkillInfoComponentList->fields._version + 1;
  equipPossessionSkillInfoComponentList->fields._size = 0;
  equipPossessionSkillInfoComponentList->fields._version = v31;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)equipPossessionSkillInfoComponentList->fields._items, 0, size, 0LL);
  v3->fields.bsvtData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.bsvtData, 0LL, size, v24, v25, v26, v27, v28);
}


void __fastcall BattleServantConfConponent__OnClickServantAbility(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantConfConponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_GameObject_o *BattleServantAbilityObj; // x0
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0

  v3 = this;
  if ( (byte_4B1928B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleServantConfConponent_OnClickServantAbility__, method, v2);
    sub_1BCA7E0(&StringLiteral_17668/*"btn_bg_on_1"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17663/*"btn_bg_off_1"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17792/*"btn_txt_servant_states_off"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_3271/*"BattleServantDetailTab"*/, v10, v11);
    this = (BattleServantConfConponent_o *)sub_1BCA7E0(&StringLiteral_17790/*"btn_txt_servant_property_on"*/, v12, v13);
    byte_4B1928B = 1;
  }
  if ( !v3->fields.isOpenAfter )
  {
    if ( BattleServantConfConponent__IsLastOpenServantAbility(this, method) )
      return;
    if ( !v3->fields.isOpenAfter )
    {
      v15 = Method_BattleServantConfConponent_OnClickServantAbility__;
      if ( (*((_BYTE *)Method_BattleServantConfConponent_OnClickServantAbility__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1BCA7F8(Method_BattleServantConfConponent_OnClickServantAbility__);
      v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
    }
  }
  BattleServantAbilityObj = v3->fields.BattleServantAbilityObj;
  v3->fields.isOpenAfter = 0;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL);
  BattleServantAbilityObj = v3->fields.AbillityTab;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL);
  BattleServantAbilityObj = v3->fields.AbillityBtnBg;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v3->fields.AbillityBtn;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17668/*"btn_bg_on_1"*/, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v3->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17790/*"btn_txt_servant_property_on"*/, 0LL);
  BattleServantAbilityObj = v3->fields.BattleServantStateObj;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL);
  BattleServantAbilityObj = v3->fields.StateTab;
  if ( !BattleServantAbilityObj
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL),
        (BattleServantAbilityObj = v3->fields.StateBtnBg) == 0LL)
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v3->fields.StateBtn) == 0LL)
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17663/*"btn_bg_off_1"*/, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v3->fields.StateName) == 0LL) )
  {
LABEL_20:
    sub_1BCAA3C(BattleServantAbilityObj, method);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17792/*"btn_txt_servant_states_off"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_3271/*"BattleServantDetailTab"*/, 0, 0LL);
}


void __fastcall BattleServantConfConponent__OnClickServantState(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantConfConponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_GameObject_o *BattleServantAbilityObj; // x0
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0

  v3 = this;
  if ( (byte_4B1928C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleServantConfConponent_OnClickServantState__, method, v2);
    sub_1BCA7E0(&StringLiteral_17668/*"btn_bg_on_1"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17793/*"btn_txt_servant_states_on"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17789/*"btn_txt_servant_property_off"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17663/*"btn_bg_off_1"*/, v10, v11);
    this = (BattleServantConfConponent_o *)sub_1BCA7E0(&StringLiteral_3271/*"BattleServantDetailTab"*/, v12, v13);
    byte_4B1928C = 1;
  }
  if ( !v3->fields.isOpenAfter )
  {
    if ( !BattleServantConfConponent__IsLastOpenServantAbility(this, method) )
      return;
    if ( !v3->fields.isOpenAfter )
    {
      v15 = Method_BattleServantConfConponent_OnClickServantState__;
      if ( (*((_BYTE *)Method_BattleServantConfConponent_OnClickServantState__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1BCA7F8(Method_BattleServantConfConponent_OnClickServantState__);
      v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
    }
  }
  BattleServantAbilityObj = v3->fields.BattleServantAbilityObj;
  v3->fields.isOpenAfter = 0;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL);
  BattleServantAbilityObj = v3->fields.AbillityTab;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL);
  BattleServantAbilityObj = v3->fields.AbillityBtnBg;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v3->fields.AbillityBtn;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17663/*"btn_bg_off_1"*/, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v3->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17789/*"btn_txt_servant_property_off"*/, 0LL);
  BattleServantAbilityObj = v3->fields.BattleServantStateObj;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL);
  BattleServantAbilityObj = v3->fields.StateTab;
  if ( !BattleServantAbilityObj
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL),
        (BattleServantAbilityObj = v3->fields.StateBtnBg) == 0LL)
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v3->fields.StateBtn) == 0LL)
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17668/*"btn_bg_on_1"*/, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v3->fields.StateName) == 0LL) )
  {
LABEL_21:
    sub_1BCAA3C(BattleServantAbilityObj, method);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17793/*"btn_txt_servant_states_on"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_3271/*"BattleServantDetailTab"*/, 1, 0LL);
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
    sub_1BCAA3C(0LL, call);
  BattleViewBufflistComponent__setHide(buffListView, 0, 0LL);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  BattleServantConfConponent__ResetScroll(this, v6);
}


void __fastcall BattleServantConfConponent__ResetScroll(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *BattleServantAbilityObj; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *BattleServantStateObj; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *buffListView; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *AbillityScrollView; // x20
  UnityEngine_Object_o *AbillityScrollBarWiget; // x20
  UnityEngine_Object_o *StateScrollView; // x20
  UnityEngine_Object_o *StateScrollBarWiget; // x20

  if ( (byte_4B19288 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19288 = 1;
  }
  BattleServantAbilityObj = (UnityEngine_Object_o *)this->fields.BattleServantAbilityObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(BattleServantAbilityObj, 0LL, 0LL) )
  {
    BattleServantStateObj = (UnityEngine_Object_o *)this->fields.BattleServantStateObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
            if ( UnityEngine_Object__op_Inequality(AbillityScrollView, 0LL, 0LL) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.AbillityScrollView;
              if ( !buffListView )
                goto LABEL_37;
              UIScrollView__ResetPosition((UIScrollView_o *)buffListView, 0LL);
            }
            AbillityScrollBarWiget = (UnityEngine_Object_o *)this->fields.AbillityScrollBarWiget;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
            if ( UnityEngine_Object__op_Inequality(AbillityScrollBarWiget, 0LL, 0LL) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.AbillityScrollBarWiget;
              if ( !buffListView )
                goto LABEL_37;
              UIWidget__ResizeCollider((UIWidget_o *)buffListView, 0LL);
            }
            StateScrollView = (UnityEngine_Object_o *)this->fields.StateScrollView;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
            if ( UnityEngine_Object__op_Inequality(StateScrollView, 0LL, 0LL) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.StateScrollView;
              if ( !buffListView )
                goto LABEL_37;
              UIScrollView__ResetPosition((UIScrollView_o *)buffListView, 0LL);
            }
            StateScrollBarWiget = (UnityEngine_Object_o *)this->fields.StateScrollBarWiget;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
      sub_1BCAA3C(buffListView, v7);
    }
  }
}


void __fastcall BattleServantConfConponent__SetAppendSkillList(
        BattleServantConfConponent_o *this,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *AppendSkillObj; // x21
  const MethodInfo *v24; // x1
  __int64 AppendSkillTitle; // x0
  UnityEngine_Object_o *AppendSkillListParent; // x21
  __int64 v27; // x1
  UnityEngine_Object_o *AppendSkillInfoPrefab; // x21
  __int64 v29; // x1
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  struct BattleServantData_o *bsvtData; // x8
  __int128 v32; // q1
  int64_t v33; // x0
  struct BattleServantData_o *v34; // x8
  __int64 v35; // x20
  _BOOL8 IsNpc; // x0
  __int64 v37; // x1
  Il2CppObject *Master_object; // x21
  System_Int32_array *v39; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x23
  int32_t v41; // w21
  System_Int32_array *v42; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x20
  unsigned __int64 v44; // x21
  int32_t v45; // w22
  float v46; // s8
  unsigned __int64 max_length; // x9
  int32_t v48; // w25
  int32_t v49; // w26
  System_String_o *v50; // x28
  System_String_o *v51; // x27
  _BOOL4 v52; // w20
  UnityEngine_GameObject_o *v53; // x29
  Il2CppObject *v54; // x23
  UnityEngine_Transform_o *v55; // x23
  __int64 v56; // x2
  UnityEngine_Transform_o *v57; // x23
  __int64 v58; // x2
  UnityEngine_Transform_o *v59; // x23
  __int64 v60; // x1
  Il2CppObject *Component_object; // x29
  System_Int32_array *releaseSkillLvs; // [xsp+0h] [xbp-100h]
  System_Collections_Generic_IEnumerable_TSource__o *v63; // [xsp+10h] [xbp-F0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // [xsp+18h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+40h] [xbp-C0h]
  Il2CppObject *entity; // [xsp+68h] [xbp-98h] BYREF
  System_Int32_array *lvList; // [xsp+70h] [xbp-90h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+78h] [xbp-88h] BYREF
  System_String_array *explanationList; // [xsp+80h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+88h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+98h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19283 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, battleInfoData, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_20749/*"img_txt_extraskill"*/, v21, v22);
    byte_4B19283 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  lvList = 0LL;
  releaseStateList = 0LL;
  entity = 0LL;
  AppendSkillObj = (UnityEngine_Object_o *)this->fields.AppendSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, battleInfoData);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  if ( UnityEngine_Object__op_Equality(AppendSkillListParent, 0LL, 0LL) || !this->fields.bsvtData )
    return;
  AppendSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.AppendSkillInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  if ( UnityEngine_Object__op_Equality(AppendSkillInfoPrefab, 0LL, 0LL) )
    return;
  this->fields.AppendSkillOffset = 0.0;
  BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  if ( UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL) && !BattleServantConfConponent__SetAtlas(this, v24) )
    return;
  AppendSkillTitle = (__int64)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  UISprite__set_atlas((UISprite_o *)AppendSkillTitle, this->fields.BattleAssetUIAtlas, 0LL);
  AppendSkillTitle = (__int64)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  UISprite__set_spriteName((UISprite_o *)AppendSkillTitle, (System_String_o *)StringLiteral_20749/*"img_txt_extraskill"*/, 0LL);
  AppendSkillTitle = (__int64)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  AppendSkillTitle = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)AppendSkillTitle + 840LL))(
                       AppendSkillTitle,
                       *(_QWORD *)(*(_QWORD *)AppendSkillTitle + 848LL));
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_98;
  v32 = *(_OWORD *)&bsvtData->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&bsvtData->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v66.fields.fakeValue = v32;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
  v65 = v66;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v65, 0LL);
  AppendSkillTitle = (__int64)BattleInfoData__getUserServantFromID(battleInfoData, v33, 0LL);
  if ( !AppendSkillTitle )
    return;
  v34 = this->fields.bsvtData;
  if ( !v34 )
    goto LABEL_98;
  v35 = AppendSkillTitle;
  IsNpc = Follower__IsNpc(v34->fields.followerType, 0LL);
  if ( IsNpc )
  {
    BattleServantConfConponent__GetAppendSkillInfo(
      (BattleServantConfConponent_o *)IsNpc,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      *(System_Int32_array **)(v35 + 488),
      *(System_Int32_array **)(v35 + 496),
      (const MethodInfo *)releaseSkillLvs);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v37);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    AppendSkillTitle = UserServantEntity__getSvtId((UserServantEntity_o *)v35, 0LL);
    if ( !Master_object )
      goto LABEL_98;
    ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_40328708(
      (ServantAppendPassiveSkillMaster_o *)Master_object,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      AppendSkillTitle,
      *(System_Int32_array **)(v35 + 488),
      *(System_Int32_array **)(v35 + 496),
      0LL);
  }
  AppendSkillTitle = (__int64)this->fields.bsvtData;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  v39 = BattleServantData__FilterDisplayingSkillIdArray((BattleServantData_o *)AppendSkillTitle, idList, 1, 0LL);
  if ( !v39 )
    return;
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
  if ( !*(_QWORD *)&v39->max_length )
    return;
  AppendSkillTitle = (__int64)this->fields.AppendSkillObj;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 1, 0LL);
  AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  v41 = 0;
  while ( 1 )
  {
    AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)AppendSkillTitle, 0LL);
    if ( !AppendSkillTitle )
      goto LABEL_98;
    if ( v41 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AppendSkillTitle, 0LL) )
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
                                      v41,
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
            ++v41;
            if ( AppendSkillTitle )
              continue;
          }
        }
      }
    }
    goto LABEL_98;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
  AppendSkillTitle = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
  v42 = idList;
  entity = 0LL;
  if ( !idList )
LABEL_98:
    sub_1BCAA3C(AppendSkillTitle, v24);
  v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)AppendSkillTitle;
  v44 = 0LL;
  v45 = 0;
  v46 = 0.0;
  v63 = v40;
  v64 = (DataMasterBase_TMaster__TEntity__PKType__o *)AppendSkillTitle;
  while ( 1 )
  {
    max_length = v42->max_length;
    if ( (__int64)v44 >= (int)max_length )
      break;
    if ( v44 >= max_length )
      goto LABEL_101;
    AppendSkillTitle = System_Linq_Enumerable__Contains_int_(
                         v40,
                         v42->m_Items[v44 + 1],
                         (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
    if ( (AppendSkillTitle & 1) != 0 )
    {
      if ( !idList )
        goto LABEL_98;
      if ( v44 >= idList->max_length )
        goto LABEL_101;
      if ( !lvList )
        goto LABEL_98;
      if ( v44 >= lvList->max_length )
        goto LABEL_101;
      v48 = idList->m_Items[v44 + 1];
      if ( v48 >= 1 )
      {
        if ( !v43 )
          goto LABEL_98;
        v49 = lvList->m_Items[v44 + 1];
        AppendSkillTitle = DataMasterBase_object__object__int___TryGetEntity(
                             v43,
                             &entity,
                             v48,
                             (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( (AppendSkillTitle & 1) == 0 )
          return;
        if ( !titleList )
          goto LABEL_98;
        if ( v44 >= titleList->max_length )
          goto LABEL_101;
        if ( !explanationList )
          goto LABEL_98;
        if ( v44 >= explanationList->max_length )
          goto LABEL_101;
        if ( !releaseStateList )
          goto LABEL_98;
        if ( v44 >= releaseStateList->max_length )
LABEL_101:
          sub_1BCAA44(AppendSkillTitle, v24);
        AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
        if ( !AppendSkillTitle )
          goto LABEL_98;
        v50 = titleList->m_Items[v44];
        v51 = explanationList->m_Items[v44];
        v52 = releaseStateList->m_Items[v44 + 4];
        AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(
                                      (UnityEngine_GameObject_o *)AppendSkillTitle,
                                      0LL);
        if ( !AppendSkillTitle )
          goto LABEL_98;
        if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AppendSkillTitle, 0LL) <= v45 )
        {
          v54 = (Il2CppObject *)this->fields.AppendSkillInfoPrefab;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
          AppendSkillTitle = (__int64)UnityEngine_Object__Instantiate_object_(
                                        v54,
                                        (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          v53 = (UnityEngine_GameObject_o *)AppendSkillTitle;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 1, 0LL);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v53, 0LL);
          if ( !this->fields.AppendSkillListParent )
            goto LABEL_98;
          v55 = (UnityEngine_Transform_o *)AppendSkillTitle;
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(this->fields.AppendSkillListParent, 0LL);
          if ( !v55 )
            goto LABEL_98;
          UnityEngine_Transform__set_parent(v55, (UnityEngine_Transform_o *)AppendSkillTitle, 0LL);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v53, 0LL);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          v74.fields.y = -v46;
          v74.fields.x = 0.0;
          v74.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AppendSkillTitle, v74, 0LL);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v53, 0LL);
          v57 = (UnityEngine_Transform_o *)AppendSkillTitle;
          if ( !byte_4B109C6 )
          {
            AppendSkillTitle = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v24, v56);
            byte_4B109C6 = 1;
          }
          if ( !v57 )
            goto LABEL_98;
          UnityEngine_Transform__set_localScale(v57, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v53, 0LL);
          v59 = (UnityEngine_Transform_o *)AppendSkillTitle;
          if ( !byte_4B109C7 )
          {
            AppendSkillTitle = sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v24, v58);
            byte_4B109C7 = 1;
          }
          if ( !v59 )
            goto LABEL_98;
          UnityEngine_Transform__set_localRotation(
            v59,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0LL);
          v40 = v63;
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
                                        v45,
                                        0LL);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          AppendSkillTitle = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)AppendSkillTitle,
                                        0LL);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          v53 = (UnityEngine_GameObject_o *)AppendSkillTitle;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 1, 0LL);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v53, 0LL);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          v73.fields.y = -v46;
          v73.fields.x = 0.0;
          v73.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AppendSkillTitle, v73, 0LL);
        }
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v53,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v60);
        AppendSkillTitle = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( (AppendSkillTitle & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_98;
          BattleServantConfSkillComponent__SetItem(
            (BattleServantConfSkillComponent_o *)Component_object,
            v45 + 1,
            v48,
            v50,
            v51,
            v52,
            v49,
            0LL);
        }
        else if ( !Component_object )
        {
          goto LABEL_98;
        }
        AppendSkillTitle = BattleServantConfSkillComponent__GetHeight(
                             (BattleServantConfSkillComponent_o *)Component_object,
                             0LL);
        v43 = v64;
        v46 = v46 + (float)((float)(AppendSkillTitle - HIDWORD(Component_object[5].klass)) + 110.0);
        ++v45;
      }
    }
    v42 = idList;
    ++v44;
    if ( !idList )
      goto LABEL_98;
  }
  this->fields.AppendSkillOffset = -(float)(v46 + 1.0);
}


bool __fastcall BattleServantConfConponent__SetAtlas(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  AssetData_o *AssetStorage; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *Object_object__49237568; // x20
  char v18; // w21
  Il2CppObject *Component_object; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B1928D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_3233/*"Battle/Common"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_3251/*"BattleAssetUIAtlas"*/, v12, v13);
    byte_4B1928D = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3233/*"Battle/Common"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_12;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              AssetStorage,
                              (System_String_o *)StringLiteral_3251/*"BattleAssetUIAtlas"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(
                                  (UnityEngine_Object_o *)Object_object__49237568,
                                  0LL,
                                  0LL);
  v18 = (char)AssetStorage;
  if ( ((unsigned __int8)AssetStorage & 1) != 0 )
  {
    if ( Object_object__49237568 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Object_object__49237568,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      this->fields.BattleAssetUIAtlas = (struct UIAtlas_o *)Component_object;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.BattleAssetUIAtlas,
        (int64_t)Component_object,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      return v18 & 1;
    }
LABEL_12:
    sub_1BCAA3C(AssetStorage, v15);
  }
  return v18 & 1;
}


void __fastcall BattleServantConfConponent__SetAttribute(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_Object_o *attributeLabel; // x20
  const MethodInfo *v33; // x1
  UILabel_o *mPanel; // x0
  const MethodInfo *v35; // x2
  struct BattleServantData_o *bsvtData; // x8
  struct ServantEntity_o *svtdata; // x8
  bool v38; // w20
  bool IsHideAttribute; // w0
  __int64 v40; // x1
  UnityEngine_Object_o *attributeObj; // x22
  bool v42; // w21
  bool v43; // w0
  UnityEngine_Object_o *AbillityScrollView; // x20
  struct UIScrollView_o *v45; // x8
  UnityEngine_Object_o *npRoot; // x20
  int v47; // w8
  UnityEngine_Object_o *v48; // x21
  struct UIScrollView_o *v49; // x8
  UnityEngine_Object_o *v50; // x21
  int v51; // w8
  float v52; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIScrollView_o *v54; // x8
  struct UIScrollView_o *v55; // x8
  struct UIProgressBar_o *verticalScrollBar; // x8
  struct UIScrollView_o *v57; // x8
  struct UIProgressBar_o *v58; // x8
  float v59; // s8
  UnityEngine_GameObject_o *v60; // x0
  struct UIScrollView_o *v61; // x8
  struct UIScrollView_o *v62; // x8
  struct UIProgressBar_o *v63; // x8
  struct UIScrollView_o *v64; // x8
  struct UIProgressBar_o *v65; // x8
  __int64 v66; // x1
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  const MethodInfo *v68; // x3
  int32_t v69; // w24
  int32_t v70; // w23
  int32_t HideStateSubAttribute; // w21
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  System_Collections_Generic_List_object__o *v75; // x22
  System_String_o *OverwritePolicy; // x25
  System_String_o *IsNullOrEmpty; // x0
  const MethodInfo *v78; // x3
  System_String_o *v79; // x0
  __int64 v80; // x1
  System_String_o *v81; // x25
  System_String_o *HideStr; // x24
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  struct System_Object_array *items; // x8
  _QWORD *v90; // x9
  __int64 size; // x10
  Il2CppClass **v92; // x0
  System_String_o *OverwritePersonality; // x24
  System_String_o *v94; // x0
  const MethodInfo *v95; // x3
  System_String_o *v96; // x0
  __int64 v97; // x1
  System_String_o *v98; // x24
  System_String_o *v99; // x23
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  Il2CppClass **v109; // x0
  System_String_o *v110; // x0
  System_String_o *v111; // x23
  System_String_o *v112; // x22
  System_String_o *OverwriteSubAttribute; // x24
  System_String_o *Attri; // x0
  const MethodInfo *v115; // x3
  System_String_o *v116; // x0
  __int64 v117; // x1
  System_String_o *v118; // x20
  System_String_o *v119; // x20
  __int64 v120; // x1
  UILabel_o *v121; // x19
  System_String_o *v122; // x0
  Il2CppObject *v123; // x1
  bool v124; // w0
  __int64 v125; // x1
  bool v126; // w20
  System_String_o *v127; // x0
  int v128; // [xsp+Ch] [xbp-54h] BYREF
  int32_t personality[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B19290 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&string_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_11769/*"SERVANT_PERSONALITY_"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_11683/*"SERVANT_ATTRIBUTE_SPLIT"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_21344/*"line_whiteAlpha_Noblur"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_12086/*"SERVANT_SUB_ATTRIBUTE_"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_11679/*"SERVANT_ATTRIBUTE_FORMAT_ATTRIBUTE"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_11680/*"SERVANT_ATTRIBUTE_FORMAT_SUB_ATTRIBUTE"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_11770/*"SERVANT_POLICY_"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_11678/*"SERVANT_ATTRIBUTE_FORMAT"*/, v30, v31);
    byte_4B19290 = 1;
  }
  *(_QWORD *)personality = 0LL;
  v128 = 0;
  attributeLabel = (UnityEngine_Object_o *)this->fields.attributeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    v38 = svtdata->fields.type == 5 || (unsigned int)(svtdata->fields.type - 1) < 2;
    IsHideAttribute = BattleServantConfConponent__IsHideAttribute(this, v38, v35);
    attributeObj = (UnityEngine_Object_o *)this->fields.attributeObj;
    v42 = IsHideAttribute;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
    v43 = UnityEngine_Object__op_Inequality(attributeObj, 0LL, 0LL);
    if ( v42 )
    {
      if ( v43 )
      {
        mPanel = (UILabel_o *)this->fields.attributeObj;
        if ( !mPanel )
          goto LABEL_137;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 0, 0LL);
      }
      AbillityScrollView = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
      mPanel = (UILabel_o *)UnityEngine_Object__op_Inequality(AbillityScrollView, 0LL, 0LL);
      if ( ((unsigned __int8)mPanel & 1) == 0 )
        goto LABEL_53;
      v45 = this->fields.AbillityScrollView;
      if ( !v45 )
        goto LABEL_137;
      mPanel = (UILabel_o *)v45->fields.mPanel;
      if ( !mPanel )
        goto LABEL_137;
      if ( UIPanel__get_height((UIPanel_o *)mPanel, 0LL) > 430.0 )
        goto LABEL_53;
      if ( !this->fields.isEquip )
        goto LABEL_42;
      npRoot = (UnityEngine_Object_o *)this->fields.npRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
      if ( UnityEngine_Object__op_Equality(npRoot, 0LL, 0LL) )
      {
        mPanel = (UILabel_o *)this->fields.AbillityScrollView;
        if ( !mPanel )
          goto LABEL_137;
        v47 = 1110966272;
      }
      else
      {
LABEL_42:
        mPanel = (UILabel_o *)this->fields.AbillityScrollView;
        if ( !mPanel )
          goto LABEL_137;
        v47 = -1034158080;
      }
      v52 = *(float *)&v47;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0LL);
      GameObjectExtensions__SetLocalPositionY(gameObject, v52, 0LL);
      v54 = this->fields.AbillityScrollView;
      if ( v54 )
      {
        mPanel = (UILabel_o *)v54->fields.mPanel;
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
          v55 = this->fields.AbillityScrollView;
          if ( v55 )
          {
            verticalScrollBar = v55->fields.verticalScrollBar;
            if ( verticalScrollBar )
            {
              mPanel = (UILabel_o *)verticalScrollBar->fields.mBG;
              if ( mPanel )
              {
                UIWidget__set_height((UIWidget_o *)mPanel, 448, 0LL);
                v57 = this->fields.AbillityScrollView;
                if ( v57 )
                {
                  v58 = v57->fields.verticalScrollBar;
                  if ( v58 )
                  {
                    mPanel = (UILabel_o *)v58->fields.mFG;
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
      sub_1BCAA3C(mPanel, v33);
    }
    if ( v43 )
    {
      mPanel = (UILabel_o *)this->fields.attributeObj;
      if ( !mPanel )
        goto LABEL_137;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 1, 0LL);
    }
    v48 = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
    mPanel = (UILabel_o *)UnityEngine_Object__op_Inequality(v48, 0LL, 0LL);
    if ( ((unsigned __int8)mPanel & 1) != 0 )
    {
      v49 = this->fields.AbillityScrollView;
      if ( !v49 )
        goto LABEL_137;
      mPanel = (UILabel_o *)v49->fields.mPanel;
      if ( !mPanel )
        goto LABEL_137;
      if ( UIPanel__get_height((UIPanel_o *)mPanel, 0LL) > 430.0 )
      {
        if ( !this->fields.isEquip )
          goto LABEL_57;
        v50 = (UnityEngine_Object_o *)this->fields.npRoot;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
        if ( UnityEngine_Object__op_Equality(v50, 0LL, 0LL) )
        {
          mPanel = (UILabel_o *)this->fields.AbillityScrollView;
          if ( !mPanel )
            goto LABEL_137;
          v51 = 1110966272;
        }
        else
        {
LABEL_57:
          mPanel = (UILabel_o *)this->fields.AbillityScrollView;
          if ( !mPanel )
            goto LABEL_137;
          v51 = -1034158080;
        }
        v59 = *(float *)&v51;
        v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0LL);
        GameObjectExtensions__SetLocalPositionY(v60, v59, 0LL);
        v61 = this->fields.AbillityScrollView;
        if ( !v61 )
          goto LABEL_137;
        mPanel = (UILabel_o *)v61->fields.mPanel;
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
        v62 = this->fields.AbillityScrollView;
        if ( !v62 )
          goto LABEL_137;
        v63 = v62->fields.verticalScrollBar;
        if ( !v63 )
          goto LABEL_137;
        mPanel = (UILabel_o *)v63->fields.mBG;
        if ( !mPanel )
          goto LABEL_137;
        UIWidget__set_height((UIWidget_o *)mPanel, 430, 0LL);
        v64 = this->fields.AbillityScrollView;
        if ( !v64 )
          goto LABEL_137;
        v65 = v64->fields.verticalScrollBar;
        if ( !v65 )
          goto LABEL_137;
        mPanel = (UILabel_o *)v65->fields.mFG;
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
    if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL)
      || BattleServantConfConponent__SetAtlas(this, v33) )
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
      UISprite__set_spriteName((UISprite_o *)mPanel, (System_String_o *)StringLiteral_21344/*"line_whiteAlpha_Noblur"*/, 0LL);
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_137;
      ((void (__fastcall *)(UILabel_o *, __int64, void *))mPanel->klass[1]._1.namespaze)(
        mPanel,
        1LL,
        mPanel->klass[1]._1.byval_arg.data);
      BattleServantConfConponent__GetAttributeValue(this, &personality[1], personality, v68);
      mPanel = (UILabel_o *)this->fields.bsvtData;
      if ( !mPanel )
        goto LABEL_137;
      mPanel = (UILabel_o *)BattleServantData__GetHideStatePolicy((BattleServantData_o *)mPanel, 0LL);
      if ( !this->fields.bsvtData )
        goto LABEL_137;
      v69 = (int)mPanel;
      mPanel = (UILabel_o *)BattleServantData__GetHideStatePersonality(this->fields.bsvtData, 0LL);
      if ( !this->fields.bsvtData )
        goto LABEL_137;
      v70 = (int)mPanel;
      HideStateSubAttribute = BattleServantData__GetHideStateSubAttribute(this->fields.bsvtData, 0LL);
      v75 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_string__TypeInfo,
                                                           v72,
                                                           v73,
                                                           v74);
      System_Collections_Generic_List_object____ctor(
        v75,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
      if ( v69 != 3 )
      {
        mPanel = (UILabel_o *)this->fields.bsvtData;
        if ( !mPanel )
          goto LABEL_137;
        OverwritePolicy = BattleServantData__GetOverwritePolicy((BattleServantData_o *)mPanel, 0LL);
        IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(OverwritePolicy, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( v38 && (personality[1] | v69) == 0 )
            v69 = 2;
          if ( personality[1] )
          {
            v79 = System_Int32__ToString((int32_t)&personality[1], 0LL);
            v81 = System_String__Concat_62401220((System_String_o *)StringLiteral_11770/*"SERVANT_POLICY_"*/, v79, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v80);
            IsNullOrEmpty = LocalizationManager__Get(v81, 0LL);
            OverwritePolicy = IsNullOrEmpty;
          }
        }
        HideStr = BattleServantConfConponent__GetHideStr(
                    (BattleServantConfConponent_o *)IsNullOrEmpty,
                    v69,
                    OverwritePolicy,
                    v78);
        mPanel = (UILabel_o *)System_String__IsNullOrEmpty(HideStr, 0LL);
        if ( ((unsigned __int8)mPanel & 1) == 0 )
        {
          if ( !v75 )
            goto LABEL_137;
          items = v75->fields._items;
          v90 = Method_System_Collections_Generic_List_string__Add__;
          ++v75->fields._version;
          if ( !items )
            goto LABEL_137;
          size = v75->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v75,
              (Il2CppObject *)HideStr,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
          }
          else
          {
            v92 = &items->obj.klass + size;
            v75->fields._size = size + 1;
            v92[4] = (Il2CppClass *)HideStr;
            sub_1BCA784((PartyOrganizationUtility_o *)(v92 + 4), (int64_t)HideStr, v83, v84, v85, v86, v87, v88);
          }
        }
      }
      if ( v70 != 3 )
      {
        mPanel = (UILabel_o *)this->fields.bsvtData;
        if ( !mPanel )
          goto LABEL_137;
        OverwritePersonality = BattleServantData__GetOverwritePersonality((BattleServantData_o *)mPanel, 0LL);
        v94 = (System_String_o *)System_String__IsNullOrEmpty(OverwritePersonality, 0LL);
        if ( ((unsigned __int8)v94 & 1) != 0 )
        {
          if ( v38 && (personality[0] | v70) == 0 )
            v70 = 2;
          if ( personality[0] )
          {
            v96 = System_Int32__ToString((int32_t)personality, 0LL);
            v98 = System_String__Concat_62401220((System_String_o *)StringLiteral_11769/*"SERVANT_PERSONALITY_"*/, v96, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v97);
            v94 = LocalizationManager__Get(v98, 0LL);
            OverwritePersonality = v94;
          }
        }
        v99 = BattleServantConfConponent__GetHideStr(
                (BattleServantConfConponent_o *)v94,
                v70,
                OverwritePersonality,
                v95);
        mPanel = (UILabel_o *)System_String__IsNullOrEmpty(v99, 0LL);
        if ( ((unsigned __int8)mPanel & 1) == 0 )
        {
          if ( !v75 )
            goto LABEL_137;
          v106 = v75->fields._items;
          v107 = Method_System_Collections_Generic_List_string__Add__;
          ++v75->fields._version;
          if ( !v106 )
            goto LABEL_137;
          v108 = v75->fields._size;
          if ( (unsigned int)v108 >= v106->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v75,
              (Il2CppObject *)v99,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
          }
          else
          {
            v109 = &v106->obj.klass + v108;
            v75->fields._size = v108 + 1;
            v109[4] = (Il2CppClass *)v99;
            sub_1BCA784((PartyOrganizationUtility_o *)(v109 + 4), (int64_t)v99, v100, v101, v102, v103, v104, v105);
          }
        }
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
      v110 = LocalizationManager__Get((System_String_o *)StringLiteral_11683/*"SERVANT_ATTRIBUTE_SPLIT"*/, 0LL);
      v111 = System_String__Join_62416876(v110, (System_Collections_Generic_IEnumerable_string__o *)v75, 0LL);
      v112 = (System_String_o *)StringLiteral_1/*""*/;
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
          if ( v38 && ((unsigned int)Attri | HideStateSubAttribute) == 0 )
            HideStateSubAttribute = 2;
          v128 = (int)Attri;
          if ( (_DWORD)Attri )
          {
            v116 = System_Int32__ToString((int32_t)&v128, 0LL);
            v118 = System_String__Concat_62401220((System_String_o *)StringLiteral_12086/*"SERVANT_SUB_ATTRIBUTE_"*/, v116, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v117);
            Attri = LocalizationManager__Get(v118, 0LL);
            OverwriteSubAttribute = Attri;
          }
        }
        v119 = BattleServantConfConponent__GetHideStr(
                 (BattleServantConfConponent_o *)Attri,
                 HideStateSubAttribute,
                 OverwriteSubAttribute,
                 v115);
        if ( !System_String__IsNullOrEmpty(v119, 0LL) )
          v112 = v119;
      }
      if ( System_String__IsNullOrEmpty(v111, 0LL) )
      {
        v121 = this->fields.attributeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v120);
        v122 = LocalizationManager__Get((System_String_o *)StringLiteral_11680/*"SERVANT_ATTRIBUTE_FORMAT_SUB_ATTRIBUTE"*/, 0LL);
        v123 = (Il2CppObject *)v112;
LABEL_132:
        mPanel = (UILabel_o *)System_String__Format(v122, v123, 0LL);
        if ( !v121 )
          goto LABEL_137;
LABEL_133:
        UILabel__set_text(v121, (System_String_o *)mPanel, 0LL);
        return;
      }
      v124 = System_String__IsNullOrEmpty(v112, 0LL);
      v121 = this->fields.attributeLabel;
      v126 = v124;
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v124 )
        {
LABEL_131:
          v122 = LocalizationManager__Get((System_String_o *)StringLiteral_11679/*"SERVANT_ATTRIBUTE_FORMAT_ATTRIBUTE"*/, 0LL);
          v123 = (Il2CppObject *)v111;
          goto LABEL_132;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v125);
        if ( v126 )
          goto LABEL_131;
      }
      v127 = LocalizationManager__Get((System_String_o *)StringLiteral_11678/*"SERVANT_ATTRIBUTE_FORMAT"*/, 0LL);
      mPanel = (UILabel_o *)System_String__Format_62415592(v127, (Il2CppObject *)v111, (Il2CppObject *)v112, 0LL);
      if ( !v121 )
        goto LABEL_137;
      goto LABEL_133;
    }
  }
}


void __fastcall BattleServantConfConponent__SetClassBoardSkillList(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *classBoardSkillObj; // x20
  const MethodInfo *v7; // x1
  BattleServantConfWindowPassiveSkillListComponent_o *v8; // x0
  struct BattleServantData_o *bsvtData; // x8
  __int64 v10; // x1
  UnityEngine_Object_o *BattleAssetUIAtlas; // x20
  const MethodInfo *v12; // x2

  if ( (byte_4B1928F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_21624/*"menu_txt_class_score"*/, v4, v5);
    byte_4B1928F = 1;
  }
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0LL, 0LL) )
  {
    v8 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
    if ( !v8 )
      goto LABEL_19;
    BattleServantConfWindowPassiveSkillListComponent__SetActive(v8, 0, 0LL);
  }
  bsvtData = this->fields.bsvtData;
  if ( bsvtData
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)bsvtData->fields.classBoardAddPassiveSkills, 0LL) )
  {
    BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL)
      || BattleServantConfConponent__SetAtlas(this, v7) )
    {
      v8 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
      if ( v8 )
      {
        ((void (__fastcall *)(BattleServantConfWindowPassiveSkillListComponent_o *, struct UIAtlas_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._5_SetSkillTitle.method)(
          v8,
          this->fields.BattleAssetUIAtlas,
          StringLiteral_21624/*"menu_txt_class_score"*/,
          v8->klass->vtable._6_SetSkillInfoObject.methodPtr);
        v8 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
        if ( v8 )
        {
          BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
            (BattleServantClassBoardSkillEffectListComponent_o *)v8,
            this->fields.bsvtData,
            v12);
          v8 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
          if ( v8 )
          {
            BattleServantConfWindowPassiveSkillListComponent__SetActive(v8, 1, 0LL);
            return;
          }
        }
      }
LABEL_19:
      sub_1BCAA3C(v8, v7);
    }
  }
}


void __fastcall BattleServantConfConponent__SetClassSkillList(
        BattleServantConfConponent_o *this,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_Object_o *ClassSkillObj; // x21
  const MethodInfo *v34; // x1
  __int64 bsvtData; // x0
  UnityEngine_Object_o *ClassSkillListParent; // x21
  __int64 v37; // x1
  UnityEngine_Object_o *ClassSkillInfoPrefab; // x21
  __int64 v39; // x1
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  struct BattleServantData_o *v41; // x8
  __int64 v42; // x21
  __int64 v43; // x22
  int32_t v44; // w0
  struct BattleServantData_o *v45; // x8
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t userSvtId; // x1
  __int128 v48; // q1
  BattleUserServantData_o *UserServantFromID; // x21
  System_Collections_Generic_IEnumerable_T__o *v50; // x22
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Collections_Generic_List_int__o *v54; // x20
  BattleServantData_o *v55; // x22
  System_Collections_ICollection_o *v56; // x21
  const MethodInfo *v57; // x2
  int32_t v58; // w21
  Il2CppObject *Master_object; // x21
  Il2CppObject *v60; // x0
  SkillLvMaster_o *v61; // x26
  int32_t v62; // w22
  int32_t v63; // w24
  float v64; // s8
  int32_t v65; // w27
  System_String_o *v66; // x28
  System_String_o *v67; // x29
  UnityEngine_GameObject_o *v68; // x25
  Il2CppObject *v69; // x25
  SkillLvMaster_o *v70; // x21
  UnityEngine_Transform_o *v71; // x26
  __int64 v72; // x2
  UnityEngine_Transform_o *v73; // x26
  __int64 v74; // x2
  UnityEngine_Transform_o *v75; // x26
  __int64 v76; // x1
  Il2CppObject *Component_object; // x25
  Il2CppObject *v78; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+30h] [xbp-A0h]
  SkillLvEntity_o *v81; // [xsp+58h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19281 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, battleInfoData, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__InsertRange__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v23, v24);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v25, v26);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27, v28);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_20736/*"img_txt_classskill"*/, v31, v32);
    byte_4B19281 = 1;
  }
  entity = 0LL;
  v81 = 0LL;
  ClassSkillObj = (UnityEngine_Object_o *)this->fields.ClassSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, battleInfoData);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
    if ( !UnityEngine_Object__op_Equality(ClassSkillListParent, 0LL, 0LL) && this->fields.bsvtData )
    {
      ClassSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.ClassSkillInfoPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
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
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
          if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL)
            || BattleServantConfConponent__SetAtlas(this, v34) )
          {
            bsvtData = (__int64)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_54;
            UISprite__set_atlas((UISprite_o *)bsvtData, this->fields.BattleAssetUIAtlas, 0LL);
            bsvtData = (__int64)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_54;
            UISprite__set_spriteName((UISprite_o *)bsvtData, (System_String_o *)StringLiteral_20736/*"img_txt_classskill"*/, 0LL);
            bsvtData = (__int64)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_54;
            bsvtData = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bsvtData + 840LL))(
                         bsvtData,
                         *(_QWORD *)(*(_QWORD *)bsvtData + 848LL));
            v41 = this->fields.bsvtData;
            if ( !v41 )
              goto LABEL_54;
            v43 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
            v42 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34);
            *(_QWORD *)&v83.fields.currentCryptoKey = v43;
            *(_QWORD *)&v83.fields.fakeValue = v42;
            v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v83, 0LL);
            bsvtData = BattleInfoData__IsUseNewTransformLogic(battleInfoData, v44, 0LL);
            v45 = this->fields.bsvtData;
            if ( !v45 )
              goto LABEL_54;
            if ( (bsvtData & 1) != 0 )
            {
              deckSvt = v45->fields.deckSvt;
              if ( !deckSvt )
                goto LABEL_54;
              userSvtId = deckSvt->fields.userSvtId;
            }
            else
            {
              v48 = *(_OWORD *)&v45->fields.userSvtId.fields.fakeValue;
              *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&v45->fields.userSvtId.fields.currentCryptoKey;
              *(_OWORD *)&v80.fields.fakeValue = v48;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34);
              v79 = v80;
              userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v79, 0LL);
            }
            UserServantFromID = BattleInfoData__getUserServantFromID(battleInfoData, userSvtId, 0LL);
            if ( UserServantFromID )
            {
              bsvtData = (__int64)this->fields.bsvtData;
              if ( !bsvtData )
                goto LABEL_54;
              v50 = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__FilterDisplayingSkillIdArray(
                                                                     (BattleServantData_o *)bsvtData,
                                                                     UserServantFromID->fields.classPassive,
                                                                     1,
                                                                     0LL);
              v54 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_List_int__TypeInfo,
                                                                v51,
                                                                v52,
                                                                v53);
              System_Collections_Generic_List_int____ctor_56116492(
                v54,
                v50,
                (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
              v55 = this->fields.bsvtData;
              bsvtData = (__int64)BattleUserServantData__getAddPassiveSkill(UserServantFromID, 0LL);
              if ( !v55 )
                goto LABEL_54;
              v56 = (System_Collections_ICollection_o *)BattleServantData__FilterDisplayingSkillIdArray(
                                                          v55,
                                                          (System_Int32_array *)bsvtData,
                                                          0,
                                                          0LL);
              bsvtData = BasicHelper__IsNullOrEmpty(v56, 0LL);
              if ( (bsvtData & 1) != 0 )
              {
                if ( !v54 )
                  goto LABEL_54;
              }
              else
              {
                bsvtData = BattleServantConfConponent__GetSpecialPassiveSkillStartIndex(this, v54, v57);
                if ( !v54 )
                  goto LABEL_54;
                System_Collections_Generic_List_int___InsertRange(
                  v54,
                  bsvtData,
                  (System_Collections_Generic_IEnumerable_T__o *)v56,
                  (const MethodInfo_3585BF0 *)Method_System_Collections_Generic_List_int__InsertRange__);
              }
              if ( v54->fields._size >= 1 )
              {
                bsvtData = (__int64)this->fields.ClassSkillObj;
                if ( bsvtData )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                  bsvtData = (__int64)this->fields.ClassSkillListParent;
                  if ( bsvtData )
                  {
                    v58 = 0;
                    while ( 1 )
                    {
                      bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                            (UnityEngine_GameObject_o *)bsvtData,
                                            0LL);
                      if ( !bsvtData )
                        goto LABEL_54;
                      if ( v58 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0LL) )
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
                                                v58,
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
                              ++v58;
                              if ( bsvtData )
                                continue;
                            }
                          }
                        }
                      }
                      goto LABEL_54;
                    }
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v34);
                    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
                    entity = 0LL;
                    v60 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
                    v81 = 0LL;
                    if ( v54->fields._size >= 1 )
                    {
                      v61 = (SkillLvMaster_o *)v60;
                      v62 = 0;
                      v63 = 0;
                      v64 = 0.0;
                      v78 = Master_object;
                      while ( 1 )
                      {
                        bsvtData = System_Collections_Generic_List_int___get_Item(
                                     v54,
                                     v63,
                                     (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
                        if ( (int)bsvtData >= 1 )
                        {
                          if ( !Master_object )
                            goto LABEL_54;
                          v65 = bsvtData;
                          bsvtData = DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       &entity,
                                       bsvtData,
                                       (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                          if ( (bsvtData & 1) == 0 )
                            return;
                          if ( !v61 )
                            goto LABEL_54;
                          if ( !SkillLvMaster__TryGetEntity(v61, &v81, v65, 1, 0LL) )
                            return;
                          bsvtData = (__int64)entity;
                          if ( !entity )
                            goto LABEL_54;
                          bsvtData = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                          if ( !v81 )
                            goto LABEL_54;
                          v66 = (System_String_o *)bsvtData;
                          bsvtData = (__int64)SkillLvEntity__getDetail_40665920(v81, 1, 0, 0LL);
                          if ( !this->fields.ClassSkillListParent )
                            goto LABEL_54;
                          v67 = (System_String_o *)bsvtData;
                          bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                                this->fields.ClassSkillListParent,
                                                0LL);
                          if ( !bsvtData )
                            goto LABEL_54;
                          if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0LL) <= v62 )
                          {
                            v69 = (Il2CppObject *)this->fields.ClassSkillInfoPrefab;
                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
                            v70 = v61;
                            bsvtData = (__int64)UnityEngine_Object__Instantiate_object_(
                                                  v69,
                                                  (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v68 = (UnityEngine_GameObject_o *)bsvtData;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v68, 0LL);
                            if ( !this->fields.ClassSkillListParent )
                              goto LABEL_54;
                            v71 = (UnityEngine_Transform_o *)bsvtData;
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                                  this->fields.ClassSkillListParent,
                                                  0LL);
                            if ( !v71 )
                              goto LABEL_54;
                            UnityEngine_Transform__set_parent(v71, (UnityEngine_Transform_o *)bsvtData, 0LL);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v68, 0LL);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v85.fields.y = -v64;
                            v85.fields.x = 0.0;
                            v85.fields.z = 0.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v85, 0LL);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v68, 0LL);
                            v73 = (UnityEngine_Transform_o *)bsvtData;
                            if ( !byte_4B109C6 )
                            {
                              bsvtData = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v34, v72);
                              byte_4B109C6 = 1;
                            }
                            if ( !v73 )
                              goto LABEL_54;
                            UnityEngine_Transform__set_localScale(
                              v73,
                              UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                              0LL);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v68, 0LL);
                            v75 = (UnityEngine_Transform_o *)bsvtData;
                            if ( !byte_4B109C7 )
                            {
                              bsvtData = sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v34, v74);
                              byte_4B109C7 = 1;
                            }
                            if ( !v75 )
                              goto LABEL_54;
                            UnityEngine_Transform__set_localRotation(
                              v75,
                              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                              0LL);
                            v61 = v70;
                            Master_object = v78;
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
                                                  v62,
                                                  0LL);
                            if ( !bsvtData )
                              goto LABEL_54;
                            bsvtData = (__int64)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)bsvtData,
                                                  0LL);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v68 = (UnityEngine_GameObject_o *)bsvtData;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v68, 0LL);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v84.fields.y = -v64;
                            v84.fields.x = 0.0;
                            v84.fields.z = 0.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v84, 0LL);
                          }
                          Component_object = UnityEngine_GameObject__GetComponent_object_(
                                               v68,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v76);
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
                              v63 + 1,
                              v65,
                              v66,
                              v67,
                              1,
                              0,
                              0LL);
                          }
                          else if ( !Component_object )
                          {
                            goto LABEL_54;
                          }
                          ++v62;
                          v64 = v64
                              + (float)((float)(BattleServantConfSkillComponent__GetHeight(
                                                  (BattleServantConfSkillComponent_o *)Component_object,
                                                  0LL)
                                              - HIDWORD(Component_object[5].klass))
                                      + 110.0);
                        }
                        if ( ++v63 >= v54->fields._size )
                          goto LABEL_98;
                      }
                    }
                    v64 = 0.0;
LABEL_98:
                    this->fields.ClassSkillOffset = -(float)(v64 + 1.0);
                    return;
                  }
                }
LABEL_54:
                sub_1BCAA3C(bsvtData, v34);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattleServantData_o *bsvtData; // x0
  System_Int32_array *CommandCodeIdsEX; // x0
  __int64 v8; // x1
  struct BattleCommandComponent_array *CommandCardList; // x8
  System_Int32_array *v10; // x20
  unsigned __int64 v11; // x21
  int32_t *v12; // x23
  unsigned __int64 max_length; // x9
  BattleCommandComponent_o *v14; // x22
  const MethodInfo *v15; // x2
  struct BattleCommandData_o *data; // x8
  Il2CppObject *component; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B19285 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_TryGetComponent_UIWidget___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19285 = 1;
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
      sub_1BCAA3C(CommandCodeIdsEX, v8);
    v10 = CommandCodeIdsEX;
    v11 = 0LL;
    v12 = &CommandCodeIdsEX->m_Items[1];
    while ( 1 )
    {
      max_length = CommandCardList->max_length;
      if ( (__int64)v11 >= (int)max_length )
        break;
      if ( v11 >= max_length )
        goto LABEL_25;
      v14 = CommandCardList->m_Items[v11];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, 0LL, 0LL);
      if ( ((unsigned __int8)CommandCodeIdsEX & 1) == 0 )
      {
        if ( !v14 )
          goto LABEL_23;
        BattleCommandComponent__Initialize(v14, 0LL);
        v14->fields.isCodeTextureView = 1;
        BattleCommandComponent__setData_43835992(v14, this->fields.bsvtData, v11, 0LL);
        CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Component__TryGetComponent_object_(
                                                   (UnityEngine_Component_o *)this,
                                                   &component,
                                                   (const MethodInfo_2F0A5F8 *)Method_UnityEngine_Component_TryGetComponent_UIWidget___);
        if ( ((unsigned __int8)CommandCodeIdsEX & 1) != 0 )
        {
          if ( !component )
            goto LABEL_23;
          BattleCommandComponent__setDepth(v14, LODWORD(component[11].klass) + 1, 0LL);
        }
        BattleCommandComponent__SetDownloadEventSprite(v14, 0LL);
        if ( !v10 )
          goto LABEL_23;
        if ( v11 >= v10->max_length
          || (BattleCommandComponent__SetCommandCodeView_43840204(v14, v12[v11], 0LL), v11 >= v10->max_length)
          || (BattleCommandComponent__SetLockInfo(v14, v12[v11] == -1, 0LL),
              BattleServantConfConponent__SetCommandCardTypeChangeBuff(this, v14, v15),
              BattleCommandComponent__HidePowerUpValueLabelActive(v14, this->fields.isCommandCardUnderIcon, 0LL),
              BattleCommandComponent__ResetCardBuffIconAlphaAnim(v14, 0LL),
              BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(v14, 0LL),
              v11 >= v10->max_length) )
        {
LABEL_25:
          sub_1BCAA44(CommandCodeIdsEX, v8);
        }
        data = v14->fields.data;
        if ( !data )
          goto LABEL_23;
        data->fields.commandCodeId = v12[v11];
        BattleCommandComponent__UpdateCommandCardEffect(v14, 0LL);
        BattleCommandComponent__ChangeCardEffectMaskForInside(v14, 0LL);
      }
      CommandCardList = this->fields.CommandCardList;
      ++v11;
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_Object_o *CommandCodeListParent; // x20
  __int64 v29; // x1
  UnityEngine_Object_o *CommandCodeInfoPrefab; // x20
  __int64 v31; // x1
  __int64 transform; // x0
  int32_t v33; // w20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Int32_array *CommandCodeIds; // x24
  BattleServantConfConponent___c_c *v38; // x8
  System_Predicate_int__o *_9__85_0; // x21
  Il2CppObject *v40; // x22
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int v48; // w21
  __int64 v49; // x8
  int32_t v50; // w22
  unsigned __int64 v51; // x29
  float v52; // s8
  int32_t v53; // w25
  System_Int32_array *v54; // x8
  unsigned __int64 v55; // x24
  unsigned __int64 max_length; // x9
  UnityEngine_GameObject_o *v57; // x26
  Il2CppObject *v58; // x26
  UnityEngine_Transform_o *v59; // x27
  __int64 v60; // x2
  UnityEngine_Transform_o *v61; // x27
  __int64 v62; // x2
  UnityEngine_Transform_o *v63; // x27
  __int64 v64; // x1
  Il2CppObject *Component_object; // x26
  float v66; // s0
  __int64 v67; // x1
  UILabel_o *NoCommandCodeLabel; // x19
  System_Int32_array *v69; // [xsp+0h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+8h] [xbp-88h]
  System_String_array *explanationList; // [xsp+10h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19286 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_FindIndex_int___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Predicate_int__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__85_0__, v22, v23);
    sub_1BCA7E0(&BattleServantConfConponent___c_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_2879/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/, v26, v27);
    byte_4B19286 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  CommandCodeListParent = (UnityEngine_Object_o *)this->fields.CommandCodeListParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(CommandCodeListParent, 0LL, 0LL) || !this->fields.bsvtData )
    return;
  CommandCodeInfoPrefab = (UnityEngine_Object_o *)this->fields.CommandCodeInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  if ( UnityEngine_Object__op_Equality(CommandCodeInfoPrefab, 0LL, 0LL) )
    return;
  transform = (__int64)this->fields.CommandCodeInfoPrefab;
  if ( !transform )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)this->fields.CommandCodeListParent;
  if ( !transform )
    goto LABEL_90;
  v33 = 0;
  while ( 1 )
  {
    transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_90;
    if ( v33 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) )
      break;
    transform = (__int64)this->fields.CommandCodeListParent;
    if ( transform )
    {
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
      if ( transform )
      {
        transform = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v33, 0LL);
        if ( transform )
        {
          transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          if ( transform )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
            transform = (__int64)this->fields.CommandCodeListParent;
            ++v33;
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
  v38 = BattleServantConfConponent___c_TypeInfo;
  if ( !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo, v34);
    v38 = BattleServantConfConponent___c_TypeInfo;
  }
  _9__85_0 = v38->static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38, v34);
      v38 = BattleServantConfConponent___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v38->static_fields->__9;
    _9__85_0 = (System_Predicate_int__o *)sub_1BCAA2C(System_Predicate_int__TypeInfo, v34, v35, v36);
    System_Predicate_int____ctor(
      _9__85_0,
      v40,
      Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__85_0__,
      0LL);
    static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = _9__85_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__85_0,
      (int64_t)_9__85_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  transform = System_Array__FindIndex_int_(
                CommandCodeIds,
                (System_Predicate_T__o *)_9__85_0,
                (const MethodInfo_300D4DC *)Method_System_Array_FindIndex_int___);
  if ( !this->fields.NoCommandCodeLabel
    || (v48 = transform,
        (transform = (__int64)UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)this->fields.NoCommandCodeLabel,
                                0LL)) == 0) )
  {
LABEL_90:
    sub_1BCAA3C(transform, v31);
  }
  if ( v48 == -1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
    NoCommandCodeLabel = this->fields.NoCommandCodeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v67);
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2879/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/, 0LL);
    if ( NoCommandCodeLabel )
    {
      UILabel__set_text(NoCommandCodeLabel, (System_String_o *)transform, 0LL);
      return;
    }
    goto LABEL_90;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_90;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)transform,
                                                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_90;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !CommandCodeIds )
    goto LABEL_90;
  v49 = *(_QWORD *)&CommandCodeIds->max_length;
  if ( (int)v49 >= 1 )
  {
    v50 = 0;
    v51 = 0LL;
    v52 = 0.0;
    v69 = CommandCodeIds;
    do
    {
      if ( v51 >= (unsigned int)v49 )
LABEL_91:
        sub_1BCAA44(transform, v31);
      v53 = CommandCodeIds->m_Items[v51 + 1];
      if ( v53 >= 1 )
      {
        transform = (__int64)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_90;
        transform = (__int64)DataMasterBase_object__object__int___GetEntity(
                               MasterData_object,
                               v53,
                               (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( transform )
        {
          CommandCodeEntity__GetSkillInfo((CommandCodeEntity_o *)transform, &idList, &titleList, &explanationList, 0LL);
          v54 = idList;
          if ( !idList )
            goto LABEL_90;
          v55 = 0LL;
          while ( 1 )
          {
            max_length = v54->max_length;
            if ( (__int64)v55 >= (int)max_length )
              break;
            if ( v55 >= max_length )
              goto LABEL_91;
            if ( v54->m_Items[v55 + 1] >= 1 )
            {
              transform = (__int64)this->fields.CommandCodeListParent;
              if ( !transform )
                goto LABEL_90;
              transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
              if ( !transform )
                goto LABEL_90;
              if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) <= v50 )
              {
                v58 = (Il2CppObject *)this->fields.CommandCodeInfoPrefab;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
                transform = (__int64)UnityEngine_Object__Instantiate_object_(
                                       v58,
                                       (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
                if ( !transform )
                  goto LABEL_90;
                v57 = (UnityEngine_GameObject_o *)transform;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
                transform = (__int64)UnityEngine_GameObject__get_transform(v57, 0LL);
                if ( !this->fields.CommandCodeListParent )
                  goto LABEL_90;
                v59 = (UnityEngine_Transform_o *)transform;
                transform = (__int64)UnityEngine_GameObject__get_transform(this->fields.CommandCodeListParent, 0LL);
                if ( !v59 )
                  goto LABEL_90;
                UnityEngine_Transform__set_parent(v59, (UnityEngine_Transform_o *)transform, 0LL);
                transform = (__int64)UnityEngine_GameObject__get_transform(v57, 0LL);
                if ( !transform )
                  goto LABEL_90;
                v74.fields.x = 0.0;
                v74.fields.z = 0.0;
                v74.fields.y = v52;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v74, 0LL);
                transform = (__int64)UnityEngine_GameObject__get_transform(v57, 0LL);
                v61 = (UnityEngine_Transform_o *)transform;
                if ( !byte_4B109C6 )
                {
                  transform = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v31, v60);
                  byte_4B109C6 = 1;
                }
                if ( !v61 )
                  goto LABEL_90;
                UnityEngine_Transform__set_localScale(v61, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
                transform = (__int64)UnityEngine_GameObject__get_transform(v57, 0LL);
                v63 = (UnityEngine_Transform_o *)transform;
                if ( !byte_4B109C7 )
                {
                  transform = sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v31, v62);
                  byte_4B109C7 = 1;
                }
                if ( !v63 )
                  goto LABEL_90;
                UnityEngine_Transform__set_localRotation(
                  v63,
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
                transform = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v50, 0LL);
                if ( !transform )
                  goto LABEL_90;
                transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
                if ( !transform )
                  goto LABEL_90;
                v57 = (UnityEngine_GameObject_o *)transform;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
              }
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   v57,
                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64);
              transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
              if ( (transform & 1) != 0 )
              {
                if ( !idList )
                  goto LABEL_90;
                if ( v55 >= idList->max_length )
                  goto LABEL_91;
                if ( !titleList )
                  goto LABEL_90;
                if ( v55 >= titleList->max_length )
                  goto LABEL_91;
                if ( !explanationList )
                  goto LABEL_90;
                if ( v55 >= explanationList->max_length )
                  goto LABEL_91;
                if ( !Component_object )
                  goto LABEL_90;
                CommandCodeSkillInfo__Set(
                  (CommandCodeSkillInfo_o *)Component_object,
                  v53,
                  idList->m_Items[v55 + 1],
                  titleList->m_Items[v55],
                  explanationList->m_Items[v55],
                  v55 == 0,
                  0LL);
              }
              v54 = idList;
              v66 = -100.0;
              if ( !v55 )
                v66 = -126.0;
              v52 = v52 + v66;
              ++v50;
            }
            ++v55;
            if ( !v54 )
              goto LABEL_90;
          }
          CommandCodeIds = v69;
        }
      }
      LODWORD(v49) = CommandCodeIds->max_length;
      ++v51;
    }
    while ( (__int64)v51 < (int)v49 );
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantConfConponent__StartOpenTab(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B19289 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantConfConponent__StartOpenTab_d__92_TypeInfo, method, v2);
    byte_4B19289 = 1;
  }
  v5 = sub_1BCAA2C(BattleServantConfConponent__StartOpenTab_d__92_TypeInfo, method, v2, v3);
  BattleServantConfConponent__StartOpenTab_d__92___ctor((BattleServantConfConponent__StartOpenTab_d__92_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_String_o *__fastcall BattleServantConfConponent__get_closeBtnPath(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x19
  __int64 *v12; // x8

  if ( (byte_4B1928E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_18202/*"close"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_14698/*"Top/close"*/, v6, v7);
    byte_4B1928E = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BCAA3C(0LL, v9);
  v11 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_14698/*"Top/close"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
    v12 = &StringLiteral_14698/*"Top/close"*/;
  else
    v12 = &StringLiteral_18202/*"close"*/;
  return (System_String_o *)*v12;
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
  sub_1BCA784(
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  BattleServantData_o **p_bsvtData; // x21
  System_String_o *v38; // x1
  UnityEngine_Object_o *data; // x24
  BattleServantData_o *bsvtData; // x0
  struct BattleData_o *v41; // x8
  UnityEngine_Object_o *shortNameLabel; // x25
  UILabel_o *v43; // x25
  UnityEngine_Object_o *atklabel; // x25
  struct BattleServantData_o *v45; // x8
  UILabel_o *v46; // x25
  Il2CppObject *v47; // x0
  struct BattleServantData_o *v48; // x8
  BattleViewBufflistComponent_o *buffListView; // x25
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x1
  int32_t v55; // w23
  UnityEngine_Object_o *equipObj; // x24
  __int64 v57; // x1
  UnityEngine_GameObject_o *v58; // x24
  float LocalPositionY; // s0
  UnityEngine_Object_o *npRoot; // x24
  bool v61; // w0
  TreasureDvcLvEntity_o *v62; // x24
  UIWidget_o *npdetail; // x25
  UILabel_o *v64; // x25
  System_String_o *DetalShort_40762616; // x0
  UILabel_o *maxNp; // x25
  Il2CppObject *v67; // x0
  struct UILabel_o *v68; // x8
  UILabel_o *nplevel; // x24
  System_String_o *v70; // x1
  __int64 v71; // x1
  UnityEngine_Object_o *v72; // x24
  bool IsNpDetailActive; // w24
  UITexture_o *facetex; // x23
  int32_t v75; // w24
  int32_t v76; // w25
  __int64 v77; // x1
  int32_t CommandDispLimitCount; // w26
  struct UITexture_o *Manager__loadCommandCard; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  __int64 v86; // x1
  UnityEngine_Object_o *havenotTdLabel; // x22
  bool v88; // w1
  System_String_o **p_svtOverwriteName; // x8
  __int64 v90; // x1
  UnityEngine_Object_o *unknownNp; // x25
  __int64 v92; // x1
  UILabel_o *v93; // x25
  UnityEngine_Object_o *commandCard; // x24
  __int64 v95; // x2
  __int64 v96; // x3
  BattleCommandData_o *v97; // x24
  UnityEngine_Object_o *npSpeedChange; // x22
  UnityEngine_Object_o *classIcon; // x21
  ServantClassIconComponent_o *v100; // x21
  int32_t IconSpriteScaledWidth; // w0
  __int64 v102; // x1
  UnityEngine_Object_o *v103; // x21
  int32_t v104; // w20
  __int64 v105; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v107; // x1
  int v108; // [xsp+Ch] [xbp-64h] BYREF
  int32_t atk; // [xsp+18h] [xbp-58h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-54h] BYREF

  battle_info = battleInfoData;
  if ( (byte_4B1927E & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandData_TypeInfo, inbsvtData, isShowBuffIcon);
    sub_1BCA7E0(&BattleServantConfConponent_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIAnchor___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v17, v18);
    sub_1BCA7E0(&int_TypeInfo, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&StringLiteral_9464/*"NP_UNKNOWN"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_9056/*"Max {0}%"*/, v35, v36);
    byte_4B1927E = 1;
  }
  lv = 0;
  this->fields.bsvtData = inbsvtData;
  p_bsvtData = &this->fields.bsvtData;
  sub_1BCA784(
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
      bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
      battle_info = 0LL;
      if ( ((unsigned __int8)bsvtData & 1) != 0 )
      {
        v41 = this->fields.data;
        if ( !v41 )
          goto LABEL_144;
        battle_info = v41->fields.battle_info;
      }
    }
    shortNameLabel = (UnityEngine_Object_o *)this->fields.shortNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
    if ( UnityEngine_Object__op_Inequality(shortNameLabel, 0LL, 0LL) )
    {
      bsvtData = this->fields.bsvtData;
      if ( !bsvtData )
        goto LABEL_144;
      v43 = this->fields.shortNameLabel;
      bsvtData = (BattleServantData_o *)BattleServantData__getServantShortName(bsvtData, 0LL);
      if ( !v43 )
        goto LABEL_144;
      UILabel__set_text(v43, (System_String_o *)bsvtData, 0LL);
      CommonFunction__ScalingLabelWidth(this->fields.shortNameLabel, 270, 0LL);
    }
    atklabel = (UnityEngine_Object_o *)this->fields.atklabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
    bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(atklabel, 0LL, 0LL);
    if ( ((unsigned __int8)bsvtData & 1) != 0 )
    {
      v45 = this->fields.bsvtData;
      if ( !v45 )
        goto LABEL_144;
      v46 = this->fields.atklabel;
      atk = v45->fields.atk;
      v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &atk);
      bsvtData = (BattleServantData_o *)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v47, 0LL);
      if ( !v46 )
        goto LABEL_144;
      UILabel__set_text(v46, (System_String_o *)bsvtData, 0LL);
    }
    bsvtData = (BattleServantData_o *)this->fields.buffListView;
    if ( bsvtData )
    {
      BattleViewBufflistComponent__setClassIcon((BattleViewBufflistComponent_o *)bsvtData, this->fields.bsvtData, 0LL);
      v48 = this->fields.bsvtData;
      if ( v48 )
      {
        bsvtData = (BattleServantData_o *)v48->fields.buffData;
        if ( bsvtData )
        {
          buffListView = this->fields.buffListView;
          bsvtData = (BattleServantData_o *)BattleBuffData__getShowServantConf((BattleBuffData_o *)bsvtData, 0LL);
          if ( buffListView )
          {
            BattleViewBufflistComponent__setBuffList(buffListView, (BattleBuffData_ShowBuffData_array *)bsvtData, 0LL);
            BattleServantConfConponent__setEquipList(this, v50);
            BattleServantConfConponent__SetClassSkillList(this, battle_info, v51);
            BattleServantConfConponent__SetAppendSkillList(this, battle_info, v52);
            if ( !isNpc )
              BattleServantConfConponent__SetClassBoardSkillList(this, v53);
            BattleServantConfConponent__SetCommandCard(this, v53);
            BattleServantConfConponent__SetCommandCodeSkillList(this, v54);
            bsvtData = this->fields.bsvtData;
            if ( bsvtData )
            {
              bsvtData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(bsvtData, 1, 0LL, 0LL);
              if ( *p_bsvtData )
              {
                v55 = (int)bsvtData;
                lv = (*p_bsvtData)->fields.treasuredvcLevel;
                equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
                if ( UnityEngine_Object__op_Inequality(equipObj, 0LL, 0LL) )
                {
                  v58 = this->fields.equipObj;
                  LocalPositionY = GameObjectExtensions__GetLocalPositionY(v58, 0LL);
                  GameObjectExtensions__SetLocalPositionY(v58, LocalPositionY - (float)this->fields.adjustHeight, 0LL);
                }
                this->fields.adjustHeight = 0;
                npRoot = (UnityEngine_Object_o *)this->fields.npRoot;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
                v61 = UnityEngine_Object__op_Inequality(npRoot, 0LL, 0LL);
                if ( v55 < 1 )
                {
                  if ( v61 )
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
                  v75 = (int)bsvtData;
                  bsvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(*p_bsvtData, 1, 0LL);
                  if ( !*p_bsvtData )
                    goto LABEL_144;
                  v76 = (int)bsvtData;
                  CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(*p_bsvtData, 0LL);
                  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v77);
                  Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(
                                               facetex,
                                               v75,
                                               v76,
                                               CommandDispLimitCount,
                                               0LL);
                  this->fields.facetex = Manager__loadCommandCard;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&this->fields.facetex,
                    (int64_t)Manager__loadCommandCard,
                    v80,
                    v81,
                    v82,
                    v83,
                    v84,
                    v85);
                  havenotTdLabel = (UnityEngine_Object_o *)this->fields.havenotTdLabel;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v86);
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
                  v88 = 1;
                  goto LABEL_118;
                }
                if ( !v61 )
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
                bsvtData = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !bsvtData )
                  goto LABEL_144;
                bsvtData = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)bsvtData,
                                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                if ( !bsvtData )
                  goto LABEL_144;
                bsvtData = (BattleServantData_o *)TreasureDvcLvMaster__GetEntity(
                                                    (TreasureDvcLvMaster_o *)bsvtData,
                                                    v55,
                                                    lv,
                                                    0LL);
                if ( !this->fields.maxNp )
                  goto LABEL_144;
                v62 = (TreasureDvcLvEntity_o *)bsvtData;
                UILabel__set_text(this->fields.maxNp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                if ( v62 )
                {
                  npdetail = (UIWidget_o *)this->fields.npdetail;
                  bsvtData = (BattleServantData_o *)BattleServantConfConponent_TypeInfo;
                  if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo, v38);
                  if ( !npdetail )
                    goto LABEL_144;
                  UIWidget__set_height(
                    npdetail,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                    0LL);
                  v64 = this->fields.npdetail;
                  DetalShort_40762616 = TreasureDvcLvEntity__getDetalShort_40762616(v62, lv, 0LL);
                  WrapControlText__textBBCodeAdjust(
                    v64,
                    DetalShort_40762616,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT,
                    0LL);
                  maxNp = this->fields.maxNp;
                  v108 = 100 * v62->fields.gaugeCount;
                  v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v108);
                  bsvtData = (BattleServantData_o *)System_String__Format(
                                                      (System_String_o *)StringLiteral_9056/*"Max {0}%"*/,
                                                      v67,
                                                      0LL);
                  if ( !maxNp )
                    goto LABEL_144;
                  UILabel__set_text(maxNp, (System_String_o *)bsvtData, 0LL);
                  v68 = this->fields.npdetail;
                  if ( !v68 )
                    goto LABEL_144;
                  if ( BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT < v68->fields.mHeight )
                  {
                    if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo, v38);
                      v68 = this->fields.npdetail;
                      if ( !v68 )
                        goto LABEL_144;
                    }
                    this->fields.adjustHeight = BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT
                                              - v68->fields.mHeight;
                  }
                }
                nplevel = this->fields.nplevel;
                bsvtData = (BattleServantData_o *)System_Int32__ToString((int32_t)&lv, 0LL);
                if ( !nplevel )
                  goto LABEL_144;
                if ( bsvtData )
                  v70 = (System_String_o *)bsvtData;
                else
                  v70 = (System_String_o *)StringLiteral_1/*""*/;
                UILabel__set_text(nplevel, v70, 0LL);
                v72 = (UnityEngine_Object_o *)this->fields.data;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v71);
                if ( UnityEngine_Object__op_Inequality(v72, 0LL, 0LL) )
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
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v90);
                                bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(unknownNp, 0LL, 0LL);
                                if ( ((unsigned __int8)bsvtData & 1) != 0 )
                                {
                                  v93 = this->fields.unknownNp;
                                  if ( IsNpDetailActive )
                                  {
                                    v38 = (System_String_o *)StringLiteral_1/*""*/;
                                  }
                                  else
                                  {
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v92);
                                    bsvtData = (BattleServantData_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_9464/*"NP_UNKNOWN"*/,
                                                                        0LL);
                                    v38 = (System_String_o *)bsvtData;
                                  }
                                  if ( !v93 )
                                    goto LABEL_144;
                                  UILabel__set_text(v93, v38, 0LL);
                                }
                                commandCard = (UnityEngine_Object_o *)this->fields.commandCard;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v92);
                                if ( UnityEngine_Object__op_Inequality(commandCard, 0LL, 0LL) )
                                {
                                  v97 = (BattleCommandData_o *)sub_1BCAA2C(BattleCommandData_TypeInfo, v38, v95, v96);
                                  BattleCommandData___ctor(v97, 0LL);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_144;
                                  bsvtData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId_43714652(
                                                                      bsvtData,
                                                                      0,
                                                                      0LL);
                                  if ( !v97 )
                                    goto LABEL_144;
                                  v97->fields._type = (int)bsvtData;
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_144;
                                  v97->fields.svtlimit = BattleServantData__getCommandDispLimitCount(bsvtData, 0LL);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_144;
                                  v97->fields._loadsvtLimit = BattleServantData__getDispLimitCount(bsvtData, 1, 0LL);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_144;
                                  v97->fields.uniqueId = bsvtData->fields.uniqueId;
                                  v97->fields.svtId = BattleServantData__getSvtId(bsvtData, 0LL);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_144;
                                  v97->fields.imageSvtId = BattleServantData__GetCommandImageSvtId(bsvtData, 0LL);
                                  v97->fields.treasureDvc = v55;
                                  bsvtData = (BattleServantData_o *)this->fields.commandCard;
                                  if ( !bsvtData )
                                    goto LABEL_144;
                                  BattleCommandComponent__setData(
                                    (BattleCommandComponent_o *)bsvtData,
                                    v97,
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
                                v88 = 0;
LABEL_118:
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, v88, 0LL);
LABEL_119:
                                npSpeedChange = (UnityEngine_Object_o *)this->fields.npSpeedChange;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
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
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
                                bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(classIcon, 0LL, 0LL);
                                if ( ((unsigned __int8)bsvtData & 1) == 0 )
                                  goto LABEL_142;
                                if ( inbsvtData )
                                {
                                  v100 = this->fields.classIcon;
                                  bsvtData = (BattleServantData_o *)BattleServantData__getClassId(inbsvtData, 0LL);
                                  if ( v100 )
                                  {
                                    ServantClassIconComponent__SetImage(
                                      v100,
                                      (int32_t)bsvtData,
                                      inbsvtData->fields._frameType_k__BackingField,
                                      0LL);
                                    bsvtData = (BattleServantData_o *)this->fields.classIcon;
                                    if ( bsvtData )
                                    {
                                      IconSpriteScaledWidth = ServantClassIconComponent__GetIconSpriteScaledWidth(
                                                                (ServantClassIconComponent_o *)bsvtData,
                                                                0LL);
                                      v103 = (UnityEngine_Object_o *)this->fields.shortNameLabel;
                                      v104 = IconSpriteScaledWidth;
                                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v102);
                                      if ( UnityEngine_Object__op_Inequality(v103, 0LL, 0LL) )
                                      {
                                        bsvtData = (BattleServantData_o *)this->fields.shortNameLabel;
                                        if ( !bsvtData )
                                          goto LABEL_144;
                                        if ( bsvtData->fields._iconLimitCount_k__BackingField.fields.fakeValue + v104 >= 270 )
                                          CommonFunction__ScalingLabelWidth((UILabel_o *)bsvtData, 270 - v104, 0LL);
                                      }
                                      bsvtData = (BattleServantData_o *)this->fields.classIcon;
                                      if ( bsvtData )
                                      {
                                        Component_object = UnityEngine_Component__GetComponent_object_(
                                                             (UnityEngine_Component_o *)bsvtData,
                                                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIAnchor___);
                                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v105);
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
                                          BattleServantConfConponent__SetAttribute(this, (const MethodInfo *)v38);
                                          BattleServantConfConponent__ChangeLayout(this, v107);
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
    sub_1BCAA3C(bsvtData, v38);
  }
}


void __fastcall BattleServantConfConponent__setEquipList(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *baseEquipSkillInfoPrefab; // x20
  __int64 v17; // x1
  UnityEngine_Object_o *equipSkillInfoRoot; // x20
  __int64 v19; // x1
  Il2CppObject *Master_object; // x20
  __int64 BattleSkillIdList; // x0
  __int64 v22; // x1
  struct BattleServantData_o *bsvtData; // x8
  struct BattleUserServantData_array *equipList; // x27
  __int64 v25; // x8
  SkillLvMaster_o *v26; // x21
  unsigned __int64 v27; // x29
  Il2CppClass **v28; // x19
  __int64 *v29; // x19
  __int64 v30; // t1
  __int64 v31; // x22
  __int64 v32; // x23
  unsigned __int64 v33; // x19
  float v34; // s8
  int32_t v35; // w25
  int32_t v36; // w26
  unsigned __int64 v37; // x20
  struct BattleUserServantData_array *v38; // x29
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_List_object__o *equipPossessionSkillInfoComponentList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v47; // x10
  __int64 size; // x11
  EquipPossessionSkillInfoComponent_o *v49; // x27
  Il2CppClass **v50; // x0
  BattleServantConfConponent_o *v51; // x21
  System_String_o *v52; // x28
  float v53; // s0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_List_object__o *v60; // x8
  struct System_Object_array *v61; // x9
  _QWORD *v62; // x10
  __int64 v63; // x11
  int64_t v64; // x1
  Il2CppClass **v65; // x0
  Il2CppObject *v66; // [xsp+0h] [xbp-A0h]
  SkillLvMaster_o *v67; // [xsp+8h] [xbp-98h]
  __int64 v68; // [xsp+18h] [xbp-88h]
  int32_t index; // [xsp+24h] [xbp-7Ch]
  SkillLvEntity_o *v70; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B1927F & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    byte_4B1927F = 1;
  }
  entity = 0LL;
  v70 = 0LL;
  if ( this->fields.bsvtData )
  {
    baseEquipSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.baseEquipSkillInfoPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Equality(baseEquipSkillInfoPrefab, 0LL, 0LL) )
    {
      equipSkillInfoRoot = (UnityEngine_Object_o *)this->fields.equipSkillInfoRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      if ( !UnityEngine_Object__op_Equality(equipSkillInfoRoot, 0LL, 0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
        BattleSkillIdList = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
        bsvtData = this->fields.bsvtData;
        this->fields.isEquip = 0;
        if ( !bsvtData )
          goto LABEL_51;
        equipList = bsvtData->fields.equipList;
        if ( !equipList )
          goto LABEL_51;
        v25 = *(_QWORD *)&equipList->max_length;
        if ( (int)v25 >= 1 )
        {
          v26 = (SkillLvMaster_o *)BattleSkillIdList;
          v27 = 0LL;
          v66 = Master_object;
          v67 = (SkillLvMaster_o *)BattleSkillIdList;
          do
          {
            if ( v27 >= (unsigned int)v25 )
LABEL_52:
              sub_1BCAA44(BattleSkillIdList, v22);
            v28 = &equipList->obj.klass + v27;
            v30 = (__int64)v28[4];
            v29 = (__int64 *)(v28 + 4);
            BattleSkillIdList = v30;
            if ( v30 )
            {
              BattleSkillIdList = (__int64)BattleUserServantData__getBattleSkillIdList(
                                             (BattleUserServantData_o *)BattleSkillIdList,
                                             0LL);
              if ( v27 >= equipList->max_length )
                goto LABEL_52;
              v31 = BattleSkillIdList;
              BattleSkillIdList = *v29;
              if ( !*v29 )
                goto LABEL_51;
              BattleSkillIdList = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)BattleSkillIdList + 408LL))(
                                    BattleSkillIdList,
                                    *(_QWORD *)(*(_QWORD *)BattleSkillIdList + 416LL));
              if ( !v31 )
                goto LABEL_51;
              if ( *(int *)(v31 + 24) >= 1 )
              {
                v32 = BattleSkillIdList;
                v33 = 0LL;
                v34 = 0.0;
                index = 0;
                v68 = BattleSkillIdList + 32;
                do
                {
                  BattleSkillIdList = (__int64)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v22);
                    BattleSkillIdList = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( *(_DWORD *)(*(_QWORD *)(BattleSkillIdList + 184) + 44LL) <= index )
                    break;
                  if ( v33 >= *(unsigned int *)(v31 + 24) )
                    goto LABEL_52;
                  if ( !v32 )
                    goto LABEL_51;
                  if ( v33 >= *(unsigned int *)(v32 + 24) )
                    goto LABEL_52;
                  v35 = *(_DWORD *)(v31 + 32 + 4 * v33);
                  v36 = *(_DWORD *)(v68 + 4 * v33);
                  entity = 0LL;
                  if ( !Master_object )
                    goto LABEL_51;
                  BattleSkillIdList = DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        v35,
                                        (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                  if ( (BattleSkillIdList & 1) != 0 )
                  {
                    v70 = 0LL;
                    if ( !v26 )
                      goto LABEL_51;
                    BattleSkillIdList = SkillLvMaster__TryGetEntity(v26, &v70, v35, v36, 0LL);
                    if ( (BattleSkillIdList & 1) != 0 )
                    {
                      v37 = v27;
                      v38 = equipList;
                      BattleSkillIdList = (__int64)EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
                                                     this->fields.baseEquipSkillInfoPrefab,
                                                     this->fields.equipSkillInfoRoot,
                                                     index,
                                                     v34,
                                                     0LL);
                      equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.equipPossessionSkillInfoComponentList;
                      if ( !equipPossessionSkillInfoComponentList )
                        goto LABEL_51;
                      items = equipPossessionSkillInfoComponentList->fields._items;
                      v47 = Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__;
                      ++equipPossessionSkillInfoComponentList->fields._version;
                      if ( !items )
                        goto LABEL_51;
                      size = equipPossessionSkillInfoComponentList->fields._size;
                      v49 = (EquipPossessionSkillInfoComponent_o *)BattleSkillIdList;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          equipPossessionSkillInfoComponentList,
                          (Il2CppObject *)BattleSkillIdList,
                          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v50 = &items->obj.klass + size;
                        equipPossessionSkillInfoComponentList->fields._size = size + 1;
                        v50[4] = (Il2CppClass *)v49;
                        sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 4), (int64_t)v49, v39, v40, v41, v42, v43, v44);
                      }
                      BattleSkillIdList = (__int64)entity;
                      if ( !entity )
                        goto LABEL_51;
                      v51 = this;
                      BattleSkillIdList = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                      if ( !v70 )
                        goto LABEL_51;
                      v52 = (System_String_o *)BattleSkillIdList;
                      BattleSkillIdList = (__int64)SkillLvEntity__getDetail_40665920(v70, v36, 0, 0LL);
                      if ( !v49 )
                        goto LABEL_51;
                      v53 = EquipPossessionSkillInfoComponent__SetSkill(
                              v49,
                              v35,
                              v52,
                              (System_String_o *)BattleSkillIdList,
                              0LL);
                      v51->fields.isEquip = 1;
                      this = v51;
                      equipList = v38;
                      v27 = v37;
                      Master_object = v66;
                      v26 = v67;
                      v34 = v34 + v53;
                      ++index;
                    }
                  }
                  ++v33;
                }
                while ( (__int64)v33 < *(int *)(v31 + 24) );
              }
            }
            LODWORD(v25) = equipList->max_length;
            ++v27;
          }
          while ( (__int64)v27 < (int)v25 );
        }
        if ( !this->fields.isEquip )
        {
          BattleSkillIdList = (__int64)EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
                                         this->fields.baseEquipSkillInfoPrefab,
                                         this->fields.equipSkillInfoRoot,
                                         0,
                                         0.0,
                                         0LL);
          v60 = (System_Collections_Generic_List_object__o *)this->fields.equipPossessionSkillInfoComponentList;
          if ( v60 )
          {
            v61 = v60->fields._items;
            v62 = Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__;
            ++v60->fields._version;
            if ( v61 )
            {
              v63 = v60->fields._size;
              v64 = BattleSkillIdList;
              if ( (unsigned int)v63 >= v61->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v60,
                  (Il2CppObject *)BattleSkillIdList,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
              }
              else
              {
                v65 = &v61->obj.klass + v63;
                v60->fields._size = v63 + 1;
                v65[4] = (Il2CppClass *)v64;
                sub_1BCA784((PartyOrganizationUtility_o *)(v65 + 4), v64, v54, v55, v56, v57, v58, v59);
              }
              return;
            }
          }
LABEL_51:
          sub_1BCAA3C(BattleSkillIdList, v22);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A106C8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A10688;
}


System_IAsyncResult_o *__fastcall BattleServantConfConponent_CloseButtonCallBack__BeginInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v5, callback, object);
}


void __fastcall BattleServantConfConponent_CloseButtonCallBack__EndInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall BattleServantConfConponent_CloseButtonCallBack__Invoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall BattleServantConfConponent__StartOpenTab_d__92___ctor(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantConfConponent__StartOpenTab_d__92__MoveNext(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantConfConponent__StartOpenTab_d__92_o *v3; // x19
  int32_t _1__state; // w8
  struct BattleServantConfConponent_o *_4__this; // x20
  UnityEngine_Object_o *BattleServantAbilityObj; // x21
  bool v7; // w21
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v3 = this;
  if ( (byte_4B1929A & 1) == 0 )
  {
    this = (BattleServantConfConponent__StartOpenTab_d__92_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1929A = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
LABEL_17:
      sub_1BCAA3C(this, method);
    if ( BattleServantConfConponent__IsLastOpenServantAbility(_4__this, 0LL) )
      BattleServantConfConponent__OnClickServantAbility(_4__this, 0LL);
    else
      BattleServantConfConponent__OnClickServantState(_4__this, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_17;
  BattleServantAbilityObj = (UnityEngine_Object_o *)_4__this->fields.BattleServantAbilityObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(BattleServantAbilityObj, 0LL, 0LL) )
    return 0;
  this = (BattleServantConfConponent__StartOpenTab_d__92_o *)_4__this->fields.BattleServantAbilityObj;
  v7 = 1;
  _4__this->fields.isOpenAfter = 1;
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v3->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1BCA784(p__2__current, 0LL, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return v7;
}


Il2CppObject *__fastcall BattleServantConfConponent__StartOpenTab_d__92__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantConfConponent__StartOpenTab_d__92__System_Collections_IEnumerator_Reset(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleServantConfConponent__StartOpenTab_d__92_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleServantConfConponent__StartOpenTab_d__92__System_Collections_IEnumerator_get_Current(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantConfConponent__StartOpenTab_d__92__System_IDisposable_Dispose(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantConfConponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19298 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantConfConponent___c_TypeInfo, v1, v2);
    byte_4B19298 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleServantConfConponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleServantConfConponent___c_TypeInfo->static_fields->__9 = (struct BattleServantConfConponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleServantConfConponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BattleServantConfConponent___c___ctor(BattleServantConfConponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantConfConponent___c___ChangeLayout_b__79_0(
        BattleServantConfConponent___c_o *this,
        int32_t codeId,
        const MethodInfo *method)
{
  return codeId > 0;
}


int32_t __fastcall BattleServantConfConponent___c___GetSpecialPassiveSkillStartIndex_b__81_0(
        BattleServantConfConponent___c_o *this,
        ServantPassiveSkillEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.skillId;
}


bool __fastcall BattleServantConfConponent___c___SetCommandCodeSkillList_b__85_0(
        BattleServantConfConponent___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id > 0;
}


void __fastcall BattleServantConfConponent___c__DisplayClass81_0___ctor(
        BattleServantConfConponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantConfConponent___c__DisplayClass81_0___GetSpecialPassiveSkillStartIndex_b__1(
        BattleServantConfConponent___c__DisplayClass81_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *passiveIdHashSet; // x0

  if ( (byte_4B19299 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Contains__, *(_QWORD *)&x, method);
    byte_4B19299 = 1;
  }
  passiveIdHashSet = this->fields.passiveIdHashSet;
  if ( !passiveIdHashSet )
    sub_1BCAA3C(0LL, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           passiveIdHashSet,
           x,
           (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}