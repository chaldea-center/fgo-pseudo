void BattleServantConfConponent___cctor(const MethodInfo *method)
{
  if ( (byte_4D3416B & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantConfConponent_TypeInfo);
    byte_4D3416B = 1;
  }
  *BattleServantConfConponent_TypeInfo->static_fields = (struct BattleServantConfConponent_StaticFields)xmmword_D01DD0;
}


void BattleServantConfConponent___ctor(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D3416A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo);
    byte_4D3416A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__);
  this->fields.equipPossessionSkillInfoComponentList = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)v3;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipPossessionSkillInfoComponentList,
    (int32_t)v3,
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
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


void BattleServantConfConponent__ChangeLayout(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  long double v2; // q8
  UnityEngine_Object_o *equipObj; // x20
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *v6; // x20
  float LocalPositionY; // s0
  System_Collections_Generic_List_object__o *equipPossessionSkillInfoComponentList; // x0
  float v9; // s8
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x20
  int32_t EquipSkillConfLabelHeight; // w0
  BattleServantConfConponent_c *v14; // x8
  int32_t v15; // w21
  int32_t EQIUP_SKILL_LABEL_DEFAULT_HEIGHT; // w26
  int32_t v17; // w0
  BattleServantConfConponent_c *v18; // x0
  UnityEngine_Object_o *CardAndCommandObj; // x20
  unsigned __int64 CommandCodeIds; // x0
  System_Int32_array *v21; // x20
  BattleServantConfConponent___c_c *v22; // x0
  System_Predicate_int__o *_9__79_0; // x21
  Il2CppObject *v24; // x22
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  unsigned __int64 max_length; // x9
  unsigned __int64 v33; // x8
  int v34; // w12
  UnityEngine_Object_o *npSpeedChange; // x20
  struct BattleServantNPSpeedChangeComponent_o *v36; // x8
  UnityEngine_Object_o *ClassSkillObj; // x20
  UnityEngine_Object_o *AppendSkillObj; // x20
  UnityEngine_Object_o *classBoardSkillObj; // x20
  struct BattleServantClassBoardSkillEffectListComponent_o *v40; // x8
  UnityEngine_Object_o *grandClassBoardSkillObj; // x20
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D34152 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_FindIndex_int___);
    sub_1C93AD4(&BattleServantConfConponent_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&System_Predicate_int__TypeInfo);
    sub_1C93AD4(&Method_BattleServantConfConponent___c__ChangeLayout_b__79_0__);
    sub_1C93AD4(&BattleServantConfConponent___c_TypeInfo);
    byte_4D34152 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipObj, 0, 0) )
  {
    v6 = this->fields.equipObj;
    LocalPositionY = GameObjectExtensions__GetLocalPositionY(v6, 0);
    GameObjectExtensions__SetLocalPositionY(v6, LocalPositionY + (float)this->fields.adjustHeight, 0);
  }
  if ( this->fields.isEquip )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.equipPossessionSkillInfoComponentList;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_78;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v42,
      equipPossessionSkillInfoComponentList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    v9 = 0.0;
    v43 = v42;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v43,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
      if ( !v10 )
        break;
      current = v43.fields._current;
      if ( !v43.fields._current )
        sub_1C93D2C(v10, v11);
      EquipSkillConfLabelHeight = EquipPossessionSkillInfoComponent__get_EquipSkillConfLabelHeight(
                                    (EquipPossessionSkillInfoComponent_o *)v43.fields._current,
                                    0);
      v14 = BattleServantConfConponent_TypeInfo;
      v15 = EquipSkillConfLabelHeight;
      if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
        v14 = BattleServantConfConponent_TypeInfo;
      }
      EQIUP_SKILL_LABEL_DEFAULT_HEIGHT = v14->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT;
      if ( v15 > EQIUP_SKILL_LABEL_DEFAULT_HEIGHT )
      {
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          EQIUP_SKILL_LABEL_DEFAULT_HEIGHT = BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT;
        }
        v17 = EquipPossessionSkillInfoComponent__get_EquipSkillConfLabelHeight(
                (EquipPossessionSkillInfoComponent_o *)current,
                0);
        v14 = BattleServantConfConponent_TypeInfo;
        v9 = v9 + (float)(EQIUP_SKILL_LABEL_DEFAULT_HEIGHT - v17);
      }
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = BattleServantConfConponent_TypeInfo;
      }
      v9 = v9 - (float)v14->static_fields->EQIUP_SKILL_OBJ_HEIGHT;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v43,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    v18 = BattleServantConfConponent_TypeInfo;
    if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
      v18 = BattleServantConfConponent_TypeInfo;
    }
    *(float *)&v2 = v9 + (float)v18->static_fields->EQIUP_SKILL_OBJ_HEIGHT;
  }
  else
  {
    *(float *)&v2 = this->fields.NotEquipObjHeightPos;
  }
  CardAndCommandObj = (UnityEngine_Object_o *)this->fields.CardAndCommandObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(CardAndCommandObj, 0, 0) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.CardAndCommandObj,
      *(float *)&v2 + (float)this->fields.adjustHeight,
      0);
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.bsvtData;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_78;
    CommandCodeIds = (unsigned __int64)BattleServantData__GetCommandCodeIds(
                                         (BattleServantData_o *)equipPossessionSkillInfoComponentList,
                                         0);
    if ( CommandCodeIds )
    {
      v21 = (System_Int32_array *)CommandCodeIds;
      v22 = BattleServantConfConponent___c_TypeInfo;
      if ( !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
        v22 = BattleServantConfConponent___c_TypeInfo;
      }
      _9__79_0 = v22->static_fields->__9__79_0;
      if ( !_9__79_0 )
      {
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          v22 = BattleServantConfConponent___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v22->static_fields->__9;
        _9__79_0 = (System_Predicate_int__o *)sub_1C93D20(System_Predicate_int__TypeInfo);
        System_Predicate_int____ctor(_9__79_0, v24, Method_BattleServantConfConponent___c__ChangeLayout_b__79_0__, 0);
        static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
        static_fields->__9__79_0 = _9__79_0;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__79_0,
          (int32_t)_9__79_0,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
      if ( System_Array__FindIndex_int_(
             v21,
             (System_Predicate_T__o *)_9__79_0,
             (const MethodInfo_32A9C90 *)Method_System_Array_FindIndex_int___) == -1
        || (int)v21->max_length < 1 )
      {
        LODWORD(CommandCodeIds) = 0;
      }
      else
      {
        max_length = (unsigned int)v21->max_length;
        v33 = 0;
        CommandCodeIds = 0;
        do
        {
          if ( v33 >= max_length )
            sub_1C93D34(CommandCodeIds);
          v34 = v21->m_Items[v33++];
          if ( v34 <= 0 )
            CommandCodeIds = (unsigned int)CommandCodeIds;
          else
            CommandCodeIds = (unsigned int)(CommandCodeIds + 1);
        }
        while ( (__int64)v33 < (int)max_length );
      }
    }
    *(float *)&v2 = *(float *)&v2 - BattleServantNPSpeedChangeComponent__CalcCommandCodeOffset(CommandCodeIds, 0);
  }
  npSpeedChange = (UnityEngine_Object_o *)this->fields.npSpeedChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(npSpeedChange, 0, 0) )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.npSpeedChange;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_78;
    *(float *)&equipPossessionSkillInfoComponentList[3].klass = *(float *)&v2 + (float)this->fields.adjustHeight;
    BattleServantNPSpeedChangeComponent__SetButtonPosition(
      (BattleServantNPSpeedChangeComponent_o *)equipPossessionSkillInfoComponentList,
      0);
    v36 = this->fields.npSpeedChange;
    if ( !v36 )
      goto LABEL_78;
    *(float *)&v2 = *(float *)&v2 - (float)v36->fields.contentsHeight;
  }
  ClassSkillObj = (UnityEngine_Object_o *)this->fields.ClassSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ClassSkillObj, 0, 0) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.ClassSkillObj,
      (float)(*(float *)&v2 + this->fields.ClassSkillInitPosY) + (float)this->fields.adjustHeight,
      0);
    *(float *)&v2 = *(float *)&v2 + this->fields.ClassSkillOffset;
  }
  AppendSkillObj = (UnityEngine_Object_o *)this->fields.AppendSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(AppendSkillObj, 0, 0) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.AppendSkillObj,
      (float)(*(float *)&v2 + this->fields.AppendSkillInitPosY) + (float)this->fields.adjustHeight,
      0);
    *(float *)&v2 = *(float *)&v2 + this->fields.AppendSkillOffset;
  }
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0, 0) )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.classBoardSkillObj;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_78;
    if ( BattleServantConfWindowPassiveSkillListComponent__IsActive(
           (BattleServantConfWindowPassiveSkillListComponent_o *)equipPossessionSkillInfoComponentList,
           v5) )
    {
      equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.classBoardSkillObj;
      if ( !equipPossessionSkillInfoComponentList )
        goto LABEL_78;
      equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, long double, float))equipPossessionSkillInfoComponentList->klass->vtable._4_unknown.methodPtr)(
                                                                                             equipPossessionSkillInfoComponentList,
                                                                                             equipPossessionSkillInfoComponentList->klass->vtable._4_unknown.method,
                                                                                             v2,
                                                                                             (float)this->fields.adjustHeight);
      v40 = this->fields.classBoardSkillObj;
      if ( !v40 )
        goto LABEL_78;
      *(float *)&v2 = *(float *)&v2 + v40->fields.skillOffset;
    }
  }
  grandClassBoardSkillObj = (UnityEngine_Object_o *)this->fields.grandClassBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandClassBoardSkillObj, 0, 0) )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.grandClassBoardSkillObj;
    if ( !equipPossessionSkillInfoComponentList
      || BattleServantConfWindowPassiveSkillListComponent__IsActive(
           (BattleServantConfWindowPassiveSkillListComponent_o *)equipPossessionSkillInfoComponentList,
           v5)
      && ((equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.grandClassBoardSkillObj) == 0
       || (equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, long double, float))equipPossessionSkillInfoComponentList->klass->vtable._4_unknown.methodPtr)(
                                                                                                  equipPossessionSkillInfoComponentList,
                                                                                                  equipPossessionSkillInfoComponentList->klass->vtable._4_unknown.method,
                                                                                                  v2,
                                                                                                  (float)this->fields.adjustHeight),
           !this->fields.grandClassBoardSkillObj)) )
    {
LABEL_78:
      sub_1C93D2C(equipPossessionSkillInfoComponentList, v5);
    }
  }
}


void BattleServantConfConponent__Close(
        BattleServantConfConponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_1C93D2C(0, call);
  BattleViewBufflistComponent__setHide(buffListView, 1, 0);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0);
}


void BattleServantConfConponent__CompOpen(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *started; // x0

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_1C93D2C(0, method);
  BattleViewBufflistComponent__setShow(buffListView, 0);
  started = BattleServantConfConponent__StartOpenTab(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, started, 0);
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0);
}


void BattleServantConfConponent__GetAppendSkillInfo(
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
  __int64 max_length_low; // x1
  System_Int32_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_String_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_String_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Boolean_array *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Int32_array *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v51; // x1
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v53; // x19
  unsigned __int64 v54; // x27
  int32_t *v55; // x26
  __int64 v56; // x23
  System_Int32_array *v57; // x8
  System_Boolean_array *v58; // x9
  int32_t v59; // w8
  System_Int32_array *v60; // x9
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  System_Boolean_array *v67; // x8
  System_String_array *v68; // x29
  SkillEntity_o *v69; // x28
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  System_String_array *v76; // x25
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  GrandQuestFolderBoardItem_o *v83; // x28
  Il2CppClass **v84; // x8
  int32_t v85; // w1
  System_String_array *v86; // x28
  System_String_o *v87; // x1
  System_String_array *v88; // x8
  Il2CppClass **v89; // x28
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  System_String_array *v96; // x25
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  System_String_array *v103; // x8
  System_String_array *v104; // x25
  System_String_o **v105; // x28
  System_String_o *v106; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  System_String_o *v109; // x4
  int32_t v110; // w5
  int64_t v111; // x6
  System_String_o *v112; // x7
  System_String_array *v113; // x8
  Il2CppClass **v114; // x25
  System_String_o *v115; // x29
  System_String_o *v116; // x0
  System_String_o *v117; // x0
  System_Int32_array *v118; // x0
  int32_t v119; // w2
  int32_t v120; // w3
  System_String_o *v121; // x4
  int32_t v122; // w5
  int64_t v123; // x6
  System_String_o *v124; // x7
  System_String_array *v125; // x0
  int32_t v126; // w2
  int32_t v127; // w3
  System_String_o *v128; // x4
  int32_t v129; // w5
  int64_t v130; // x6
  System_String_o *v131; // x7
  System_String_array *v132; // x0
  int32_t v133; // w2
  int32_t v134; // w3
  System_String_o *v135; // x4
  int32_t v136; // w5
  int64_t v137; // x6
  System_String_o *v138; // x7
  System_Boolean_array *v139; // x0
  int32_t v140; // w2
  int32_t v141; // w3
  System_String_o *v142; // x4
  int32_t v143; // w5
  int64_t v144; // x6
  System_String_o *v145; // x7
  System_Int32_array *v146; // x0
  int32_t v147; // w2
  int32_t v148; // w3
  System_String_o *v149; // x4
  int32_t v150; // w5
  int64_t v151; // x6
  System_String_o *v152; // x7
  System_Int32_array **v153; // [xsp+8h] [xbp-88h]
  System_String_array **v154; // [xsp+10h] [xbp-80h]
  int32_t *m_Items; // [xsp+18h] [xbp-78h]

  if ( (byte_4D34156 & 1) == 0 )
  {
    sub_1C93AD4(&bool___TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_43/*"\n"*/);
    sub_1C93AD4(&StringLiteral_3757/*"COND_TYPE_TITLE"*/);
    sub_1C93AD4(&StringLiteral_3745/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D34156 = 1;
  }
  if ( releaseSkillIds
    && releaseSkillLvs
    && (max_length_low = LODWORD(releaseSkillIds->max_length),
        (_DWORD)max_length_low == LODWORD(releaseSkillLvs->max_length)) )
  {
    v15 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, max_length_low);
    *idList = v15;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)idList, (int32_t)v15, v16, v17, v18, v19, v20, v21);
    v22 = (System_String_array *)sub_1C93B7C(string___TypeInfo, LODWORD(releaseSkillIds->max_length));
    *titleList = v22;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)titleList, (int32_t)v22, v23, v24, v25, v26, v27, v28);
    v29 = (System_String_array *)sub_1C93B7C(string___TypeInfo, LODWORD(releaseSkillIds->max_length));
    *explanationList = v29;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)explanationList, (int32_t)v29, v30, v31, v32, v33, v34, v35);
    v36 = (System_Boolean_array *)sub_1C93B7C(bool___TypeInfo, LODWORD(releaseSkillIds->max_length));
    *releaseStateList = v36;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)releaseStateList, (int32_t)v36, v37, v38, v39, v40, v41, v42);
    v43 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, LODWORD(releaseSkillIds->max_length));
    *lvList = v43;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)lvList, (int32_t)v43, v44, v45, v46, v47, v48, v49);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
    max_length = releaseSkillIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v53 = Master_object;
      v54 = 0;
      m_Items = releaseSkillLvs->m_Items;
      v55 = releaseSkillIds->m_Items;
      v56 = 32;
      v153 = lvList;
      v154 = titleList;
      while ( v54 < (unsigned int)max_length )
      {
        v57 = *idList;
        if ( !*idList )
          goto LABEL_62;
        if ( v54 >= LODWORD(v57->max_length) )
          break;
        v57->m_Items[v54] = v55[v54];
        if ( v54 >= LODWORD(releaseSkillLvs->max_length) )
          break;
        v58 = *releaseStateList;
        if ( !*releaseStateList )
          goto LABEL_62;
        if ( v54 >= LODWORD(v58->max_length) )
          break;
        v59 = m_Items[v54];
        v58->m_Items[v54] = v59 > 0;
        v60 = *lvList;
        if ( !*lvList )
          goto LABEL_62;
        if ( v54 >= LODWORD(v60->max_length) )
          break;
        v60->m_Items[v54] = v59;
        if ( !v53 )
          goto LABEL_62;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        v53,
                                                                        v55[v54],
                                                                        (const MethodInfo_3463274 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Master_object )
        {
          v67 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_62;
          if ( v54 >= LODWORD(v67->max_length) )
            break;
          v68 = *titleList;
          v69 = (SkillEntity_o *)Master_object;
          if ( v67->m_Items[v54] )
          {
            if ( v54 >= LODWORD(releaseSkillLvs->max_length) )
              break;
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                            (SkillEntity_o *)Master_object,
                                                                            m_Items[v54],
                                                                            0);
            if ( !v68 )
              goto LABEL_62;
            if ( v54 >= LODWORD(v68->max_length) )
              break;
            v68->m_Items[v54] = (System_String_o *)Master_object;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)((char *)v68 + v56),
              (int32_t)Master_object,
              v70,
              v71,
              v72,
              v73,
              v74,
              v75);
            if ( v54 >= LODWORD(releaseSkillLvs->max_length) )
              break;
            v76 = *explanationList;
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectExplanation(
                                                                            v69,
                                                                            m_Items[v54],
                                                                            0);
            titleList = v154;
            if ( !v76 )
              goto LABEL_62;
            if ( v54 >= LODWORD(v76->max_length) )
              break;
            v83 = (GrandQuestFolderBoardItem_o *)((char *)v76 + v56);
            v84 = &v76->obj.klass + v54;
            lvList = v153;
            v85 = (int)Master_object;
            v84[4] = (Il2CppClass *)Master_object;
          }
          else
          {
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                            (SkillEntity_o *)Master_object,
                                                                            1,
                                                                            0);
            if ( !v68 )
              goto LABEL_62;
            if ( v54 >= LODWORD(v68->max_length) )
              break;
            v68->m_Items[v54] = (System_String_o *)Master_object;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)((char *)v68 + v56),
              (int32_t)Master_object,
              v90,
              v91,
              v92,
              v93,
              v94,
              v95);
            v96 = *explanationList;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_3757/*"COND_TYPE_TITLE"*/,
                                                                            0);
            if ( !v96 )
              goto LABEL_62;
            if ( v54 >= LODWORD(v96->max_length) )
              break;
            v96->m_Items[v54] = (System_String_o *)Master_object;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)((char *)v96 + v56),
              (int32_t)Master_object,
              v97,
              v98,
              v99,
              v100,
              v101,
              v102);
            v103 = *explanationList;
            if ( !*explanationList )
LABEL_62:
              sub_1C93D2C(Master_object, v51);
            if ( v54 >= LODWORD(v103->max_length) )
              break;
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__op_Inequality(
                                                                            v103->m_Items[v54],
                                                                            (System_String_o *)StringLiteral_1/*""*/,
                                                                            0);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
            {
              v104 = *explanationList;
              if ( !*explanationList )
                goto LABEL_62;
              if ( v54 >= LODWORD(v104->max_length) )
                break;
              v105 = (System_String_o **)(&v104->obj.klass + v54);
              v106 = System_String__Concat_64425724(v105[4], (System_String_o *)StringLiteral_43/*"\n"*/, 0);
              v105[4] = v106;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)((char *)v104 + v56),
                (int32_t)v106,
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
            if ( v54 >= LODWORD(v113->max_length) )
              break;
            v114 = &v113->obj.klass + v54;
            v83 = (GrandQuestFolderBoardItem_o *)(v114 + 4);
            v115 = (System_String_o *)v114[4];
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v116 = LocalizationManager__Get((System_String_o *)StringLiteral_3745/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0);
            v117 = System_String__Concat_64425724(v115, v116, 0);
            v114[4] = (Il2CppClass *)v117;
            lvList = v153;
            titleList = v154;
            v85 = (int)v117;
          }
        }
        else
        {
          v86 = *titleList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( !byte_4D2BD02 )
          {
            sub_1C93AD4(&LocalizationManager_TypeInfo);
            byte_4D2BD02 = 1;
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager_TypeInfo;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager_TypeInfo;
          }
          if ( !v86 )
            goto LABEL_62;
          if ( v54 >= LODWORD(v86->max_length) )
            break;
          v87 = *(System_String_o **)&Master_object[2].fields.list->fields._blockReentrancyCount;
          v86->m_Items[v54] = v87;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)v86 + v56), (int32_t)v87, v61, v62, v63, v64, v65, v66);
          v88 = *explanationList;
          if ( !*explanationList )
            goto LABEL_62;
          if ( v54 >= LODWORD(v88->max_length) )
            break;
          v89 = &v88->obj.klass + v54;
          v85 = StringLiteral_1/*""*/;
          v89[4] = (Il2CppClass *)StringLiteral_1/*""*/;
          v83 = (GrandQuestFolderBoardItem_o *)(v89 + 4);
        }
        sub_1C93A78(v83, v85, v77, v78, v79, v80, v81, v82);
        LODWORD(max_length) = releaseSkillIds->max_length;
        ++v54;
        v56 += 8;
        if ( (__int64)v54 >= (int)max_length )
          return;
      }
      sub_1C93D34(Master_object);
    }
  }
  else
  {
    v118 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
    *idList = v118;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)idList, (int32_t)v118, v119, v120, v121, v122, v123, v124);
    v125 = (System_String_array *)sub_1C93B7C(string___TypeInfo, 0);
    *titleList = v125;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)titleList, (int32_t)v125, v126, v127, v128, v129, v130, v131);
    v132 = (System_String_array *)sub_1C93B7C(string___TypeInfo, 0);
    *explanationList = v132;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)explanationList, (int32_t)v132, v133, v134, v135, v136, v137, v138);
    v139 = (System_Boolean_array *)sub_1C93B7C(bool___TypeInfo, 0);
    *releaseStateList = v139;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)releaseStateList, (int32_t)v139, v140, v141, v142, v143, v144, v145);
    v146 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
    *lvList = v146;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)lvList, (int32_t)v146, v147, v148, v149, v150, v151, v152);
  }
}


void BattleServantConfConponent__GetAttributeValue(
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

  if ( (byte_4D34167 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int__GetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D34167 = 1;
  }
  entity = 0;
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_53;
  v8 = BattleServantData__GetChangePolicy(bsvtData, 0);
  *policy = v8;
  if ( (v8 & 0x80000000) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    if ( !bsvtData )
      goto LABEL_53;
    bsvtData = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)bsvtData,
                                        *policy,
                                        (const MethodInfo_3463274 *)Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int__GetEntity__);
    if ( !bsvtData )
      goto LABEL_53;
    *policy = bsvtData->fields.deckIndex;
  }
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_53;
  deckIndex = BattleServantData__GetChangePersonality(bsvtData, 0);
  *personality = deckIndex;
  if ( (deckIndex & 0x80000000) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    if ( !bsvtData )
      goto LABEL_53;
    bsvtData = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)bsvtData,
                                        *personality,
                                        (const MethodInfo_3463274 *)Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int__GetEntity__);
    if ( !bsvtData )
      goto LABEL_53;
    deckIndex = bsvtData->fields.deckIndex;
    *personality = deckIndex;
  }
  if ( ((*policy | deckIndex) & 0x80000000) == 0 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitMaster___);
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
  bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v33, 0);
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
      bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v34, 0);
      v18 = this->fields.bsvtData;
      if ( v18 )
      {
        v19 = (int)bsvtData;
        bsvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(v18, 1, 0);
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
  if ( *policy < 0 )
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
  if ( *personality < 0 )
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
  bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v35, 0);
  if ( !v11 )
LABEL_53:
    sub_1C93D2C(bsvtData, policy);
  v22 = (int)bsvtData;
  v21 = v11;
  v20 = 0;
LABEL_44:
  ServantLimitMaster__TryGetEntity(v21, &entity, v22, v20, 0);
  v30 = entity;
  v31 = *policy;
  if ( entity )
  {
    if ( v31 < 0 )
      *policy = entity->fields.policy;
    if ( *personality < 0 )
      *personality = v30->fields.personality;
  }
  else
  {
    if ( v31 < 0 )
      *policy = 0;
    if ( *personality < 0 )
      *personality = 0;
  }
}


EventDropUpValInfo_array *BattleServantConfConponent__GetFriendshipUpCampaignInfo(
        BattleServantConfConponent_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  Il2CppObject *Master_object; // x21
  void *Instance; // x0
  __int64 v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  UserServantEntity_o *HeroineData; // x0
  __int64 v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1
  EventDropUpValInfo_o *v18; // x22
  __int64 OnlyMaxFuncGroupId; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4D34169 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C93AD4(&EventDropUpValInfo_TypeInfo);
    sub_1C93AD4(&FunctionEntity_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D34169 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_35;
  Instance = EventCampaignMaster__GetFriendshipUpCampaigns(
               (EventCampaignMaster_o *)Master_object,
               *((_QWORD *)Instance + 17),
               0);
  if ( Instance )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v33 = v32;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v33,
             (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v8 )
        break;
      current = v33.fields._current;
      if ( !v33.fields._current )
        sub_1C93D2C(v8, v9);
      monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v33.fields._current[2].monitor;
      if ( !monitor
        || !monitor[1].monitor
        || System_Linq_Enumerable__Contains_int_(
             monitor,
             svtId,
             (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v12 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !v12 )
          sub_1C93D2C(0, v13);
        HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v12, svtId, 0);
        if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0) )
        {
          v15 = sub_1C93D20(FunctionEntity_TypeInfo);
          FunctionEntity___ctor((FunctionEntity_o *)v15, 0);
          if ( !v15 )
            sub_1C93D2C(v16, v17);
          *(_QWORD *)(v15 + 24) = 111;
          v18 = (EventDropUpValInfo_o *)sub_1C93D20(EventDropUpValInfo_TypeInfo);
          EventDropUpValInfo___ctor(v18, 0, (FunctionEntity_o *)v15, 0);
          OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId((EventCampaignEntity_o *)current, 0);
          if ( !v18 )
            sub_1C93D2C(OnlyMaxFuncGroupId, v20);
          v18->fields.groupId = OnlyMaxFuncGroupId;
          if ( !v4 )
            sub_1C93D2C(OnlyMaxFuncGroupId, v20);
          items = v4->fields._items;
          v28 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
          ++v4->fields._version;
          if ( !items )
            sub_1C93D2C(OnlyMaxFuncGroupId, v20);
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)v18,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v18;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v30 + 4), (int32_t)v18, v21, v22, v23, v24, v25, v26);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v4 )
LABEL_35:
    sub_1C93D2C(Instance, v7);
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                       v4,
                                       (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
}


System_String_o *BattleServantConfConponent__GetHideStr(
        BattleServantConfConponent_o *this,
        int32_t hideStatus,
        System_String_o *defaultStr,
        const MethodInfo *method)
{
  __int64 *v6; // x8

  if ( (byte_4D34164 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11663/*"SERVANT_ATTRIBUTE_HIDE"*/);
    sub_1C93AD4(&StringLiteral_11664/*"SERVANT_ATTRIBUTE_NONE"*/);
    byte_4D34164 = 1;
  }
  if ( hideStatus == 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_11664/*"SERVANT_ATTRIBUTE_NONE"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0);
  }
  if ( hideStatus == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_11663/*"SERVANT_ATTRIBUTE_HIDE"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0);
  }
  return defaultStr;
}


System_Int32_array *BattleServantConfConponent__GetNeedAddAnnotationSkillIds(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *passiveSkillIdList,
        const MethodInfo *method)
{
  BattleServantData_o *bsvtData; // x0
  System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *FriendshipUpCampaignInfo; // x21
  BattleServantConfConponent_o *SvtId; // x0
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_int__o *v9; // x20

  if ( (byte_4D34168 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D34168 = 1;
  }
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_12;
  FriendshipUpCampaignInfo = 0;
  if ( !BattleServantData__IsFollwerSupport(bsvtData, 0) )
  {
    bsvtData = this->fields.bsvtData;
    if ( !bsvtData )
      goto LABEL_12;
    FriendshipUpCampaignInfo = 0;
    if ( !BattleServantData__IsNpc(bsvtData, 0) )
    {
      bsvtData = this->fields.bsvtData;
      if ( !bsvtData )
        goto LABEL_12;
      SvtId = (BattleServantConfConponent_o *)BattleServantData__getSvtId(bsvtData, 0);
      FriendshipUpCampaignInfo = (System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *)BattleServantConfConponent__GetFriendshipUpCampaignInfo(
                                                                                                   SvtId,
                                                                                                   (int32_t)SvtId,
                                                                                                   v8);
    }
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v9
    || (System_Collections_Generic_List_int___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)passiveSkillIdList,
          (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__),
        (bsvtData = (BattleServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_12:
    sub_1C93D2C(bsvtData, passiveSkillIdList);
  }
  return PartyOrganizationUtility__GetNeedAddAnnotationSkillIds(
           (PartyOrganizationUtility_o *)bsvtData,
           (System_Collections_Generic_IEnumerable_int__o *)v9,
           FriendshipUpCampaignInfo,
           0);
}


int32_t BattleServantConfConponent__GetPersonality(
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
  __int64 v10; // x0
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

  if ( (byte_4D34166 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D34166 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_51;
  klass = individualityArray->klass;
  v8 = *(unsigned __int16 *)&individualityArray->klass->_2.rank;
  if ( *(_WORD *)&individualityArray->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    v10 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v10 = sub_1C69E5C(individualityArray, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v10)(
          individualityArray,
          *(_QWORD *)(v10 + 8));
  if ( !v12 )
    sub_1C93D2C(0, v11);
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
      v16 = sub_1C69E5C(v12, System_Collections_IEnumerator_TypeInfo, 0);
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
      v20 = sub_1C69E5C(v12, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
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
        sub_1C93D2C(v22, v23);
      items = v4->fields._items;
      v26 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !items )
        sub_1C93D2C(v22, v23);
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          v21,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size] = v21;
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
    v31 = sub_1C69E5C(v12, System_IDisposable_TypeInfo, 0);
  }
  v5 = (System_Int32_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v12, *(_QWORD *)(v31 + 8));
  if ( !v4 )
    goto LABEL_51;
  if ( v4->fields._size > 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    v5 = System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( Master_object )
      return IndividualityPersonalityMaster__GetPersonalityValue(
               (IndividualityPersonalityMaster_o *)Master_object,
               v5,
               0);
LABEL_51:
    sub_1C93D2C(v5, v6);
  }
  return -1;
}


int32_t BattleServantConfConponent__GetPolicy(
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
  __int64 v10; // x0
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

  if ( (byte_4D34165 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D34165 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_51;
  klass = individualityArray->klass;
  v8 = *(unsigned __int16 *)&individualityArray->klass->_2.rank;
  if ( *(_WORD *)&individualityArray->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    v10 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v10 = sub_1C69E5C(individualityArray, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v10)(
          individualityArray,
          *(_QWORD *)(v10 + 8));
  if ( !v12 )
    sub_1C93D2C(0, v11);
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
      v16 = sub_1C69E5C(v12, System_Collections_IEnumerator_TypeInfo, 0);
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
      v20 = sub_1C69E5C(v12, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8));
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v24 = log10((double)v21);
    v25 = v21 - 300;
    if ( (unsigned int)(v21 - 300) <= 0x63 && v24 != INFINITY && (int)v24 == 2 && v25 <= 7 && ((1 << v25) & 0x87) != 0 )
    {
      if ( !v4 )
        sub_1C93D2C(v22, v23);
      items = v4->fields._items;
      v27 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !items )
        sub_1C93D2C(v22, v23);
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          v21,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size] = v21;
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
    v32 = sub_1C69E5C(v12, System_IDisposable_TypeInfo, 0);
  }
  v5 = (System_Int32_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v12, *(_QWORD *)(v32 + 8));
  if ( !v4 )
    goto LABEL_51;
  if ( v4->fields._size > 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    v5 = System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( Master_object )
      return IndividualityPolicyMaster__GetPolicyValue((IndividualityPolicyMaster_o *)Master_object, v5, 0);
LABEL_51:
    sub_1C93D2C(v5, v6);
  }
  return -1;
}


int32_t BattleServantConfConponent__GetSpecialPassiveSkillStartIndex(
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
  System_Func_object__int__o *_9__81_0; // x22
  Il2CppObject *v16; // x23
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_IEnumerable_T__o *v24; // x22
  System_Collections_Generic_HashSet_int__o *v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Predicate_int__o *v32; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4D34154 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_ServantPassiveSkillEntity__int___);
    sub_1C93AD4(&System_Func_ServantPassiveSkillEntity__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor___78987192);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__FindIndex__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&System_Predicate_int__TypeInfo);
    sub_1C93AD4(&Method_BattleServantConfConponent___c__GetSpecialPassiveSkillStartIndex_b__81_0__);
    sub_1C93AD4(&Method_BattleServantConfConponent___c__DisplayClass81_0__GetSpecialPassiveSkillStartIndex_b__1__);
    sub_1C93AD4(&BattleServantConfConponent___c__DisplayClass81_0_TypeInfo);
    sub_1C93AD4(&BattleServantConfConponent___c_TypeInfo);
    byte_4D34154 = 1;
  }
  v5 = sub_1C93D20(BattleServantConfConponent___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillIdList, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
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
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v33, 0);
  if ( !v10 )
    goto LABEL_22;
  v13 = ServantPassiveSkillMaster__EnumerateSpecialSkillsBySvtId(v10, (int32_t)Master_object, 0);
  v14 = BattleServantConfConponent___c_TypeInfo;
  if ( !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
    v14 = BattleServantConfConponent___c_TypeInfo;
  }
  _9__81_0 = (System_Func_object__int__o *)v14->static_fields->__9__81_0;
  if ( !_9__81_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BattleServantConfConponent___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__81_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_ServantPassiveSkillEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__81_0,
      v16,
      Method_BattleServantConfConponent___c__GetSpecialPassiveSkillStartIndex_b__81_0__,
      0);
    static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    static_fields->__9__81_0 = (struct System_Func_ServantPassiveSkillEntity__int__o *)_9__81_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__81_0,
      (int32_t)_9__81_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                         (System_Func_TSource__TResult__o *)_9__81_0,
                                                         (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_ServantPassiveSkillEntity__int___);
  v25 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_57824408(
    v25,
    v24,
    (const MethodInfo_3725498 *)Method_System_Collections_Generic_HashSet_int___ctor___78987192);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = v25,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)v25, v26, v27, v28, v29, v30, v31),
        v32 = (System_Predicate_int__o *)sub_1C93D20(System_Predicate_int__TypeInfo),
        System_Predicate_int____ctor(
          v32,
          (Il2CppObject *)v5,
          Method_BattleServantConfConponent___c__DisplayClass81_0__GetSpecialPassiveSkillStartIndex_b__1__,
          0),
        !skillIdList) )
  {
LABEL_22:
    sub_1C93D2C(Master_object, v8);
  }
  result = System_Collections_Generic_List_int___FindIndex(
             skillIdList,
             (System_Predicate_T__o *)v32,
             (const MethodInfo_385D1AC *)Method_System_Collections_Generic_List_int__FindIndex__);
  if ( result < 0 )
    return skillIdList->fields._size;
  return result;
}


void BattleServantConfConponent__Initialize(
        BattleServantConfConponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v11; // x1
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Object_o *commandCard; // x20
  Il2CppObject *Component_object; // x20
  UILabel_o *havenotTdLabel; // x20
  UnityEngine_Object_o *classBoardSkillObj; // x20
  UnityEngine_Object_o *grandClassBoardSkillObj; // x20
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D3414F & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_2784/*"BATTLE_HASNOT_TD"*/);
    byte_4D3414F = 1;
  }
  this->fields.data = data;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3, v4, v5, v6, v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_35;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_35;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  if ( !gameObject )
    goto LABEL_35;
  v18.fields.y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0).fields.y;
  if ( !transform )
    goto LABEL_35;
  v18.fields.x = 0.0;
  v18.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(transform, v18, 0);
  commandCard = (UnityEngine_Object_o *)this->fields.commandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commandCard, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !gameObject )
      goto LABEL_35;
    if ( !this->fields.commandCard )
      goto LABEL_35;
    BattleCommandComponent__setDepth(this->fields.commandCard, LODWORD(gameObject[7].monitor) + 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.commandCard;
    if ( !gameObject )
      goto LABEL_35;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_35;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 0, 0);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.commandCard;
    if ( !gameObject
      || (BattleCommandComponent__InitTreasureDeviceErrorSpriteMark((BattleCommandComponent_o *)gameObject, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.commandCard) == 0) )
    {
LABEL_35:
      sub_1C93D2C(gameObject, v11);
    }
    BattleCommandComponent__SetDownloadEventSprite((BattleCommandComponent_o *)gameObject, 0);
  }
  havenotTdLabel = this->fields.havenotTdLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2784/*"BATTLE_HASNOT_TD"*/, 0);
  if ( !havenotTdLabel )
    goto LABEL_35;
  UILabel__set_text(havenotTdLabel, (System_String_o *)gameObject, 0);
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.classBoardSkillObj;
    if ( !gameObject )
      goto LABEL_35;
    BattleServantClassBoardSkillEffectListComponent__Init(
      (BattleServantClassBoardSkillEffectListComponent_o *)gameObject,
      v11);
  }
  grandClassBoardSkillObj = (UnityEngine_Object_o *)this->fields.grandClassBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandClassBoardSkillObj, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.grandClassBoardSkillObj;
    if ( gameObject )
    {
      BattleServantClassBoardSkillEffectListComponent__Init(
        (BattleServantClassBoardSkillEffectListComponent_o *)gameObject,
        v11);
      goto LABEL_34;
    }
    goto LABEL_35;
  }
LABEL_34:
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0);
}


bool BattleServantConfConponent__IsHideAttribute(
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

  *(_QWORD *)personality = 0;
  if ( ConstantMaster__IsNotDisplayBattleAttribute(0) )
    goto LABEL_8;
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_30;
  bsvtData = (BattleServantData_o *)BattleServantData__GetHideStatePolicy(bsvtData, 0);
  if ( !this->fields.bsvtData )
    goto LABEL_30;
  v7 = (int)bsvtData;
  bsvtData = (BattleServantData_o *)BattleServantData__GetHideStatePersonality(this->fields.bsvtData, 0);
  if ( !this->fields.bsvtData )
    goto LABEL_30;
  v8 = (int)bsvtData;
  HideStateSubAttribute = BattleServantData__GetHideStateSubAttribute(this->fields.bsvtData, 0);
  if ( v7 != 3 || v8 != 3 || HideStateSubAttribute != 3 )
  {
    bsvtData = this->fields.bsvtData;
    if ( bsvtData )
    {
      bsvtData = (BattleServantData_o *)BattleServantData__GetOverwritePolicy(bsvtData, 0);
      if ( this->fields.bsvtData )
      {
        v11 = (System_String_o *)bsvtData;
        bsvtData = (BattleServantData_o *)BattleServantData__GetOverwritePersonality(this->fields.bsvtData, 0);
        if ( this->fields.bsvtData )
        {
          v12 = (System_String_o *)bsvtData;
          OverwriteSubAttribute = BattleServantData__GetOverwriteSubAttribute(this->fields.bsvtData, 0);
          BattleServantConfConponent__GetAttributeValue(this, &personality[1], personality, v14);
          if ( v7 == 3 )
          {
            IsNullOrEmpty = 1;
          }
          else
          {
            IsNullOrEmpty = 0;
            if ( !personality[1] && !isSvtTypeSpecific )
              IsNullOrEmpty = System_String__IsNullOrEmpty(v11, 0);
          }
          if ( v8 == 3 )
          {
            v16 = 1;
          }
          else
          {
            v16 = 0;
            if ( !personality[0] && !isSvtTypeSpecific )
              v16 = System_String__IsNullOrEmpty(v12, 0);
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
            Attri = BattleServantData__getAttri(bsvtData, 0);
            v17 = 0;
            if ( !Attri && !isSvtTypeSpecific )
              v17 = System_String__IsNullOrEmpty(OverwriteSubAttribute, 0);
            goto LABEL_28;
          }
        }
      }
    }
LABEL_30:
    sub_1C93D2C(bsvtData, v5);
  }
LABEL_8:
  v10 = 1;
  return v10 & 1;
}


bool BattleServantConfConponent__IsLastOpenServantAbility(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D3415C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3143/*"BattleServantDetailTab"*/);
    byte_4D3415C = 1;
  }
  return !UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_3143/*"BattleServantDetailTab"*/, 0)
      || !UnityEngine_PlayerPrefs__GetInt_72077644((System_String_o *)StringLiteral_3143/*"BattleServantDetailTab"*/, 0)
      || UnityEngine_PlayerPrefs__GetInt_72077644((System_String_o *)StringLiteral_3143/*"BattleServantDetailTab"*/, 0) != 1;
}


void BattleServantConfConponent__OnClick(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *isOpening; // x0
  __int64 v4; // x1
  struct BattleCommandComponent_array *CommandCardList; // x8
  __int64 v6; // x22
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x20
  struct BattleCommandComponent_array *v10; // x8
  struct BattleServantConfConponent_CloseButtonCallBack_o *callback_close; // x8
  __int64 v12; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *equipPossessionSkillInfoComponentList; // x8
  int32_t size; // w2
  int v21; // w9
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D34159 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34159 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  isOpening = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)BattleWindowComponent__isOpening(
                                                                                               (BattleWindowComponent_o *)this,
                                                                                               0);
  if ( ((unsigned __int8)isOpening & 1) == 0 )
  {
    CommandCardList = this->fields.CommandCardList;
    if ( !CommandCardList )
      goto LABEL_16;
    v6 = 4;
    while ( 1 )
    {
      max_length_low = LODWORD(CommandCardList->max_length);
      v8 = v6 - 4;
      if ( v6 - 4 >= (int)max_length_low )
        break;
      if ( v8 >= max_length_low )
        goto LABEL_31;
      v9 = (UnityEngine_Object_o *)*((_QWORD *)&CommandCardList->obj.klass + v6);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      isOpening = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)UnityEngine_Object__op_Equality(
                                                                                                   v9,
                                                                                                   0,
                                                                                                   0);
      if ( ((unsigned __int8)isOpening & 1) == 0 )
      {
        v10 = this->fields.CommandCardList;
        if ( !v10 )
          goto LABEL_16;
        if ( v8 >= LODWORD(v10->max_length) )
LABEL_31:
          sub_1C93D34(isOpening);
        isOpening = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)*((_QWORD *)&v10->obj.klass + v6);
        if ( !isOpening )
          goto LABEL_16;
        BattleCommandComponent__ClearCardEffect((BattleCommandComponent_o *)isOpening, 0);
      }
      CommandCardList = this->fields.CommandCardList;
      ++v6;
      if ( !CommandCardList )
        goto LABEL_16;
    }
    callback_close = this->fields.callback_close;
    if ( callback_close )
      ((void (__fastcall *)(intptr_t, intptr_t))callback_close->fields.invoke_impl)(
        callback_close->fields.method_code,
        callback_close->fields.method);
    isOpening = this->fields.equipPossessionSkillInfoComponentList;
    if ( !isOpening )
      goto LABEL_16;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)isOpening,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__) )
    {
      if ( !v22.fields._current )
        sub_1C93D2C(0, v12);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v22.fields._current,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(gameObject, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    equipPossessionSkillInfoComponentList = this->fields.equipPossessionSkillInfoComponentList;
    if ( !equipPossessionSkillInfoComponentList )
LABEL_16:
      sub_1C93D2C(isOpening, v4);
    size = equipPossessionSkillInfoComponentList->fields._size;
    v21 = equipPossessionSkillInfoComponentList->fields._version + 1;
    equipPossessionSkillInfoComponentList->fields._size = 0;
    equipPossessionSkillInfoComponentList->fields._version = v21;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)equipPossessionSkillInfoComponentList->fields._items, 0, size, 0);
    this->fields.bsvtData = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.bsvtData, 0, size, v14, v15, v16, v17, v18);
  }
}


void BattleServantConfConponent__OnClickServantAbility(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *v2; // x19
  UnityEngine_GameObject_o *BattleServantAbilityObj; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  v2 = this;
  if ( (byte_4D3415D & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattleServantConfConponent_OnClickServantAbility__);
    sub_1C93AD4(&StringLiteral_17595/*"btn_bg_on_1"*/);
    sub_1C93AD4(&StringLiteral_17590/*"btn_bg_off_1"*/);
    sub_1C93AD4(&StringLiteral_17738/*"btn_txt_servant_states_off"*/);
    sub_1C93AD4(&StringLiteral_3143/*"BattleServantDetailTab"*/);
    this = (BattleServantConfConponent_o *)sub_1C93AD4(&StringLiteral_17736/*"btn_txt_servant_property_on"*/);
    byte_4D3415D = 1;
  }
  if ( !v2->fields.isOpenAfter )
  {
    if ( BattleServantConfConponent__IsLastOpenServantAbility(this, method) )
      return;
    if ( !v2->fields.isOpenAfter )
    {
      v4 = Method_BattleServantConfConponent_OnClickServantAbility__;
      if ( (*((_BYTE *)Method_BattleServantConfConponent_OnClickServantAbility__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C93AEC(Method_BattleServantConfConponent_OnClickServantAbility__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    }
  }
  BattleServantAbilityObj = v2->fields.BattleServantAbilityObj;
  v2->fields.isOpenAfter = 0;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0);
  BattleServantAbilityObj = v2->fields.AbillityTab;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0);
  BattleServantAbilityObj = v2->fields.AbillityBtnBg;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityBtn;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17595/*"btn_bg_on_1"*/, 0);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17736/*"btn_txt_servant_property_on"*/, 0);
  BattleServantAbilityObj = v2->fields.BattleServantStateObj;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0);
  BattleServantAbilityObj = v2->fields.StateTab;
  if ( !BattleServantAbilityObj
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0),
        (BattleServantAbilityObj = v2->fields.StateBtnBg) == 0)
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateBtn) == 0)
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17590/*"btn_bg_off_1"*/, 0),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateName) == 0) )
  {
LABEL_20:
    sub_1C93D2C(BattleServantAbilityObj, method);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17738/*"btn_txt_servant_states_off"*/, 0);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_3143/*"BattleServantDetailTab"*/, 0, 0);
}


void BattleServantConfConponent__OnClickServantState(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *v2; // x19
  UnityEngine_GameObject_o *BattleServantAbilityObj; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  v2 = this;
  if ( (byte_4D3415E & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattleServantConfConponent_OnClickServantState__);
    sub_1C93AD4(&StringLiteral_17595/*"btn_bg_on_1"*/);
    sub_1C93AD4(&StringLiteral_17739/*"btn_txt_servant_states_on"*/);
    sub_1C93AD4(&StringLiteral_17735/*"btn_txt_servant_property_off"*/);
    sub_1C93AD4(&StringLiteral_17590/*"btn_bg_off_1"*/);
    this = (BattleServantConfConponent_o *)sub_1C93AD4(&StringLiteral_3143/*"BattleServantDetailTab"*/);
    byte_4D3415E = 1;
  }
  if ( !v2->fields.isOpenAfter )
  {
    if ( !BattleServantConfConponent__IsLastOpenServantAbility(this, method) )
      return;
    if ( !v2->fields.isOpenAfter )
    {
      v4 = Method_BattleServantConfConponent_OnClickServantState__;
      if ( (*((_BYTE *)Method_BattleServantConfConponent_OnClickServantState__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C93AEC(Method_BattleServantConfConponent_OnClickServantState__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    }
  }
  BattleServantAbilityObj = v2->fields.BattleServantAbilityObj;
  v2->fields.isOpenAfter = 0;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0);
  BattleServantAbilityObj = v2->fields.AbillityTab;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0);
  BattleServantAbilityObj = v2->fields.AbillityBtnBg;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityBtn;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17590/*"btn_bg_off_1"*/, 0);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17735/*"btn_txt_servant_property_off"*/, 0);
  BattleServantAbilityObj = v2->fields.BattleServantStateObj;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0);
  BattleServantAbilityObj = v2->fields.StateTab;
  if ( !BattleServantAbilityObj
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0),
        (BattleServantAbilityObj = v2->fields.StateBtnBg) == 0)
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateBtn) == 0)
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17595/*"btn_bg_on_1"*/, 0),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateName) == 0) )
  {
LABEL_21:
    sub_1C93D2C(BattleServantAbilityObj, method);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17739/*"btn_txt_servant_states_on"*/, 0);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_3143/*"BattleServantDetailTab"*/, 1, 0);
}


void BattleServantConfConponent__Open(
        BattleServantConfConponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0
  const MethodInfo *v6; // x1

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_1C93D2C(0, call);
  BattleViewBufflistComponent__setHide(buffListView, 0, 0);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
  BattleServantConfConponent__ResetScroll(this, v6);
}


void BattleServantConfConponent__ResetScroll(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *BattleServantAbilityObj; // x20
  UnityEngine_Object_o *BattleServantStateObj; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *buffListView; // x0
  UnityEngine_Object_o *AbillityScrollView; // x20
  UnityEngine_Object_o *AbillityScrollBarWiget; // x20
  UnityEngine_Object_o *StateScrollView; // x20
  UnityEngine_Object_o *StateScrollBarWiget; // x20

  if ( (byte_4D3415A & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3415A = 1;
  }
  BattleServantAbilityObj = (UnityEngine_Object_o *)this->fields.BattleServantAbilityObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(BattleServantAbilityObj, 0, 0) )
  {
    BattleServantStateObj = (UnityEngine_Object_o *)this->fields.BattleServantStateObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(BattleServantStateObj, 0, 0) )
    {
      buffListView = this->fields.BattleServantAbilityObj;
      if ( buffListView )
      {
        UnityEngine_GameObject__SetActive(buffListView, 1, 0);
        buffListView = this->fields.BattleServantStateObj;
        if ( buffListView )
        {
          UnityEngine_GameObject__SetActive(buffListView, 1, 0);
          buffListView = (UnityEngine_GameObject_o *)this->fields.buffListView;
          if ( buffListView )
          {
            BattleViewBufflistComponent__setShow((BattleViewBufflistComponent_o *)buffListView, 0);
            AbillityScrollView = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(AbillityScrollView, 0, 0) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.AbillityScrollView;
              if ( !buffListView )
                goto LABEL_37;
              UIScrollView__ResetPosition((UIScrollView_o *)buffListView, 0);
            }
            AbillityScrollBarWiget = (UnityEngine_Object_o *)this->fields.AbillityScrollBarWiget;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(AbillityScrollBarWiget, 0, 0) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.AbillityScrollBarWiget;
              if ( !buffListView )
                goto LABEL_37;
              UIWidget__ResizeCollider((UIWidget_o *)buffListView, 0);
            }
            StateScrollView = (UnityEngine_Object_o *)this->fields.StateScrollView;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(StateScrollView, 0, 0) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.StateScrollView;
              if ( !buffListView )
                goto LABEL_37;
              UIScrollView__ResetPosition((UIScrollView_o *)buffListView, 0);
            }
            StateScrollBarWiget = (UnityEngine_Object_o *)this->fields.StateScrollBarWiget;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(StateScrollBarWiget, 0, 0) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.StateScrollBarWiget;
              if ( !buffListView )
                goto LABEL_37;
              UIWidget__ResizeCollider((UIWidget_o *)buffListView, 0);
            }
            buffListView = this->fields.BattleServantAbilityObj;
            if ( buffListView )
            {
              UnityEngine_GameObject__SetActive(buffListView, 0, 0);
              buffListView = (UnityEngine_GameObject_o *)this->fields.buffListView;
              if ( buffListView )
              {
                BattleViewBufflistComponent__setHide((BattleViewBufflistComponent_o *)buffListView, 0, 0);
                buffListView = this->fields.BattleServantStateObj;
                if ( buffListView )
                {
                  UnityEngine_GameObject__SetActive(buffListView, 0, 0);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_37:
      sub_1C93D2C(buffListView, v5);
    }
  }
}


void BattleServantConfConponent__SetAppendSkillList(
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
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  int32_t v20; // w21
  System_Int32_array *v21; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x29
  unsigned __int64 v23; // x24
  int32_t v24; // w22
  float v25; // s8
  unsigned __int64 max_length_low; // x9
  int32_t v27; // w25
  System_String_o *v28; // x27
  System_String_o *v29; // x26
  _BOOL4 v30; // w21
  UnityEngine_GameObject_o *v31; // x28
  Il2CppObject *v32; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x20
  UnityEngine_Transform_o *v34; // x29
  UnityEngine_Transform_o *v35; // x29
  UnityEngine_Transform_o *v36; // x29
  Il2CppObject *Component_object; // x28
  int32_t v38; // w6
  const MethodInfo *v39; // x7
  _DWORD *monitor; // x8
  System_Int32_array *releaseSkillLvs; // [xsp+0h] [xbp-100h]
  System_Collections_Generic_IEnumerable_TSource__o *v42; // [xsp+18h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+40h] [xbp-C0h]
  Il2CppObject *entity; // [xsp+68h] [xbp-98h] BYREF
  System_Int32_array *lvList; // [xsp+70h] [xbp-90h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+78h] [xbp-88h] BYREF
  System_String_array *explanationList; // [xsp+80h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+88h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+98h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D34155 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&StringLiteral_20881/*"img_txt_extraskill"*/);
    byte_4D34155 = 1;
  }
  idList = 0;
  explanationList = 0;
  titleList = 0;
  lvList = 0;
  releaseStateList = 0;
  entity = 0;
  AppendSkillObj = (UnityEngine_Object_o *)this->fields.AppendSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(AppendSkillObj, 0, 0) )
  {
    AppendSkillTitle = (__int64)this->fields.AppendSkillObj;
    if ( !AppendSkillTitle )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 0, 0);
  }
  if ( !battleInfoData )
    return;
  AppendSkillListParent = (UnityEngine_Object_o *)this->fields.AppendSkillListParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(AppendSkillListParent, 0, 0) || !this->fields.bsvtData )
    return;
  AppendSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.AppendSkillInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(AppendSkillInfoPrefab, 0, 0) )
    return;
  this->fields.AppendSkillOffset = 0.0;
  BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0, 0) && !BattleServantConfConponent__SetAtlas(this, v6) )
    return;
  AppendSkillTitle = (__int64)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_99;
  UISprite__set_atlas((UISprite_o *)AppendSkillTitle, this->fields.BattleAssetUIAtlas, 0);
  AppendSkillTitle = (__int64)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_99;
  UISprite__set_spriteName((UISprite_o *)AppendSkillTitle, (System_String_o *)StringLiteral_20881/*"img_txt_extraskill"*/, 0);
  AppendSkillTitle = (__int64)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_99;
  AppendSkillTitle = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)AppendSkillTitle + 840LL))(
                       AppendSkillTitle,
                       *(_QWORD *)(*(_QWORD *)AppendSkillTitle + 848LL));
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_99;
  v12 = *(_OWORD *)&bsvtData->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&bsvtData->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v43, 0);
  AppendSkillTitle = (__int64)BattleInfoData__getUserServantFromID(battleInfoData, v13, 0);
  if ( !AppendSkillTitle )
    return;
  v14 = this->fields.bsvtData;
  if ( !v14 )
    goto LABEL_99;
  v15 = AppendSkillTitle;
  IsNpc = Follower__IsNpc(v14->fields.followerType, 0);
  if ( IsNpc )
  {
    BattleServantConfConponent__GetAppendSkillInfo(
      (BattleServantConfConponent_o *)IsNpc,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      *(System_Int32_array **)(v15 + 528),
      *(System_Int32_array **)(v15 + 536),
      (const MethodInfo *)releaseSkillLvs);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    AppendSkillTitle = UserServantEntity__getSvtId((UserServantEntity_o *)v15, 0);
    if ( !Master_object )
      goto LABEL_99;
    ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_43326244(
      (ServantAppendPassiveSkillMaster_o *)Master_object,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      AppendSkillTitle,
      *(System_Int32_array **)(v15 + 528),
      *(System_Int32_array **)(v15 + 536),
      0);
  }
  AppendSkillTitle = (__int64)this->fields.bsvtData;
  if ( !AppendSkillTitle )
    goto LABEL_99;
  v18 = BattleServantData__FilterDisplayingSkillIdArray((BattleServantData_o *)AppendSkillTitle, idList, 1, 0);
  if ( !v18 )
    return;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v18;
  if ( !v18->max_length )
    return;
  AppendSkillTitle = (__int64)this->fields.AppendSkillObj;
  if ( !AppendSkillTitle )
    goto LABEL_99;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 1, 0);
  AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
  if ( !AppendSkillTitle )
    goto LABEL_99;
  v20 = 0;
  while ( 1 )
  {
    AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)AppendSkillTitle, 0);
    if ( !AppendSkillTitle )
      goto LABEL_99;
    if ( v20 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AppendSkillTitle, 0) )
      break;
    AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
    if ( AppendSkillTitle )
    {
      AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)AppendSkillTitle, 0);
      if ( AppendSkillTitle )
      {
        AppendSkillTitle = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AppendSkillTitle, v20, 0);
        if ( AppendSkillTitle )
        {
          AppendSkillTitle = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)AppendSkillTitle,
                                        0);
          if ( AppendSkillTitle )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 0, 0);
            AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
            ++v20;
            if ( AppendSkillTitle )
              continue;
          }
        }
      }
    }
    goto LABEL_99;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  AppendSkillTitle = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
  v21 = idList;
  entity = 0;
  if ( !idList )
LABEL_99:
    sub_1C93D2C(AppendSkillTitle, v6);
  v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)AppendSkillTitle;
  v23 = 0;
  v24 = 0;
  v25 = 0.0;
  v42 = v19;
  while ( 1 )
  {
    max_length_low = LODWORD(v21->max_length);
    if ( (__int64)v23 >= (int)max_length_low )
      break;
    if ( v23 >= max_length_low )
      goto LABEL_102;
    AppendSkillTitle = System_Linq_Enumerable__Contains_int_(
                         v19,
                         v21->m_Items[v23],
                         (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
    if ( (AppendSkillTitle & 1) != 0 )
    {
      if ( !idList )
        goto LABEL_99;
      if ( v23 >= LODWORD(idList->max_length) )
        goto LABEL_102;
      if ( !lvList )
        goto LABEL_99;
      if ( v23 >= LODWORD(lvList->max_length) )
        goto LABEL_102;
      v27 = idList->m_Items[v23];
      if ( v27 >= 1 )
      {
        if ( !v22 )
          goto LABEL_99;
        AppendSkillTitle = DataMasterBase_object__object__int___TryGetEntity(
                             v22,
                             &entity,
                             v27,
                             (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( (AppendSkillTitle & 1) == 0 )
          return;
        if ( !titleList )
          goto LABEL_99;
        if ( v23 >= LODWORD(titleList->max_length) )
          goto LABEL_102;
        if ( !explanationList )
          goto LABEL_99;
        if ( v23 >= LODWORD(explanationList->max_length) )
          goto LABEL_102;
        if ( !releaseStateList )
          goto LABEL_99;
        if ( v23 >= LODWORD(releaseStateList->max_length) )
LABEL_102:
          sub_1C93D34(AppendSkillTitle);
        AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
        if ( !AppendSkillTitle )
          goto LABEL_99;
        v28 = titleList->m_Items[v23];
        v29 = explanationList->m_Items[v23];
        v30 = releaseStateList->m_Items[v23];
        AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(
                                      (UnityEngine_GameObject_o *)AppendSkillTitle,
                                      0);
        if ( !AppendSkillTitle )
          goto LABEL_99;
        if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AppendSkillTitle, 0) <= v24 )
        {
          v32 = (Il2CppObject *)this->fields.AppendSkillInfoPrefab;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v33 = v22;
          AppendSkillTitle = (__int64)UnityEngine_Object__Instantiate_object_(
                                        v32,
                                        (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !AppendSkillTitle )
            goto LABEL_99;
          v31 = (UnityEngine_GameObject_o *)AppendSkillTitle;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 1, 0);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v31, 0);
          if ( !this->fields.AppendSkillListParent )
            goto LABEL_99;
          v34 = (UnityEngine_Transform_o *)AppendSkillTitle;
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(this->fields.AppendSkillListParent, 0);
          if ( !v34 )
            goto LABEL_99;
          UnityEngine_Transform__set_parent(v34, (UnityEngine_Transform_o *)AppendSkillTitle, 0);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v31, 0);
          if ( !AppendSkillTitle )
            goto LABEL_99;
          v52.fields.y = -v25;
          v52.fields.x = 0.0;
          v52.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AppendSkillTitle, v52, 0);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v31, 0);
          v35 = (UnityEngine_Transform_o *)AppendSkillTitle;
          if ( !byte_4D2A13E )
          {
            AppendSkillTitle = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
            byte_4D2A13E = 1;
          }
          if ( !v35 )
            goto LABEL_99;
          UnityEngine_Transform__set_localScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v31, 0);
          v36 = (UnityEngine_Transform_o *)AppendSkillTitle;
          if ( !byte_4D2A13F )
          {
            AppendSkillTitle = sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
            byte_4D2A13F = 1;
          }
          if ( !v36 )
            goto LABEL_99;
          UnityEngine_Transform__set_localRotation(
            v36,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0);
          v22 = v33;
          v19 = v42;
        }
        else
        {
          AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
          if ( !AppendSkillTitle )
            goto LABEL_99;
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)AppendSkillTitle,
                                        0);
          if ( !AppendSkillTitle )
            goto LABEL_99;
          AppendSkillTitle = (__int64)UnityEngine_Transform__GetChild(
                                        (UnityEngine_Transform_o *)AppendSkillTitle,
                                        v24,
                                        0);
          if ( !AppendSkillTitle )
            goto LABEL_99;
          AppendSkillTitle = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)AppendSkillTitle,
                                        0);
          if ( !AppendSkillTitle )
            goto LABEL_99;
          v31 = (UnityEngine_GameObject_o *)AppendSkillTitle;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 1, 0);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v31, 0);
          if ( !AppendSkillTitle )
            goto LABEL_99;
          v51.fields.y = -v25;
          v51.fields.x = 0.0;
          v51.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AppendSkillTitle, v51, 0);
        }
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v31,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AppendSkillTitle = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( (AppendSkillTitle & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_99;
          BattleServantConfSkillComponent__SetItem(
            (BattleServantConfSkillComponent_o *)Component_object,
            v24 + 1,
            v27,
            v28,
            v29,
            v30,
            v38,
            v39);
        }
        else if ( !Component_object )
        {
          goto LABEL_99;
        }
        monitor = Component_object[4].monitor;
        if ( !monitor )
          goto LABEL_99;
        v25 = v25 + (float)((float)(monitor[43] - HIDWORD(Component_object[5].klass)) + 110.0);
        ++v24;
      }
    }
    v21 = idList;
    ++v23;
    if ( !idList )
      goto LABEL_99;
  }
  this->fields.AppendSkillOffset = -(float)(v25 + 1.0);
}


bool BattleServantConfConponent__SetAtlas(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  __int64 v4; // x1
  Il2CppObject *Object_object__51927708; // x20
  char v6; // w21
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D3415F & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_3101/*"Battle/Common"*/);
    sub_1C93AD4(&StringLiteral_3122/*"BattleAssetUIAtlas"*/);
    byte_4D3415F = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3101/*"Battle/Common"*/, 0);
  if ( !AssetStorage )
    goto LABEL_12;
  Object_object__51927708 = AssetData__GetObject_object__51927708(
                              AssetStorage,
                              (System_String_o *)StringLiteral_3122/*"BattleAssetUIAtlas"*/,
                              (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51927708, 0, 0);
  v6 = (char)AssetStorage;
  if ( ((unsigned __int8)AssetStorage & 1) != 0 )
  {
    if ( Object_object__51927708 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Object_object__51927708,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      this->fields.BattleAssetUIAtlas = (struct UIAtlas_o *)Component_object;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.BattleAssetUIAtlas,
        (int32_t)Component_object,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      return v6 & 1;
    }
LABEL_12:
    sub_1C93D2C(AssetStorage, v4);
  }
  return v6 & 1;
}


void BattleServantConfConponent__SetAttribute(BattleServantConfConponent_o *this, const MethodInfo *method)
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
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
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
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
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

  if ( (byte_4D34163 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_11751/*"SERVANT_PERSONALITY_"*/);
    sub_1C93AD4(&StringLiteral_11665/*"SERVANT_ATTRIBUTE_SPLIT"*/);
    sub_1C93AD4(&StringLiteral_21511/*"line_whiteAlpha_Noblur"*/);
    sub_1C93AD4(&StringLiteral_12093/*"SERVANT_SUB_ATTRIBUTE_"*/);
    sub_1C93AD4(&StringLiteral_11661/*"SERVANT_ATTRIBUTE_FORMAT_ATTRIBUTE"*/);
    sub_1C93AD4(&StringLiteral_11662/*"SERVANT_ATTRIBUTE_FORMAT_SUB_ATTRIBUTE"*/);
    sub_1C93AD4(&StringLiteral_11752/*"SERVANT_POLICY_"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_11660/*"SERVANT_ATTRIBUTE_FORMAT"*/);
    byte_4D34163 = 1;
  }
  *(_QWORD *)personality = 0;
  v89 = 0;
  attributeLabel = (UnityEngine_Object_o *)this->fields.attributeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(attributeLabel, 0, 0) )
  {
    mPanel = this->fields.attributeLabel;
    if ( !mPanel )
      goto LABEL_137;
    UILabel__set_text(mPanel, string_TypeInfo->static_fields->Empty, 0);
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
    v13 = UnityEngine_Object__op_Inequality(attributeObj, 0, 0);
    if ( v12 )
    {
      if ( v13 )
      {
        mPanel = (UILabel_o *)this->fields.attributeObj;
        if ( !mPanel )
          goto LABEL_137;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 0, 0);
      }
      AbillityScrollView = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      mPanel = (UILabel_o *)UnityEngine_Object__op_Inequality(AbillityScrollView, 0, 0);
      if ( ((unsigned __int8)mPanel & 1) == 0 )
        goto LABEL_53;
      v15 = this->fields.AbillityScrollView;
      if ( !v15 )
        goto LABEL_137;
      mPanel = (UILabel_o *)v15->fields.mPanel;
      if ( !mPanel )
        goto LABEL_137;
      if ( UIPanel__get_height((UIPanel_o *)mPanel, 0) > 430.0 )
        goto LABEL_53;
      if ( !this->fields.isEquip )
        goto LABEL_42;
      npRoot = (UnityEngine_Object_o *)this->fields.npRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(npRoot, 0, 0) )
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
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
      GameObjectExtensions__SetLocalPositionY(gameObject, v22, 0);
      v24 = this->fields.AbillityScrollView;
      if ( v24 )
      {
        mPanel = (UILabel_o *)v24->fields.mPanel;
        if ( mPanel )
        {
          ((void (__fastcall *)(UILabel_o *, const MethodInfo *, float, float, float, float))mPanel->klass->vtable._18_SetRect.methodPtr)(
            mPanel,
            mPanel->klass->vtable._18_SetRect.method,
            0.0,
            -127.0,
            670.0,
            460.0);
          GameObjectExtensions__SetLocalPositionY(this->fields.abillityScrollBarObject, -227.0, 0);
          v25 = this->fields.AbillityScrollView;
          if ( v25 )
          {
            verticalScrollBar = v25->fields.verticalScrollBar;
            if ( verticalScrollBar )
            {
              mPanel = (UILabel_o *)verticalScrollBar->fields.mBG;
              if ( mPanel )
              {
                UIWidget__set_height((UIWidget_o *)mPanel, 448, 0);
                v27 = this->fields.AbillityScrollView;
                if ( v27 )
                {
                  v28 = v27->fields.verticalScrollBar;
                  if ( v28 )
                  {
                    mPanel = (UILabel_o *)v28->fields.mFG;
                    if ( mPanel )
                    {
                      UIWidget__set_height((UIWidget_o *)mPanel, 460, 0);
LABEL_53:
                      mPanel = (UILabel_o *)this->fields.buffListView;
                      if ( mPanel )
                      {
                        BattleViewBufflistComponent__UpdateBuffListScrollView(
                          (BattleViewBufflistComponent_o *)mPanel,
                          1,
                          0);
                        mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
                        if ( mPanel )
                        {
                          mPanel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)mPanel,
                                                  0);
                          if ( mPanel )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 0, 0);
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
      sub_1C93D2C(mPanel, v4);
    }
    if ( v13 )
    {
      mPanel = (UILabel_o *)this->fields.attributeObj;
      if ( !mPanel )
        goto LABEL_137;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 1, 0);
    }
    v18 = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mPanel = (UILabel_o *)UnityEngine_Object__op_Inequality(v18, 0, 0);
    if ( ((unsigned __int8)mPanel & 1) != 0 )
    {
      v19 = this->fields.AbillityScrollView;
      if ( !v19 )
        goto LABEL_137;
      mPanel = (UILabel_o *)v19->fields.mPanel;
      if ( !mPanel )
        goto LABEL_137;
      if ( UIPanel__get_height((UIPanel_o *)mPanel, 0) > 430.0 )
      {
        if ( !this->fields.isEquip )
          goto LABEL_57;
        v20 = (UnityEngine_Object_o *)this->fields.npRoot;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v20, 0, 0) )
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
        v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
        GameObjectExtensions__SetLocalPositionY(v30, v29, 0);
        v31 = this->fields.AbillityScrollView;
        if ( !v31 )
          goto LABEL_137;
        mPanel = (UILabel_o *)v31->fields.mPanel;
        if ( !mPanel )
          goto LABEL_137;
        ((void (__fastcall *)(UILabel_o *, const MethodInfo *, float, float, float, float))mPanel->klass->vtable._18_SetRect.methodPtr)(
          mPanel,
          mPanel->klass->vtable._18_SetRect.method,
          0.0,
          -127.0,
          670.0,
          430.0);
        GameObjectExtensions__SetLocalPositionY(this->fields.abillityScrollBarObject, -238.0, 0);
        v32 = this->fields.AbillityScrollView;
        if ( !v32 )
          goto LABEL_137;
        v33 = v32->fields.verticalScrollBar;
        if ( !v33 )
          goto LABEL_137;
        mPanel = (UILabel_o *)v33->fields.mBG;
        if ( !mPanel )
          goto LABEL_137;
        UIWidget__set_height((UIWidget_o *)mPanel, 430, 0);
        v34 = this->fields.AbillityScrollView;
        if ( !v34 )
          goto LABEL_137;
        v35 = v34->fields.verticalScrollBar;
        if ( !v35 )
          goto LABEL_137;
        mPanel = (UILabel_o *)v35->fields.mFG;
        if ( !mPanel )
          goto LABEL_137;
        UIWidget__set_height((UIWidget_o *)mPanel, 430, 0);
      }
    }
    mPanel = (UILabel_o *)this->fields.buffListView;
    if ( !mPanel )
      goto LABEL_137;
    BattleViewBufflistComponent__UpdateBuffListScrollView((BattleViewBufflistComponent_o *)mPanel, 0, 0);
    BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0, 0) || BattleServantConfConponent__SetAtlas(this, v4) )
    {
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_137;
      mPanel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
      if ( !mPanel )
        goto LABEL_137;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 1, 0);
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_137;
      UISprite__set_atlas((UISprite_o *)mPanel, this->fields.BattleAssetUIAtlas, 0);
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_137;
      UISprite__set_spriteName((UISprite_o *)mPanel, (System_String_o *)StringLiteral_21511/*"line_whiteAlpha_Noblur"*/, 0);
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_137;
      ((void (__fastcall *)(UILabel_o *, __int64, const char *))mPanel->klass[1]._1.name)(
        mPanel,
        1,
        mPanel->klass[1]._1.namespaze);
      BattleServantConfConponent__GetAttributeValue(this, &personality[1], personality, v37);
      mPanel = (UILabel_o *)this->fields.bsvtData;
      if ( !mPanel )
        goto LABEL_137;
      mPanel = (UILabel_o *)BattleServantData__GetHideStatePolicy((BattleServantData_o *)mPanel, 0);
      if ( !this->fields.bsvtData )
        goto LABEL_137;
      v38 = (int)mPanel;
      mPanel = (UILabel_o *)BattleServantData__GetHideStatePersonality(this->fields.bsvtData, 0);
      if ( !this->fields.bsvtData )
        goto LABEL_137;
      v39 = (int)mPanel;
      HideStateSubAttribute = BattleServantData__GetHideStateSubAttribute(this->fields.bsvtData, 0);
      v41 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v41,
        (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
      if ( v38 != 3 )
      {
        mPanel = (UILabel_o *)this->fields.bsvtData;
        if ( !mPanel )
          goto LABEL_137;
        OverwritePolicy = BattleServantData__GetOverwritePolicy((BattleServantData_o *)mPanel, 0);
        IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(OverwritePolicy, 0);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( v9 && (personality[1] | v38) == 0 )
            v38 = 2;
          if ( personality[1] )
          {
            v45 = System_Int32__ToString((int32_t)&personality[1], 0);
            v46 = System_String__Concat_64425724((System_String_o *)StringLiteral_11752/*"SERVANT_POLICY_"*/, v45, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            IsNullOrEmpty = LocalizationManager__Get(v46, 0);
            OverwritePolicy = IsNullOrEmpty;
          }
        }
        HideStr = BattleServantConfConponent__GetHideStr(
                    (BattleServantConfConponent_o *)IsNullOrEmpty,
                    v38,
                    OverwritePolicy,
                    v44);
        mPanel = (UILabel_o *)System_String__IsNullOrEmpty(HideStr, 0);
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
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v41,
              (Il2CppObject *)HideStr,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v57 = &items->obj.klass + size;
            v41->fields._size = size + 1;
            v57[4] = (Il2CppClass *)HideStr;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v57 + 4), (int32_t)HideStr, v48, v49, v50, v51, v52, v53);
          }
        }
      }
      if ( v39 != 3 )
      {
        mPanel = (UILabel_o *)this->fields.bsvtData;
        if ( !mPanel )
          goto LABEL_137;
        OverwritePersonality = BattleServantData__GetOverwritePersonality((BattleServantData_o *)mPanel, 0);
        v59 = (System_String_o *)System_String__IsNullOrEmpty(OverwritePersonality, 0);
        if ( ((unsigned __int8)v59 & 1) != 0 )
        {
          if ( v9 && (personality[0] | v39) == 0 )
            v39 = 2;
          if ( personality[0] )
          {
            v61 = System_Int32__ToString((int32_t)personality, 0);
            v62 = System_String__Concat_64425724((System_String_o *)StringLiteral_11751/*"SERVANT_PERSONALITY_"*/, v61, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v59 = LocalizationManager__Get(v62, 0);
            OverwritePersonality = v59;
          }
        }
        v63 = BattleServantConfConponent__GetHideStr(
                (BattleServantConfConponent_o *)v59,
                v39,
                OverwritePersonality,
                v60);
        mPanel = (UILabel_o *)System_String__IsNullOrEmpty(v63, 0);
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
          if ( (unsigned int)v72 >= LODWORD(v70->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v41,
              (Il2CppObject *)v63,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          }
          else
          {
            v73 = &v70->obj.klass + v72;
            v41->fields._size = v72 + 1;
            v73[4] = (Il2CppClass *)v63;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v73 + 4), (int32_t)v63, v64, v65, v66, v67, v68, v69);
          }
        }
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v74 = LocalizationManager__Get((System_String_o *)StringLiteral_11665/*"SERVANT_ATTRIBUTE_SPLIT"*/, 0);
      v75 = System_String__Join_64468316(v74, (System_Collections_Generic_IEnumerable_string__o *)v41, 0);
      v76 = (System_String_o *)StringLiteral_1/*""*/;
      if ( HideStateSubAttribute != 3 )
      {
        mPanel = (UILabel_o *)this->fields.bsvtData;
        if ( !mPanel )
          goto LABEL_137;
        OverwriteSubAttribute = BattleServantData__GetOverwriteSubAttribute((BattleServantData_o *)mPanel, 0);
        Attri = (System_String_o *)System_String__IsNullOrEmpty(OverwriteSubAttribute, 0);
        if ( ((unsigned __int8)Attri & 1) != 0 )
        {
          mPanel = (UILabel_o *)this->fields.bsvtData;
          if ( !mPanel )
            goto LABEL_137;
          Attri = (System_String_o *)BattleServantData__getAttri((BattleServantData_o *)mPanel, 0);
          if ( v9 && ((unsigned int)Attri | HideStateSubAttribute) == 0 )
            HideStateSubAttribute = 2;
          v89 = (int)Attri;
          if ( (_DWORD)Attri )
          {
            v80 = System_Int32__ToString((int32_t)&v89, 0);
            v81 = System_String__Concat_64425724((System_String_o *)StringLiteral_12093/*"SERVANT_SUB_ATTRIBUTE_"*/, v80, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Attri = LocalizationManager__Get(v81, 0);
            OverwriteSubAttribute = Attri;
          }
        }
        v82 = BattleServantConfConponent__GetHideStr(
                (BattleServantConfConponent_o *)Attri,
                HideStateSubAttribute,
                OverwriteSubAttribute,
                v79);
        if ( !System_String__IsNullOrEmpty(v82, 0) )
          v76 = v82;
      }
      if ( System_String__IsNullOrEmpty(v75, 0) )
      {
        v83 = this->fields.attributeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v84 = LocalizationManager__Get((System_String_o *)StringLiteral_11662/*"SERVANT_ATTRIBUTE_FORMAT_SUB_ATTRIBUTE"*/, 0);
        v85 = (Il2CppObject *)v76;
LABEL_132:
        mPanel = (UILabel_o *)System_String__Format(v84, v85, 0);
        if ( !v83 )
          goto LABEL_137;
LABEL_133:
        UILabel__set_text(v83, (System_String_o *)mPanel, 0);
        return;
      }
      v86 = System_String__IsNullOrEmpty(v76, 0);
      v83 = this->fields.attributeLabel;
      v87 = v86;
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v86 )
        {
LABEL_131:
          v84 = LocalizationManager__Get((System_String_o *)StringLiteral_11661/*"SERVANT_ATTRIBUTE_FORMAT_ATTRIBUTE"*/, 0);
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
      v88 = LocalizationManager__Get((System_String_o *)StringLiteral_11660/*"SERVANT_ATTRIBUTE_FORMAT"*/, 0);
      mPanel = (UILabel_o *)System_String__Format_64467032(v88, (Il2CppObject *)v75, (Il2CppObject *)v76, 0);
      if ( !v83 )
        goto LABEL_137;
      goto LABEL_133;
    }
  }
}


void BattleServantConfConponent__SetClassBoardSkillList(
        BattleServantConfConponent_o *this,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *classBoardSkillObj; // x21
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x0
  struct BattleServantData_o *bsvtData; // x8
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  const MethodInfo *v11; // x4
  const MethodInfo *v12; // x2
  BattleServantConfWindowPassiveSkillListComponent_o *v13; // x8

  if ( (byte_4D34161 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_21801/*"menu_txt_class_score"*/);
    byte_4D34161 = 1;
  }
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(classBoardSkillObj, 0, 0) )
  {
    v8 = this->fields.classBoardSkillObj;
    if ( !v8 )
      goto LABEL_18;
    BattleServantConfWindowPassiveSkillListComponent__SetActive(
      (BattleServantConfWindowPassiveSkillListComponent_o *)v8,
      0,
      v7);
    bsvtData = this->fields.bsvtData;
    if ( bsvtData
      && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)bsvtData->fields.classBoardAddPassiveSkills, 0) )
    {
      BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0, 0) || BattleServantConfConponent__SetAtlas(this, v6) )
      {
        v8 = this->fields.classBoardSkillObj;
        if ( v8 )
        {
          ((void (__fastcall *)(struct BattleServantClassBoardSkillEffectListComponent_o *, struct UIAtlas_o *, __int64, const MethodInfo *))v8->klass->vtable._5_SetSkillTitle.methodPtr)(
            v8,
            this->fields.BattleAssetUIAtlas,
            StringLiteral_21801/*"menu_txt_class_score"*/,
            v8->klass->vtable._5_SetSkillTitle.method);
          v8 = this->fields.classBoardSkillObj;
          if ( v8 )
          {
            v8 = (struct BattleServantClassBoardSkillEffectListComponent_o *)BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
                                                                               v8,
                                                                               this->fields.bsvtData,
                                                                               battleInfoData,
                                                                               0,
                                                                               v11);
            v13 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
            if ( v13 )
            {
              BattleServantConfWindowPassiveSkillListComponent__SetActive(v13, (unsigned __int8)v8 & 1, v12);
              return;
            }
          }
        }
LABEL_18:
        sub_1C93D2C(v8, v6);
      }
    }
  }
}


void BattleServantConfConponent__SetClassSkillList(
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
  Il2CppObject *v27; // x23
  const MethodInfo *v28; // x2
  int32_t v29; // w25
  int32_t v30; // w26
  float v31; // s8
  int32_t v32; // w29
  System_String_o *v33; // x27
  System_String_o *Detail_43584536; // x22
  UnityEngine_GameObject_o *v35; // x24
  Il2CppObject *v36; // x21
  Il2CppObject *v37; // x23
  UnityEngine_Transform_o *v38; // x23
  UnityEngine_Transform_o *v39; // x23
  UnityEngine_Transform_o *v40; // x23
  Il2CppObject *Component_object; // x24
  int32_t v42; // w6
  const MethodInfo *v43; // x7
  _DWORD *monitor; // x8
  Il2CppObject *v45; // [xsp+8h] [xbp-D8h]
  System_String_o *str1; // [xsp+10h] [xbp-D0h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+40h] [xbp-A0h]
  SkillLvEntity_o *v50; // [xsp+68h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D34153 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__InsertRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor___79008552);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&StringLiteral_20868/*"img_txt_classskill"*/);
    sub_1C93AD4(&StringLiteral_10161/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/);
    byte_4D34153 = 1;
  }
  entity = 0;
  v50 = 0;
  ClassSkillObj = (UnityEngine_Object_o *)this->fields.ClassSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ClassSkillObj, 0, 0) )
  {
    bsvtData = (__int64)this->fields.ClassSkillObj;
    if ( !bsvtData )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0);
  }
  if ( battleInfoData )
  {
    ClassSkillListParent = (UnityEngine_Object_o *)this->fields.ClassSkillListParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(ClassSkillListParent, 0, 0) && this->fields.bsvtData )
    {
      ClassSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.ClassSkillInfoPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(ClassSkillInfoPrefab, 0, 0) )
      {
        bsvtData = (__int64)this->fields.bsvtData;
        if ( !bsvtData )
          goto LABEL_54;
        if ( !BattleServantData__IsHideClassSkillNpcFollower((BattleServantData_o *)bsvtData, 0) )
        {
          this->fields.ClassSkillOffset = 0.0;
          BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0, 0)
            || BattleServantConfConponent__SetAtlas(this, v6) )
          {
            bsvtData = (__int64)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_54;
            UISprite__set_atlas((UISprite_o *)bsvtData, this->fields.BattleAssetUIAtlas, 0);
            bsvtData = (__int64)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_54;
            UISprite__set_spriteName((UISprite_o *)bsvtData, (System_String_o *)StringLiteral_20868/*"img_txt_classskill"*/, 0);
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
            *(_QWORD *)&v52.fields.currentCryptoKey = v13;
            *(_QWORD *)&v52.fields.fakeValue = v12;
            v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v52, 0);
            bsvtData = BattleInfoData__IsUseNewTransformLogic(battleInfoData, v14, 0);
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
              *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&v15->fields.userSvtId.fields.currentCryptoKey;
              *(_OWORD *)&v49.fields.fakeValue = v18;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v48 = v49;
              userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v48, 0);
            }
            UserServantFromID = BattleInfoData__getUserServantFromID(battleInfoData, userSvtId, 0);
            if ( UserServantFromID )
            {
              bsvtData = (__int64)this->fields.bsvtData;
              if ( !bsvtData )
                goto LABEL_54;
              v20 = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__FilterDisplayingSkillIdArray(
                                                                     (BattleServantData_o *)bsvtData,
                                                                     UserServantFromID->fields.classPassive,
                                                                     1,
                                                                     0);
              v21 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_59097676(
                v21,
                v20,
                (const MethodInfo_385C24C *)Method_System_Collections_Generic_List_int___ctor___79008552);
              v22 = this->fields.bsvtData;
              bsvtData = (__int64)BattleUserServantData__getAddPassiveSkill(UserServantFromID, 0);
              if ( !v22 )
                goto LABEL_54;
              v23 = (System_Collections_ICollection_o *)BattleServantData__FilterDisplayingSkillIdArray(
                                                          v22,
                                                          (System_Int32_array *)bsvtData,
                                                          0,
                                                          0);
              bsvtData = BasicHelper__IsNullOrEmpty(v23, 0);
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
                  (const MethodInfo_385D930 *)Method_System_Collections_Generic_List_int__InsertRange__);
              }
              if ( v21->fields._size >= 1 )
              {
                bsvtData = (__int64)this->fields.ClassSkillObj;
                if ( bsvtData )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0);
                  bsvtData = (__int64)this->fields.ClassSkillListParent;
                  if ( bsvtData )
                  {
                    v25 = 0;
                    while ( 1 )
                    {
                      bsvtData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)bsvtData, 0);
                      if ( !bsvtData )
                        goto LABEL_54;
                      if ( v25 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0) )
                        break;
                      bsvtData = (__int64)this->fields.ClassSkillListParent;
                      if ( bsvtData )
                      {
                        bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)bsvtData,
                                              0);
                        if ( bsvtData )
                        {
                          bsvtData = (__int64)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)bsvtData,
                                                v25,
                                                0);
                          if ( bsvtData )
                          {
                            bsvtData = (__int64)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)bsvtData,
                                                  0);
                            if ( bsvtData )
                            {
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0);
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
                    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
                    entity = 0;
                    v27 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillLvMaster___);
                    v50 = 0;
                    source = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantConfConponent__GetNeedAddAnnotationSkillIds(
                                                                                    this,
                                                                                    (System_Collections_Generic_IEnumerable_int__o *)v21,
                                                                                    v28);
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    str1 = LocalizationManager__Get((System_String_o *)StringLiteral_10161/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/, 0);
                    if ( v21->fields._size >= 1 )
                    {
                      v29 = 0;
                      v30 = 0;
                      v31 = 0.0;
                      v45 = Master_object;
                      while ( 1 )
                      {
                        bsvtData = System_Collections_Generic_List_int___get_Item(
                                     v21,
                                     v30,
                                     (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
                        if ( (int)bsvtData >= 1 )
                        {
                          if ( !Master_object )
                            goto LABEL_54;
                          v32 = bsvtData;
                          bsvtData = DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       &entity,
                                       bsvtData,
                                       (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                          if ( (bsvtData & 1) == 0 )
                            return;
                          if ( !v27 )
                            goto LABEL_54;
                          if ( !SkillLvMaster__TryGetEntity((SkillLvMaster_o *)v27, &v50, v32, 1, 0) )
                            return;
                          bsvtData = (__int64)entity;
                          if ( !entity )
                            goto LABEL_54;
                          bsvtData = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0);
                          if ( !v50 )
                            goto LABEL_54;
                          v33 = (System_String_o *)bsvtData;
                          Detail_43584536 = SkillLvEntity__getDetail_43584536(v50, 1, 0, 0);
                          if ( System_Linq_Enumerable__Contains_int_(
                                 source,
                                 v32,
                                 (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___) )
                          {
                            Detail_43584536 = System_String__Concat_64425724(Detail_43584536, str1, 0);
                          }
                          bsvtData = (__int64)this->fields.ClassSkillListParent;
                          if ( !bsvtData )
                            goto LABEL_54;
                          bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)bsvtData,
                                                0);
                          if ( !bsvtData )
                            goto LABEL_54;
                          if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0) <= v29 )
                          {
                            v36 = v27;
                            v37 = (Il2CppObject *)this->fields.ClassSkillInfoPrefab;
                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                            bsvtData = (__int64)UnityEngine_Object__Instantiate_object_(
                                                  v37,
                                                  (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v35 = (UnityEngine_GameObject_o *)bsvtData;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v35, 0);
                            if ( !this->fields.ClassSkillListParent )
                              goto LABEL_54;
                            v38 = (UnityEngine_Transform_o *)bsvtData;
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                                  this->fields.ClassSkillListParent,
                                                  0);
                            if ( !v38 )
                              goto LABEL_54;
                            UnityEngine_Transform__set_parent(v38, (UnityEngine_Transform_o *)bsvtData, 0);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v35, 0);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v54.fields.y = -v31;
                            v54.fields.x = 0.0;
                            v54.fields.z = 0.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v54, 0);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v35, 0);
                            v39 = (UnityEngine_Transform_o *)bsvtData;
                            if ( !byte_4D2A13E )
                            {
                              bsvtData = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
                              byte_4D2A13E = 1;
                            }
                            if ( !v39 )
                              goto LABEL_54;
                            UnityEngine_Transform__set_localScale(
                              v39,
                              UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                              0);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v35, 0);
                            v40 = (UnityEngine_Transform_o *)bsvtData;
                            if ( !byte_4D2A13F )
                            {
                              bsvtData = sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
                              byte_4D2A13F = 1;
                            }
                            if ( !v40 )
                              goto LABEL_54;
                            UnityEngine_Transform__set_localRotation(
                              v40,
                              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                              0);
                            v27 = v36;
                            Master_object = v45;
                          }
                          else
                          {
                            bsvtData = (__int64)this->fields.ClassSkillListParent;
                            if ( !bsvtData )
                              goto LABEL_54;
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)bsvtData,
                                                  0);
                            if ( !bsvtData )
                              goto LABEL_54;
                            bsvtData = (__int64)UnityEngine_Transform__GetChild(
                                                  (UnityEngine_Transform_o *)bsvtData,
                                                  v29,
                                                  0);
                            if ( !bsvtData )
                              goto LABEL_54;
                            bsvtData = (__int64)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)bsvtData,
                                                  0);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v35 = (UnityEngine_GameObject_o *)bsvtData;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v35, 0);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v53.fields.y = -v31;
                            v53.fields.x = 0.0;
                            v53.fields.z = 0.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v53, 0);
                          }
                          Component_object = UnityEngine_GameObject__GetComponent_object_(
                                               v35,
                                               (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          bsvtData = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
                          if ( (bsvtData & 1) != 0 )
                          {
                            if ( !Component_object )
                              goto LABEL_54;
                            BattleServantConfSkillComponent__SetItem(
                              (BattleServantConfSkillComponent_o *)Component_object,
                              v30 + 1,
                              v32,
                              v33,
                              Detail_43584536,
                              1,
                              v42,
                              v43);
                          }
                          else if ( !Component_object )
                          {
                            goto LABEL_54;
                          }
                          monitor = Component_object[4].monitor;
                          if ( !monitor )
                            goto LABEL_54;
                          ++v29;
                          v31 = v31 + (float)((float)(monitor[43] - HIDWORD(Component_object[5].klass)) + 110.0);
                        }
                        if ( ++v30 >= v21->fields._size )
                          goto LABEL_103;
                      }
                    }
                    v31 = 0.0;
LABEL_103:
                    this->fields.ClassSkillOffset = -(float)(v31 + 1.0);
                    return;
                  }
                }
LABEL_54:
                sub_1C93D2C(bsvtData, v6);
              }
            }
          }
        }
      }
    }
  }
}


void BattleServantConfConponent__SetCommandCard(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  BattleServantData_o *bsvtData; // x0
  System_Int32_array *CommandCodeIdsEX; // x0
  __int64 v5; // x1
  struct BattleCommandComponent_array *CommandCardList; // x8
  System_Int32_array *v7; // x20
  unsigned __int64 v8; // x21
  int32_t *m_Items; // x23
  unsigned __int64 max_length_low; // x9
  BattleCommandComponent_o *v11; // x22
  const MethodInfo *v12; // x2
  struct BattleCommandData_o *data; // x8
  Il2CppObject *component; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D34157 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_TryGetComponent_UIWidget___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34157 = 1;
  }
  component = 0;
  bsvtData = this->fields.bsvtData;
  if ( bsvtData && this->fields.CommandCardList )
  {
    CommandCodeIdsEX = BattleServantData__GetCommandCodeIdsEX(bsvtData, 0);
    CommandCardList = this->fields.CommandCardList;
    this->fields.isCommandCardUnderIcon = 0;
    if ( !CommandCardList )
LABEL_23:
      sub_1C93D2C(CommandCodeIdsEX, v5);
    v7 = CommandCodeIdsEX;
    v8 = 0;
    m_Items = CommandCodeIdsEX->m_Items;
    while ( 1 )
    {
      max_length_low = LODWORD(CommandCardList->max_length);
      if ( (__int64)v8 >= (int)max_length_low )
        break;
      if ( v8 >= max_length_low )
        goto LABEL_25;
      v11 = CommandCardList->m_Items[v8];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v11, 0, 0);
      if ( ((unsigned __int8)CommandCodeIdsEX & 1) == 0 )
      {
        if ( !v11 )
          goto LABEL_23;
        BattleCommandComponent__Initialize(v11, 0);
        v11->fields.isCodeTextureView = 1;
        BattleCommandComponent__setData_47210636(v11, this->fields.bsvtData, v8, 0);
        CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Component__TryGetComponent_object_(
                                                   (UnityEngine_Component_o *)this,
                                                   &component,
                                                   (const MethodInfo_319C308 *)Method_UnityEngine_Component_TryGetComponent_UIWidget___);
        if ( ((unsigned __int8)CommandCodeIdsEX & 1) != 0 )
        {
          if ( !component )
            goto LABEL_23;
          BattleCommandComponent__setDepth(v11, LODWORD(component[11].klass) + 1, 0);
        }
        BattleCommandComponent__SetDownloadEventSprite(v11, 0);
        if ( !v7 )
          goto LABEL_23;
        if ( v8 >= LODWORD(v7->max_length)
          || (BattleCommandComponent__SetCommandCodeView_47214732(v11, m_Items[v8], 0), v8 >= LODWORD(v7->max_length))
          || (BattleCommandComponent__SetLockInfo(v11, m_Items[v8] == -1, 0),
              BattleServantConfConponent__SetCommandCardTypeChangeBuff(this, v11, v12),
              BattleCommandComponent__HidePowerUpValueLabelActive(v11, this->fields.isCommandCardUnderIcon, 0),
              BattleCommandComponent__ResetCardBuffIconAlphaAnim(v11, 0),
              BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(v11, 0),
              v8 >= LODWORD(v7->max_length)) )
        {
LABEL_25:
          sub_1C93D34(CommandCodeIdsEX);
        }
        data = v11->fields.data;
        if ( !data )
          goto LABEL_23;
        data->fields.commandCodeId = m_Items[v8];
        BattleCommandComponent__UpdateCommandCardEffect(v11, 0);
        BattleCommandComponent__ChangeCardEffectMaskForInside(v11, 0);
      }
      CommandCardList = this->fields.CommandCardList;
      ++v8;
      if ( !CommandCardList )
        goto LABEL_23;
    }
  }
}


void BattleServantConfConponent__SetCommandCardTypeChangeBuff(
        BattleServantConfConponent_o *this,
        BattleCommandComponent_o *commandCard,
        const MethodInfo *method)
{
  BattleCommandData_o *data; // x21
  int32_t addOrder; // w3
  int32_t v7; // w2
  BattleBuffData_BuffData_o *v8; // x0
  BattleBuffData_BuffData_o *v9; // x22
  int32_t turn; // w8
  int v11; // w8
  bool v12; // w20

  if ( !commandCard )
    sub_1C93D2C(this, 0);
  data = commandCard->fields.data;
  if ( data && !BattleCommandData__isTreasureDvc(commandCard->fields.data, 0) )
  {
    v8 = BattleCommandData__GetCommandCardTypeChangeBuff(data, 0);
    if ( v8 )
    {
      v9 = v8;
      LOBYTE(v8) = BattleCommandData__IsCommandCardTypeChanged(data, 0);
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
  BattleCommandComponent__SetCommandCardTypeChange(commandCard, (unsigned __int8)v8 & 1, v7, addOrder, 0);
  BattleCommandComponent__SetActiveSpecialCardBuffIcon(commandCard, v12, 0);
}


void BattleServantConfConponent__SetCommandCodeSkillList(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *CommandCodeListParent; // x20
  UnityEngine_Object_o *CommandCodeInfoPrefab; // x20
  __int64 v5; // x1
  __int64 transform; // x0
  int32_t v7; // w20
  System_Int32_array *CommandCodeIds; // x24
  BattleServantConfConponent___c_c *v9; // x8
  System_Predicate_int__o *_9__85_0; // x21
  Il2CppObject *v11; // x22
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int v19; // w21
  il2cpp_array_size_t max_length; // x8
  int32_t v21; // w22
  unsigned __int64 v22; // x29
  float v23; // s8
  int32_t v24; // w25
  System_Int32_array *v25; // x8
  unsigned __int64 v26; // x24
  unsigned __int64 max_length_low; // x9
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

  if ( (byte_4D34158 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_FindIndex_int___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&System_Predicate_int__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__85_0__);
    sub_1C93AD4(&BattleServantConfConponent___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_2750/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/);
    byte_4D34158 = 1;
  }
  idList = 0;
  explanationList = 0;
  titleList = 0;
  CommandCodeListParent = (UnityEngine_Object_o *)this->fields.CommandCodeListParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(CommandCodeListParent, 0, 0) || !this->fields.bsvtData )
    return;
  CommandCodeInfoPrefab = (UnityEngine_Object_o *)this->fields.CommandCodeInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(CommandCodeInfoPrefab, 0, 0) )
    return;
  transform = (__int64)this->fields.CommandCodeInfoPrefab;
  if ( !transform )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  transform = (__int64)this->fields.CommandCodeListParent;
  if ( !transform )
    goto LABEL_90;
  v7 = 0;
  while ( 1 )
  {
    transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
    if ( !transform )
      goto LABEL_90;
    if ( v7 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0) )
      break;
    transform = (__int64)this->fields.CommandCodeListParent;
    if ( transform )
    {
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
      if ( transform )
      {
        transform = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v7, 0);
        if ( transform )
        {
          transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
          if ( transform )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
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
  CommandCodeIds = BattleServantData__GetCommandCodeIds((BattleServantData_o *)transform, 0);
  v9 = BattleServantConfConponent___c_TypeInfo;
  if ( !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
    v9 = BattleServantConfConponent___c_TypeInfo;
  }
  _9__85_0 = v9->static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BattleServantConfConponent___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__85_0 = (System_Predicate_int__o *)sub_1C93D20(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__85_0,
      v11,
      Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__85_0__,
      0);
    static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = _9__85_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__85_0,
      (int32_t)_9__85_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  transform = System_Array__FindIndex_int_(
                CommandCodeIds,
                (System_Predicate_T__o *)_9__85_0,
                (const MethodInfo_32A9C90 *)Method_System_Array_FindIndex_int___);
  if ( !this->fields.NoCommandCodeLabel
    || (v19 = transform,
        (transform = (__int64)UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)this->fields.NoCommandCodeLabel,
                                0)) == 0) )
  {
LABEL_90:
    sub_1C93D2C(transform, v5);
  }
  if ( v19 == -1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
    NoCommandCodeLabel = this->fields.NoCommandCodeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2750/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/, 0);
    if ( NoCommandCodeLabel )
    {
      UILabel__set_text(NoCommandCodeLabel, (System_String_o *)transform, 0);
      return;
    }
    goto LABEL_90;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_90;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)transform,
                                                                      (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_90;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !CommandCodeIds )
    goto LABEL_90;
  max_length = CommandCodeIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v21 = 0;
    v22 = 0;
    v23 = 0.0;
    v36 = CommandCodeIds;
    do
    {
      if ( v22 >= (unsigned int)max_length )
LABEL_91:
        sub_1C93D34(transform);
      v24 = CommandCodeIds->m_Items[v22];
      if ( v24 >= 1 )
      {
        transform = (__int64)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_90;
        transform = (__int64)DataMasterBase_object__object__int___GetEntity(
                               MasterData_object,
                               v24,
                               (const MethodInfo_3463274 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( transform )
        {
          CommandCodeEntity__GetSkillInfo((CommandCodeEntity_o *)transform, &idList, &titleList, &explanationList, 0);
          v25 = idList;
          if ( !idList )
            goto LABEL_90;
          v26 = 0;
          while ( 1 )
          {
            max_length_low = LODWORD(v25->max_length);
            if ( (__int64)v26 >= (int)max_length_low )
              break;
            if ( v26 >= max_length_low )
              goto LABEL_91;
            if ( v25->m_Items[v26] >= 1 )
            {
              transform = (__int64)this->fields.CommandCodeListParent;
              if ( !transform )
                goto LABEL_90;
              transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
              if ( !transform )
                goto LABEL_90;
              if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0) <= v21 )
              {
                v29 = (Il2CppObject *)this->fields.CommandCodeInfoPrefab;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                transform = (__int64)UnityEngine_Object__Instantiate_object_(
                                       v29,
                                       (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
                if ( !transform )
                  goto LABEL_90;
                v28 = (UnityEngine_GameObject_o *)transform;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
                transform = (__int64)UnityEngine_GameObject__get_transform(v28, 0);
                if ( !this->fields.CommandCodeListParent )
                  goto LABEL_90;
                v30 = (UnityEngine_Transform_o *)transform;
                transform = (__int64)UnityEngine_GameObject__get_transform(this->fields.CommandCodeListParent, 0);
                if ( !v30 )
                  goto LABEL_90;
                UnityEngine_Transform__set_parent(v30, (UnityEngine_Transform_o *)transform, 0);
                transform = (__int64)UnityEngine_GameObject__get_transform(v28, 0);
                if ( !transform )
                  goto LABEL_90;
                v41.fields.x = 0.0;
                v41.fields.z = 0.0;
                v41.fields.y = v23;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v41, 0);
                transform = (__int64)UnityEngine_GameObject__get_transform(v28, 0);
                v31 = (UnityEngine_Transform_o *)transform;
                if ( !byte_4D2A13E )
                {
                  transform = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
                  byte_4D2A13E = 1;
                }
                if ( !v31 )
                  goto LABEL_90;
                UnityEngine_Transform__set_localScale(v31, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
                transform = (__int64)UnityEngine_GameObject__get_transform(v28, 0);
                v32 = (UnityEngine_Transform_o *)transform;
                if ( !byte_4D2A13F )
                {
                  transform = sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
                  byte_4D2A13F = 1;
                }
                if ( !v32 )
                  goto LABEL_90;
                UnityEngine_Transform__set_localRotation(
                  v32,
                  UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                  0);
              }
              else
              {
                transform = (__int64)this->fields.CommandCodeListParent;
                if ( !transform )
                  goto LABEL_90;
                transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
                if ( !transform )
                  goto LABEL_90;
                transform = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v21, 0);
                if ( !transform )
                  goto LABEL_90;
                transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
                if ( !transform )
                  goto LABEL_90;
                v28 = (UnityEngine_GameObject_o *)transform;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
              }
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   v28,
                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
              if ( (transform & 1) != 0 )
              {
                if ( !idList )
                  goto LABEL_90;
                if ( v26 >= LODWORD(idList->max_length) )
                  goto LABEL_91;
                if ( !titleList )
                  goto LABEL_90;
                if ( v26 >= LODWORD(titleList->max_length) )
                  goto LABEL_91;
                if ( !explanationList )
                  goto LABEL_90;
                if ( v26 >= LODWORD(explanationList->max_length) )
                  goto LABEL_91;
                if ( !Component_object )
                  goto LABEL_90;
                CommandCodeSkillInfo__Set(
                  (CommandCodeSkillInfo_o *)Component_object,
                  v24,
                  idList->m_Items[v26],
                  titleList->m_Items[v26],
                  explanationList->m_Items[v26],
                  v26 == 0,
                  0);
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
      LODWORD(max_length) = CommandCodeIds->max_length;
      ++v22;
    }
    while ( (__int64)v22 < (int)max_length );
  }
}


void BattleServantConfConponent__SetGrandClassBoardSkillList(
        BattleServantConfConponent_o *this,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *grandClassBoardSkillObj; // x21
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct BattleServantClassBoardSkillEffectListComponent_o *IsNullOrEmpty; // x0
  struct BattleServantData_o *bsvtData; // x8
  struct BattleServantData_o *v10; // x8
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  const MethodInfo *v12; // x4
  const MethodInfo *v13; // x2
  BattleServantConfWindowPassiveSkillListComponent_o *v14; // x8

  if ( (byte_4D34162 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_21802/*"menu_txt_grand_class_score"*/);
    byte_4D34162 = 1;
  }
  grandClassBoardSkillObj = (UnityEngine_Object_o *)this->fields.grandClassBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(grandClassBoardSkillObj, 0, 0) )
  {
    IsNullOrEmpty = this->fields.grandClassBoardSkillObj;
    if ( !IsNullOrEmpty )
      goto LABEL_20;
    BattleServantConfWindowPassiveSkillListComponent__SetActive(
      (BattleServantConfWindowPassiveSkillListComponent_o *)IsNullOrEmpty,
      0,
      v7);
    bsvtData = this->fields.bsvtData;
    if ( bsvtData )
    {
      IsNullOrEmpty = (struct BattleServantClassBoardSkillEffectListComponent_o *)BasicHelper__IsNullOrEmpty(
                                                                                    (System_Collections_ICollection_o *)bsvtData->fields.classBoardAddPassiveSkills,
                                                                                    0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        v10 = this->fields.bsvtData;
        if ( !v10 )
          goto LABEL_20;
        if ( v10->fields._IsUseGrandBoard_k__BackingField )
        {
          BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0, 0)
            || BattleServantConfConponent__SetAtlas(this, v6) )
          {
            IsNullOrEmpty = this->fields.grandClassBoardSkillObj;
            if ( IsNullOrEmpty )
            {
              ((void (__fastcall *)(struct BattleServantClassBoardSkillEffectListComponent_o *, struct UIAtlas_o *, __int64, const MethodInfo *))IsNullOrEmpty->klass->vtable._5_SetSkillTitle.methodPtr)(
                IsNullOrEmpty,
                this->fields.BattleAssetUIAtlas,
                StringLiteral_21802/*"menu_txt_grand_class_score"*/,
                IsNullOrEmpty->klass->vtable._5_SetSkillTitle.method);
              IsNullOrEmpty = this->fields.grandClassBoardSkillObj;
              if ( IsNullOrEmpty )
              {
                IsNullOrEmpty = (struct BattleServantClassBoardSkillEffectListComponent_o *)BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
                                                                                              IsNullOrEmpty,
                                                                                              this->fields.bsvtData,
                                                                                              battleInfoData,
                                                                                              1,
                                                                                              v12);
                v14 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.grandClassBoardSkillObj;
                if ( v14 )
                {
                  BattleServantConfWindowPassiveSkillListComponent__SetActive(
                    v14,
                    (unsigned __int8)IsNullOrEmpty & 1,
                    v13);
                  return;
                }
              }
            }
LABEL_20:
            sub_1C93D2C(IsNullOrEmpty, v6);
          }
        }
      }
    }
  }
}


System_Collections_IEnumerator_o *BattleServantConfConponent__StartOpenTab(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D3415B & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantConfConponent__StartOpenTab_d__92_TypeInfo);
    byte_4D3415B = 1;
  }
  v3 = sub_1C93D20(BattleServantConfConponent__StartOpenTab_d__92_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_String_o *BattleServantConfConponent__get_closeBtnPath(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x19
  __int64 *v6; // x8

  if ( (byte_4D34160 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_18160/*"close"*/);
    sub_1C93AD4(&StringLiteral_14653/*"Top/close"*/);
    byte_4D34160 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C93D2C(0, v4);
  v5 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_14653/*"Top/close"*/, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
    v6 = &StringLiteral_14653/*"Top/close"*/;
  else
    v6 = &StringLiteral_18160/*"close"*/;
  return (System_String_o *)*v6;
}


BattleServantData_o *BattleServantConfConponent__get_svtData(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  return this->fields.bsvtData;
}


bool BattleServantConfConponent__isTargetSvt(
        BattleServantConfConponent_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleServantData_o *bsvtData; // x8

  bsvtData = this->fields.bsvtData;
  return bsvtData && bsvtData->fields.uniqueId == uniqueId;
}


void BattleServantConfConponent__setCallBackPushClose(
        BattleServantConfConponent_o *this,
        BattleServantConfConponent_CloseButtonCallBack_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.callback_close = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callback_close,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantConfConponent__setConfData(
        BattleServantConfConponent_o *this,
        BattleServantData_o *inbsvtData,
        bool isShowBuffIcon,
        BattleInfoData_o *battleInfoData,
        bool isNpc,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleInfoData_o *battle_info; // x24
  BattleServantData_o **p_bsvtData; // x21
  UnityEngine_Object_o *data; // x24
  BattleServantData_o *bsvtData; // x0
  MethodInfo *v16; // x1
  struct BattleData_o *v17; // x8
  UnityEngine_Object_o *shortNameLabel; // x25
  UILabel_o *v19; // x25
  UnityEngine_Object_o *atklabel; // x25
  struct BattleServantData_o *v21; // x8
  UILabel_o *v22; // x25
  Il2CppObject *v23; // x0
  struct BattleServantData_o *v24; // x8
  BattleViewBufflistComponent_o *buffListView; // x25
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  int32_t v33; // w23
  UnityEngine_Object_o *equipObj; // x24
  UnityEngine_GameObject_o *v35; // x24
  float LocalPositionY; // s0
  UnityEngine_Object_o *npRoot; // x24
  bool v38; // w0
  TreasureDvcLvEntity_o *v39; // x24
  UIWidget_o *npdetail; // x25
  UILabel_o *v41; // x25
  System_String_o *DetalShort_43693056; // x0
  UILabel_o *maxNp; // x25
  Il2CppObject *v44; // x0
  struct UILabel_o *v45; // x8
  UILabel_o *nplevel; // x24
  System_String_o *v47; // x1
  UnityEngine_Object_o *v48; // x24
  bool IsNpDetailActive; // w24
  UITexture_o *facetex; // x23
  int32_t v51; // w24
  int32_t v52; // w25
  int32_t CommandDispLimitCount; // w26
  struct UITexture_o *Manager__loadCommandCard; // x0
  char v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  UnityEngine_Object_o *havenotTdLabel; // x22
  UILabel_o *v62; // x22
  System_String_o *NotHaveTreasureDeviceMessage; // x22
  System_String_o **p_equiphp; // x8
  UnityEngine_Object_o *unknownNp; // x25
  UILabel_o *v66; // x25
  UnityEngine_Object_o *commandCard; // x24
  BattleCommandData_o *v68; // x24
  UnityEngine_Object_o *npSpeedChange; // x22
  UnityEngine_Object_o *classIcon; // x21
  ServantClassIconComponent_o *v71; // x21
  int32_t IconSpriteScaledWidth; // w0
  UnityEngine_Object_o *v73; // x21
  int32_t v74; // w20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v76; // x1
  int v77; // [xsp+Ch] [xbp-64h] BYREF
  int32_t atk; // [xsp+18h] [xbp-58h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-54h] BYREF

  battle_info = battleInfoData;
  if ( (byte_4D34150 & 1) == 0 )
  {
    sub_1C93AD4(&BattleCommandData_TypeInfo);
    sub_1C93AD4(&BattleServantConfConponent_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIAnchor___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ServantAssetLoadManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_9419/*"NP_UNKNOWN"*/);
    sub_1C93AD4(&StringLiteral_25376/*"{0:#,0}"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_2784/*"BATTLE_HASNOT_TD"*/);
    sub_1C93AD4(&StringLiteral_9021/*"Max {0}%"*/);
    byte_4D34150 = 1;
  }
  lv = 0;
  this->fields.bsvtData = inbsvtData;
  p_bsvtData = &this->fields.bsvtData;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.bsvtData,
    (int32_t)inbsvtData,
    isShowBuffIcon,
    (int32_t)battleInfoData,
    (System_String_o *)isNpc,
    (int32_t)method,
    v6,
    v7);
  if ( this->fields.bsvtData )
  {
    if ( !battle_info )
    {
      data = (UnityEngine_Object_o *)this->fields.data;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(data, 0, 0);
      battle_info = 0;
      if ( ((unsigned __int8)bsvtData & 1) != 0 )
      {
        v17 = this->fields.data;
        if ( !v17 )
          goto LABEL_149;
        battle_info = v17->fields.battle_info;
      }
    }
    shortNameLabel = (UnityEngine_Object_o *)this->fields.shortNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(shortNameLabel, 0, 0) )
    {
      bsvtData = this->fields.bsvtData;
      if ( !bsvtData )
        goto LABEL_149;
      v19 = this->fields.shortNameLabel;
      bsvtData = (BattleServantData_o *)BattleServantData__getServantShortName(bsvtData, 0);
      if ( !v19 )
        goto LABEL_149;
      UILabel__set_text(v19, (System_String_o *)bsvtData, 0);
      CommonFunction__ScalingLabelWidth(this->fields.shortNameLabel, 270, 0);
    }
    atklabel = (UnityEngine_Object_o *)this->fields.atklabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(atklabel, 0, 0);
    if ( ((unsigned __int8)bsvtData & 1) != 0 )
    {
      v21 = this->fields.bsvtData;
      if ( !v21 )
        goto LABEL_149;
      v22 = this->fields.atklabel;
      atk = v21->fields.atk;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &atk);
      bsvtData = (BattleServantData_o *)System_String__Format((System_String_o *)StringLiteral_25376/*"{0:#,0}"*/, v23, 0);
      if ( !v22 )
        goto LABEL_149;
      UILabel__set_text(v22, (System_String_o *)bsvtData, 0);
    }
    bsvtData = (BattleServantData_o *)this->fields.buffListView;
    if ( bsvtData )
    {
      BattleViewBufflistComponent__setClassIcon((BattleViewBufflistComponent_o *)bsvtData, this->fields.bsvtData, 0);
      v24 = this->fields.bsvtData;
      if ( v24 )
      {
        bsvtData = (BattleServantData_o *)v24->fields.buffData;
        if ( bsvtData )
        {
          buffListView = this->fields.buffListView;
          bsvtData = (BattleServantData_o *)BattleBuffData__getShowServantConf((BattleBuffData_o *)bsvtData, 0);
          if ( buffListView )
          {
            BattleViewBufflistComponent__setBuffList(buffListView, (BattleBuffData_ShowBuffData_array *)bsvtData, 0);
            BattleServantConfConponent__setEquipList(this, v26);
            BattleServantConfConponent__SetClassSkillList(this, battle_info, v27);
            BattleServantConfConponent__SetAppendSkillList(this, battle_info, v28);
            if ( !isNpc )
            {
              BattleServantConfConponent__SetClassBoardSkillList(this, battle_info, v30);
              BattleServantConfConponent__SetGrandClassBoardSkillList(this, battle_info, v31);
            }
            BattleServantConfConponent__SetCommandCard(this, v29);
            BattleServantConfConponent__SetCommandCodeSkillList(this, v32);
            bsvtData = this->fields.bsvtData;
            if ( bsvtData )
            {
              bsvtData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(bsvtData, 1, 0, 0);
              if ( *p_bsvtData )
              {
                v33 = (int)bsvtData;
                lv = (*p_bsvtData)->fields.treasuredvcLevel;
                equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(equipObj, 0, 0) )
                {
                  v35 = this->fields.equipObj;
                  LocalPositionY = GameObjectExtensions__GetLocalPositionY(v35, 0);
                  GameObjectExtensions__SetLocalPositionY(v35, LocalPositionY - (float)this->fields.adjustHeight, 0);
                }
                this->fields.adjustHeight = 0;
                npRoot = (UnityEngine_Object_o *)this->fields.npRoot;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v38 = UnityEngine_Object__op_Inequality(npRoot, 0, 0);
                if ( v33 < 1 )
                {
                  if ( v38 )
                  {
                    bsvtData = (BattleServantData_o *)this->fields.npRoot;
                    if ( !bsvtData )
                      goto LABEL_149;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0);
                    bsvtData = (BattleServantData_o *)this->fields.commandCard;
                    if ( !bsvtData )
                      goto LABEL_149;
                    bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)bsvtData,
                                                        0);
                    if ( !bsvtData )
                      goto LABEL_149;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0);
                  }
                  facetex = this->fields.facetex;
                  bsvtData = this->fields.bsvtData;
                  if ( !bsvtData )
                    goto LABEL_149;
                  bsvtData = (BattleServantData_o *)BattleServantData__GetCommandImageSvtId(bsvtData, 0);
                  if ( !*p_bsvtData )
                    goto LABEL_149;
                  v51 = (int)bsvtData;
                  bsvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(*p_bsvtData, 1, 0);
                  if ( !*p_bsvtData )
                    goto LABEL_149;
                  v52 = (int)bsvtData;
                  CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(*p_bsvtData, 0);
                  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                  Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(
                                               facetex,
                                               v51,
                                               v52,
                                               CommandDispLimitCount,
                                               0);
                  this->fields.facetex = Manager__loadCommandCard;
                  sub_1C93A78(
                    (GrandQuestFolderBoardItem_o *)&this->fields.facetex,
                    (int32_t)Manager__loadCommandCard,
                    v55,
                    v56,
                    v57,
                    v58,
                    v59,
                    v60);
                  havenotTdLabel = (UnityEngine_Object_o *)this->fields.havenotTdLabel;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(havenotTdLabel, 0, 0) )
                  {
                    bsvtData = (BattleServantData_o *)this->fields.havenotTdLabel;
                    if ( !bsvtData )
                      goto LABEL_149;
                    bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)bsvtData,
                                                        0);
                    if ( !bsvtData )
                      goto LABEL_149;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0);
                    v62 = this->fields.havenotTdLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    bsvtData = (BattleServantData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2784/*"BATTLE_HASNOT_TD"*/, 0);
                    if ( !v62 )
                      goto LABEL_149;
                    UILabel__set_text(v62, (System_String_o *)bsvtData, 0);
                    bsvtData = *p_bsvtData;
                    if ( !*p_bsvtData )
                      goto LABEL_149;
                    NotHaveTreasureDeviceMessage = BattleServantData__GetNotHaveTreasureDeviceMessage(bsvtData, 0);
                    if ( !System_String__IsNullOrEmpty(NotHaveTreasureDeviceMessage, 0) )
                    {
                      bsvtData = (BattleServantData_o *)this->fields.havenotTdLabel;
                      if ( !bsvtData )
                        goto LABEL_149;
                      UILabel__set_text((UILabel_o *)bsvtData, NotHaveTreasureDeviceMessage, 0);
                    }
                  }
                  goto LABEL_124;
                }
                if ( !v38 )
                {
LABEL_124:
                  npSpeedChange = (UnityEngine_Object_o *)this->fields.npSpeedChange;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(npSpeedChange, 0, 0) )
                  {
                    bsvtData = (BattleServantData_o *)this->fields.npSpeedChange;
                    if ( !bsvtData )
                      goto LABEL_149;
                    BattleServantNPSpeedChangeComponent__SetData(
                      (BattleServantNPSpeedChangeComponent_o *)bsvtData,
                      *p_bsvtData,
                      0);
                  }
                  classIcon = (UnityEngine_Object_o *)this->fields.classIcon;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(classIcon, 0, 0);
                  if ( ((unsigned __int8)bsvtData & 1) == 0 )
                    goto LABEL_147;
                  if ( inbsvtData )
                  {
                    v71 = this->fields.classIcon;
                    bsvtData = (BattleServantData_o *)BattleServantData__getClassId(inbsvtData, 0, 0);
                    if ( v71 )
                    {
                      ServantClassIconComponent__SetImage(
                        v71,
                        (int32_t)bsvtData,
                        inbsvtData->fields._frameType_k__BackingField,
                        0,
                        0,
                        0,
                        0);
                      bsvtData = (BattleServantData_o *)this->fields.classIcon;
                      if ( bsvtData )
                      {
                        IconSpriteScaledWidth = ServantClassIconComponent__GetIconSpriteScaledWidth(
                                                  (ServantClassIconComponent_o *)bsvtData,
                                                  0);
                        v73 = (UnityEngine_Object_o *)this->fields.shortNameLabel;
                        v74 = IconSpriteScaledWidth;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( UnityEngine_Object__op_Inequality(v73, 0, 0) )
                        {
                          bsvtData = (BattleServantData_o *)this->fields.shortNameLabel;
                          if ( !bsvtData )
                            goto LABEL_149;
                          if ( bsvtData->fields._iconLimitCount_k__BackingField.fields.fakeValue + v74 >= 270 )
                            CommonFunction__ScalingLabelWidth((UILabel_o *)bsvtData, 270 - v74, 0);
                        }
                        bsvtData = (BattleServantData_o *)this->fields.classIcon;
                        if ( bsvtData )
                        {
                          Component_object = UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)bsvtData,
                                               (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIAnchor___);
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(
                                                              (UnityEngine_Object_o *)Component_object,
                                                              0,
                                                              0);
                          if ( ((unsigned __int8)bsvtData & 1) == 0 )
                            goto LABEL_147;
                          if ( Component_object )
                          {
                            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
LABEL_147:
                            BattleServantConfConponent__SetAttribute(this, v16);
                            BattleServantConfConponent__ChangeLayout(this, v76);
                            return;
                          }
                        }
                      }
                    }
                  }
                  goto LABEL_149;
                }
                bsvtData = (BattleServantData_o *)this->fields.npRoot;
                if ( !bsvtData )
                  goto LABEL_149;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0);
                bsvtData = (BattleServantData_o *)this->fields.commandCard;
                if ( !bsvtData )
                  goto LABEL_149;
                bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)bsvtData,
                                                    0);
                if ( !bsvtData )
                  goto LABEL_149;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0);
                bsvtData = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !bsvtData )
                  goto LABEL_149;
                bsvtData = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)bsvtData,
                                                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                if ( !bsvtData )
                  goto LABEL_149;
                bsvtData = (BattleServantData_o *)TreasureDvcLvMaster__GetEntity(
                                                    (TreasureDvcLvMaster_o *)bsvtData,
                                                    v33,
                                                    lv,
                                                    0);
                if ( !this->fields.maxNp )
                  goto LABEL_149;
                v39 = (TreasureDvcLvEntity_o *)bsvtData;
                UILabel__set_text(this->fields.maxNp, (System_String_o *)StringLiteral_1/*""*/, 0);
                if ( v39 )
                {
                  npdetail = (UIWidget_o *)this->fields.npdetail;
                  bsvtData = (BattleServantData_o *)BattleServantConfConponent_TypeInfo;
                  if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
                  if ( !npdetail )
                    goto LABEL_149;
                  UIWidget__set_height(
                    npdetail,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                    0);
                  v41 = this->fields.npdetail;
                  DetalShort_43693056 = TreasureDvcLvEntity__getDetalShort_43693056(v39, lv, 0);
                  WrapControlText__textBBCodeAdjust(
                    v41,
                    DetalShort_43693056,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    0);
                  maxNp = this->fields.maxNp;
                  v77 = 100 * v39->fields.gaugeCount;
                  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77);
                  bsvtData = (BattleServantData_o *)System_String__Format((System_String_o *)StringLiteral_9021/*"Max {0}%"*/, v44, 0);
                  if ( !maxNp )
                    goto LABEL_149;
                  UILabel__set_text(maxNp, (System_String_o *)bsvtData, 0);
                  v45 = this->fields.npdetail;
                  if ( !v45 )
                    goto LABEL_149;
                  if ( BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT < v45->fields.mHeight )
                  {
                    if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
                      v45 = this->fields.npdetail;
                      if ( !v45 )
                        goto LABEL_149;
                    }
                    this->fields.adjustHeight = BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT
                                              - v45->fields.mHeight;
                  }
                }
                nplevel = this->fields.nplevel;
                bsvtData = (BattleServantData_o *)System_Int32__ToString((int32_t)&lv, 0);
                if ( !nplevel )
                  goto LABEL_149;
                if ( bsvtData )
                  v47 = (System_String_o *)bsvtData;
                else
                  v47 = (System_String_o *)StringLiteral_1/*""*/;
                UILabel__set_text(nplevel, v47, 0);
                v48 = (UnityEngine_Object_o *)this->fields.data;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v48, 0, 0) )
                {
                  bsvtData = (BattleServantData_o *)this->fields.data;
                  if ( !bsvtData )
                    goto LABEL_149;
                  IsNpDetailActive = BattleData__IsNpDetailActive((BattleData_o *)bsvtData, *p_bsvtData, 1, 0);
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
                                                      0);
                  if ( bsvtData )
                  {
                    bsvtData = (BattleServantData_o *)UnityEngine_Transform__get_parent(
                                                        (UnityEngine_Transform_o *)bsvtData,
                                                        0);
                    if ( bsvtData )
                    {
                      bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)bsvtData,
                                                          0);
                      if ( bsvtData )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, IsNpDetailActive, 0);
                        bsvtData = (BattleServantData_o *)this->fields.nplevel;
                        if ( bsvtData )
                        {
                          bsvtData = (BattleServantData_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)bsvtData,
                                                              0);
                          if ( bsvtData )
                          {
                            bsvtData = (BattleServantData_o *)UnityEngine_Transform__get_parent(
                                                                (UnityEngine_Transform_o *)bsvtData,
                                                                0);
                            if ( bsvtData )
                            {
                              bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)bsvtData,
                                                                  0);
                              if ( bsvtData )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)bsvtData,
                                  IsNpDetailActive,
                                  0);
                                bsvtData = (BattleServantData_o *)this->fields.npdetail;
                                if ( IsNpDetailActive )
                                {
                                  if ( !bsvtData )
                                    goto LABEL_149;
                                  p_equiphp = (System_String_o **)&bsvtData->fields.equiphp;
                                }
                                else
                                {
                                  if ( !bsvtData )
                                    goto LABEL_149;
                                  p_equiphp = (System_String_o **)&StringLiteral_1/*""*/;
                                }
                                UILabel__set_text((UILabel_o *)bsvtData, *p_equiphp, 0);
                                unknownNp = (UnityEngine_Object_o *)this->fields.unknownNp;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(unknownNp, 0, 0);
                                if ( ((unsigned __int8)bsvtData & 1) != 0 )
                                {
                                  v66 = this->fields.unknownNp;
                                  if ( IsNpDetailActive )
                                  {
                                    v16 = (MethodInfo *)StringLiteral_1/*""*/;
                                  }
                                  else
                                  {
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    bsvtData = (BattleServantData_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_9419/*"NP_UNKNOWN"*/,
                                                                        0);
                                    v16 = (MethodInfo *)bsvtData;
                                  }
                                  if ( !v66 )
                                    goto LABEL_149;
                                  UILabel__set_text(v66, (System_String_o *)v16, 0);
                                }
                                commandCard = (UnityEngine_Object_o *)this->fields.commandCard;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( UnityEngine_Object__op_Inequality(commandCard, 0, 0) )
                                {
                                  v68 = (BattleCommandData_o *)sub_1C93D20(BattleCommandData_TypeInfo);
                                  BattleCommandData___ctor(v68, 0);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_149;
                                  bsvtData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId_47001168(
                                                                      bsvtData,
                                                                      0,
                                                                      0);
                                  if ( !v68 )
                                    goto LABEL_149;
                                  v68->fields._type = (int)bsvtData;
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_149;
                                  v68->fields.svtlimit = BattleServantData__getCommandDispLimitCount(bsvtData, 0);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_149;
                                  v68->fields._loadsvtLimit = BattleServantData__getDispLimitCount(bsvtData, 1, 0);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_149;
                                  v68->fields.uniqueId = bsvtData->fields.uniqueId;
                                  v68->fields.svtId = BattleServantData__getSvtId(bsvtData, 0);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_149;
                                  v68->fields.imageSvtId = BattleServantData__GetCommandImageSvtId(bsvtData, 0);
                                  v68->fields.treasureDvc = v33;
                                  bsvtData = (BattleServantData_o *)this->fields.commandCard;
                                  if ( !bsvtData )
                                    goto LABEL_149;
                                  BattleCommandComponent__setData(
                                    (BattleCommandComponent_o *)bsvtData,
                                    v68,
                                    this->fields.bsvtData,
                                    0,
                                    isShowBuffIcon,
                                    0,
                                    1,
                                    0);
                                  bsvtData = (BattleServantData_o *)this->fields.commandCard;
                                  if ( !bsvtData )
                                    goto LABEL_149;
                                  BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(
                                    (BattleCommandComponent_o *)bsvtData,
                                    0);
                                }
                                bsvtData = (BattleServantData_o *)this->fields.havenotTdLabel;
                                if ( !bsvtData )
                                  goto LABEL_149;
                                bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)bsvtData,
                                                                    0);
                                if ( !bsvtData )
                                  goto LABEL_149;
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0);
                                goto LABEL_124;
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
LABEL_149:
    sub_1C93D2C(bsvtData, v16);
  }
}


void BattleServantConfConponent__setEquipList(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseEquipSkillInfoPrefab; // x20
  UnityEngine_Object_o *equipSkillInfoRoot; // x20
  Il2CppObject *Master_object; // x20
  __int64 BattleSkillIdList; // x0
  __int64 v7; // x1
  struct BattleServantData_o *bsvtData; // x8
  struct BattleUserServantData_array *equipList; // x24
  il2cpp_array_size_t max_length; // x8
  BalanceConfig_c **v11; // x26
  const MethodInfo_34632C0 **v12; // x28
  SkillLvMaster_o *v13; // x21
  unsigned __int64 v14; // x25
  float v15; // s8
  Il2CppClass **v16; // x19
  __int64 *v17; // x19
  __int64 v18; // t1
  __int64 v19; // x22
  __int64 v20; // x23
  int v21; // w29
  unsigned __int64 v22; // x19
  float v23; // s9
  int32_t v24; // w24
  int32_t v25; // w25
  const MethodInfo_34632C0 **v26; // x20
  BalanceConfig_c **v27; // x28
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_List_object__o *equipPossessionSkillInfoComponentList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v36; // x10
  __int64 size; // x11
  EquipPossessionSkillInfoComponent_o *v38; // x26
  Il2CppClass **v39; // x0
  BattleServantConfConponent_o *v40; // x21
  System_String_o *v41; // x27
  float v42; // s0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  System_Collections_Generic_List_object__o *v49; // x8
  struct System_Object_array *v50; // x9
  _QWORD *v51; // x10
  __int64 v52; // x11
  __int64 v53; // x1
  Il2CppClass **v54; // x0
  struct BattleUserServantData_array *v55; // [xsp+8h] [xbp-B8h]
  unsigned __int64 v56; // [xsp+10h] [xbp-B0h]
  Il2CppObject *v57; // [xsp+18h] [xbp-A8h]
  SkillLvMaster_o *v58; // [xsp+20h] [xbp-A0h]
  int v59; // [xsp+2Ch] [xbp-94h]
  __int64 v60; // [xsp+38h] [xbp-88h]
  SkillLvEntity_o *v61; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-78h] BYREF

  if ( (byte_4D34151 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34151 = 1;
  }
  v61 = 0;
  entity = 0;
  if ( this->fields.bsvtData )
  {
    baseEquipSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.baseEquipSkillInfoPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(baseEquipSkillInfoPrefab, 0, 0) )
    {
      equipSkillInfoRoot = (UnityEngine_Object_o *)this->fields.equipSkillInfoRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(equipSkillInfoRoot, 0, 0) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
        BattleSkillIdList = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillLvMaster___);
        bsvtData = this->fields.bsvtData;
        this->fields.isEquip = 0;
        if ( !bsvtData )
          goto LABEL_54;
        equipList = bsvtData->fields.equipList;
        if ( !equipList )
          goto LABEL_54;
        max_length = equipList->max_length;
        if ( (int)max_length >= 1 )
        {
          v59 = 0;
          v11 = &BalanceConfig_TypeInfo;
          v12 = (const MethodInfo_34632C0 **)&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__;
          v13 = (SkillLvMaster_o *)BattleSkillIdList;
          v14 = 0;
          v15 = 0.0;
          v57 = Master_object;
          v58 = (SkillLvMaster_o *)BattleSkillIdList;
          v55 = equipList;
          do
          {
            if ( v14 >= (unsigned int)max_length )
LABEL_55:
              sub_1C93D34(BattleSkillIdList);
            v16 = &equipList->obj.klass + v14;
            v18 = (__int64)v16[4];
            v17 = (__int64 *)(v16 + 4);
            BattleSkillIdList = v18;
            if ( v18 )
            {
              BattleSkillIdList = (__int64)BattleUserServantData__getBattleSkillIdList(
                                             (BattleUserServantData_o *)BattleSkillIdList,
                                             0);
              if ( v14 >= LODWORD(equipList->max_length) )
                goto LABEL_55;
              v19 = BattleSkillIdList;
              BattleSkillIdList = *v17;
              if ( !*v17 )
                goto LABEL_54;
              BattleSkillIdList = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)BattleSkillIdList + 408LL))(
                                    BattleSkillIdList,
                                    *(_QWORD *)(*(_QWORD *)BattleSkillIdList + 416LL));
              if ( !v19 )
                goto LABEL_54;
              v56 = v14;
              if ( *(int *)(v19 + 24) < 1 )
              {
                v21 = 0;
                v23 = 0.0;
              }
              else
              {
                v20 = BattleSkillIdList;
                v21 = 0;
                v22 = 0;
                v23 = 0.0;
                v60 = BattleSkillIdList + 32;
                do
                {
                  BattleSkillIdList = (__int64)*v11;
                  if ( !(*v11)->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleSkillIdList);
                    BattleSkillIdList = (__int64)*v11;
                  }
                  if ( *(_DWORD *)(*(_QWORD *)(BattleSkillIdList + 184) + 56LL) <= v21 )
                    break;
                  if ( v22 >= *(unsigned int *)(v19 + 24) )
                    goto LABEL_55;
                  if ( !v20 )
                    goto LABEL_54;
                  if ( v22 >= *(unsigned int *)(v20 + 24) )
                    goto LABEL_55;
                  if ( !Master_object )
                    goto LABEL_54;
                  v24 = *(_DWORD *)(v19 + 32 + 4 * v22);
                  v25 = *(_DWORD *)(v60 + 4 * v22);
                  BattleSkillIdList = DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        v24,
                                        *v12);
                  if ( (BattleSkillIdList & 1) != 0 )
                  {
                    if ( !v13 )
                      goto LABEL_54;
                    BattleSkillIdList = SkillLvMaster__TryGetEntity(v13, &v61, v24, v25, 0);
                    if ( (BattleSkillIdList & 1) != 0 )
                    {
                      v26 = v12;
                      v27 = v11;
                      BattleSkillIdList = (__int64)EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
                                                     this->fields.baseEquipSkillInfoPrefab,
                                                     this->fields.equipSkillInfoRoot,
                                                     v21 + v59,
                                                     v15 + v23,
                                                     0);
                      equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.equipPossessionSkillInfoComponentList;
                      if ( !equipPossessionSkillInfoComponentList )
                        goto LABEL_54;
                      items = equipPossessionSkillInfoComponentList->fields._items;
                      v36 = Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__;
                      ++equipPossessionSkillInfoComponentList->fields._version;
                      if ( !items )
                        goto LABEL_54;
                      size = equipPossessionSkillInfoComponentList->fields._size;
                      v38 = (EquipPossessionSkillInfoComponent_o *)BattleSkillIdList;
                      if ( (unsigned int)size >= LODWORD(items->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          equipPossessionSkillInfoComponentList,
                          (Il2CppObject *)BattleSkillIdList,
                          *(const MethodInfo_387999C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v39 = &items->obj.klass + size;
                        equipPossessionSkillInfoComponentList->fields._size = size + 1;
                        v39[4] = (Il2CppClass *)v38;
                        sub_1C93A78(
                          (GrandQuestFolderBoardItem_o *)(v39 + 4),
                          (int32_t)v38,
                          v28,
                          v29,
                          v30,
                          v31,
                          v32,
                          v33);
                      }
                      BattleSkillIdList = (__int64)entity;
                      if ( !entity )
                        goto LABEL_54;
                      v40 = this;
                      BattleSkillIdList = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0);
                      if ( !v61 )
                        goto LABEL_54;
                      v41 = (System_String_o *)BattleSkillIdList;
                      BattleSkillIdList = (__int64)SkillLvEntity__getDetail_43584536(v61, v25, 0, 0);
                      if ( !v38 )
                        goto LABEL_54;
                      v42 = EquipPossessionSkillInfoComponent__SetSkill(
                              v38,
                              v24,
                              v41,
                              (System_String_o *)BattleSkillIdList,
                              0);
                      this = v40;
                      v40->fields.isEquip = 1;
                      v11 = v27;
                      v12 = v26;
                      Master_object = v57;
                      v13 = v58;
                      v23 = v23 + v42;
                      ++v21;
                    }
                  }
                  ++v22;
                }
                while ( (__int64)v22 < *(int *)(v19 + 24) );
              }
              equipList = v55;
              v14 = v56;
              v15 = v15 + v23;
              v59 += v21;
            }
            LODWORD(max_length) = equipList->max_length;
            ++v14;
          }
          while ( (__int64)v14 < (int)max_length );
        }
        if ( !this->fields.isEquip )
        {
          BattleSkillIdList = (__int64)EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
                                         this->fields.baseEquipSkillInfoPrefab,
                                         this->fields.equipSkillInfoRoot,
                                         0,
                                         0.0,
                                         0);
          v49 = (System_Collections_Generic_List_object__o *)this->fields.equipPossessionSkillInfoComponentList;
          if ( v49 )
          {
            v50 = v49->fields._items;
            v51 = Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__;
            ++v49->fields._version;
            if ( v50 )
            {
              v52 = v49->fields._size;
              v53 = BattleSkillIdList;
              if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v49,
                  (Il2CppObject *)BattleSkillIdList,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
              }
              else
              {
                v54 = &v50->obj.klass + v52;
                v49->fields._size = v52 + 1;
                v54[4] = (Il2CppClass *)v53;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v54 + 4), v53, v43, v44, v45, v46, v47, v48);
              }
              return;
            }
          }
LABEL_54:
          sub_1C93D2C(BattleSkillIdList, v7);
        }
      }
    }
  }
}


void BattleServantConfConponent_CloseButtonCallBack___ctor(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1ACCA3C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ACC9FC;
}


System_IAsyncResult_o *BattleServantConfConponent_CloseButtonCallBack__BeginInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return sub_1C93A88(this, &v5, callback, object);
}


void BattleServantConfConponent_CloseButtonCallBack__EndInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void BattleServantConfConponent_CloseButtonCallBack__Invoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void BattleServantConfConponent__StartOpenTab_d__92___ctor(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleServantConfConponent__StartOpenTab_d__92__MoveNext(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent__StartOpenTab_d__92_o *v2; // x19
  int32_t _1__state; // w8
  struct BattleServantConfConponent_o *_4__this; // x20
  UnityEngine_Object_o *BattleServantAbilityObj; // x21
  bool v6; // w21
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x1

  v2 = this;
  if ( (byte_4D3416E & 1) == 0 )
  {
    this = (BattleServantConfConponent__StartOpenTab_d__92_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3416E = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
LABEL_17:
      sub_1C93D2C(this, method);
    if ( BattleServantConfConponent__IsLastOpenServantAbility((BattleServantConfConponent_o *)this, method) )
      BattleServantConfConponent__OnClickServantAbility(_4__this, v14);
    else
      BattleServantConfConponent__OnClickServantState(_4__this, v14);
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
  if ( UnityEngine_Object__op_Equality(BattleServantAbilityObj, 0, 0) )
    return 0;
  this = (BattleServantConfConponent__StartOpenTab_d__92_o *)_4__this->fields.BattleServantAbilityObj;
  v6 = 1;
  _4__this->fields.isOpenAfter = 1;
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v2->fields.__2__current = 0;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C93A78(p__2__current, 0, v8, v9, v10, v11, v12, v13);
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
  return v6;
}


Il2CppObject *BattleServantConfConponent__StartOpenTab_d__92__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleServantConfConponent__StartOpenTab_d__92__System_Collections_IEnumerator_Reset(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BattleServantConfConponent__StartOpenTab_d__92_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *BattleServantConfConponent__StartOpenTab_d__92__System_Collections_IEnumerator_get_Current(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleServantConfConponent__StartOpenTab_d__92__System_IDisposable_Dispose(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleServantConfConponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3416C & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantConfConponent___c_TypeInfo);
    byte_4D3416C = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(BattleServantConfConponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleServantConfConponent___c_TypeInfo->static_fields->__9 = (struct BattleServantConfConponent___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)BattleServantConfConponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleServantConfConponent___c___ctor(BattleServantConfConponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleServantConfConponent___c___ChangeLayout_b__79_0(
        BattleServantConfConponent___c_o *this,
        int32_t codeId,
        const MethodInfo *method)
{
  return codeId > 0;
}


int32_t BattleServantConfConponent___c___GetSpecialPassiveSkillStartIndex_b__81_0(
        BattleServantConfConponent___c_o *this,
        ServantPassiveSkillEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.skillId;
}


bool BattleServantConfConponent___c___SetCommandCodeSkillList_b__85_0(
        BattleServantConfConponent___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id > 0;
}


void BattleServantConfConponent___c__DisplayClass81_0___ctor(
        BattleServantConfConponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool BattleServantConfConponent___c__DisplayClass81_0___GetSpecialPassiveSkillStartIndex_b__1(
        BattleServantConfConponent___c__DisplayClass81_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *passiveIdHashSet; // x0

  if ( (byte_4D3416D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4D3416D = 1;
  }
  passiveIdHashSet = this->fields.passiveIdHashSet;
  if ( !passiveIdHashSet )
    sub_1C93D2C(0, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           passiveIdHashSet,
           x,
           (const MethodInfo_3725A9C *)Method_System_Collections_Generic_HashSet_int__Contains__);
}