void BattleServantConfConponent___cctor(const MethodInfo *method)
{
  if ( (byte_59741BE & 1) == 0 )
  {
    sub_2213A60(&BattleServantConfConponent_TypeInfo);
    byte_59741BE = 1;
  }
  *BattleServantConfConponent_TypeInfo->static_fields = (struct BattleServantConfConponent_StaticFields)xmmword_E9DB10;
}


void BattleServantConfConponent___ctor(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59741BD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo);
    byte_59741BD = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__);
  this->fields.equipPossessionSkillInfoComponentList = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipPossessionSkillInfoComponentList,
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
  UnityEngine_Object_o *equipObj; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x20
  float LocalPositionY; // s0
  System_Collections_Generic_List_object__o *equipPossessionSkillInfoComponentList; // x0
  float v8; // s8
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x20
  __int64 v12; // x1
  int32_t EquipSkillConfLabelHeight; // w21
  BattleServantConfConponent_c *v14; // x0
  int32_t EQIUP_SKILL_LABEL_DEFAULT_HEIGHT; // w26
  int v16; // w8
  BattleServantConfConponent_c *v17; // x0
  float NotEquipObjHeightPos; // s8
  UnityEngine_Object_o *CardAndCommandObj; // x20
  __int64 v20; // x1
  System_Int32_array *CommandCodeIds; // x0
  __int64 v22; // x1
  System_Int32_array *v23; // x20
  BattleServantConfConponent___c_c *v24; // x0
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x8
  System_Predicate_int__o *_9__81_0; // x21
  Il2CppObject *v27; // x22
  struct BattleServantConfConponent___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 max_length; // x8
  int32_t *m_Items; // x9
  int v37; // t1
  UnityEngine_Object_o *npSpeedChange; // x20
  struct BattleServantNPSpeedChangeComponent_o *v39; // x8
  UnityEngine_Object_o *ClassSkillObj; // x20
  __int64 v41; // x1
  UnityEngine_Object_o *AppendSkillObj; // x20
  __int64 v43; // x1
  UnityEngine_Object_o *classBoardSkillObj; // x20
  struct BattleServantClassBoardSkillEffectListComponent_o *v45; // x8
  UnityEngine_Object_o *grandClassBoardSkillObj; // x20
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_59741A4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_FindIndex_int___);
    sub_2213A60(&BattleServantConfConponent_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_int__TypeInfo);
    sub_2213A60(&Method_BattleServantConfConponent___c__ChangeLayout_b__81_0__);
    sub_2213A60(&BattleServantConfConponent___c_TypeInfo);
    byte_59741A4 = 1;
  }
  equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
  memset(&v48, 0, sizeof(v48));
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(equipObj, 0, 0) )
  {
    v5 = this->fields.equipObj;
    LocalPositionY = GameObjectExtensions__GetLocalPositionY(v5, 0);
    GameObjectExtensions__SetLocalPositionY(v5, LocalPositionY + (float)this->fields.adjustHeight, 0);
  }
  if ( this->fields.isEquip )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.equipPossessionSkillInfoComponentList;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_76;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v47,
      equipPossessionSkillInfoComponentList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    v8 = 0.0;
    v48 = v47;
    v47.fields._list = 0;
    *(_QWORD *)&v47.fields._index = &v48;
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v48,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
      if ( !v9 )
        break;
      current = v48.fields._current;
      if ( !v48.fields._current )
        sub_2213CDC(v9, v10);
      EquipSkillConfLabelHeight = EquipPossessionSkillInfoComponent__get_EquipSkillConfLabelHeight(
                                    (EquipPossessionSkillInfoComponent_o *)v48.fields._current,
                                    0);
      v14 = BattleServantConfConponent_TypeInfo;
      if ( !*(&BattleServantConfConponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo, v12);
        v14 = BattleServantConfConponent_TypeInfo;
      }
      EQIUP_SKILL_LABEL_DEFAULT_HEIGHT = v14->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT;
      if ( EquipSkillConfLabelHeight > EQIUP_SKILL_LABEL_DEFAULT_HEIGHT )
      {
        if ( !*(&v14->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v14, v12);
          EQIUP_SKILL_LABEL_DEFAULT_HEIGHT = BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT;
        }
        v16 = EQIUP_SKILL_LABEL_DEFAULT_HEIGHT
            - EquipPossessionSkillInfoComponent__get_EquipSkillConfLabelHeight(
                (EquipPossessionSkillInfoComponent_o *)current,
                0);
        v14 = BattleServantConfConponent_TypeInfo;
        v8 = v8 + (float)v16;
      }
      if ( !*(&v14->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v14, v12);
        v14 = BattleServantConfConponent_TypeInfo;
      }
      v8 = v8 - (float)v14->static_fields->EQIUP_SKILL_OBJ_HEIGHT;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      *(System_Collections_Generic_List_Enumerator_object__o **)&v47.fields._index,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    v17 = BattleServantConfConponent_TypeInfo;
    if ( !*(&BattleServantConfConponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo, v4);
      v17 = BattleServantConfConponent_TypeInfo;
    }
    NotEquipObjHeightPos = v8 + (float)v17->static_fields->EQIUP_SKILL_OBJ_HEIGHT;
  }
  else
  {
    NotEquipObjHeightPos = this->fields.NotEquipObjHeightPos;
  }
  CardAndCommandObj = (UnityEngine_Object_o *)this->fields.CardAndCommandObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(CardAndCommandObj, 0, 0) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.CardAndCommandObj,
      NotEquipObjHeightPos + (float)this->fields.adjustHeight,
      0);
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.bsvtData;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_76;
    CommandCodeIds = BattleServantData__GetCommandCodeIds(
                       (BattleServantData_o *)equipPossessionSkillInfoComponentList,
                       0);
    if ( CommandCodeIds )
    {
      v23 = CommandCodeIds;
      v24 = BattleServantConfConponent___c_TypeInfo;
      if ( !*(&BattleServantConfConponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo, v22);
        v24 = BattleServantConfConponent___c_TypeInfo;
      }
      static_fields = v24->static_fields;
      _9__81_0 = static_fields->__9__81_0;
      if ( !_9__81_0 )
      {
        if ( !*(&v24->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v24, v22);
          static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
        }
        v27 = (Il2CppObject *)static_fields->__9;
        _9__81_0 = (System_Predicate_int__o *)sub_2213CCC(System_Predicate_int__TypeInfo);
        System_Predicate_int____ctor(_9__81_0, v27, Method_BattleServantConfConponent___c__ChangeLayout_b__81_0__, 0);
        v28 = BattleServantConfConponent___c_TypeInfo->static_fields;
        v28->__9__81_0 = _9__81_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v28->__9__81_0,
          (int32_t)_9__81_0,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
      }
      if ( System_Array__FindIndex_int_(
             v23,
             (System_Predicate_T__o *)_9__81_0,
             (const MethodInfo_39A9D14 *)Method_System_Array_FindIndex_int___) == -1
        || (int)v23->max_length < 1 )
      {
        LODWORD(CommandCodeIds) = 0;
      }
      else
      {
        LODWORD(CommandCodeIds) = 0;
        max_length = (unsigned int)v23->max_length;
        m_Items = v23->m_Items;
        do
        {
          v37 = *m_Items++;
          if ( v37 > 0 )
            LODWORD(CommandCodeIds) = (_DWORD)CommandCodeIds + 1;
          --max_length;
        }
        while ( max_length );
      }
    }
    NotEquipObjHeightPos = NotEquipObjHeightPos
                         - BattleServantNPSpeedChangeComponent__CalcCommandCodeOffset((int32_t)CommandCodeIds, 0);
  }
  npSpeedChange = (UnityEngine_Object_o *)this->fields.npSpeedChange;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Inequality(npSpeedChange, 0, 0) )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.npSpeedChange;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_76;
    *(float *)&equipPossessionSkillInfoComponentList[3].klass = NotEquipObjHeightPos + (float)this->fields.adjustHeight;
    BattleServantNPSpeedChangeComponent__SetButtonPosition(
      (BattleServantNPSpeedChangeComponent_o *)equipPossessionSkillInfoComponentList,
      0);
    v39 = this->fields.npSpeedChange;
    if ( !v39 )
      goto LABEL_76;
    NotEquipObjHeightPos = NotEquipObjHeightPos - (float)v39->fields.contentsHeight;
  }
  ClassSkillObj = (UnityEngine_Object_o *)this->fields.ClassSkillObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(ClassSkillObj, 0, 0) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.ClassSkillObj,
      (float)(NotEquipObjHeightPos + this->fields.ClassSkillInitPosY) + (float)this->fields.adjustHeight,
      0);
    NotEquipObjHeightPos = NotEquipObjHeightPos + this->fields.ClassSkillOffset;
  }
  AppendSkillObj = (UnityEngine_Object_o *)this->fields.AppendSkillObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  if ( UnityEngine_Object__op_Inequality(AppendSkillObj, 0, 0) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.AppendSkillObj,
      (float)(NotEquipObjHeightPos + this->fields.AppendSkillInitPosY) + (float)this->fields.adjustHeight,
      0);
    NotEquipObjHeightPos = NotEquipObjHeightPos + this->fields.AppendSkillOffset;
  }
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0, 0) )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.classBoardSkillObj;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_76;
    if ( BattleServantConfWindowPassiveSkillListComponent__IsActive(
           (BattleServantConfWindowPassiveSkillListComponent_o *)equipPossessionSkillInfoComponentList,
           0) )
    {
      equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.classBoardSkillObj;
      if ( !equipPossessionSkillInfoComponentList )
        goto LABEL_76;
      equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, float, float))equipPossessionSkillInfoComponentList->klass->vtable._4_unknown.methodPtr)(
                                                                                             equipPossessionSkillInfoComponentList,
                                                                                             equipPossessionSkillInfoComponentList->klass->vtable._4_unknown.method,
                                                                                             NotEquipObjHeightPos,
                                                                                             (float)this->fields.adjustHeight);
      v45 = this->fields.classBoardSkillObj;
      if ( !v45 )
        goto LABEL_76;
      NotEquipObjHeightPos = NotEquipObjHeightPos + v45->fields.skillOffset;
    }
  }
  grandClassBoardSkillObj = (UnityEngine_Object_o *)this->fields.grandClassBoardSkillObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(grandClassBoardSkillObj, 0, 0) )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.grandClassBoardSkillObj;
    if ( !equipPossessionSkillInfoComponentList
      || BattleServantConfWindowPassiveSkillListComponent__IsActive(
           (BattleServantConfWindowPassiveSkillListComponent_o *)equipPossessionSkillInfoComponentList,
           0)
      && ((equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.grandClassBoardSkillObj) == 0
       || (equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, float, float))equipPossessionSkillInfoComponentList->klass->vtable._4_unknown.methodPtr)(
                                                                                                  equipPossessionSkillInfoComponentList,
                                                                                                  equipPossessionSkillInfoComponentList->klass->vtable._4_unknown.method,
                                                                                                  NotEquipObjHeightPos,
                                                                                                  (float)this->fields.adjustHeight),
           !this->fields.grandClassBoardSkillObj)) )
    {
LABEL_76:
      sub_2213CDC(equipPossessionSkillInfoComponentList, v4);
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
    sub_2213CDC(0, call);
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
    sub_2213CDC(0, method);
  BattleViewBufflistComponent__setShow(buffListView, 0);
  started = BattleServantConfConponent__StartOpenTab(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, started, 0);
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
  __int64 v13; // x1
  System_Int32_array *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_array *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_array *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Boolean_array *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_Int32_array *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v51; // x1
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v53; // x26
  unsigned __int64 v54; // x29
  int32_t *m_Items; // x27
  int32_t *v56; // x19
  __int64 v57; // x22
  System_Int32_array *v58; // x8
  unsigned __int64 max_length_low; // x9
  System_Boolean_array *v60; // x9
  int32_t v61; // w8
  System_Int32_array *v62; // x10
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  System_Boolean_array *v69; // x8
  SkillEntity_o *v70; // x28
  System_String_array *v71; // x23
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  System_String_array *v78; // x23
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  System_String_array *v85; // x23
  Il2CppClass *v86; // x1
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  System_String_array *v93; // x8
  System_Int32_array *v94; // x23
  int32_t v95; // w1
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  __int64 v102; // x1
  System_String_array *v103; // x23
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  System_String_array *v110; // x8
  System_String_array *v111; // x23
  System_String_o *v112; // x0
  System_String_o *v113; // x2
  System_String_o *v114; // x3
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7
  System_String_o *v119; // x28
  System_String_o *v120; // x0
  System_Int32_array *v121; // x0
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  System_String_array *v128; // x0
  System_String_o *v129; // x2
  System_String_o *v130; // x3
  int32_t v131; // w4
  int32_t v132; // w5
  bool v133; // w6
  bool v134; // w7
  System_String_array *v135; // x0
  System_String_o *v136; // x2
  System_String_o *v137; // x3
  int32_t v138; // w4
  int32_t v139; // w5
  bool v140; // w6
  bool v141; // w7
  System_Boolean_array *v142; // x0
  System_String_o *v143; // x2
  System_String_o *v144; // x3
  int32_t v145; // w4
  int32_t v146; // w5
  bool v147; // w6
  bool v148; // w7
  System_Int32_array *v149; // x0
  System_String_o *v150; // x2
  System_String_o *v151; // x3
  int32_t v152; // w4
  int32_t v153; // w5
  bool v154; // w6
  bool v155; // w7
  System_Int32_array *v156; // [xsp+0h] [xbp-80h]

  if ( (byte_59741A9 & 1) == 0 )
  {
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_3878/*"COND_TYPE_TITLE"*/);
    sub_2213A60(&StringLiteral_3866/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59741A9 = 1;
  }
  if ( releaseSkillIds
    && releaseSkillLvs
    && (v13 = LODWORD(releaseSkillIds->max_length), (_DWORD)v13 == LODWORD(releaseSkillLvs->max_length)) )
  {
    v14 = (System_Int32_array *)sub_2213B20(int___TypeInfo, v13);
    *idList = v14;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)idList, (int32_t)v14, v15, v16, v17, v18, v19, v20);
    v21 = (System_String_array *)sub_2213B20(string___TypeInfo, LODWORD(releaseSkillIds->max_length));
    *titleList = v21;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)titleList, (int32_t)v21, v22, v23, v24, v25, v26, v27);
    v28 = (System_String_array *)sub_2213B20(string___TypeInfo, LODWORD(releaseSkillIds->max_length));
    *explanationList = v28;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)explanationList, (int32_t)v28, v29, v30, v31, v32, v33, v34);
    v35 = (System_Boolean_array *)sub_2213B20(bool___TypeInfo, LODWORD(releaseSkillIds->max_length));
    *releaseStateList = v35;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)releaseStateList, (int32_t)v35, v36, v37, v38, v39, v40, v41);
    v42 = (System_Int32_array *)sub_2213B20(int___TypeInfo, LODWORD(releaseSkillIds->max_length));
    *lvList = v42;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lvList, (int32_t)v42, v43, v44, v45, v46, v47, v48);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v49);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
    max_length = releaseSkillIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v53 = Master_object;
      v54 = 0;
      m_Items = releaseSkillIds->m_Items;
      v56 = releaseSkillLvs->m_Items;
      v57 = 32;
      v156 = releaseSkillIds;
      while ( v54 < (unsigned int)max_length )
      {
        v58 = *idList;
        if ( !*idList )
          goto LABEL_63;
        if ( v54 >= LODWORD(v58->max_length) )
          break;
        max_length_low = LODWORD(releaseSkillLvs->max_length);
        v58->m_Items[v54] = m_Items[v54];
        if ( v54 >= max_length_low )
          break;
        v60 = *releaseStateList;
        if ( !*releaseStateList )
          goto LABEL_63;
        if ( v54 >= LODWORD(v60->max_length) )
          break;
        v61 = v56[v54];
        v62 = *lvList;
        v60->m_Items[v54] = v61 > 0;
        if ( !v62 )
          goto LABEL_63;
        if ( v54 >= LODWORD(v62->max_length) )
          break;
        v62->m_Items[v54] = v61;
        if ( !v53 )
          goto LABEL_63;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        v53,
                                                                        m_Items[v54],
                                                                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Master_object )
        {
          v69 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_63;
          if ( v54 >= LODWORD(v69->max_length) )
            break;
          v70 = (SkillEntity_o *)Master_object;
          v71 = *titleList;
          if ( v69->m_Items[v54] )
          {
            if ( v54 >= LODWORD(releaseSkillLvs->max_length) )
              break;
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                            (SkillEntity_o *)Master_object,
                                                                            v56[v54],
                                                                            0);
            if ( !v71 )
              goto LABEL_63;
            if ( v54 >= LODWORD(v71->max_length) )
              break;
            *(Il2CppClass **)((char *)&v71->obj.klass + v57) = (Il2CppClass *)Master_object;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)((char *)v71 + v57),
              (int32_t)Master_object,
              v72,
              v73,
              v74,
              v75,
              v76,
              v77);
            if ( v54 >= LODWORD(releaseSkillLvs->max_length) )
              break;
            v78 = *explanationList;
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectExplanation(
                                                                            v70,
                                                                            v56[v54],
                                                                            0);
            if ( !v78 )
              goto LABEL_63;
            if ( v54 >= LODWORD(v78->max_length) )
              break;
          }
          else
          {
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                            (SkillEntity_o *)Master_object,
                                                                            1,
                                                                            0);
            if ( !v71 )
              goto LABEL_63;
            if ( v54 >= LODWORD(v71->max_length) )
              break;
            *(Il2CppClass **)((char *)&v71->obj.klass + v57) = (Il2CppClass *)Master_object;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)((char *)v71 + v57),
              (int32_t)Master_object,
              v96,
              v97,
              v98,
              v99,
              v100,
              v101);
            v103 = *explanationList;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v102);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_3878/*"COND_TYPE_TITLE"*/,
                                                                            0);
            if ( !v103 )
              goto LABEL_63;
            if ( v54 >= LODWORD(v103->max_length) )
              break;
            *(Il2CppClass **)((char *)&v103->obj.klass + v57) = (Il2CppClass *)Master_object;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)((char *)v103 + v57),
              (int32_t)Master_object,
              v104,
              v105,
              v106,
              v107,
              v108,
              v109);
            v110 = *explanationList;
            if ( !*explanationList )
LABEL_63:
              sub_2213CDC(Master_object, v51);
            if ( v54 >= LODWORD(v110->max_length) )
              break;
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__op_Inequality(
                                                                            *(System_String_o **)((char *)&v110->obj.klass
                                                                                                + v57),
                                                                            (System_String_o *)StringLiteral_1/*""*/,
                                                                            0);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
            {
              v111 = *explanationList;
              if ( !*explanationList )
                goto LABEL_63;
              if ( v54 >= LODWORD(v111->max_length) )
                break;
              v112 = System_String__Concat_75651716(
                       *(System_String_o **)((char *)&v111->obj.klass + v57),
                       (System_String_o *)StringLiteral_43/*"\n"*/,
                       0);
              *(Il2CppClass **)((char *)&v111->obj.klass + v57) = (Il2CppClass *)v112;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)((char *)v111 + v57),
                (int32_t)v112,
                v113,
                v114,
                v115,
                v116,
                v117,
                v118);
            }
            v78 = *explanationList;
            if ( !*explanationList )
              goto LABEL_63;
            if ( v54 >= LODWORD(v78->max_length) )
              break;
            v119 = *(System_String_o **)((char *)&v78->obj.klass + v57);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
            v120 = LocalizationManager__Get((System_String_o *)StringLiteral_3866/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat_75651716(v119, v120, 0);
          }
          *(Il2CppClass **)((char *)&v78->obj.klass + v57) = (Il2CppClass *)Master_object;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)((char *)v78 + v57),
            (int32_t)Master_object,
            v79,
            v80,
            v81,
            v82,
            v83,
            v84);
          v94 = v156;
        }
        else
        {
          v85 = *titleList;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
          if ( !byte_596B976 )
          {
            sub_2213A60(&LocalizationManager_TypeInfo);
            byte_596B976 = 1;
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager_TypeInfo;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager_TypeInfo;
          }
          if ( !v85 )
            goto LABEL_63;
          if ( v54 >= LODWORD(v85->max_length) )
            break;
          v86 = *(Il2CppClass **)&Master_object[2].fields.list->fields._blockReentrancyCount;
          *(Il2CppClass **)((char *)&v85->obj.klass + v57) = v86;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)((char *)v85 + v57),
            (int32_t)v86,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68);
          v93 = *explanationList;
          if ( !*explanationList )
            goto LABEL_63;
          v94 = v156;
          if ( v54 >= LODWORD(v93->max_length) )
            break;
          v95 = (int)StringLiteral_1/*""*/;
          *(Il2CppClass **)((char *)&v93->obj.klass + v57) = (Il2CppClass *)StringLiteral_1/*""*/;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v93 + v57), v95, v87, v88, v89, v90, v91, v92);
        }
        LODWORD(max_length) = v94->max_length;
        ++v54;
        v57 += 8;
        if ( (__int64)v54 >= (int)max_length )
          return;
      }
      sub_2213CE4(Master_object);
    }
  }
  else
  {
    v121 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
    *idList = v121;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)idList, (int32_t)v121, v122, v123, v124, v125, v126, v127);
    v128 = (System_String_array *)sub_2213B20(string___TypeInfo, 0);
    *titleList = v128;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)titleList, (int32_t)v128, v129, v130, v131, v132, v133, v134);
    v135 = (System_String_array *)sub_2213B20(string___TypeInfo, 0);
    *explanationList = v135;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)explanationList, (int32_t)v135, v136, v137, v138, v139, v140, v141);
    v142 = (System_Boolean_array *)sub_2213B20(bool___TypeInfo, 0);
    *releaseStateList = v142;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)releaseStateList, (int32_t)v142, v143, v144, v145, v146, v147, v148);
    v149 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
    *lvList = v149;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lvList, (int32_t)v149, v150, v151, v152, v153, v154, v155);
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
  int32_t v32; // w8
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_59741BA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59741BA = 1;
  }
  bsvtData = this->fields.bsvtData;
  entity = 0;
  if ( !bsvtData )
    goto LABEL_55;
  v8 = BattleServantData__GetChangePolicy(bsvtData, 0);
  *policy = v8;
  if ( (v8 & 0x80000000) == 0 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, policy);
    bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    if ( !bsvtData )
      goto LABEL_55;
    bsvtData = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)bsvtData,
                                        *policy,
                                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int__GetEntity__);
    if ( !bsvtData )
      goto LABEL_55;
    *policy = bsvtData->fields.deckIndex;
  }
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_55;
  deckIndex = BattleServantData__GetChangePersonality(bsvtData, 0);
  *personality = deckIndex;
  if ( (deckIndex & 0x80000000) == 0 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, policy);
    bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    if ( !bsvtData )
      goto LABEL_55;
    bsvtData = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)bsvtData,
                                        *personality,
                                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int__GetEntity__);
    if ( !bsvtData )
      goto LABEL_55;
    deckIndex = bsvtData->fields.deckIndex;
    *personality = deckIndex;
  }
  if ( (*policy & 0x80000000) == 0 && (deckIndex & 0x80000000) == 0 )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, policy);
  bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v10 = this->fields.bsvtData;
  if ( !v10 )
    goto LABEL_55;
  v11 = (ServantLimitMaster_o *)bsvtData;
  v12 = *(_QWORD *)&v10->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v10->fields._dispLimitCount_k__BackingField.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, policy);
  *(_QWORD *)&v34.fields.currentCryptoKey = v12;
  *(_QWORD *)&v34.fields.fakeValue = v13;
  bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v34, 0);
  if ( (int)bsvtData < 11 )
  {
    v15 = this->fields.bsvtData;
    if ( v15 )
    {
      v16 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, policy);
      *(_QWORD *)&v35.fields.currentCryptoKey = v16;
      *(_QWORD *)&v35.fields.fakeValue = v17;
      bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v35, 0);
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
    goto LABEL_55;
  }
  if ( *policy < 0 )
  {
    v23 = this->fields.bsvtData;
    if ( !v23 )
      goto LABEL_55;
    svtlimitaddent = v23->fields.svtlimitaddent;
    if ( !svtlimitaddent )
      goto LABEL_55;
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
      goto LABEL_55;
    v26 = v25->fields.svtlimitaddent;
    if ( !v26 )
      goto LABEL_55;
    bsvtData = (BattleServantData_o *)BattleServantConfConponent__GetPersonality(
                                        (BattleServantConfConponent_o *)bsvtData,
                                        (System_Collections_Generic_IEnumerable_int__o *)v26->fields.individuality,
                                        v14);
    *personality = (int)bsvtData;
  }
  v27 = this->fields.bsvtData;
  if ( !v27 )
    goto LABEL_55;
  v28 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, policy);
  *(_QWORD *)&v36.fields.currentCryptoKey = v28;
  *(_QWORD *)&v36.fields.fakeValue = v29;
  bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v36, 0);
  if ( !v11 )
LABEL_55:
    sub_2213CDC(bsvtData, policy);
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
    {
      v32 = v30->fields.personality;
LABEL_53:
      *personality = v32;
    }
  }
  else
  {
    if ( v31 < 0 )
      *policy = 0;
    if ( *personality < 0 )
    {
      v32 = 0;
      goto LABEL_53;
    }
  }
}


System_Int32_array *BattleServantConfConponent__GetClassPassiveSkillIdsForDisplay(
        BattleServantConfConponent_o *this,
        BattleUserServantData_o *userSvtData,
        const MethodInfo *method)
{
  BattleServantConfConponent___c__DisplayClass83_0_o *v5; // x21
  BattleBuffData_o *buffData; // x0
  __int64 v7; // x1
  struct BattleServantData_o *bsvtData; // x8
  System_Collections_Generic_IEnumerable_TSource__o *PassiveList; // x20
  System_Func_object__bool__o *v10; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  __int64 v12; // x1
  BattleServantConfConponent___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__83_1; // x21
  Il2CppObject *v17; // x22
  struct BattleServantConfConponent___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_ICollection_o *v27; // x20

  if ( (byte_59741A6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_2213A60(&Method_BattleServantConfConponent___c__GetClassPassiveSkillIdsForDisplay_b__83_1__);
    sub_2213A60(&Method_BattleServantConfConponent___c__DisplayClass83_0__GetClassPassiveSkillIdsForDisplay_b__0__);
    sub_2213A60(&BattleServantConfConponent___c__DisplayClass83_0_TypeInfo);
    sub_2213A60(&BattleServantConfConponent___c_TypeInfo);
    byte_59741A6 = 1;
  }
  v5 = (BattleServantConfConponent___c__DisplayClass83_0_o *)sub_2213CCC(BattleServantConfConponent___c__DisplayClass83_0_TypeInfo);
  BattleServantConfConponent___c__DisplayClass83_0___ctor(v5, 0);
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_16;
  if ( !v5 )
    goto LABEL_16;
  buffData = bsvtData->fields.buffData;
  v5->fields.uniqueId = bsvtData->fields.uniqueId;
  if ( !buffData )
    goto LABEL_16;
  PassiveList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getPassiveList(buffData, 0, 0);
  v10 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_BattleServantConfConponent___c__DisplayClass83_0__GetClassPassiveSkillIdsForDisplay_b__0__,
    0);
  v11 = System_Linq_Enumerable__Where_object_(
          PassiveList,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v13 = BattleServantConfConponent___c_TypeInfo;
  v14 = v11;
  if ( !*(&BattleServantConfConponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo, v12);
    v13 = BattleServantConfConponent___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__83_1 = (System_Func_object__int__o *)static_fields->__9__83_1;
  if ( !_9__83_1 )
  {
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, v12);
      static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__83_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__83_1,
      v17,
      Method_BattleServantConfConponent___c__GetClassPassiveSkillIdsForDisplay_b__83_1__,
      0);
    v18 = BattleServantConfConponent___c_TypeInfo->static_fields;
    v18->__9__83_1 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__83_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->__9__83_1, (int32_t)_9__83_1, v19, v20, v21, v22, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v14,
                                                               (System_Func_TSource__TResult__o *)_9__83_1,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__int___);
  v26 = System_Linq_Enumerable__Distinct_int_(
          v25,
          (const MethodInfo_387C5EC *)Method_System_Linq_Enumerable_Distinct_int___);
  v27 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_int_(
                                              v26,
                                              (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  buffData = (BattleBuffData_o *)BasicHelper__IsNullOrEmpty(v27, 0);
  if ( ((unsigned __int8)buffData & 1) != 0 )
  {
    if ( userSvtData )
      return userSvtData->fields.classPassive;
LABEL_16:
    sub_2213CDC(buffData, v7);
  }
  return (System_Int32_array *)v27;
}


EventDropUpValInfo_array *BattleServantConfConponent__GetFriendshipUpCampaignInfo(
        BattleServantConfConponent_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x1
  Il2CppObject *Master_object; // x21
  void *Instance; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  UserServantEntity_o *HeroineData; // x0
  __int64 v16; // x23
  __int64 v17; // x0
  __int64 v18; // x1
  EventDropUpValInfo_c *v19; // x0
  EventDropUpValInfo_o *v20; // x22
  __int64 OnlyMaxFuncGroupId; // x0
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_59741BC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_2213A60(&EventDropUpValInfo_TypeInfo);
    sub_2213A60(&FunctionEntity_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_59741BC = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_35;
  Instance = EventCampaignMaster__GetFriendshipUpCampaigns(
               (EventCampaignMaster_o *)Master_object,
               *((_QWORD *)Instance + 17),
               0);
  if ( Instance )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v35 = v34;
    v34.fields._list = 0;
    *(_QWORD *)&v34.fields._index = &v35;
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v35,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v9 )
        break;
      current = v35.fields._current;
      if ( !v35.fields._current )
        sub_2213CDC(v9, v10);
      monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v35.fields._current[2].monitor;
      if ( !monitor
        || !monitor[1].monitor
        || System_Linq_Enumerable__Contains_int_(
             monitor,
             svtId,
             (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
        v13 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !v13 )
          sub_2213CDC(0, v14);
        HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v13, svtId, 0);
        if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0) )
        {
          v16 = sub_2213CCC(FunctionEntity_TypeInfo);
          FunctionEntity___ctor((FunctionEntity_o *)v16, 0);
          if ( !v16 )
            sub_2213CDC(v17, v18);
          v19 = EventDropUpValInfo_TypeInfo;
          *(_QWORD *)(v16 + 24) = 111;
          v20 = (EventDropUpValInfo_o *)sub_2213CCC(v19);
          EventDropUpValInfo___ctor(v20, 0, (FunctionEntity_o *)v16, 0);
          OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId((EventCampaignEntity_o *)current, 0);
          if ( !v20 )
            sub_2213CDC(OnlyMaxFuncGroupId, v22);
          v20->fields.groupId = OnlyMaxFuncGroupId;
          if ( !v4
            || (items = v4->fields._items,
                v30 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__,
                ++v4->fields._version,
                !items) )
          {
            sub_2213CDC(OnlyMaxFuncGroupId, v22);
          }
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)v20,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v20;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)v20, v23, v24, v25, v26, v27, v28);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v35,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( v4 )
      return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           v4,
                                           (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
LABEL_35:
    sub_2213CDC(Instance, v8);
  }
  if ( !v4 )
    goto LABEL_35;
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                       v4,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *BattleServantConfConponent__GetHideStr(
        BattleServantConfConponent_o *this,
        int32_t hideStatus,
        System_String_o *defaultStr,
        const MethodInfo *method)
{
  LocalizationManager_c *v6; // x0
  __int64 *v7; // x19

  if ( (byte_59741B7 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12084/*"SERVANT_ATTRIBUTE_HIDE"*/);
    sub_2213A60(&StringLiteral_12085/*"SERVANT_ATTRIBUTE_NONE"*/);
    byte_59741B7 = 1;
  }
  if ( hideStatus == 2 )
  {
    v6 = LocalizationManager_TypeInfo;
    v7 = &StringLiteral_12085/*"SERVANT_ATTRIBUTE_NONE"*/;
    if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      return LocalizationManager__Get((System_String_o *)*v7, 0);
    goto LABEL_6;
  }
  if ( hideStatus == 1 )
  {
    v6 = LocalizationManager_TypeInfo;
    v7 = &StringLiteral_12084/*"SERVANT_ATTRIBUTE_HIDE"*/;
    if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      return LocalizationManager__Get((System_String_o *)*v7, 0);
LABEL_6:
    j_il2cpp_runtime_class_init_0(v6, *(_QWORD *)&hideStatus);
    return LocalizationManager__Get((System_String_o *)*v7, 0);
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

  if ( (byte_59741BB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_59741BB = 1;
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
  v9 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v9
    || (System_Collections_Generic_List_int___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)passiveSkillIdList,
          (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__),
        (bsvtData = (BattleServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_12:
    sub_2213CDC(bsvtData, passiveSkillIdList);
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
  __int64 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 i; // x20
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w20
  __int64 v24; // x0
  __int64 v25; // x1
  double v26; // d0
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  Il2CppObject *Master_object; // x20
  __int64 v36; // [xsp+18h] [xbp-38h]

  if ( (byte_59741B9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    byte_59741B9 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_56;
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
    v10 = sub_224BC3C(individualityArray, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v10)(
          individualityArray,
          *(_QWORD *)(v10 + 8));
  v36 = v11;
  if ( !v11 )
    sub_2213CDC(v11, v12);
  for ( i = v11; ; i = v36 )
  {
    v14 = *(_QWORD *)i;
    v15 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_16:
      v17 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))v17)(i, *(_QWORD *)(v17 + 8));
    if ( (v5 & 1) == 0 )
      break;
    if ( !v36 )
      sub_2213CDC(v5, v6);
    v18 = *(_QWORD *)v36;
    v19 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
    {
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v20 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_24;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_24:
      v21 = sub_224BC3C(v36, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v36, *(_QWORD *)(v21 + 8));
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v22);
    v26 = log10((double)v23);
    if ( (unsigned int)(v23 - 300) <= 0x63 && (int)v26 == 2 && (unsigned int)(v23 - 303) <= 6 && v23 != 307 )
    {
      if ( !v4
        || (items = v4->fields._items,
            v28 = Method_System_Collections_Generic_List_int__Add__,
            ++v4->fields._version,
            !items) )
      {
        sub_2213CDC(v24, v25);
      }
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          v23,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size] = v23;
      }
    }
  }
  if ( v36 )
  {
    v30 = *(_QWORD *)v36;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_44;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_44:
      v33 = sub_224BC3C(v36, System_IDisposable_TypeInfo, 0);
    }
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v36, *(_QWORD *)(v33 + 8));
  }
  if ( !v4 )
    goto LABEL_56;
  if ( v4->fields._size > 0 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    v5 = (__int64)System_Collections_Generic_List_int___ToArray(
                    v4,
                    (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( Master_object )
      return IndividualityPersonalityMaster__GetPersonalityValue(
               (IndividualityPersonalityMaster_o *)Master_object,
               (System_Int32_array *)v5,
               0);
LABEL_56:
    sub_2213CDC(v5, v6);
  }
  return -1;
}


int32_t BattleServantConfConponent__GetPolicy(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *individualityArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 i; // x20
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w20
  __int64 v24; // x0
  __int64 v25; // x1
  double v26; // d0
  unsigned int v27; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  Il2CppObject *Master_object; // x20
  __int64 v37; // [xsp+18h] [xbp-48h]

  if ( (byte_59741B8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    byte_59741B8 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_56;
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
    v10 = sub_224BC3C(individualityArray, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v10)(
          individualityArray,
          *(_QWORD *)(v10 + 8));
  v37 = v11;
  if ( !v11 )
    sub_2213CDC(v11, v12);
  for ( i = v11; ; i = v37 )
  {
    v14 = *(_QWORD *)i;
    v15 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_16:
      v17 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))v17)(i, *(_QWORD *)(v17 + 8));
    if ( (v5 & 1) == 0 )
      break;
    if ( !v37 )
      sub_2213CDC(v5, v6);
    v18 = *(_QWORD *)v37;
    v19 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v20 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_24;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_24:
      v21 = sub_224BC3C(v37, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v37, *(_QWORD *)(v21 + 8));
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v22);
    v26 = log10((double)v23);
    v27 = v23 - 300;
    if ( (unsigned int)(v23 - 300) <= 0x63 && (int)v26 == 2 && v27 <= 7 && ((1 << v27) & 0x87) != 0 )
    {
      if ( !v4
        || (items = v4->fields._items,
            v29 = Method_System_Collections_Generic_List_int__Add__,
            ++v4->fields._version,
            !items) )
      {
        sub_2213CDC(v24, v25);
      }
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          v23,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size] = v23;
      }
    }
  }
  if ( v37 )
  {
    v31 = *(_QWORD *)v37;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_44;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_44:
      v34 = sub_224BC3C(v37, System_IDisposable_TypeInfo, 0);
    }
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v37, *(_QWORD *)(v34 + 8));
  }
  if ( !v4 )
    goto LABEL_56;
  if ( v4->fields._size > 0 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    v5 = (__int64)System_Collections_Generic_List_int___ToArray(
                    v4,
                    (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( Master_object )
      return IndividualityPolicyMaster__GetPolicyValue(
               (IndividualityPolicyMaster_o *)Master_object,
               (System_Int32_array *)v5,
               0);
LABEL_56:
    sub_2213CDC(v5, v6);
  }
  return -1;
}


int32_t BattleServantConfConponent__GetSpecialPassiveSkillStartIndex(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_List_int__o *skillIdList,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x1
  int32_t result; // w0
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  struct BattleServantData_o *bsvtData; // x8
  ServantPassiveSkillMaster_o *v11; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *v15; // x21
  BattleServantConfConponent___c_c *v16; // x8
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__84_0; // x22
  Il2CppObject *v19; // x23
  struct BattleServantConfConponent___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_IEnumerable_T__o *v27; // x22
  System_Collections_Generic_HashSet_int__o *v28; // x21
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Predicate_int__o *v35; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_59741A7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_ServantPassiveSkillEntity__int___);
    sub_2213A60(&System_Func_ServantPassiveSkillEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor___91630040);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__FindIndex__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&System_Predicate_int__TypeInfo);
    sub_2213A60(&Method_BattleServantConfConponent___c__GetSpecialPassiveSkillStartIndex_b__84_0__);
    sub_2213A60(&Method_BattleServantConfConponent___c__DisplayClass84_0__GetSpecialPassiveSkillStartIndex_b__1__);
    sub_2213A60(&BattleServantConfConponent___c__DisplayClass84_0_TypeInfo);
    sub_2213A60(&BattleServantConfConponent___c_TypeInfo);
    byte_59741A7 = 1;
  }
  v5 = sub_2213CCC(BattleServantConfConponent___c__DisplayClass84_0_TypeInfo);
  BattleServantConfConponent___c__DisplayClass84_0___ctor((BattleServantConfConponent___c__DisplayClass84_0_o *)v5, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillIdList, 0) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_22;
  v11 = (ServantPassiveSkillMaster_o *)Master_object;
  v12 = *(_QWORD *)&bsvtData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&bsvtData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  *(_QWORD *)&v36.fields.currentCryptoKey = v12;
  *(_QWORD *)&v36.fields.fakeValue = v13;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v36, 0);
  if ( !v11 )
    goto LABEL_22;
  v15 = ServantPassiveSkillMaster__EnumerateSpecialSkillsBySvtId(v11, (int32_t)Master_object, 0);
  v16 = BattleServantConfConponent___c_TypeInfo;
  if ( !*(&BattleServantConfConponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo, v14);
    v16 = BattleServantConfConponent___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__84_0 = (System_Func_object__int__o *)static_fields->__9__84_0;
  if ( !_9__84_0 )
  {
    if ( !*(&v16->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v16, v14);
      static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__84_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_ServantPassiveSkillEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__84_0,
      v19,
      Method_BattleServantConfConponent___c__GetSpecialPassiveSkillStartIndex_b__84_0__,
      0);
    v20 = BattleServantConfConponent___c_TypeInfo->static_fields;
    v20->__9__84_0 = (struct System_Func_ServantPassiveSkillEntity__int__o *)_9__84_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->__9__84_0, (int32_t)_9__84_0, v21, v22, v23, v24, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                                         (System_Func_TSource__TResult__o *)_9__84_0,
                                                         (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_ServantPassiveSkillEntity__int___);
  v28 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_69943008(
    v28,
    v27,
    (const MethodInfo_42B3EE0 *)Method_System_Collections_Generic_HashSet_int___ctor___91630040);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = v28,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)v28, v29, v30, v31, v32, v33, v34),
        v35 = (System_Predicate_int__o *)sub_2213CCC(System_Predicate_int__TypeInfo),
        System_Predicate_int____ctor(
          v35,
          (Il2CppObject *)v5,
          Method_BattleServantConfConponent___c__DisplayClass84_0__GetSpecialPassiveSkillStartIndex_b__1__,
          0),
        !skillIdList) )
  {
LABEL_22:
    sub_2213CDC(Master_object, v9);
  }
  result = System_Collections_Generic_List_int___FindIndex(
             skillIdList,
             (System_Predicate_T__o *)v35,
             (const MethodInfo_4467A9C *)Method_System_Collections_Generic_List_int__FindIndex__);
  if ( result < 0 )
    return skillIdList->fields._size;
  return result;
}


void BattleServantConfConponent__Initialize(
        BattleServantConfConponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v11; // x1
  UnityEngine_Transform_o *transform; // x20
  __int64 v13; // x1
  UnityEngine_Object_o *commandCard; // x20
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x8
  __int64 v17; // x1
  Il2CppObject *Component_object; // x20
  UILabel_o *havenotTdLabel; // x20
  __int64 v20; // x1
  UnityEngine_Object_o *classBoardSkillObj; // x20
  UnityEngine_Object_o *grandClassBoardSkillObj; // x20
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59741A1 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_2888/*"BATTLE_HASNOT_TD"*/);
    byte_59741A1 = 1;
  }
  this->fields.data = data;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.data,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  v23.fields.y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0).fields.y;
  if ( !transform )
    goto LABEL_35;
  v23.fields.x = 0.0;
  v23.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(transform, v23, 0);
  commandCard = (UnityEngine_Object_o *)this->fields.commandCard;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(commandCard, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !gameObject )
      goto LABEL_35;
    v16 = gameObject;
    gameObject = (UnityEngine_GameObject_o *)this->fields.commandCard;
    if ( !gameObject )
      goto LABEL_35;
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)gameObject, LODWORD(v16[7].monitor) + 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.commandCard;
    if ( !gameObject )
      goto LABEL_35;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
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
      sub_2213CDC(gameObject, v11);
    }
    BattleCommandComponent__SetDownloadEventSprite((BattleCommandComponent_o *)gameObject, 0);
  }
  havenotTdLabel = this->fields.havenotTdLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2888/*"BATTLE_HASNOT_TD"*/, 0);
  if ( !havenotTdLabel )
    goto LABEL_35;
  UILabel__set_text(havenotTdLabel, (System_String_o *)gameObject, 0);
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
    sub_2213CDC(bsvtData, v5);
  }
LABEL_8:
  v10 = 1;
  return v10 & 1;
}


bool BattleServantConfConponent__IsLastOpenServantAbility(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  if ( (byte_59741AF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3252/*"BattleServantDetailTab"*/);
    byte_59741AF = 1;
  }
  return !UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_3252/*"BattleServantDetailTab"*/, 0)
      || !UnityEngine_PlayerPrefs__GetInt_83396820((System_String_o *)StringLiteral_3252/*"BattleServantDetailTab"*/, 0)
      || UnityEngine_PlayerPrefs__GetInt_83396820((System_String_o *)StringLiteral_3252/*"BattleServantDetailTab"*/, 0) != 1;
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
  __int64 v13; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *equipPossessionSkillInfoComponentList; // x8
  System_String_o *size; // x2
  int v22; // w9
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59741AC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59741AC = 1;
  }
  memset(&v23, 0, sizeof(v23));
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
          sub_2213CE4(isOpening);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      (System_Collections_Generic_List_object__o *)isOpening,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__) )
    {
      if ( !v23.fields._current )
        sub_2213CDC(0, v12);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v23.fields._current,
                                             0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    equipPossessionSkillInfoComponentList = this->fields.equipPossessionSkillInfoComponentList;
    if ( !equipPossessionSkillInfoComponentList )
LABEL_16:
      sub_2213CDC(isOpening, v4);
    size = (System_String_o *)(unsigned int)equipPossessionSkillInfoComponentList->fields._size;
    v22 = equipPossessionSkillInfoComponentList->fields._version + 1;
    equipPossessionSkillInfoComponentList->fields._size = 0;
    equipPossessionSkillInfoComponentList->fields._version = v22;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)equipPossessionSkillInfoComponentList->fields._items, 0, (int32_t)size, 0);
    this->fields.bsvtData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bsvtData, 0, size, v15, v16, v17, v18, v19);
  }
}


void BattleServantConfConponent__OnClickServantAbility(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *v2; // x19
  UnityEngine_GameObject_o *BattleServantAbilityObj; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  v2 = this;
  if ( (byte_59741B0 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleServantConfConponent_OnClickServantAbility__);
    sub_2213A60(&StringLiteral_18228/*"btn_bg_on_1"*/);
    sub_2213A60(&StringLiteral_18223/*"btn_bg_off_1"*/);
    sub_2213A60(&StringLiteral_18376/*"btn_txt_servant_states_off"*/);
    sub_2213A60(&StringLiteral_3252/*"BattleServantDetailTab"*/);
    this = (BattleServantConfConponent_o *)sub_2213A60(&StringLiteral_18374/*"btn_txt_servant_property_on"*/);
    byte_59741B0 = 1;
  }
  if ( !v2->fields.isOpenAfter )
  {
    if ( BattleServantConfConponent__IsLastOpenServantAbility(this, method) )
      return;
    if ( !v2->fields.isOpenAfter )
    {
      v4 = Method_BattleServantConfConponent_OnClickServantAbility__;
      if ( (*((_BYTE *)Method_BattleServantConfConponent_OnClickServantAbility__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_2213A78(Method_BattleServantConfConponent_OnClickServantAbility__);
      v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
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
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_18228/*"btn_bg_on_1"*/, 0);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_18374/*"btn_txt_servant_property_on"*/, 0);
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
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_18223/*"btn_bg_off_1"*/, 0),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateName) == 0) )
  {
LABEL_20:
    sub_2213CDC(BattleServantAbilityObj, method);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_18376/*"btn_txt_servant_states_off"*/, 0);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_3252/*"BattleServantDetailTab"*/, 0, 0);
}


void BattleServantConfConponent__OnClickServantState(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *v2; // x19
  UnityEngine_GameObject_o *BattleServantAbilityObj; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  v2 = this;
  if ( (byte_59741B1 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleServantConfConponent_OnClickServantState__);
    sub_2213A60(&StringLiteral_18228/*"btn_bg_on_1"*/);
    sub_2213A60(&StringLiteral_18377/*"btn_txt_servant_states_on"*/);
    sub_2213A60(&StringLiteral_18373/*"btn_txt_servant_property_off"*/);
    sub_2213A60(&StringLiteral_18223/*"btn_bg_off_1"*/);
    this = (BattleServantConfConponent_o *)sub_2213A60(&StringLiteral_3252/*"BattleServantDetailTab"*/);
    byte_59741B1 = 1;
  }
  if ( !v2->fields.isOpenAfter )
  {
    if ( !BattleServantConfConponent__IsLastOpenServantAbility(this, method) )
      return;
    if ( !v2->fields.isOpenAfter )
    {
      v4 = Method_BattleServantConfConponent_OnClickServantState__;
      if ( (*((_BYTE *)Method_BattleServantConfConponent_OnClickServantState__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_2213A78(Method_BattleServantConfConponent_OnClickServantState__);
      v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
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
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_18223/*"btn_bg_off_1"*/, 0);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_18373/*"btn_txt_servant_property_off"*/, 0);
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
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_18228/*"btn_bg_on_1"*/, 0),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateName) == 0) )
  {
LABEL_21:
    sub_2213CDC(BattleServantAbilityObj, method);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_18377/*"btn_txt_servant_states_on"*/, 0);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_3252/*"BattleServantDetailTab"*/, 1, 0);
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
    sub_2213CDC(0, call);
  BattleViewBufflistComponent__setHide(buffListView, 0, 0);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
  BattleServantConfConponent__ResetScroll(this, v6);
}


void BattleServantConfConponent__ResetScroll(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *BattleServantAbilityObj; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *BattleServantStateObj; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *buffListView; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *AbillityScrollView; // x20
  UnityEngine_Object_o *AbillityScrollBarWiget; // x20
  UnityEngine_Object_o *StateScrollView; // x20
  UnityEngine_Object_o *StateScrollBarWiget; // x20

  if ( (byte_59741AD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59741AD = 1;
  }
  BattleServantAbilityObj = (UnityEngine_Object_o *)this->fields.BattleServantAbilityObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(BattleServantAbilityObj, 0, 0) )
  {
    BattleServantStateObj = (UnityEngine_Object_o *)this->fields.BattleServantStateObj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
            if ( UnityEngine_Object__op_Inequality(AbillityScrollView, 0, 0) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.AbillityScrollView;
              if ( !buffListView )
                goto LABEL_37;
              UIScrollView__ResetPosition((UIScrollView_o *)buffListView, 0);
            }
            AbillityScrollBarWiget = (UnityEngine_Object_o *)this->fields.AbillityScrollBarWiget;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
            if ( UnityEngine_Object__op_Inequality(AbillityScrollBarWiget, 0, 0) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.AbillityScrollBarWiget;
              if ( !buffListView )
                goto LABEL_37;
              UIWidget__ResizeCollider((UIWidget_o *)buffListView, 0);
            }
            StateScrollView = (UnityEngine_Object_o *)this->fields.StateScrollView;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
            if ( UnityEngine_Object__op_Inequality(StateScrollView, 0, 0) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.StateScrollView;
              if ( !buffListView )
                goto LABEL_37;
              UIScrollView__ResetPosition((UIScrollView_o *)buffListView, 0);
            }
            StateScrollBarWiget = (UnityEngine_Object_o *)this->fields.StateScrollBarWiget;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
      sub_2213CDC(buffListView, v6);
    }
  }
}


void BattleServantConfConponent__SetAppendSkillList(
        BattleServantConfConponent_o *this,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *AppendSkillObj; // x21
  int v6; // w8
  const MethodInfo *v7; // x1
  __int64 AppendSkillTitle; // x0
  UnityEngine_Object_o *AppendSkillListParent; // x21
  __int64 v10; // x1
  UnityEngine_Object_o *AppendSkillInfoPrefab; // x21
  __int64 v12; // x1
  UnityEngine_Object_c *v13; // x0
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  struct BattleServantData_o *bsvtData; // x8
  __int128 v16; // q1
  int64_t v17; // x0
  struct BattleServantData_o *v18; // x8
  __int64 v19; // x20
  _BOOL8 IsNpc; // x0
  __int64 v21; // x1
  Il2CppObject *Master_object; // x21
  int32_t saveTransform; // w22
  System_Int32_array *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x28
  int32_t v26; // w21
  System_Int32_array *v27; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x22
  unsigned __int64 v29; // x21
  float v30; // s8
  unsigned __int64 max_length_low; // x9
  int32_t v32; // w23
  int32_t v33; // w24
  _BOOL4 v34; // w20
  System_String_o *v35; // x25
  System_String_o *v36; // x26
  UnityEngine_GameObject_o *v37; // x27
  Il2CppObject *v38; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x22
  UnityEngine_Transform_o *v40; // x28
  UnityEngine_Transform_o *transform; // x28
  UnityEngine_Transform_o *v44; // x28
  __int64 v48; // x1
  Il2CppObject *Component_object; // x27
  System_Int32_array *releaseSkillLvs; // [xsp+0h] [xbp-110h]
  DataMasterBase_TMaster__TEntity__PKType__o *v51; // [xsp+20h] [xbp-F0h]
  int32_t index; // [xsp+2Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+50h] [xbp-C0h]
  Il2CppObject *entity; // [xsp+78h] [xbp-98h] BYREF
  System_Int32_array *lvList; // [xsp+80h] [xbp-90h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+88h] [xbp-88h] BYREF
  System_String_array *explanationList; // [xsp+90h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+98h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+A8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59741A8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&StringLiteral_21645/*"img_txt_extraskill"*/);
    byte_59741A8 = 1;
  }
  AppendSkillObj = (UnityEngine_Object_o *)this->fields.AppendSkillObj;
  idList = 0;
  explanationList = 0;
  titleList = 0;
  v6 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  lvList = 0;
  releaseStateList = 0;
  entity = 0;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, battleInfoData);
  if ( UnityEngine_Object__op_Inequality(AppendSkillObj, 0, 0) )
  {
    AppendSkillTitle = (__int64)this->fields.AppendSkillObj;
    if ( !AppendSkillTitle )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 0, 0);
  }
  if ( !battleInfoData )
    return;
  AppendSkillListParent = (UnityEngine_Object_o *)this->fields.AppendSkillListParent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Equality(AppendSkillListParent, 0, 0) || !this->fields.bsvtData )
    return;
  AppendSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.AppendSkillInfoPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Equality(AppendSkillInfoPrefab, 0, 0) )
    return;
  v13 = UnityEngine_Object_TypeInfo;
  BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
  this->fields.AppendSkillOffset = 0.0;
  if ( !*(&v13->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v13, v12);
  if ( UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0, 0) && !BattleServantConfConponent__SetAtlas(this, v7) )
    return;
  AppendSkillTitle = (__int64)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  UISprite__set_atlas((UISprite_o *)AppendSkillTitle, this->fields.BattleAssetUIAtlas, 0);
  AppendSkillTitle = (__int64)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  UISprite__set_spriteName((UISprite_o *)AppendSkillTitle, (System_String_o *)StringLiteral_21645/*"img_txt_extraskill"*/, 0);
  AppendSkillTitle = (__int64)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  AppendSkillTitle = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)AppendSkillTitle + 840LL))(
                       AppendSkillTitle,
                       *(_QWORD *)(*(_QWORD *)AppendSkillTitle + 848LL));
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_98;
  v16 = *(_OWORD *)&bsvtData->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&bsvtData->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v54.fields.fakeValue = v16;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
  v53 = v54;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
  AppendSkillTitle = (__int64)BattleInfoData__getUserServantFromID(battleInfoData, v17, 0);
  if ( !AppendSkillTitle )
    return;
  v18 = this->fields.bsvtData;
  if ( !v18 )
    goto LABEL_98;
  v19 = AppendSkillTitle;
  IsNpc = Follower__IsNpc(v18->fields.followerType, 0);
  if ( IsNpc )
  {
    BattleServantConfConponent__GetAppendSkillInfo(
      (BattleServantConfConponent_o *)IsNpc,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      *(System_Int32_array **)(v19 + 696),
      *(System_Int32_array **)(v19 + 704),
      (const MethodInfo *)releaseSkillLvs);
  }
  else
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    if ( UserServantEntity__get_IsSaveTransformServant((UserServantEntity_o *)v19, 0) )
      saveTransform = UserServantEntity__GetServantId((UserServantEntity_o *)v19, 1, 0);
    else
      saveTransform = -1;
    AppendSkillTitle = UserServantEntity__getSvtId((UserServantEntity_o *)v19, 0);
    if ( !Master_object )
      goto LABEL_98;
    ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_49637072(
      (ServantAppendPassiveSkillMaster_o *)Master_object,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      AppendSkillTitle,
      *(System_Int32_array **)(v19 + 696),
      *(System_Int32_array **)(v19 + 704),
      saveTransform,
      0);
  }
  AppendSkillTitle = (__int64)this->fields.bsvtData;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  v24 = BattleServantData__FilterDisplayingSkillIdArray((BattleServantData_o *)AppendSkillTitle, idList, 1, 0);
  if ( !v24 )
    return;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
  if ( !v24->max_length )
    return;
  AppendSkillTitle = (__int64)this->fields.AppendSkillObj;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 1, 0);
  AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  v26 = 0;
  while ( 1 )
  {
    AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)AppendSkillTitle, 0);
    if ( !AppendSkillTitle )
      goto LABEL_98;
    if ( v26 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AppendSkillTitle, 0) )
      break;
    AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
    if ( AppendSkillTitle )
    {
      AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)AppendSkillTitle, 0);
      if ( AppendSkillTitle )
      {
        AppendSkillTitle = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AppendSkillTitle, v26, 0);
        if ( AppendSkillTitle )
        {
          AppendSkillTitle = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)AppendSkillTitle,
                                        0);
          if ( AppendSkillTitle )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 0, 0);
            AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
            ++v26;
            if ( AppendSkillTitle )
              continue;
          }
        }
      }
    }
    goto LABEL_98;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  AppendSkillTitle = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  v27 = idList;
  entity = 0;
  if ( !idList )
LABEL_98:
    sub_2213CDC(AppendSkillTitle, v7);
  index = 0;
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)AppendSkillTitle;
  v29 = 0;
  v30 = 0.0;
  v51 = (DataMasterBase_TMaster__TEntity__PKType__o *)AppendSkillTitle;
  while ( 1 )
  {
    max_length_low = LODWORD(v27->max_length);
    if ( (__int64)v29 >= (int)max_length_low )
      break;
    if ( v29 >= max_length_low )
      goto LABEL_101;
    AppendSkillTitle = System_Linq_Enumerable__Contains_int_(
                         v25,
                         v27->m_Items[v29],
                         (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
    v27 = idList;
    if ( (AppendSkillTitle & 1) != 0 )
    {
      if ( !idList )
        goto LABEL_98;
      if ( v29 >= LODWORD(idList->max_length) )
        goto LABEL_101;
      if ( !lvList )
        goto LABEL_98;
      if ( v29 >= LODWORD(lvList->max_length) )
        goto LABEL_101;
      v32 = idList->m_Items[v29];
      if ( v32 >= 1 )
      {
        if ( !v28 )
          goto LABEL_98;
        v33 = lvList->m_Items[v29];
        AppendSkillTitle = DataMasterBase_object__object__int___TryGetEntity(
                             v28,
                             &entity,
                             v32,
                             (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( (AppendSkillTitle & 1) == 0 )
          return;
        if ( !titleList )
          goto LABEL_98;
        if ( v29 >= LODWORD(titleList->max_length) )
          goto LABEL_101;
        if ( !explanationList )
          goto LABEL_98;
        if ( v29 >= LODWORD(explanationList->max_length) )
          goto LABEL_101;
        if ( !releaseStateList )
          goto LABEL_98;
        if ( v29 >= LODWORD(releaseStateList->max_length) )
LABEL_101:
          sub_2213CE4(AppendSkillTitle);
        AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
        if ( !AppendSkillTitle )
          goto LABEL_98;
        v34 = releaseStateList->m_Items[v29];
        v35 = titleList->m_Items[v29];
        v36 = explanationList->m_Items[v29];
        AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(
                                      (UnityEngine_GameObject_o *)AppendSkillTitle,
                                      0);
        if ( !AppendSkillTitle )
          goto LABEL_98;
        if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AppendSkillTitle, 0) <= index )
        {
          v38 = (Il2CppObject *)this->fields.AppendSkillInfoPrefab;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
          v39 = v25;
          AppendSkillTitle = (__int64)UnityEngine_Object__Instantiate_object_(
                                        v38,
                                        (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          v37 = (UnityEngine_GameObject_o *)AppendSkillTitle;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 1, 0);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v37, 0);
          if ( !this->fields.AppendSkillListParent )
            goto LABEL_98;
          v40 = (UnityEngine_Transform_o *)AppendSkillTitle;
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(this->fields.AppendSkillListParent, 0);
          if ( !v40 )
            goto LABEL_98;
          UnityEngine_Transform__set_parent(v40, (UnityEngine_Transform_o *)AppendSkillTitle, 0);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v37, 0);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          v62.fields.y = -v30;
          v62.fields.x = 0.0;
          v62.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AppendSkillTitle, v62, 0);
          transform = UnityEngine_GameObject__get_transform(v37, 0);
          v63.fields.x = sub_2417914(0);
          if ( !transform )
            goto LABEL_98;
          UnityEngine_Transform__set_localScale(transform, v63, 0);
          v44 = UnityEngine_GameObject__get_transform(v37, 0);
          AppendSkillTitle = sub_2B9EAA4(0);
          if ( !v44 )
            goto LABEL_98;
          UnityEngine_Transform__set_localRotation(v44, v64, 0);
          v25 = v39;
          v28 = v51;
        }
        else
        {
          AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
          if ( !AppendSkillTitle )
            goto LABEL_98;
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)AppendSkillTitle,
                                        0);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          AppendSkillTitle = (__int64)UnityEngine_Transform__GetChild(
                                        (UnityEngine_Transform_o *)AppendSkillTitle,
                                        index,
                                        0);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          AppendSkillTitle = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)AppendSkillTitle,
                                        0);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          v37 = (UnityEngine_GameObject_o *)AppendSkillTitle;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 1, 0);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v37, 0);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          v61.fields.y = -v30;
          v61.fields.x = 0.0;
          v61.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AppendSkillTitle, v61, 0);
        }
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v37,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
        AppendSkillTitle = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( (AppendSkillTitle & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_98;
          BattleServantConfSkillComponent__SetItem(
            (BattleServantConfSkillComponent_o *)Component_object,
            ++index,
            v32,
            v35,
            v36,
            v34,
            v33,
            0);
        }
        else
        {
          if ( !Component_object )
            goto LABEL_98;
          ++index;
        }
        AppendSkillTitle = BattleServantConfSkillComponent__GetHeight(
                             (BattleServantConfSkillComponent_o *)Component_object,
                             0);
        v27 = idList;
        v30 = v30 + (float)((float)(AppendSkillTitle - HIDWORD(Component_object[5].klass)) + 110.0);
      }
    }
    ++v29;
    if ( !v27 )
      goto LABEL_98;
  }
  this->fields.AppendSkillOffset = -(float)(v30 + 1.0);
}


bool BattleServantConfConponent__SetAtlas(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Object_object__58532980; // x20
  char v7; // w21
  Il2CppObject *Component_object; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_59741B2 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3208/*"Battle/Common"*/);
    sub_2213A60(&StringLiteral_3230/*"BattleAssetUIAtlas"*/);
    byte_59741B2 = 1;
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3208/*"Battle/Common"*/, 0);
  if ( !AssetStorage )
    goto LABEL_12;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              AssetStorage,
                              (System_String_o *)StringLiteral_3230/*"BattleAssetUIAtlas"*/,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58532980, 0, 0);
  v7 = (char)AssetStorage;
  if ( ((unsigned __int8)AssetStorage & 1) != 0 )
  {
    if ( Object_object__58532980 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Object_object__58532980,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      this->fields.BattleAssetUIAtlas = (struct UIAtlas_o *)Component_object;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.BattleAssetUIAtlas,
        (int32_t)Component_object,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      return v7 & 1;
    }
LABEL_12:
    sub_2213CDC(AssetStorage, v4);
  }
  return v7 & 1;
}


void BattleServantConfConponent__SetAttribute(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *attributeLabel; // x20
  const MethodInfo *v4; // x1
  UILabel_o *mPanel; // x0
  const MethodInfo *v6; // x2
  struct BattleServantData_o *bsvtData; // x8
  struct ServantEntity_o *svtdata; // x8
  unsigned int type; // w8
  bool v10; // cf
  unsigned int v11; // w8
  char v12; // w9
  unsigned __int8 v13; // w20
  __int64 v14; // x1
  bool IsHideAttribute; // w8
  UnityEngine_Object_o *attributeObj; // x21
  int v17; // w9
  UnityEngine_Object_o *AbillityScrollView; // x20
  struct UIScrollView_o *v19; // x8
  UnityEngine_Object_o *npRoot; // x20
  int v21; // w8
  UnityEngine_Object_o *v22; // x21
  struct UIScrollView_o *v23; // x8
  UnityEngine_Object_o *v24; // x21
  int v25; // w8
  float v26; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIScrollView_o *v28; // x8
  struct UIScrollView_o *v29; // x8
  struct UIProgressBar_o *verticalScrollBar; // x8
  struct UIScrollView_o *v31; // x8
  struct UIProgressBar_o *v32; // x8
  float v33; // s8
  UnityEngine_GameObject_o *v34; // x0
  struct UIScrollView_o *v35; // x8
  struct UIScrollView_o *v36; // x8
  struct UIProgressBar_o *v37; // x8
  struct UIScrollView_o *v38; // x8
  struct UIProgressBar_o *v39; // x8
  __int64 v40; // x1
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  const MethodInfo *v42; // x3
  int32_t v43; // w24
  int32_t v44; // w23
  int32_t HideStateSubAttribute; // w21
  System_Collections_Generic_List_object__o *v46; // x22
  System_String_o *OverwritePolicy; // x25
  System_String_o *IsNullOrEmpty; // x0
  const MethodInfo *v49; // x3
  System_String_o *v50; // x0
  __int64 v51; // x1
  System_String_o *v52; // x25
  System_String_o *HideStr; // x24
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  System_String_o *OverwritePersonality; // x24
  System_String_o *v65; // x0
  const MethodInfo *v66; // x3
  System_String_o *v67; // x0
  __int64 v68; // x1
  System_String_o *v69; // x24
  System_String_o *v70; // x23
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  System_String_o *v81; // x0
  Il2CppObject *v82; // x23
  System_String_o *v83; // x22
  System_String_o *OverwriteSubAttribute; // x24
  System_String_o *Attri; // x0
  const MethodInfo *v86; // x3
  System_String_o *v87; // x0
  __int64 v88; // x1
  System_String_o *v89; // x20
  System_String_o *v90; // x20
  __int64 v91; // x1
  UILabel_o *v92; // x19
  System_String_o *v93; // x0
  Il2CppObject *v94; // x1
  __int64 v95; // x1
  bool v96; // w8
  int v97; // w9
  System_String_o *v98; // x0
  int v99; // [xsp+Ch] [xbp-54h] BYREF
  int32_t personality[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59741B6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_12172/*"SERVANT_PERSONALITY_"*/);
    sub_2213A60(&StringLiteral_12086/*"SERVANT_ATTRIBUTE_SPLIT"*/);
    sub_2213A60(&StringLiteral_22323/*"line_whiteAlpha_Noblur"*/);
    sub_2213A60(&StringLiteral_12521/*"SERVANT_SUB_ATTRIBUTE_"*/);
    sub_2213A60(&StringLiteral_12082/*"SERVANT_ATTRIBUTE_FORMAT_ATTRIBUTE"*/);
    sub_2213A60(&StringLiteral_12083/*"SERVANT_ATTRIBUTE_FORMAT_SUB_ATTRIBUTE"*/);
    sub_2213A60(&StringLiteral_12173/*"SERVANT_POLICY_"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_12081/*"SERVANT_ATTRIBUTE_FORMAT"*/);
    byte_59741B6 = 1;
  }
  attributeLabel = (UnityEngine_Object_o *)this->fields.attributeLabel;
  *(_QWORD *)personality = 0;
  v99 = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(attributeLabel, 0, 0) )
  {
    mPanel = this->fields.attributeLabel;
    if ( !mPanel )
      goto LABEL_144;
    UILabel__set_text(mPanel, **(System_String_o ***)(qword_5984390 + 184), 0);
    bsvtData = this->fields.bsvtData;
    if ( !bsvtData )
      goto LABEL_144;
    svtdata = bsvtData->fields.svtdata;
    if ( !svtdata )
      goto LABEL_144;
    type = svtdata->fields.type;
    v10 = type >= 6;
    v11 = 0x26u >> type;
    v12 = !v10;
    v13 = v12 & v11;
    IsHideAttribute = BattleServantConfConponent__IsHideAttribute(this, v12 & v11, v6);
    attributeObj = (UnityEngine_Object_o *)this->fields.attributeObj;
    v17 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
    if ( IsHideAttribute )
    {
      if ( !v17 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      if ( UnityEngine_Object__op_Inequality(attributeObj, 0, 0) )
      {
        mPanel = (UILabel_o *)this->fields.attributeObj;
        if ( !mPanel )
          goto LABEL_144;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 0, 0);
      }
      AbillityScrollView = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      mPanel = (UILabel_o *)UnityEngine_Object__op_Inequality(AbillityScrollView, 0, 0);
      if ( ((unsigned __int8)mPanel & 1) == 0 )
        goto LABEL_58;
      v19 = this->fields.AbillityScrollView;
      if ( !v19 )
        goto LABEL_144;
      mPanel = (UILabel_o *)v19->fields.mPanel;
      if ( !mPanel )
        goto LABEL_144;
      if ( UIPanel__get_height((UIPanel_o *)mPanel, 0) > 430.0 )
        goto LABEL_58;
      if ( !this->fields.isEquip )
        goto LABEL_47;
      npRoot = (UnityEngine_Object_o *)this->fields.npRoot;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      if ( UnityEngine_Object__op_Equality(npRoot, 0, 0) )
      {
        mPanel = (UILabel_o *)this->fields.AbillityScrollView;
        if ( !mPanel )
          goto LABEL_144;
        v21 = 1110966272;
      }
      else
      {
LABEL_47:
        mPanel = (UILabel_o *)this->fields.AbillityScrollView;
        if ( !mPanel )
          goto LABEL_144;
        v21 = -1034158080;
      }
      v26 = *(float *)&v21;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
      GameObjectExtensions__SetLocalPositionY(gameObject, v26, 0);
      v28 = this->fields.AbillityScrollView;
      if ( v28 )
      {
        mPanel = (UILabel_o *)v28->fields.mPanel;
        if ( mPanel )
        {
          ((void (__fastcall *)(UILabel_o *, const MethodInfo *, double, float, float, float))mPanel->klass->vtable._18_SetRect.methodPtr)(
            mPanel,
            mPanel->klass->vtable._18_SetRect.method,
            0.0,
            -127.0,
            670.0,
            460.0);
          GameObjectExtensions__SetLocalPositionY(this->fields.abillityScrollBarObject, -227.0, 0);
          v29 = this->fields.AbillityScrollView;
          if ( v29 )
          {
            verticalScrollBar = v29->fields.verticalScrollBar;
            if ( verticalScrollBar )
            {
              mPanel = (UILabel_o *)verticalScrollBar->fields.mBG;
              if ( mPanel )
              {
                UIWidget__set_height((UIWidget_o *)mPanel, 448, 0);
                v31 = this->fields.AbillityScrollView;
                if ( v31 )
                {
                  v32 = v31->fields.verticalScrollBar;
                  if ( v32 )
                  {
                    mPanel = (UILabel_o *)v32->fields.mFG;
                    if ( mPanel )
                    {
                      UIWidget__set_height((UIWidget_o *)mPanel, 460, 0);
LABEL_58:
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
LABEL_144:
      sub_2213CDC(mPanel, v4);
    }
    if ( !v17 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( UnityEngine_Object__op_Inequality(attributeObj, 0, 0) )
    {
      mPanel = (UILabel_o *)this->fields.attributeObj;
      if ( !mPanel )
        goto LABEL_144;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 1, 0);
    }
    v22 = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    mPanel = (UILabel_o *)UnityEngine_Object__op_Inequality(v22, 0, 0);
    if ( ((unsigned __int8)mPanel & 1) != 0 )
    {
      v23 = this->fields.AbillityScrollView;
      if ( !v23 )
        goto LABEL_144;
      mPanel = (UILabel_o *)v23->fields.mPanel;
      if ( !mPanel )
        goto LABEL_144;
      if ( UIPanel__get_height((UIPanel_o *)mPanel, 0) > 430.0 )
      {
        if ( !this->fields.isEquip )
          goto LABEL_62;
        v24 = (UnityEngine_Object_o *)this->fields.npRoot;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
        if ( UnityEngine_Object__op_Equality(v24, 0, 0) )
        {
          mPanel = (UILabel_o *)this->fields.AbillityScrollView;
          if ( !mPanel )
            goto LABEL_144;
          v25 = 1110966272;
        }
        else
        {
LABEL_62:
          mPanel = (UILabel_o *)this->fields.AbillityScrollView;
          if ( !mPanel )
            goto LABEL_144;
          v25 = -1034158080;
        }
        v33 = *(float *)&v25;
        v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
        GameObjectExtensions__SetLocalPositionY(v34, v33, 0);
        v35 = this->fields.AbillityScrollView;
        if ( !v35 )
          goto LABEL_144;
        mPanel = (UILabel_o *)v35->fields.mPanel;
        if ( !mPanel )
          goto LABEL_144;
        ((void (__fastcall *)(UILabel_o *, const MethodInfo *, double, float, float, float))mPanel->klass->vtable._18_SetRect.methodPtr)(
          mPanel,
          mPanel->klass->vtable._18_SetRect.method,
          0.0,
          -127.0,
          670.0,
          430.0);
        GameObjectExtensions__SetLocalPositionY(this->fields.abillityScrollBarObject, -238.0, 0);
        v36 = this->fields.AbillityScrollView;
        if ( !v36 )
          goto LABEL_144;
        v37 = v36->fields.verticalScrollBar;
        if ( !v37 )
          goto LABEL_144;
        mPanel = (UILabel_o *)v37->fields.mBG;
        if ( !mPanel )
          goto LABEL_144;
        UIWidget__set_height((UIWidget_o *)mPanel, 430, 0);
        v38 = this->fields.AbillityScrollView;
        if ( !v38 )
          goto LABEL_144;
        v39 = v38->fields.verticalScrollBar;
        if ( !v39 )
          goto LABEL_144;
        mPanel = (UILabel_o *)v39->fields.mFG;
        if ( !mPanel )
          goto LABEL_144;
        UIWidget__set_height((UIWidget_o *)mPanel, 430, 0);
      }
    }
    mPanel = (UILabel_o *)this->fields.buffListView;
    if ( !mPanel )
      goto LABEL_144;
    BattleViewBufflistComponent__UpdateBuffListScrollView((BattleViewBufflistComponent_o *)mPanel, 0, 0);
    BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
    if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0, 0) || BattleServantConfConponent__SetAtlas(this, v4) )
    {
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_144;
      mPanel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
      if ( !mPanel )
        goto LABEL_144;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 1, 0);
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_144;
      UISprite__set_atlas((UISprite_o *)mPanel, this->fields.BattleAssetUIAtlas, 0);
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_144;
      UISprite__set_spriteName((UISprite_o *)mPanel, (System_String_o *)StringLiteral_22323/*"line_whiteAlpha_Noblur"*/, 0);
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_144;
      ((void (__fastcall *)(UILabel_o *, __int64, const char *))mPanel->klass[1]._1.name)(
        mPanel,
        1,
        mPanel->klass[1]._1.namespaze);
      BattleServantConfConponent__GetAttributeValue(this, &personality[1], personality, v42);
      mPanel = (UILabel_o *)this->fields.bsvtData;
      if ( !mPanel )
        goto LABEL_144;
      mPanel = (UILabel_o *)BattleServantData__GetHideStatePolicy((BattleServantData_o *)mPanel, 0);
      if ( !this->fields.bsvtData )
        goto LABEL_144;
      v43 = (int)mPanel;
      mPanel = (UILabel_o *)BattleServantData__GetHideStatePersonality(this->fields.bsvtData, 0);
      if ( !this->fields.bsvtData )
        goto LABEL_144;
      v44 = (int)mPanel;
      HideStateSubAttribute = BattleServantData__GetHideStateSubAttribute(this->fields.bsvtData, 0);
      v46 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v46,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
      if ( v43 != 3 )
      {
        mPanel = (UILabel_o *)this->fields.bsvtData;
        if ( !mPanel )
          goto LABEL_144;
        OverwritePolicy = BattleServantData__GetOverwritePolicy((BattleServantData_o *)mPanel, 0);
        IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(OverwritePolicy, 0);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( (v13 & ((personality[1] | v43) == 0)) != 0 )
            v43 = 2;
          if ( personality[1] )
          {
            v50 = System_Int32__ToString((int32_t)&personality[1], 0);
            v52 = System_String__Concat_75651716((System_String_o *)StringLiteral_12173/*"SERVANT_POLICY_"*/, v50, 0);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
            IsNullOrEmpty = LocalizationManager__Get(v52, 0);
            OverwritePolicy = IsNullOrEmpty;
          }
        }
        HideStr = BattleServantConfConponent__GetHideStr(
                    (BattleServantConfConponent_o *)IsNullOrEmpty,
                    v43,
                    OverwritePolicy,
                    v49);
        mPanel = (UILabel_o *)System_String__IsNullOrEmpty(HideStr, 0);
        if ( ((unsigned __int8)mPanel & 1) == 0 )
        {
          if ( !v46 )
            goto LABEL_144;
          items = v46->fields._items;
          v61 = Method_System_Collections_Generic_List_string__Add__;
          ++v46->fields._version;
          if ( !items )
            goto LABEL_144;
          size = v46->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v46,
              (Il2CppObject *)HideStr,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
          }
          else
          {
            v63 = &items->obj.klass + size;
            v46->fields._size = size + 1;
            v63[4] = (Il2CppClass *)HideStr;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v63 + 4), (int32_t)HideStr, v54, v55, v56, v57, v58, v59);
          }
        }
      }
      if ( v44 != 3 )
      {
        mPanel = (UILabel_o *)this->fields.bsvtData;
        if ( !mPanel )
          goto LABEL_144;
        OverwritePersonality = BattleServantData__GetOverwritePersonality((BattleServantData_o *)mPanel, 0);
        v65 = (System_String_o *)System_String__IsNullOrEmpty(OverwritePersonality, 0);
        if ( ((unsigned __int8)v65 & 1) != 0 )
        {
          if ( (v13 & ((personality[0] | v44) == 0)) != 0 )
            v44 = 2;
          if ( personality[0] )
          {
            v67 = System_Int32__ToString((int32_t)personality, 0);
            v69 = System_String__Concat_75651716((System_String_o *)StringLiteral_12172/*"SERVANT_PERSONALITY_"*/, v67, 0);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v68);
            v65 = LocalizationManager__Get(v69, 0);
            OverwritePersonality = v65;
          }
        }
        v70 = BattleServantConfConponent__GetHideStr(
                (BattleServantConfConponent_o *)v65,
                v44,
                OverwritePersonality,
                v66);
        mPanel = (UILabel_o *)System_String__IsNullOrEmpty(v70, 0);
        if ( ((unsigned __int8)mPanel & 1) == 0 )
        {
          if ( !v46 )
            goto LABEL_144;
          v77 = v46->fields._items;
          v78 = Method_System_Collections_Generic_List_string__Add__;
          ++v46->fields._version;
          if ( !v77 )
            goto LABEL_144;
          v79 = v46->fields._size;
          if ( (unsigned int)v79 >= LODWORD(v77->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v46,
              (Il2CppObject *)v70,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
          }
          else
          {
            v80 = &v77->obj.klass + v79;
            v46->fields._size = v79 + 1;
            v80[4] = (Il2CppClass *)v70;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v80 + 4), (int32_t)v70, v71, v72, v73, v74, v75, v76);
          }
        }
      }
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
      v81 = LocalizationManager__Get((System_String_o *)StringLiteral_12086/*"SERVANT_ATTRIBUTE_SPLIT"*/, 0);
      v82 = (Il2CppObject *)System_String__Join_75699092(
                              v81,
                              (System_Collections_Generic_IEnumerable_string__o *)v46,
                              0);
      v83 = (System_String_o *)StringLiteral_1/*""*/;
      if ( HideStateSubAttribute != 3 )
      {
        mPanel = (UILabel_o *)this->fields.bsvtData;
        if ( !mPanel )
          goto LABEL_144;
        OverwriteSubAttribute = BattleServantData__GetOverwriteSubAttribute((BattleServantData_o *)mPanel, 0);
        Attri = (System_String_o *)System_String__IsNullOrEmpty(OverwriteSubAttribute, 0);
        if ( ((unsigned __int8)Attri & 1) != 0 )
        {
          mPanel = (UILabel_o *)this->fields.bsvtData;
          if ( !mPanel )
            goto LABEL_144;
          Attri = (System_String_o *)BattleServantData__getAttri((BattleServantData_o *)mPanel, 0);
          v99 = (int)Attri;
          if ( (v13 & (((unsigned int)Attri | HideStateSubAttribute) == 0)) != 0 )
            HideStateSubAttribute = 2;
          if ( (_DWORD)Attri )
          {
            v87 = System_Int32__ToString((int32_t)&v99, 0);
            v89 = System_String__Concat_75651716((System_String_o *)StringLiteral_12521/*"SERVANT_SUB_ATTRIBUTE_"*/, v87, 0);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v88);
            Attri = LocalizationManager__Get(v89, 0);
            OverwriteSubAttribute = Attri;
          }
        }
        v90 = BattleServantConfConponent__GetHideStr(
                (BattleServantConfConponent_o *)Attri,
                HideStateSubAttribute,
                OverwriteSubAttribute,
                v86);
        if ( !System_String__IsNullOrEmpty(v90, 0) )
          v83 = v90;
      }
      if ( System_String__IsNullOrEmpty((System_String_o *)v82, 0) )
      {
        v92 = this->fields.attributeLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v91);
        v93 = LocalizationManager__Get((System_String_o *)StringLiteral_12083/*"SERVANT_ATTRIBUTE_FORMAT_SUB_ATTRIBUTE"*/, 0);
        v94 = (Il2CppObject *)v83;
      }
      else
      {
        v96 = System_String__IsNullOrEmpty(v83, 0);
        v92 = this->fields.attributeLabel;
        v97 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
        if ( !v96 )
        {
          if ( !v97 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v95);
          v98 = LocalizationManager__Get((System_String_o *)StringLiteral_12081/*"SERVANT_ATTRIBUTE_FORMAT"*/, 0);
          mPanel = (UILabel_o *)System_String__Format_75697880(v98, v82, (Il2CppObject *)v83, 0);
          if ( !v92 )
            goto LABEL_144;
          goto LABEL_139;
        }
        if ( !v97 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v95);
        v93 = LocalizationManager__Get((System_String_o *)StringLiteral_12082/*"SERVANT_ATTRIBUTE_FORMAT_ATTRIBUTE"*/, 0);
        v94 = v82;
      }
      mPanel = (UILabel_o *)System_String__Format(v93, v94, 0);
      if ( !v92 )
        goto LABEL_144;
LABEL_139:
      UILabel__set_text(v92, (System_String_o *)mPanel, 0);
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
  struct BattleServantClassBoardSkillEffectListComponent_o *v7; // x0
  struct BattleServantData_o *bsvtData; // x8
  __int64 v9; // x1
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  const MethodInfo *v11; // x4
  BattleServantConfWindowPassiveSkillListComponent_o *v12; // x8

  if ( (byte_59741B4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_22633/*"menu_txt_class_score"*/);
    byte_59741B4 = 1;
  }
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, battleInfoData);
  if ( !UnityEngine_Object__op_Equality(classBoardSkillObj, 0, 0) )
  {
    v7 = this->fields.classBoardSkillObj;
    if ( !v7 )
      goto LABEL_18;
    BattleServantConfWindowPassiveSkillListComponent__SetActive(
      (BattleServantConfWindowPassiveSkillListComponent_o *)v7,
      0,
      0);
    bsvtData = this->fields.bsvtData;
    if ( bsvtData
      && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)bsvtData->fields.classBoardAddPassiveSkills, 0) )
    {
      BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0, 0) || BattleServantConfConponent__SetAtlas(this, v6) )
      {
        v7 = this->fields.classBoardSkillObj;
        if ( v7 )
        {
          ((void (__fastcall *)(struct BattleServantClassBoardSkillEffectListComponent_o *, struct UIAtlas_o *, __int64, const MethodInfo *))v7->klass->vtable._5_SetSkillTitle.methodPtr)(
            v7,
            this->fields.BattleAssetUIAtlas,
            StringLiteral_22633/*"menu_txt_class_score"*/,
            v7->klass->vtable._5_SetSkillTitle.method);
          v7 = this->fields.classBoardSkillObj;
          if ( v7 )
          {
            v7 = (struct BattleServantClassBoardSkillEffectListComponent_o *)BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
                                                                               v7,
                                                                               this->fields.bsvtData,
                                                                               battleInfoData,
                                                                               0,
                                                                               v11);
            v12 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
            if ( v12 )
            {
              BattleServantConfWindowPassiveSkillListComponent__SetActive(v12, (unsigned __int8)v7 & 1, 0);
              return;
            }
          }
        }
LABEL_18:
        sub_2213CDC(v7, v6);
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
  System_Int32_array *ClassPassiveSkillIdsForDisplay; // x1
  __int64 bsvtData; // x0
  UnityEngine_Object_o *ClassSkillListParent; // x21
  __int64 v9; // x1
  UnityEngine_Object_o *ClassSkillInfoPrefab; // x21
  __int64 v11; // x1
  UnityEngine_Object_c *v12; // x0
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  struct BattleServantData_o *v14; // x8
  __int64 v15; // x21
  __int64 v16; // x22
  int32_t v17; // w0
  struct BattleServantData_o *v18; // x8
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t userSvtId; // x1
  __int128 v21; // q1
  BattleUserServantData_o *v22; // x21
  struct BattleServantData_o *v23; // x8
  __int64 v24; // x20
  __int64 v25; // x22
  const MethodInfo *v26; // x2
  struct BattleServantData_o *v27; // x8
  __int64 v28; // x20
  __int64 v29; // x22
  System_Collections_Generic_IEnumerable_T__o *v30; // x22
  System_Collections_Generic_List_int__o *v31; // x20
  BattleServantData_o *v32; // x22
  System_Collections_ICollection_o *v33; // x21
  const MethodInfo *v34; // x2
  int32_t v35; // w21
  Il2CppObject *Master_object; // x21
  Il2CppObject *v37; // x23
  const MethodInfo *v38; // x2
  __int64 v39; // x1
  float v40; // s8
  int32_t v41; // w22
  int32_t v42; // w26
  int32_t v43; // w27
  System_String_o *v44; // x28
  System_String_o *Detail_49901180; // x29
  UnityEngine_GameObject_o *v46; // x24
  Il2CppObject *v47; // x21
  Il2CppObject *v48; // x23
  UnityEngine_Transform_o *v49; // x23
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Transform_o *v53; // x23
  __int64 v57; // x1
  Il2CppObject *Component_object; // x24
  float v59; // s0
  Il2CppObject *v60; // [xsp+8h] [xbp-D8h]
  System_String_o *str1; // [xsp+10h] [xbp-D0h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+40h] [xbp-A0h]
  SkillLvEntity_o *v65; // [xsp+68h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59741A5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__InsertRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&StringLiteral_21629/*"img_txt_classskill"*/);
    sub_2213A60(&StringLiteral_10510/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/);
    byte_59741A5 = 1;
  }
  ClassSkillObj = (UnityEngine_Object_o *)this->fields.ClassSkillObj;
  entity = 0;
  v65 = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, battleInfoData);
  if ( UnityEngine_Object__op_Inequality(ClassSkillObj, 0, 0) )
  {
    bsvtData = (__int64)this->fields.ClassSkillObj;
    if ( !bsvtData )
      goto LABEL_65;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0);
  }
  if ( battleInfoData )
  {
    ClassSkillListParent = (UnityEngine_Object_o *)this->fields.ClassSkillListParent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, ClassPassiveSkillIdsForDisplay);
    if ( !UnityEngine_Object__op_Equality(ClassSkillListParent, 0, 0) && this->fields.bsvtData )
    {
      ClassSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.ClassSkillInfoPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      if ( !UnityEngine_Object__op_Equality(ClassSkillInfoPrefab, 0, 0) )
      {
        bsvtData = (__int64)this->fields.bsvtData;
        if ( !bsvtData )
          goto LABEL_65;
        if ( !BattleServantData__IsHideClassSkillNpcFollower((BattleServantData_o *)bsvtData, 0) )
        {
          v12 = UnityEngine_Object_TypeInfo;
          BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
          this->fields.ClassSkillOffset = 0.0;
          if ( !*(&v12->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v12, v11);
          if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0, 0)
            || BattleServantConfConponent__SetAtlas(this, (const MethodInfo *)ClassPassiveSkillIdsForDisplay) )
          {
            bsvtData = (__int64)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_65;
            UISprite__set_atlas((UISprite_o *)bsvtData, this->fields.BattleAssetUIAtlas, 0);
            bsvtData = (__int64)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_65;
            UISprite__set_spriteName((UISprite_o *)bsvtData, (System_String_o *)StringLiteral_21629/*"img_txt_classskill"*/, 0);
            bsvtData = (__int64)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_65;
            bsvtData = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bsvtData + 840LL))(
                         bsvtData,
                         *(_QWORD *)(*(_QWORD *)bsvtData + 848LL));
            v14 = this->fields.bsvtData;
            if ( !v14 )
              goto LABEL_65;
            v15 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
            v16 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                ClassPassiveSkillIdsForDisplay);
            *(_QWORD *)&v67.fields.currentCryptoKey = v15;
            *(_QWORD *)&v67.fields.fakeValue = v16;
            v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v67, 0);
            bsvtData = BattleInfoData__IsUseNewTransformLogic(battleInfoData, v17, 0);
            v18 = this->fields.bsvtData;
            if ( (bsvtData & 1) != 0 )
            {
              if ( !v18 )
                goto LABEL_65;
              deckSvt = v18->fields.deckSvt;
              if ( !deckSvt )
                goto LABEL_65;
              userSvtId = deckSvt->fields.userSvtId;
            }
            else
            {
              if ( !v18 )
                goto LABEL_65;
              v21 = *(_OWORD *)&v18->fields.userSvtId.fields.fakeValue;
              *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&v18->fields.userSvtId.fields.currentCryptoKey;
              *(_OWORD *)&v64.fields.fakeValue = v21;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                  ClassPassiveSkillIdsForDisplay);
              v63 = v64;
              userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v63, 0);
            }
            bsvtData = (__int64)BattleInfoData__getUserServantFromID(battleInfoData, userSvtId, 0);
            v22 = (BattleUserServantData_o *)bsvtData;
            if ( !bsvtData )
              return;
            v23 = this->fields.bsvtData;
            if ( !v23 )
              goto LABEL_65;
            v24 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
            v25 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                ClassPassiveSkillIdsForDisplay);
            *(_QWORD *)&v68.fields.currentCryptoKey = v24;
            *(_QWORD *)&v68.fields.fakeValue = v25;
            bsvtData = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v68, 0);
            if ( (_DWORD)bsvtData == 600700 )
              goto LABEL_45;
            v27 = this->fields.bsvtData;
            if ( !v27 )
              goto LABEL_65;
            v28 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
            v29 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                ClassPassiveSkillIdsForDisplay);
            *(_QWORD *)&v69.fields.currentCryptoKey = v28;
            *(_QWORD *)&v69.fields.fakeValue = v29;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v69, 0) == 600710 )
LABEL_45:
              ClassPassiveSkillIdsForDisplay = BattleServantConfConponent__GetClassPassiveSkillIdsForDisplay(
                                                 this,
                                                 v22,
                                                 v26);
            else
              ClassPassiveSkillIdsForDisplay = v22->fields.classPassive;
            bsvtData = (__int64)this->fields.bsvtData;
            if ( !bsvtData
              || (v30 = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__FilterDisplayingSkillIdArray(
                                                                         (BattleServantData_o *)bsvtData,
                                                                         ClassPassiveSkillIdsForDisplay,
                                                                         1,
                                                                         0),
                  v31 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo),
                  System_Collections_Generic_List_int____ctor_71723804(
                    v31,
                    v30,
                    (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480),
                  v32 = this->fields.bsvtData,
                  bsvtData = (__int64)BattleUserServantData__getAddPassiveSkill(v22, 0),
                  !v32) )
            {
LABEL_65:
              sub_2213CDC(bsvtData, ClassPassiveSkillIdsForDisplay);
            }
            v33 = (System_Collections_ICollection_o *)BattleServantData__FilterDisplayingSkillIdArray(
                                                        v32,
                                                        (System_Int32_array *)bsvtData,
                                                        0,
                                                        0);
            bsvtData = BasicHelper__IsNullOrEmpty(v33, 0);
            if ( (bsvtData & 1) != 0 )
            {
              if ( !v31 )
                goto LABEL_65;
            }
            else
            {
              bsvtData = BattleServantConfConponent__GetSpecialPassiveSkillStartIndex(this, v31, v34);
              if ( !v31 )
                goto LABEL_65;
              System_Collections_Generic_List_int___InsertRange(
                v31,
                bsvtData,
                (System_Collections_Generic_IEnumerable_T__o *)v33,
                (const MethodInfo_4468214 *)Method_System_Collections_Generic_List_int__InsertRange__);
            }
            if ( v31->fields._size >= 1 )
            {
              bsvtData = (__int64)this->fields.ClassSkillObj;
              if ( bsvtData )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0);
                bsvtData = (__int64)this->fields.ClassSkillListParent;
                if ( bsvtData )
                {
                  v35 = 0;
                  while ( 1 )
                  {
                    bsvtData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)bsvtData, 0);
                    if ( !bsvtData )
                      goto LABEL_65;
                    if ( v35 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0) )
                      break;
                    bsvtData = (__int64)this->fields.ClassSkillListParent;
                    if ( bsvtData )
                    {
                      bsvtData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)bsvtData, 0);
                      if ( bsvtData )
                      {
                        bsvtData = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)bsvtData, v35, 0);
                        if ( bsvtData )
                        {
                          bsvtData = (__int64)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)bsvtData,
                                                0);
                          if ( bsvtData )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0);
                            bsvtData = (__int64)this->fields.ClassSkillListParent;
                            ++v35;
                            if ( bsvtData )
                              continue;
                          }
                        }
                      }
                    }
                    goto LABEL_65;
                  }
                  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, ClassPassiveSkillIdsForDisplay);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
                  entity = 0;
                  v37 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
                  v65 = 0;
                  source = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantConfConponent__GetNeedAddAnnotationSkillIds(
                                                                                  this,
                                                                                  (System_Collections_Generic_IEnumerable_int__o *)v31,
                                                                                  v38);
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
                  str1 = LocalizationManager__Get((System_String_o *)StringLiteral_10510/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/, 0);
                  if ( v31->fields._size < 1 )
                  {
                    v59 = 1.0;
                  }
                  else
                  {
                    v40 = 0.0;
                    v41 = 0;
                    v42 = 0;
                    v60 = Master_object;
                    do
                    {
                      bsvtData = System_Collections_Generic_List_int___get_Item(
                                   v31,
                                   v42,
                                   (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
                      if ( (int)bsvtData >= 1 )
                      {
                        if ( !Master_object )
                          goto LABEL_65;
                        v43 = bsvtData;
                        bsvtData = DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     &entity,
                                     bsvtData,
                                     (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                        if ( (bsvtData & 1) == 0 )
                          return;
                        if ( !v37 )
                          goto LABEL_65;
                        if ( !SkillLvMaster__TryGetEntity((SkillLvMaster_o *)v37, &v65, v43, 1, 0) )
                          return;
                        bsvtData = (__int64)entity;
                        if ( !entity )
                          goto LABEL_65;
                        bsvtData = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0);
                        if ( !v65 )
                          goto LABEL_65;
                        v44 = (System_String_o *)bsvtData;
                        Detail_49901180 = SkillLvEntity__getDetail_49901180(v65, 1, 0, 0);
                        if ( System_Linq_Enumerable__Contains_int_(
                               source,
                               v43,
                               (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
                        {
                          Detail_49901180 = System_String__Concat_75651716(Detail_49901180, str1, 0);
                        }
                        bsvtData = (__int64)this->fields.ClassSkillListParent;
                        if ( !bsvtData )
                          goto LABEL_65;
                        bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)bsvtData,
                                              0);
                        if ( !bsvtData )
                          goto LABEL_65;
                        if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0) <= v41 )
                        {
                          v47 = v37;
                          v48 = (Il2CppObject *)this->fields.ClassSkillInfoPrefab;
                          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, ClassPassiveSkillIdsForDisplay);
                          bsvtData = (__int64)UnityEngine_Object__Instantiate_object_(
                                                v48,
                                                (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
                          if ( !bsvtData )
                            goto LABEL_65;
                          v46 = (UnityEngine_GameObject_o *)bsvtData;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0);
                          bsvtData = (__int64)UnityEngine_GameObject__get_transform(v46, 0);
                          if ( !this->fields.ClassSkillListParent )
                            goto LABEL_65;
                          v49 = (UnityEngine_Transform_o *)bsvtData;
                          bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                                this->fields.ClassSkillListParent,
                                                0);
                          if ( !v49 )
                            goto LABEL_65;
                          UnityEngine_Transform__set_parent(v49, (UnityEngine_Transform_o *)bsvtData, 0);
                          bsvtData = (__int64)UnityEngine_GameObject__get_transform(v46, 0);
                          if ( !bsvtData )
                            goto LABEL_65;
                          v71.fields.y = -v40;
                          v71.fields.x = 0.0;
                          v71.fields.z = 0.0;
                          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v71, 0);
                          transform = UnityEngine_GameObject__get_transform(v46, 0);
                          v72.fields.x = sub_2417914(0);
                          if ( !transform )
                            goto LABEL_65;
                          UnityEngine_Transform__set_localScale(transform, v72, 0);
                          v53 = UnityEngine_GameObject__get_transform(v46, 0);
                          bsvtData = sub_2B9EAA4(0);
                          if ( !v53 )
                            goto LABEL_65;
                          UnityEngine_Transform__set_localRotation(v53, v73, 0);
                          v37 = v47;
                          Master_object = v60;
                        }
                        else
                        {
                          bsvtData = (__int64)this->fields.ClassSkillListParent;
                          if ( !bsvtData )
                            goto LABEL_65;
                          bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)bsvtData,
                                                0);
                          if ( !bsvtData )
                            goto LABEL_65;
                          bsvtData = (__int64)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)bsvtData,
                                                v41,
                                                0);
                          if ( !bsvtData )
                            goto LABEL_65;
                          bsvtData = (__int64)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)bsvtData,
                                                0);
                          if ( !bsvtData )
                            goto LABEL_65;
                          v46 = (UnityEngine_GameObject_o *)bsvtData;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0);
                          bsvtData = (__int64)UnityEngine_GameObject__get_transform(v46, 0);
                          if ( !bsvtData )
                            goto LABEL_65;
                          v70.fields.y = -v40;
                          v70.fields.x = 0.0;
                          v70.fields.z = 0.0;
                          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v70, 0);
                        }
                        Component_object = UnityEngine_GameObject__GetComponent_object_(
                                             v46,
                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
                        bsvtData = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
                        if ( (bsvtData & 1) != 0 )
                        {
                          if ( !Component_object )
                            goto LABEL_65;
                          BattleServantConfSkillComponent__SetItem(
                            (BattleServantConfSkillComponent_o *)Component_object,
                            v42 + 1,
                            v43,
                            v44,
                            Detail_49901180,
                            1,
                            0,
                            0);
                        }
                        else if ( !Component_object )
                        {
                          goto LABEL_65;
                        }
                        ++v41;
                        v40 = v40
                            + (float)((float)(BattleServantConfSkillComponent__GetHeight(
                                                (BattleServantConfSkillComponent_o *)Component_object,
                                                0)
                                            - HIDWORD(Component_object[5].klass))
                                    + 110.0);
                      }
                      ++v42;
                    }
                    while ( v42 < v31->fields._size );
                    v59 = v40 + 1.0;
                  }
                  this->fields.ClassSkillOffset = -v59;
                  return;
                }
              }
              goto LABEL_65;
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
  int32_t *m_Items; // x25
  unsigned __int64 max_length_low; // x9
  BattleCommandComponent_o *v11; // x22
  BattleServantData_o *v12; // x1
  const MethodInfo *v13; // x2
  struct BattleCommandData_o *data; // x8
  Il2CppObject *component; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_59741AA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_TryGetComponent_UIWidget___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59741AA = 1;
  }
  bsvtData = this->fields.bsvtData;
  component = 0;
  if ( bsvtData && this->fields.CommandCardList )
  {
    CommandCodeIdsEX = BattleServantData__GetCommandCodeIdsEX(bsvtData, 0);
    CommandCardList = this->fields.CommandCardList;
    this->fields.isCommandCardUnderIcon = 0;
    if ( !CommandCardList )
LABEL_23:
      sub_2213CDC(CommandCodeIdsEX, v5);
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
      CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v11, 0, 0);
      if ( ((unsigned __int8)CommandCodeIdsEX & 1) == 0 )
      {
        if ( !v11 )
          goto LABEL_23;
        BattleCommandComponent__Initialize(v11, 0);
        v12 = this->fields.bsvtData;
        v11->fields.isCodeTextureView = 1;
        BattleCommandComponent__setData_53600908(v11, v12, v8, 0);
        CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Component__TryGetComponent_object_(
                                                   (UnityEngine_Component_o *)this,
                                                   &component,
                                                   (const MethodInfo_3821BA4 *)Method_UnityEngine_Component_TryGetComponent_UIWidget___);
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
          || (BattleCommandComponent__SetCommandCodeView_53605208(v11, m_Items[v8], 0), v8 >= LODWORD(v7->max_length))
          || (BattleCommandComponent__SetLockInfo(v11, m_Items[v8] == -1, 0),
              BattleServantConfConponent__SetCommandCardTypeChangeBuff(this, v11, v13),
              BattleCommandComponent__HidePowerUpValueLabelActive(v11, this->fields.isCommandCardUnderIcon, 0),
              BattleCommandComponent__ResetCardBuffIconAlphaAnim(v11, 0),
              BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(v11, 0),
              v8 >= LODWORD(v7->max_length)) )
        {
LABEL_25:
          sub_2213CE4(CommandCodeIdsEX);
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
  BattleBuffData_BuffData_o *v6; // x0
  BattleBuffData_BuffData_o *v7; // x22
  bool IsCommandCardTypeChanged; // w0
  int32_t turn; // w8
  int32_t addOrder; // w3
  int v11; // w8
  int32_t v12; // w2

  if ( !commandCard )
    sub_2213CDC(this, 0);
  data = commandCard->fields.data;
  if ( data )
  {
    if ( BattleCommandData__isTreasureDvc(commandCard->fields.data, 0)
      || (v6 = BattleCommandData__GetCommandCardTypeChangeBuff(data, 0)) == 0 )
    {
      addOrder = 0;
      v12 = 0;
      LOBYTE(data) = 0;
    }
    else
    {
      v7 = v6;
      IsCommandCardTypeChanged = BattleCommandData__IsCommandCardTypeChanged(data, 0);
      turn = v7->fields.turn;
      addOrder = v7->fields.addOrder;
      LOBYTE(data) = IsCommandCardTypeChanged;
      if ( turn + 1 >= 0 )
        v11 = turn + 1;
      else
        v11 = turn + 2;
      v12 = v11 >> 1;
      this->fields.isCommandCardUnderIcon = 1;
    }
  }
  else
  {
    addOrder = 0;
    v12 = 0;
  }
  BattleCommandComponent__SetCommandCardTypeChange(commandCard, (unsigned __int8)data & 1, v12, addOrder, 0);
  BattleCommandComponent__SetActiveSpecialCardBuffIcon(commandCard, (unsigned __int8)data & 1, 0);
}


void BattleServantConfConponent__SetCommandCodeSkillList(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *CommandCodeListParent; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *CommandCodeInfoPrefab; // x20
  __int64 v6; // x1
  __int64 transform; // x0
  int32_t v8; // w20
  __int64 v9; // x1
  System_Int32_array *CommandCodeIds; // x24
  BattleServantConfConponent___c_c *v11; // x8
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x9
  System_Predicate_int__o *_9__88_0; // x21
  Il2CppObject *v14; // x22
  struct BattleServantConfConponent___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t Index_int; // w8
  il2cpp_array_size_t max_length; // x8
  float v24; // s8
  int32_t v25; // w22
  unsigned __int64 v26; // x29
  int32_t v27; // w25
  System_Int32_array *v28; // x8
  unsigned __int64 v29; // x24
  unsigned __int64 max_length_low; // x9
  UnityEngine_GameObject_o *v31; // x26
  Il2CppObject *v32; // x26
  UnityEngine_Transform_o *v33; // x27
  UnityEngine_Transform_o *v34; // x27
  UnityEngine_Transform_o *v35; // x27
  __int64 v36; // x1
  Il2CppObject *Component_object; // x26
  float v38; // s0
  __int64 v39; // x1
  UILabel_o *NoCommandCodeLabel; // x19
  System_Int32_array *v41; // [xsp+0h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+8h] [xbp-88h]
  System_String_array *explanationList; // [xsp+10h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59741AB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_FindIndex_int___);
    sub_2213A60(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__88_0__);
    sub_2213A60(&BattleServantConfConponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_2854/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/);
    byte_59741AB = 1;
  }
  CommandCodeListParent = (UnityEngine_Object_o *)this->fields.CommandCodeListParent;
  idList = 0;
  explanationList = 0;
  titleList = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(CommandCodeListParent, 0, 0) || !this->fields.bsvtData )
    return;
  CommandCodeInfoPrefab = (UnityEngine_Object_o *)this->fields.CommandCodeInfoPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Equality(CommandCodeInfoPrefab, 0, 0) )
    return;
  transform = (__int64)this->fields.CommandCodeInfoPrefab;
  if ( !transform )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  transform = (__int64)this->fields.CommandCodeListParent;
  if ( !transform )
    goto LABEL_20;
  v8 = 0;
  while ( 1 )
  {
    transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
    if ( !transform )
      goto LABEL_20;
    if ( v8 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0) )
      break;
    transform = (__int64)this->fields.CommandCodeListParent;
    if ( transform )
    {
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
      if ( transform )
      {
        transform = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v8, 0);
        if ( transform )
        {
          transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
          if ( transform )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
            transform = (__int64)this->fields.CommandCodeListParent;
            ++v8;
            if ( transform )
              continue;
          }
        }
      }
    }
    goto LABEL_20;
  }
  transform = (__int64)this->fields.bsvtData;
  if ( !transform )
LABEL_20:
    sub_2213CDC(transform, v6);
  CommandCodeIds = BattleServantData__GetCommandCodeIds((BattleServantData_o *)transform, 0);
  v11 = BattleServantConfConponent___c_TypeInfo;
  if ( !*(&BattleServantConfConponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo, v9);
    v11 = BattleServantConfConponent___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__88_0 = static_fields->__9__88_0;
  if ( !_9__88_0 )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, v9);
      static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__88_0 = (System_Predicate_int__o *)sub_2213CCC(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__88_0,
      v14,
      Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__88_0__,
      0);
    v15 = BattleServantConfConponent___c_TypeInfo->static_fields;
    v15->__9__88_0 = _9__88_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__88_0, (int32_t)_9__88_0, v16, v17, v18, v19, v20, v21);
  }
  Index_int = System_Array__FindIndex_int_(
                CommandCodeIds,
                (System_Predicate_T__o *)_9__88_0,
                (const MethodInfo_39A9D14 *)Method_System_Array_FindIndex_int___);
  transform = (__int64)this->fields.NoCommandCodeLabel;
  if ( Index_int == -1 )
  {
    if ( transform )
    {
      transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
      if ( transform )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
        NoCommandCodeLabel = this->fields.NoCommandCodeLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
        transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2854/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/, 0);
        if ( NoCommandCodeLabel )
        {
          UILabel__set_text(NoCommandCodeLabel, (System_String_o *)transform, 0);
          return;
        }
      }
    }
    goto LABEL_20;
  }
  if ( !transform )
    goto LABEL_20;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_20;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)transform,
                                                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_20;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !CommandCodeIds )
    goto LABEL_20;
  max_length = CommandCodeIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v24 = 0.0;
    v25 = 0;
    v26 = 0;
    v41 = CommandCodeIds;
    do
    {
      if ( v26 >= (unsigned int)max_length )
LABEL_91:
        sub_2213CE4(transform);
      v27 = CommandCodeIds->m_Items[v26];
      if ( v27 >= 1 )
      {
        transform = (__int64)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_20;
        transform = (__int64)DataMasterBase_object__object__int___GetEntity(
                               MasterData_object,
                               v27,
                               (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( transform )
        {
          CommandCodeEntity__GetSkillInfo((CommandCodeEntity_o *)transform, &idList, &titleList, &explanationList, 0);
          v28 = idList;
          if ( !idList )
            goto LABEL_20;
          v29 = 0;
          while ( 1 )
          {
            max_length_low = LODWORD(v28->max_length);
            if ( (__int64)v29 >= (int)max_length_low )
              break;
            if ( v29 >= max_length_low )
              goto LABEL_91;
            if ( v28->m_Items[v29] >= 1 )
            {
              transform = (__int64)this->fields.CommandCodeListParent;
              if ( !transform )
                goto LABEL_20;
              transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
              if ( !transform )
                goto LABEL_20;
              if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0) <= v25 )
              {
                v32 = (Il2CppObject *)this->fields.CommandCodeInfoPrefab;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
                transform = (__int64)UnityEngine_Object__Instantiate_object_(
                                       v32,
                                       (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
                if ( !transform )
                  goto LABEL_20;
                v31 = (UnityEngine_GameObject_o *)transform;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
                transform = (__int64)UnityEngine_GameObject__get_transform(v31, 0);
                if ( !this->fields.CommandCodeListParent )
                  goto LABEL_20;
                v33 = (UnityEngine_Transform_o *)transform;
                transform = (__int64)UnityEngine_GameObject__get_transform(this->fields.CommandCodeListParent, 0);
                if ( !v33 )
                  goto LABEL_20;
                UnityEngine_Transform__set_parent(v33, (UnityEngine_Transform_o *)transform, 0);
                transform = (__int64)UnityEngine_GameObject__get_transform(v31, 0);
                if ( !transform )
                  goto LABEL_20;
                v46.fields.x = 0.0;
                v46.fields.z = 0.0;
                v46.fields.y = v24;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v46, 0);
                transform = (__int64)UnityEngine_GameObject__get_transform(v31, 0);
                v34 = (UnityEngine_Transform_o *)transform;
                if ( !byte_5969AE5 )
                {
                  transform = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
                  byte_5969AE5 = 1;
                }
                if ( !v34 )
                  goto LABEL_20;
                UnityEngine_Transform__set_localScale(v34, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
                transform = (__int64)UnityEngine_GameObject__get_transform(v31, 0);
                v35 = (UnityEngine_Transform_o *)transform;
                if ( !byte_5969AE6 )
                {
                  transform = sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
                  byte_5969AE6 = 1;
                }
                if ( !v35 )
                  goto LABEL_20;
                UnityEngine_Transform__set_localRotation(
                  v35,
                  UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                  0);
              }
              else
              {
                transform = (__int64)this->fields.CommandCodeListParent;
                if ( !transform )
                  goto LABEL_20;
                transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
                if ( !transform )
                  goto LABEL_20;
                transform = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v25, 0);
                if ( !transform )
                  goto LABEL_20;
                transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
                if ( !transform )
                  goto LABEL_20;
                v31 = (UnityEngine_GameObject_o *)transform;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
              }
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   v31,
                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
              transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
              if ( (transform & 1) != 0 )
              {
                if ( !idList )
                  goto LABEL_20;
                if ( v29 >= LODWORD(idList->max_length) )
                  goto LABEL_91;
                if ( !titleList )
                  goto LABEL_20;
                if ( v29 >= LODWORD(titleList->max_length) )
                  goto LABEL_91;
                if ( !explanationList )
                  goto LABEL_20;
                if ( v29 >= LODWORD(explanationList->max_length) )
                  goto LABEL_91;
                if ( !Component_object )
                  goto LABEL_20;
                CommandCodeSkillInfo__Set(
                  (CommandCodeSkillInfo_o *)Component_object,
                  v27,
                  idList->m_Items[v29],
                  titleList->m_Items[v29],
                  explanationList->m_Items[v29],
                  v29 == 0,
                  0);
              }
              v38 = -100.0;
              v28 = idList;
              ++v25;
              if ( !v29 )
                v38 = -126.0;
              v24 = v24 + v38;
            }
            ++v29;
            if ( !v28 )
              goto LABEL_20;
          }
          CommandCodeIds = v41;
        }
      }
      LODWORD(max_length) = CommandCodeIds->max_length;
      ++v26;
    }
    while ( (__int64)v26 < (int)max_length );
  }
}


void BattleServantConfConponent__SetGrandClassBoardSkillList(
        BattleServantConfConponent_o *this,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *grandClassBoardSkillObj; // x21
  const MethodInfo *v6; // x1
  struct BattleServantClassBoardSkillEffectListComponent_o *IsNullOrEmpty; // x0
  struct BattleServantData_o *bsvtData; // x8
  struct BattleServantData_o *v9; // x8
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  const MethodInfo *v11; // x4
  BattleServantConfWindowPassiveSkillListComponent_o *v12; // x8

  if ( (byte_59741B5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_22634/*"menu_txt_grand_class_score"*/);
    byte_59741B5 = 1;
  }
  grandClassBoardSkillObj = (UnityEngine_Object_o *)this->fields.grandClassBoardSkillObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, battleInfoData);
  if ( !UnityEngine_Object__op_Equality(grandClassBoardSkillObj, 0, 0) )
  {
    IsNullOrEmpty = this->fields.grandClassBoardSkillObj;
    if ( !IsNullOrEmpty )
      goto LABEL_20;
    BattleServantConfWindowPassiveSkillListComponent__SetActive(
      (BattleServantConfWindowPassiveSkillListComponent_o *)IsNullOrEmpty,
      0,
      0);
    bsvtData = this->fields.bsvtData;
    if ( bsvtData )
    {
      IsNullOrEmpty = (struct BattleServantClassBoardSkillEffectListComponent_o *)BasicHelper__IsNullOrEmpty(
                                                                                    (System_Collections_ICollection_o *)bsvtData->fields.classBoardAddPassiveSkills,
                                                                                    0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        v9 = this->fields.bsvtData;
        if ( !v9 )
          goto LABEL_20;
        if ( v9->fields._IsUseGrandBoard_k__BackingField )
        {
          BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
          if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0, 0)
            || BattleServantConfConponent__SetAtlas(this, v6) )
          {
            IsNullOrEmpty = this->fields.grandClassBoardSkillObj;
            if ( IsNullOrEmpty )
            {
              ((void (__fastcall *)(struct BattleServantClassBoardSkillEffectListComponent_o *, struct UIAtlas_o *, __int64, const MethodInfo *))IsNullOrEmpty->klass->vtable._5_SetSkillTitle.methodPtr)(
                IsNullOrEmpty,
                this->fields.BattleAssetUIAtlas,
                StringLiteral_22634/*"menu_txt_grand_class_score"*/,
                IsNullOrEmpty->klass->vtable._5_SetSkillTitle.method);
              IsNullOrEmpty = this->fields.grandClassBoardSkillObj;
              if ( IsNullOrEmpty )
              {
                IsNullOrEmpty = (struct BattleServantClassBoardSkillEffectListComponent_o *)BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
                                                                                              IsNullOrEmpty,
                                                                                              this->fields.bsvtData,
                                                                                              battleInfoData,
                                                                                              1,
                                                                                              v11);
                v12 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.grandClassBoardSkillObj;
                if ( v12 )
                {
                  BattleServantConfWindowPassiveSkillListComponent__SetActive(
                    v12,
                    (unsigned __int8)IsNullOrEmpty & 1,
                    0);
                  return;
                }
              }
            }
LABEL_20:
            sub_2213CDC(IsNullOrEmpty, v6);
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
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_59741AE & 1) == 0 )
  {
    sub_2213A60(&BattleServantConfConponent__StartOpenTab_d__95_TypeInfo);
    byte_59741AE = 1;
  }
  v3 = sub_2213CCC(BattleServantConfConponent__StartOpenTab_d__95_TypeInfo);
  BattleServantConfConponent__StartOpenTab_d__95___ctor((BattleServantConfConponent__StartOpenTab_d__95_o *)v3, 0, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_String_o *BattleServantConfConponent__get_closeBtnPath(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x19
  __int64 *v7; // x8

  if ( (byte_59741B3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18813/*"close"*/);
    sub_2213A60(&StringLiteral_15148/*"Top/close"*/);
    byte_59741B3 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_2213CDC(0, v4);
  v6 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_15148/*"Top/close"*/, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
    v7 = &StringLiteral_15148/*"Top/close"*/;
  else
    v7 = &StringLiteral_18813/*"close"*/;
  return (System_String_o *)*v7;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.callback_close = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callback_close,
    (int32_t)callback,
    (System_String_o *)method,
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
  bool v6; // w6
  bool v7; // w7
  BattleInfoData_o *battle_info; // x24
  BattleServantData_o **p_bsvtData; // x21
  MethodInfo *v14; // x1
  UnityEngine_Object_o *data; // x24
  BattleServantData_o *bsvtData; // x0
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
  int v35; // w9
  __int64 v36; // x1
  UnityEngine_GameObject_o *v37; // x24
  float LocalPositionY; // s0
  UnityEngine_Object_c *v39; // x0
  UnityEngine_Object_o *npRoot; // x24
  int v41; // w8
  TreasureDvcLvEntity_o *v42; // x24
  UIWidget_o *npdetail; // x25
  UILabel_o *v44; // x25
  System_String_o *DetalShort_50010268; // x0
  int v46; // w8
  UILabel_o *maxNp; // x24
  Il2CppObject *v48; // x0
  struct UILabel_o *v49; // x8
  UILabel_o *nplevel; // x24
  System_String_o *v51; // x1
  __int64 v52; // x1
  UnityEngine_Object_o *v53; // x24
  bool IsNpDetailActive; // w24
  UITexture_o *facetex; // x23
  int32_t v56; // w24
  int32_t v57; // w25
  __int64 v58; // x1
  int32_t CommandDispLimitCount; // w26
  struct UITexture_o *Manager__loadCommandCard; // x0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  char v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  __int64 v67; // x1
  UnityEngine_Object_o *havenotTdLabel; // x22
  __int64 v69; // x1
  UILabel_o *v70; // x22
  System_String_o *NotHaveTreasureDeviceMessage; // x22
  System_String_o **p_equiphp; // x8
  __int64 v73; // x1
  UnityEngine_Object_o *unknownNp; // x25
  __int64 v75; // x1
  UILabel_o *v76; // x25
  UnityEngine_Object_o *commandCard; // x24
  BattleCommandData_o *v78; // x24
  int32_t v79; // w8
  BattleServantData_o *v80; // x8
  BattleServantData_o *v81; // x8
  BattleServantData_o *v82; // x8
  int32_t CommandImageSvtId; // w8
  UnityEngine_Object_o *npSpeedChange; // x22
  UnityEngine_Object_o *classIcon; // x21
  ServantClassIconComponent_o *v86; // x21
  int32_t IconSpriteScaledWidth; // w0
  __int64 v88; // x1
  UnityEngine_Object_o *v89; // x21
  int32_t v90; // w20
  __int64 v91; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v93; // x1
  int v94; // [xsp+Ch] [xbp-64h] BYREF
  int32_t atk; // [xsp+18h] [xbp-58h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-54h] BYREF

  battle_info = battleInfoData;
  if ( (byte_59741A2 & 1) == 0 )
  {
    sub_2213A60(&BattleCommandData_TypeInfo);
    sub_2213A60(&BattleServantConfConponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIAnchor___);
    sub_2213A60(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_9751/*"NP_UNKNOWN"*/);
    sub_2213A60(&StringLiteral_26432/*"{0:#,0}"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_2888/*"BATTLE_HASNOT_TD"*/);
    sub_2213A60(&StringLiteral_9338/*"Max {0}%"*/);
    byte_59741A2 = 1;
  }
  lv = 0;
  this->fields.bsvtData = inbsvtData;
  p_bsvtData = &this->fields.bsvtData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bsvtData,
    (int32_t)inbsvtData,
    (System_String_o *)isShowBuffIcon,
    (System_String_o *)battleInfoData,
    isNpc,
    (int32_t)method,
    v6,
    v7);
  if ( this->fields.bsvtData )
  {
    if ( !battle_info )
    {
      data = (UnityEngine_Object_o *)this->fields.data;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(data, 0, 0);
      battle_info = 0;
      if ( ((unsigned __int8)bsvtData & 1) != 0 )
      {
        v17 = this->fields.data;
        if ( !v17 )
          goto LABEL_151;
        battle_info = v17->fields.battle_info;
      }
    }
    shortNameLabel = (UnityEngine_Object_o *)this->fields.shortNameLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( UnityEngine_Object__op_Inequality(shortNameLabel, 0, 0) )
    {
      bsvtData = this->fields.bsvtData;
      if ( !bsvtData )
        goto LABEL_151;
      v19 = this->fields.shortNameLabel;
      bsvtData = (BattleServantData_o *)BattleServantData__getServantShortName(bsvtData, 0);
      if ( !v19 )
        goto LABEL_151;
      UILabel__set_text(v19, (System_String_o *)bsvtData, 0);
      CommonFunction__ScalingLabelWidth(this->fields.shortNameLabel, 270, 0);
    }
    atklabel = (UnityEngine_Object_o *)this->fields.atklabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(atklabel, 0, 0);
    if ( ((unsigned __int8)bsvtData & 1) != 0 )
    {
      v21 = this->fields.bsvtData;
      if ( !v21 )
        goto LABEL_151;
      v22 = this->fields.atklabel;
      atk = v21->fields.atk;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &atk);
      bsvtData = (BattleServantData_o *)System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v23, 0);
      if ( !v22 )
        goto LABEL_151;
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
                equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
                v35 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
                lv = (*p_bsvtData)->fields.treasuredvcLevel;
                if ( !v35 )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
                if ( UnityEngine_Object__op_Inequality(equipObj, 0, 0) )
                {
                  v37 = this->fields.equipObj;
                  LocalPositionY = GameObjectExtensions__GetLocalPositionY(v37, 0);
                  GameObjectExtensions__SetLocalPositionY(v37, LocalPositionY - (float)this->fields.adjustHeight, 0);
                }
                v39 = UnityEngine_Object_TypeInfo;
                npRoot = (UnityEngine_Object_o *)this->fields.npRoot;
                this->fields.adjustHeight = 0;
                v41 = *(&v39->_2.cctor_finished + 1);
                if ( v33 < 1 )
                {
                  if ( !v41 )
                    j_il2cpp_runtime_class_init_0(v39, v36);
                  if ( UnityEngine_Object__op_Inequality(npRoot, 0, 0) )
                  {
                    bsvtData = (BattleServantData_o *)this->fields.npRoot;
                    if ( !bsvtData )
                      goto LABEL_151;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0);
                    bsvtData = (BattleServantData_o *)this->fields.commandCard;
                    if ( !bsvtData )
                      goto LABEL_151;
                    bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)bsvtData,
                                                        0);
                    if ( !bsvtData )
                      goto LABEL_151;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0);
                  }
                  facetex = this->fields.facetex;
                  bsvtData = this->fields.bsvtData;
                  if ( !bsvtData )
                    goto LABEL_151;
                  bsvtData = (BattleServantData_o *)BattleServantData__GetCommandImageSvtId(bsvtData, 0);
                  if ( !*p_bsvtData )
                    goto LABEL_151;
                  v56 = (int)bsvtData;
                  bsvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(*p_bsvtData, 1, 0);
                  if ( !*p_bsvtData )
                    goto LABEL_151;
                  v57 = (int)bsvtData;
                  CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(*p_bsvtData, 0);
                  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v58);
                  Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(
                                               facetex,
                                               v56,
                                               v57,
                                               CommandDispLimitCount,
                                               0);
                  this->fields.facetex = Manager__loadCommandCard;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&this->fields.facetex,
                    (int32_t)Manager__loadCommandCard,
                    v61,
                    v62,
                    v63,
                    v64,
                    v65,
                    v66);
                  havenotTdLabel = (UnityEngine_Object_o *)this->fields.havenotTdLabel;
                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67);
                  if ( UnityEngine_Object__op_Inequality(havenotTdLabel, 0, 0) )
                  {
                    bsvtData = (BattleServantData_o *)this->fields.havenotTdLabel;
                    if ( !bsvtData )
                      goto LABEL_151;
                    bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)bsvtData,
                                                        0);
                    if ( !bsvtData )
                      goto LABEL_151;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0);
                    v70 = this->fields.havenotTdLabel;
                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v69);
                    bsvtData = (BattleServantData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2888/*"BATTLE_HASNOT_TD"*/, 0);
                    if ( !v70 )
                      goto LABEL_151;
                    UILabel__set_text(v70, (System_String_o *)bsvtData, 0);
                    bsvtData = *p_bsvtData;
                    if ( !*p_bsvtData )
                      goto LABEL_151;
                    NotHaveTreasureDeviceMessage = BattleServantData__GetNotHaveTreasureDeviceMessage(bsvtData, 0);
                    if ( !System_String__IsNullOrEmpty(NotHaveTreasureDeviceMessage, 0) )
                    {
                      bsvtData = (BattleServantData_o *)this->fields.havenotTdLabel;
                      if ( !bsvtData )
                        goto LABEL_151;
                      UILabel__set_text((UILabel_o *)bsvtData, NotHaveTreasureDeviceMessage, 0);
                    }
                  }
                  goto LABEL_126;
                }
                if ( !v41 )
                  j_il2cpp_runtime_class_init_0(v39, v36);
                if ( !UnityEngine_Object__op_Inequality(npRoot, 0, 0) )
                {
LABEL_126:
                  npSpeedChange = (UnityEngine_Object_o *)this->fields.npSpeedChange;
                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
                  if ( UnityEngine_Object__op_Inequality(npSpeedChange, 0, 0) )
                  {
                    bsvtData = (BattleServantData_o *)this->fields.npSpeedChange;
                    if ( !bsvtData )
                      goto LABEL_151;
                    BattleServantNPSpeedChangeComponent__SetData(
                      (BattleServantNPSpeedChangeComponent_o *)bsvtData,
                      *p_bsvtData,
                      0);
                  }
                  classIcon = (UnityEngine_Object_o *)this->fields.classIcon;
                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
                  bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(classIcon, 0, 0);
                  if ( ((unsigned __int8)bsvtData & 1) == 0 )
                    goto LABEL_149;
                  if ( inbsvtData )
                  {
                    v86 = this->fields.classIcon;
                    bsvtData = (BattleServantData_o *)BattleServantData__getClassId(inbsvtData, 0, 0);
                    if ( v86 )
                    {
                      ServantClassIconComponent__SetImage(
                        v86,
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
                        v89 = (UnityEngine_Object_o *)this->fields.shortNameLabel;
                        v90 = IconSpriteScaledWidth;
                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v88);
                        if ( UnityEngine_Object__op_Inequality(v89, 0, 0) )
                        {
                          bsvtData = (BattleServantData_o *)this->fields.shortNameLabel;
                          if ( !bsvtData )
                            goto LABEL_151;
                          if ( bsvtData->fields._iconLimitCount_k__BackingField.fields.fakeValue + v90 >= 270 )
                            CommonFunction__ScalingLabelWidth((UILabel_o *)bsvtData, 270 - v90, 0);
                        }
                        bsvtData = (BattleServantData_o *)this->fields.classIcon;
                        if ( bsvtData )
                        {
                          Component_object = UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)bsvtData,
                                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIAnchor___);
                          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v91);
                          bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(
                                                              (UnityEngine_Object_o *)Component_object,
                                                              0,
                                                              0);
                          if ( ((unsigned __int8)bsvtData & 1) == 0 )
                            goto LABEL_149;
                          if ( Component_object )
                          {
                            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
LABEL_149:
                            BattleServantConfConponent__SetAttribute(this, v14);
                            BattleServantConfConponent__ChangeLayout(this, v93);
                            return;
                          }
                        }
                      }
                    }
                  }
                  goto LABEL_151;
                }
                bsvtData = (BattleServantData_o *)this->fields.npRoot;
                if ( !bsvtData )
                  goto LABEL_151;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0);
                bsvtData = (BattleServantData_o *)this->fields.commandCard;
                if ( !bsvtData )
                  goto LABEL_151;
                bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)bsvtData,
                                                    0);
                if ( !bsvtData )
                  goto LABEL_151;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0);
                bsvtData = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !bsvtData )
                  goto LABEL_151;
                bsvtData = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)bsvtData,
                                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                if ( !bsvtData )
                  goto LABEL_151;
                bsvtData = (BattleServantData_o *)TreasureDvcLvMaster__GetEntity(
                                                    (TreasureDvcLvMaster_o *)bsvtData,
                                                    v33,
                                                    lv,
                                                    0);
                if ( !this->fields.maxNp )
                  goto LABEL_151;
                v42 = (TreasureDvcLvEntity_o *)bsvtData;
                UILabel__set_text(this->fields.maxNp, (System_String_o *)StringLiteral_1/*""*/, 0);
                if ( v42 )
                {
                  npdetail = (UIWidget_o *)this->fields.npdetail;
                  bsvtData = (BattleServantData_o *)BattleServantConfConponent_TypeInfo;
                  if ( !*(&BattleServantConfConponent_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo, v14);
                  if ( !npdetail )
                    goto LABEL_151;
                  UIWidget__set_height(
                    npdetail,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                    0);
                  v44 = this->fields.npdetail;
                  DetalShort_50010268 = TreasureDvcLvEntity__getDetalShort_50010268(v42, lv, 0);
                  WrapControlText__textBBCodeAdjust(
                    v44,
                    DetalShort_50010268,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    0);
                  v46 = 100 * v42->fields.gaugeCount;
                  maxNp = this->fields.maxNp;
                  v94 = v46;
                  v48 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v94);
                  bsvtData = (BattleServantData_o *)System_String__Format((System_String_o *)StringLiteral_9338/*"Max {0}%"*/, v48, 0);
                  if ( !maxNp )
                    goto LABEL_151;
                  UILabel__set_text(maxNp, (System_String_o *)bsvtData, 0);
                  v49 = this->fields.npdetail;
                  if ( !v49 )
                    goto LABEL_151;
                  if ( BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT < v49->fields.mHeight )
                  {
                    if ( !*(&BattleServantConfConponent_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo, v14);
                      v49 = this->fields.npdetail;
                      if ( !v49 )
                        goto LABEL_151;
                    }
                    this->fields.adjustHeight = BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT
                                              - v49->fields.mHeight;
                  }
                }
                nplevel = this->fields.nplevel;
                bsvtData = (BattleServantData_o *)System_Int32__ToString((int32_t)&lv, 0);
                if ( !nplevel )
                  goto LABEL_151;
                if ( bsvtData )
                  v51 = (System_String_o *)bsvtData;
                else
                  v51 = (System_String_o *)StringLiteral_1/*""*/;
                UILabel__set_text(nplevel, v51, 0);
                v53 = (UnityEngine_Object_o *)this->fields.data;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52);
                if ( UnityEngine_Object__op_Inequality(v53, 0, 0) )
                {
                  bsvtData = (BattleServantData_o *)this->fields.data;
                  if ( !bsvtData )
                    goto LABEL_151;
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
                                    goto LABEL_151;
                                  p_equiphp = (System_String_o **)&bsvtData->fields.equiphp;
                                }
                                else
                                {
                                  if ( !bsvtData )
                                    goto LABEL_151;
                                  p_equiphp = (System_String_o **)&StringLiteral_1/*""*/;
                                }
                                UILabel__set_text((UILabel_o *)bsvtData, *p_equiphp, 0);
                                unknownNp = (UnityEngine_Object_o *)this->fields.unknownNp;
                                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v73);
                                bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(unknownNp, 0, 0);
                                if ( ((unsigned __int8)bsvtData & 1) != 0 )
                                {
                                  v76 = this->fields.unknownNp;
                                  if ( IsNpDetailActive )
                                  {
                                    v14 = (MethodInfo *)StringLiteral_1/*""*/;
                                  }
                                  else
                                  {
                                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v75);
                                    bsvtData = (BattleServantData_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_9751/*"NP_UNKNOWN"*/,
                                                                        0);
                                    v14 = (MethodInfo *)bsvtData;
                                  }
                                  if ( !v76 )
                                    goto LABEL_151;
                                  UILabel__set_text(v76, (System_String_o *)v14, 0);
                                }
                                commandCard = (UnityEngine_Object_o *)this->fields.commandCard;
                                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v75);
                                if ( UnityEngine_Object__op_Inequality(commandCard, 0, 0) )
                                {
                                  v78 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
                                  BattleCommandData___ctor(v78, 0);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_151;
                                  bsvtData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId_53452296(
                                                                      bsvtData,
                                                                      0,
                                                                      0);
                                  if ( !v78 )
                                    goto LABEL_151;
                                  v79 = (int)bsvtData;
                                  bsvtData = *p_bsvtData;
                                  v78->fields._type = v79;
                                  if ( !bsvtData )
                                    goto LABEL_151;
                                  bsvtData = (BattleServantData_o *)BattleServantData__getCommandDispLimitCount(
                                                                      bsvtData,
                                                                      0);
                                  v80 = *p_bsvtData;
                                  v78->fields.svtlimit = (int)bsvtData;
                                  if ( !v80 )
                                    goto LABEL_151;
                                  bsvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(v80, 1, 0);
                                  v81 = *p_bsvtData;
                                  v78->fields._loadsvtLimit = (int)bsvtData;
                                  if ( !v81 )
                                    goto LABEL_151;
                                  v78->fields.uniqueId = v81->fields.uniqueId;
                                  bsvtData = (BattleServantData_o *)BattleServantData__getSvtId(v81, 0);
                                  v82 = *p_bsvtData;
                                  v78->fields.svtId = (int)bsvtData;
                                  if ( !v82 )
                                    goto LABEL_151;
                                  CommandImageSvtId = BattleServantData__GetCommandImageSvtId(v82, 0);
                                  bsvtData = (BattleServantData_o *)this->fields.commandCard;
                                  v78->fields.treasureDvc = v33;
                                  v78->fields.imageSvtId = CommandImageSvtId;
                                  if ( !bsvtData )
                                    goto LABEL_151;
                                  BattleCommandComponent__setData(
                                    (BattleCommandComponent_o *)bsvtData,
                                    v78,
                                    this->fields.bsvtData,
                                    0,
                                    isShowBuffIcon,
                                    0,
                                    1,
                                    0);
                                  bsvtData = (BattleServantData_o *)this->fields.commandCard;
                                  if ( !bsvtData )
                                    goto LABEL_151;
                                  BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(
                                    (BattleCommandComponent_o *)bsvtData,
                                    0);
                                }
                                bsvtData = (BattleServantData_o *)this->fields.havenotTdLabel;
                                if ( !bsvtData )
                                  goto LABEL_151;
                                bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)bsvtData,
                                                                    0);
                                if ( !bsvtData )
                                  goto LABEL_151;
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0);
                                goto LABEL_126;
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
LABEL_151:
    sub_2213CDC(bsvtData, v14);
  }
}


void BattleServantConfConponent__setEquipList(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *bsvtData; // x8
  UnityEngine_Object_o *baseEquipSkillInfoPrefab; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *equipSkillInfoRoot; // x20
  __int64 v7; // x1
  Il2CppObject *Master_object; // x20
  __int64 BattleSkillIdList; // x0
  __int64 v10; // x1
  struct BattleServantData_o *v11; // x8
  struct BattleUserServantData_array *equipList; // x24
  il2cpp_array_size_t max_length; // x8
  float v14; // s8
  BalanceConfig_c **v15; // x26
  SkillLvMaster_o *v16; // x21
  const MethodInfo_3F10B80 **v17; // x28
  unsigned __int64 v18; // x25
  Il2CppClass **v19; // x19
  __int64 *v20; // x19
  __int64 v21; // t1
  __int64 v22; // x22
  float v23; // s9
  __int64 v24; // x23
  int v25; // w29
  unsigned __int64 v26; // x19
  int32_t v27; // w24
  int32_t v28; // w25
  const MethodInfo_3F10B80 **v29; // x20
  BalanceConfig_c **v30; // x28
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_Collections_Generic_List_object__o *equipPossessionSkillInfoComponentList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v39; // x10
  __int64 size; // x11
  EquipPossessionSkillInfoComponent_o *v41; // x26
  Il2CppClass **v42; // x0
  BattleServantConfConponent_o *v43; // x21
  System_String_o *v44; // x27
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_Collections_Generic_List_object__o *v51; // x8
  struct System_Object_array *v52; // x9
  _QWORD *v53; // x10
  __int64 v54; // x11
  __int64 v55; // x1
  Il2CppClass **v56; // x0
  struct BattleUserServantData_array *v57; // [xsp+8h] [xbp-B8h]
  unsigned __int64 v58; // [xsp+10h] [xbp-B0h]
  Il2CppObject *v59; // [xsp+18h] [xbp-A8h]
  SkillLvMaster_o *v60; // [xsp+20h] [xbp-A0h]
  int v61; // [xsp+2Ch] [xbp-94h]
  __int64 v62; // [xsp+38h] [xbp-88h]
  SkillLvEntity_o *v63; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-78h] BYREF

  if ( (byte_59741A3 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59741A3 = 1;
  }
  bsvtData = this->fields.bsvtData;
  v63 = 0;
  entity = 0;
  if ( bsvtData )
  {
    baseEquipSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.baseEquipSkillInfoPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Equality(baseEquipSkillInfoPrefab, 0, 0) )
    {
      equipSkillInfoRoot = (UnityEngine_Object_o *)this->fields.equipSkillInfoRoot;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
      if ( !UnityEngine_Object__op_Equality(equipSkillInfoRoot, 0, 0) )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
        BattleSkillIdList = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
        v11 = this->fields.bsvtData;
        this->fields.isEquip = 0;
        if ( !v11 )
          goto LABEL_54;
        equipList = v11->fields.equipList;
        if ( !equipList )
          goto LABEL_54;
        max_length = equipList->max_length;
        if ( (int)max_length >= 1 )
        {
          v14 = 0.0;
          v61 = 0;
          v15 = &BalanceConfig_TypeInfo;
          v16 = (SkillLvMaster_o *)BattleSkillIdList;
          v17 = (const MethodInfo_3F10B80 **)&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__;
          v18 = 0;
          v59 = Master_object;
          v60 = (SkillLvMaster_o *)BattleSkillIdList;
          v57 = equipList;
          do
          {
            if ( v18 >= (unsigned int)max_length )
LABEL_55:
              sub_2213CE4(BattleSkillIdList);
            v19 = &equipList->obj.klass + v18;
            v21 = (__int64)v19[4];
            v20 = (__int64 *)(v19 + 4);
            BattleSkillIdList = v21;
            if ( v21 )
            {
              BattleSkillIdList = (__int64)BattleUserServantData__getBattleSkillIdList(
                                             (BattleUserServantData_o *)BattleSkillIdList,
                                             0);
              if ( v18 >= LODWORD(equipList->max_length) )
                goto LABEL_55;
              v22 = BattleSkillIdList;
              BattleSkillIdList = *v20;
              if ( !*v20 )
                goto LABEL_54;
              BattleSkillIdList = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)BattleSkillIdList + 408LL))(
                                    BattleSkillIdList,
                                    *(_QWORD *)(*(_QWORD *)BattleSkillIdList + 416LL));
              if ( !v22 )
                goto LABEL_54;
              v58 = v18;
              if ( *(int *)(v22 + 24) < 1 )
              {
                v23 = 0.0;
                v25 = 0;
              }
              else
              {
                v23 = 0.0;
                v24 = BattleSkillIdList;
                v25 = 0;
                v26 = 0;
                v62 = BattleSkillIdList + 32;
                do
                {
                  BattleSkillIdList = (__int64)*v15;
                  if ( !*(&(*v15)->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(BattleSkillIdList, v10);
                    BattleSkillIdList = (__int64)*v15;
                  }
                  if ( *(_DWORD *)(*(_QWORD *)(BattleSkillIdList + 184) + 56LL) <= v25 )
                    break;
                  if ( v26 >= *(unsigned int *)(v22 + 24) )
                    goto LABEL_55;
                  if ( !v24 )
                    goto LABEL_54;
                  if ( v26 >= *(unsigned int *)(v24 + 24) )
                    goto LABEL_55;
                  if ( !Master_object )
                    goto LABEL_54;
                  v27 = *(_DWORD *)(v22 + 32 + 4 * v26);
                  v28 = *(_DWORD *)(v62 + 4 * v26);
                  BattleSkillIdList = DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        v27,
                                        *v17);
                  if ( (BattleSkillIdList & 1) != 0 )
                  {
                    if ( !v16 )
                      goto LABEL_54;
                    BattleSkillIdList = SkillLvMaster__TryGetEntity(v16, &v63, v27, v28, 0);
                    if ( (BattleSkillIdList & 1) != 0 )
                    {
                      v29 = v17;
                      v30 = v15;
                      BattleSkillIdList = (__int64)EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
                                                     this->fields.baseEquipSkillInfoPrefab,
                                                     this->fields.equipSkillInfoRoot,
                                                     v25 + v61,
                                                     v14 + v23,
                                                     0);
                      equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.equipPossessionSkillInfoComponentList;
                      if ( !equipPossessionSkillInfoComponentList )
                        goto LABEL_54;
                      items = equipPossessionSkillInfoComponentList->fields._items;
                      v39 = Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__;
                      ++equipPossessionSkillInfoComponentList->fields._version;
                      if ( !items )
                        goto LABEL_54;
                      size = equipPossessionSkillInfoComponentList->fields._size;
                      v41 = (EquipPossessionSkillInfoComponent_o *)BattleSkillIdList;
                      if ( (unsigned int)size >= LODWORD(items->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          equipPossessionSkillInfoComponentList,
                          (Il2CppObject *)BattleSkillIdList,
                          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v42 = &items->obj.klass + size;
                        equipPossessionSkillInfoComponentList->fields._size = size + 1;
                        v42[4] = (Il2CppClass *)v41;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)(v42 + 4),
                          (int32_t)v41,
                          v31,
                          v32,
                          v33,
                          v34,
                          v35,
                          v36);
                      }
                      BattleSkillIdList = (__int64)entity;
                      if ( !entity )
                        goto LABEL_54;
                      v43 = this;
                      BattleSkillIdList = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0);
                      if ( !v63 )
                        goto LABEL_54;
                      v44 = (System_String_o *)BattleSkillIdList;
                      BattleSkillIdList = (__int64)SkillLvEntity__getDetail_49901180(v63, v28, 0, 0);
                      if ( !v41 )
                        goto LABEL_54;
                      v23 = v23
                          + EquipPossessionSkillInfoComponent__SetSkill(
                              v41,
                              v27,
                              v44,
                              (System_String_o *)BattleSkillIdList,
                              0);
                      this = v43;
                      v43->fields.isEquip = 1;
                      v15 = v30;
                      v17 = v29;
                      Master_object = v59;
                      v16 = v60;
                      ++v25;
                    }
                  }
                  ++v26;
                }
                while ( (__int64)v26 < *(int *)(v22 + 24) );
              }
              v14 = v14 + v23;
              equipList = v57;
              v18 = v58;
              v61 += v25;
            }
            LODWORD(max_length) = equipList->max_length;
            ++v18;
          }
          while ( (__int64)v18 < (int)max_length );
        }
        if ( !this->fields.isEquip )
        {
          BattleSkillIdList = (__int64)EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
                                         this->fields.baseEquipSkillInfoPrefab,
                                         this->fields.equipSkillInfoRoot,
                                         0,
                                         0.0,
                                         0);
          v51 = (System_Collections_Generic_List_object__o *)this->fields.equipPossessionSkillInfoComponentList;
          if ( v51 )
          {
            v52 = v51->fields._items;
            v53 = Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__;
            ++v51->fields._version;
            if ( v52 )
            {
              v54 = v51->fields._size;
              v55 = BattleSkillIdList;
              if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v51,
                  (Il2CppObject *)BattleSkillIdList,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
              }
              else
              {
                v56 = &v52->obj.klass + v54;
                v51->fields._size = v54 + 1;
                v56[4] = (Il2CppClass *)v55;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v56 + 4), v55, v45, v46, v47, v48, v49, v50);
              }
              return;
            }
          }
LABEL_54:
          sub_2213CDC(BattleSkillIdList, v10);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_20135B8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_2013578;
}


System_IAsyncResult_o *BattleServantConfConponent_CloseButtonCallBack__BeginInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v5; // [xsp+8h] [xbp-8h] BYREF

  return sub_2213A14(this, &v5, callback, object);
}


void BattleServantConfConponent_CloseButtonCallBack__EndInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void BattleServantConfConponent_CloseButtonCallBack__Invoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void BattleServantConfConponent__StartOpenTab_d__95___ctor(
        BattleServantConfConponent__StartOpenTab_d__95_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleServantConfConponent__StartOpenTab_d__95__MoveNext(
        BattleServantConfConponent__StartOpenTab_d__95_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent__StartOpenTab_d__95_o *v2; // x19
  int32_t _1__state; // w8
  struct BattleServantConfConponent_o *_4__this; // x20
  UnityEngine_Object_o *BattleServantAbilityObj; // x21
  bool v6; // w21
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v2 = this;
  if ( (byte_59741C2 & 1) == 0 )
  {
    this = (BattleServantConfConponent__StartOpenTab_d__95_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59741C2 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
LABEL_17:
      sub_2213CDC(this, method);
    if ( BattleServantConfConponent__IsLastOpenServantAbility(_4__this, 0) )
      BattleServantConfConponent__OnClickServantAbility(_4__this, 0);
    else
      BattleServantConfConponent__OnClickServantState(_4__this, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_17;
  BattleServantAbilityObj = (UnityEngine_Object_o *)_4__this->fields.BattleServantAbilityObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(BattleServantAbilityObj, 0, 0) )
    return 0;
  this = (BattleServantConfConponent__StartOpenTab_d__95_o *)_4__this->fields.BattleServantAbilityObj;
  v6 = 1;
  _4__this->fields.isOpenAfter = 1;
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v2->fields.__2__current = 0;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
  sub_2213A04(p__2__current, 0, v8, v9, v10, v11, v12, v13);
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
  return v6;
}


Il2CppObject *BattleServantConfConponent__StartOpenTab_d__95__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantConfConponent__StartOpenTab_d__95_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleServantConfConponent__StartOpenTab_d__95__System_Collections_IEnumerator_Reset(
        BattleServantConfConponent__StartOpenTab_d__95_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleServantConfConponent__StartOpenTab_d__95_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattleServantConfConponent__StartOpenTab_d__95__System_Collections_IEnumerator_get_Current(
        BattleServantConfConponent__StartOpenTab_d__95_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleServantConfConponent__StartOpenTab_d__95__System_IDisposable_Dispose(
        BattleServantConfConponent__StartOpenTab_d__95_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleServantConfConponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59741C0 & 1) == 0 )
  {
    sub_2213A60(&BattleServantConfConponent___c_TypeInfo);
    byte_59741C0 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleServantConfConponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleServantConfConponent___c_TypeInfo->static_fields->__9 = (struct BattleServantConfConponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleServantConfConponent___c_TypeInfo->static_fields,
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


bool BattleServantConfConponent___c___ChangeLayout_b__81_0(
        BattleServantConfConponent___c_o *this,
        int32_t codeId,
        const MethodInfo *method)
{
  return codeId > 0;
}


int32_t BattleServantConfConponent___c___GetClassPassiveSkillIdsForDisplay_b__83_1(
        BattleServantConfConponent___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_2213CDC(this, 0);
  return buff->fields.skillId;
}


int32_t BattleServantConfConponent___c___GetSpecialPassiveSkillStartIndex_b__84_0(
        BattleServantConfConponent___c_o *this,
        ServantPassiveSkillEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.skillId;
}


bool BattleServantConfConponent___c___SetCommandCodeSkillList_b__88_0(
        BattleServantConfConponent___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id > 0;
}


void BattleServantConfConponent___c__DisplayClass83_0___ctor(
        BattleServantConfConponent___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleServantConfConponent___c__DisplayClass83_0___GetClassPassiveSkillIdsForDisplay_b__0(
        BattleServantConfConponent___c__DisplayClass83_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_2213CDC(this, 0);
  return buff->fields.actorId == this->fields.uniqueId && buff->fields.grantSkillType == 10 && buff->fields.skillId > 0;
}


void BattleServantConfConponent___c__DisplayClass84_0___ctor(
        BattleServantConfConponent___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool BattleServantConfConponent___c__DisplayClass84_0___GetSpecialPassiveSkillStartIndex_b__1(
        BattleServantConfConponent___c__DisplayClass84_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *passiveIdHashSet; // x0

  if ( (byte_59741C1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_59741C1 = 1;
  }
  passiveIdHashSet = this->fields.passiveIdHashSet;
  if ( !passiveIdHashSet )
    sub_2213CDC(0, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           passiveIdHashSet,
           x,
           (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}