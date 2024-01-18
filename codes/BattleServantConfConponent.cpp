void __fastcall BattleServantConfConponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleServantConfConponent_c *v2; // x8

  if ( (byte_4185AE3 & 1) == 0 )
  {
    sub_B2C35C(&BattleServantConfConponent_TypeInfo, v1);
    byte_4185AE3 = 1;
  }
  BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE = 20;
  BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT = 90;
  v2 = BattleServantConfConponent_TypeInfo;
  BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT = 500;
  v2->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT = 60;
  v2->static_fields->EQIUP_SKILL_OBJ_HEIGHT = 110;
}


void __fastcall BattleServantConfConponent___ctor(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4185AE2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo, v3);
    byte_4185AE2 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__);
  this->fields.equipPossessionSkillInfoComponentList = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equipPossessionSkillInfoComponentList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  this->fields.NotEquipObjHeightPos = 45.0;
  this->fields.ClassSkillInitPosY = -633.0;
  this->fields.AppendSkillInitPosY = -679.0;
  this->fields.isOpenAfter = 1;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleServantConfConponent__ChangeLayout(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  long double v2; // q8
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *equipObj; // x20
  const MethodInfo *v15; // x1
  UnityEngine_GameObject_o *v16; // x20
  float LocalPositionY; // s0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *equipPossessionSkillInfoComponentList; // x0
  float i; // s8
  Il2CppObject *current; // x22
  _DWORD *monitor; // x8
  BattleServantConfConponent_c *v22; // x0
  int32_t v23; // w24
  __int64 v24; // x1
  _DWORD *v25; // x8
  _BOOL8 v26; // x0
  BattleServantConfConponent_c *v27; // x0
  UnityEngine_Object_o *CardAndCommandObj; // x20
  unsigned __int64 CommandCodeIds; // x0
  System_Int32_array *v30; // x20
  BattleServantConfConponent___c_c *v31; // x0
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x8
  System_Predicate_int__o *_9__78_0; // x21
  Il2CppObject *v34; // x22
  struct BattleServantConfConponent___c_StaticFields *v35; // x0
  unsigned __int64 v36; // x9
  unsigned __int64 v37; // x8
  int v38; // w12
  UnityEngine_Object_o *npSpeedChange; // x20
  struct BattleServantNPSpeedChangeComponent_o *v40; // x8
  struct BattleServantNPSpeedChangeComponent_o *v41; // x8
  UnityEngine_Object_o *ClassSkillObj; // x20
  UnityEngine_Object_o *AppendSkillObj; // x20
  UnityEngine_Object_o *classBoardSkillObj; // x20
  __int64 v45; // x0
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4185AD1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_FindIndex_int___, method);
    sub_B2C35C(&BattleServantConfConponent_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_System_Predicate_int___ctor__, v10);
    sub_B2C35C(&System_Predicate_int__TypeInfo, v11);
    sub_B2C35C(&Method_BattleServantConfConponent___c__ChangeLayout_b__78_0__, v12);
    sub_B2C35C(&BattleServantConfConponent___c_TypeInfo, v13);
    byte_4185AD1 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipObj, 0LL, 0LL) )
  {
    v16 = this->fields.equipObj;
    LocalPositionY = GameObjectExtensions__GetLocalPositionY(v16, 0LL);
    GameObjectExtensions__SetLocalPositionY(v16, LocalPositionY + (float)this->fields.adjustHeight, 0LL);
  }
  if ( this->fields.isEquip )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.equipPossessionSkillInfoComponentList;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_86;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v46,
      equipPossessionSkillInfoComponentList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    v47 = v46;
    for ( i = 0.0; ; i = i - (float)v22->static_fields->EQIUP_SKILL_OBJ_HEIGHT )
    {
      v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v47,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
      if ( !v26 )
        break;
      current = v47.fields.current;
      if ( !v47.fields.current )
        sub_B2C434(v26, v24);
      monitor = v47.fields.current[2].monitor;
      if ( !monitor )
        sub_B2C434(v26, v24);
      v22 = BattleServantConfConponent_TypeInfo;
      v23 = monitor[41];
      if ( (BYTE3(BattleServantConfConponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
        v22 = BattleServantConfConponent_TypeInfo;
      }
      if ( v23 > v22->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT )
      {
        if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v22);
        v25 = current[2].monitor;
        if ( !v25 )
          sub_B2C434(v22, v24);
        v22 = BattleServantConfConponent_TypeInfo;
        i = i + (float)(BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT - v25[41]);
      }
      if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = BattleServantConfConponent_TypeInfo;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v47,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    v27 = BattleServantConfConponent_TypeInfo;
    if ( (BYTE3(BattleServantConfConponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
      v27 = BattleServantConfConponent_TypeInfo;
    }
    *(float *)&v2 = i + (float)v27->static_fields->EQIUP_SKILL_OBJ_HEIGHT;
  }
  else
  {
    *(float *)&v2 = this->fields.NotEquipObjHeightPos;
  }
  CardAndCommandObj = (UnityEngine_Object_o *)this->fields.CardAndCommandObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(CardAndCommandObj, 0LL, 0LL) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.CardAndCommandObj,
      *(float *)&v2 + (float)this->fields.adjustHeight,
      0LL);
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.bsvtData;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_86;
    CommandCodeIds = (unsigned __int64)BattleServantData__GetCommandCodeIds(
                                         (BattleServantData_o *)equipPossessionSkillInfoComponentList,
                                         v15);
    if ( CommandCodeIds )
    {
      v30 = (System_Int32_array *)CommandCodeIds;
      v31 = BattleServantConfConponent___c_TypeInfo;
      if ( (BYTE3(BattleServantConfConponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
        v31 = BattleServantConfConponent___c_TypeInfo;
      }
      static_fields = v31->static_fields;
      _9__78_0 = static_fields->__9__78_0;
      if ( !_9__78_0 )
      {
        if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v31);
          static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
        }
        v34 = (Il2CppObject *)static_fields->__9;
        _9__78_0 = (System_Predicate_int__o *)sub_B2C42C(System_Predicate_int__TypeInfo);
        System_Predicate_int____ctor(
          _9__78_0,
          v34,
          Method_BattleServantConfConponent___c__ChangeLayout_b__78_0__,
          (const MethodInfo_2951520 *)Method_System_Predicate_int___ctor__);
        v35 = BattleServantConfConponent___c_TypeInfo->static_fields;
        v35->__9__78_0 = _9__78_0;
        sub_B2C2F8(&v35->__9__78_0, _9__78_0);
      }
      if ( System_Array__FindIndex_int_(
             v30,
             (System_Predicate_T__o *)_9__78_0,
             (const MethodInfo_1FFC714 *)Method_System_Array_FindIndex_int___) == -1
        || (int)*(_QWORD *)&v30->max_length < 1 )
      {
        LODWORD(CommandCodeIds) = 0;
      }
      else
      {
        v36 = (unsigned int)*(_QWORD *)&v30->max_length;
        v37 = 0LL;
        CommandCodeIds = 0LL;
        do
        {
          if ( v37 >= v36 )
          {
            v45 = sub_B2C460(CommandCodeIds);
            sub_B2C400(v45, 0LL);
          }
          v38 = v30->m_Items[++v37];
          if ( v38 <= 0 )
            CommandCodeIds = (unsigned int)CommandCodeIds;
          else
            CommandCodeIds = (unsigned int)(CommandCodeIds + 1);
        }
        while ( (__int64)v37 < (int)v36 );
      }
    }
    *(float *)&v2 = *(float *)&v2 - BattleServantNPSpeedChangeComponent__CalcCommandCodeOffset(CommandCodeIds, 0LL);
  }
  npSpeedChange = (UnityEngine_Object_o *)this->fields.npSpeedChange;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Object__op_Inequality(npSpeedChange, 0LL, 0LL);
  if ( ((unsigned __int8)equipPossessionSkillInfoComponentList & 1) != 0 )
  {
    v40 = this->fields.npSpeedChange;
    if ( !v40 )
      goto LABEL_86;
    v40->fields.equipeOffsetZ = *(float *)&v2 + (float)this->fields.adjustHeight;
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.npSpeedChange;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_86;
    BattleServantNPSpeedChangeComponent__SetButtonPosition(
      (BattleServantNPSpeedChangeComponent_o *)equipPossessionSkillInfoComponentList,
      0LL);
    v41 = this->fields.npSpeedChange;
    if ( !v41 )
      goto LABEL_86;
    *(float *)&v2 = *(float *)&v2 - (float)v41->fields.contentsHeight;
  }
  ClassSkillObj = (UnityEngine_Object_o *)this->fields.ClassSkillObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ClassSkillObj, 0LL, 0LL) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.ClassSkillObj,
      (float)(*(float *)&v2 + this->fields.ClassSkillInitPosY) + (float)this->fields.adjustHeight,
      0LL);
    *(float *)&v2 = *(float *)&v2 + this->fields.ClassSkillOffset;
  }
  AppendSkillObj = (UnityEngine_Object_o *)this->fields.AppendSkillObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(AppendSkillObj, 0LL, 0LL) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.AppendSkillObj,
      (float)(*(float *)&v2 + this->fields.AppendSkillInitPosY) + (float)this->fields.adjustHeight,
      0LL);
    *(float *)&v2 = *(float *)&v2 + this->fields.AppendSkillOffset;
  }
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0LL, 0LL) )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.classBoardSkillObj;
    if ( !equipPossessionSkillInfoComponentList
      || (equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *, Il2CppMethodPointer, long double, float))equipPossessionSkillInfoComponentList->klass->vtable._4_unknown.method)(equipPossessionSkillInfoComponentList, equipPossessionSkillInfoComponentList->klass->vtable._5_set_Item.methodPtr, v2, (float)this->fields.adjustHeight),
          !this->fields.classBoardSkillObj) )
    {
LABEL_86:
      sub_B2C434(equipPossessionSkillInfoComponentList, v15);
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
    sub_B2C434(0LL, call);
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
    sub_B2C434(0LL, method);
  BattleViewBufflistComponent__setShow(buffListView, 0LL);
  started = BattleServantConfConponent__StartOpenTab(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 max_length; // x1
  System_Int32_array *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Boolean_array *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v59; // x1
  __int64 v60; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v61; // x26
  unsigned __int64 v62; // x19
  int32_t *v63; // x22
  int32_t *v64; // x23
  __int64 v65; // x20
  System_Int32_array *v66; // x8
  System_Boolean_array *v67; // x8
  System_Int32_array *v68; // x8
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Boolean_array *v75; // x8
  SkillEntity_o *v76; // x28
  System_String_array *v77; // x21
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x27
  System_String_array *v85; // x21
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x27
  BattleServantConfConponent_o *v93; // x0
  System_Int32_array **v94; // x1
  System_String_array *v95; // x21
  System_Int32_array **v96; // x27
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_String_array *v103; // x21
  System_Int32_array **v104; // x1
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x27
  System_String_array *v112; // x21
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Int32_array **v119; // x27
  System_String_array *v120; // x8
  System_String_array *v121; // x8
  BattleServantConfConponent_o *v122; // x27
  System_Int32_array **v123; // x0
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_String_array *v130; // x21
  System_String_o *v131; // x27
  System_String_o *v132; // x0
  System_Int32_array *v133; // x0
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  System_String_array *v140; // x0
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_String_array *v147; // x0
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  System_Boolean_array *v154; // x0
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  System_Int32_array *v161; // x0
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  __int64 v168; // x0
  __int64 v169; // x0
  System_Boolean_array **v170; // [xsp+8h] [xbp-78h]

  if ( (byte_4185AD4 & 1) == 0 )
  {
    sub_B2C35C(&bool___TypeInfo, idList);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_B2C35C(&int___TypeInfo, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&string___TypeInfo, v17);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v18);
    sub_B2C35C(&StringLiteral_3305/*"COND_TYPE_TITLE"*/, v19);
    sub_B2C35C(&StringLiteral_3293/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v20);
    sub_B2C35C(&StringLiteral_1/*""*/, v21);
    byte_4185AD4 = 1;
  }
  if ( releaseSkillIds
    && releaseSkillLvs
    && (max_length = releaseSkillIds->max_length, (_DWORD)max_length == releaseSkillLvs->max_length) )
  {
    v23 = (System_Int32_array *)sub_B2C374(int___TypeInfo, max_length);
    *idList = v23;
    sub_B2C2F8((BattleServantConfConponent_o *)idList, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
    v30 = (System_String_array *)sub_B2C374(string___TypeInfo, releaseSkillIds->max_length);
    *titleList = v30;
    sub_B2C2F8((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
    v37 = (System_String_array *)sub_B2C374(string___TypeInfo, releaseSkillIds->max_length);
    *explanationList = v37;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    v44 = (System_Boolean_array *)sub_B2C374(bool___TypeInfo, releaseSkillIds->max_length);
    *releaseStateList = v44;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)releaseStateList,
      (System_Int32_array **)v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    v51 = (System_Int32_array *)sub_B2C374(int___TypeInfo, releaseSkillIds->max_length);
    *lvList = v51;
    sub_B2C2F8((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
    v60 = *(_QWORD *)&releaseSkillIds->max_length;
    if ( (int)v60 >= 1 )
    {
      v61 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      v62 = 0LL;
      v63 = &releaseSkillIds->m_Items[1];
      v64 = &releaseSkillLvs->m_Items[1];
      v65 = 32LL;
      v170 = releaseStateList;
      while ( v62 < (unsigned int)v60 )
      {
        v66 = *idList;
        if ( !*idList )
          goto LABEL_84;
        if ( v62 >= v66->max_length )
          break;
        v66->m_Items[v62 + 1] = v63[v62];
        if ( v62 >= releaseSkillLvs->max_length )
          break;
        v67 = *releaseStateList;
        if ( !*releaseStateList )
          goto LABEL_84;
        if ( v62 >= v67->max_length )
          break;
        v67->m_Items[v62 + 4] = v64[v62] > 0;
        if ( v62 >= releaseSkillLvs->max_length )
          break;
        v68 = *lvList;
        if ( !*lvList )
          goto LABEL_84;
        if ( v62 >= v68->max_length )
          break;
        v68->m_Items[v62 + 1] = v64[v62];
        if ( v62 >= releaseSkillIds->max_length )
          break;
        if ( !v61 )
          goto LABEL_84;
        Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    v61,
                                                    v63[v62],
                                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Master_WarQuestSelectionMaster )
        {
          v75 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_84;
          if ( v62 >= v75->max_length )
            break;
          v76 = (SkillEntity_o *)Master_WarQuestSelectionMaster;
          v77 = *titleList;
          if ( v75->m_Items[v62 + 4] )
          {
            if ( v62 >= releaseSkillLvs->max_length )
              break;
            Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectTitle(
                                                        (SkillEntity_o *)Master_WarQuestSelectionMaster,
                                                        v64[v62],
                                                        0LL);
            if ( !v77 )
              goto LABEL_84;
            v84 = (System_Int32_array **)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              Master_WarQuestSelectionMaster = sub_B2C41C(
                                                 Master_WarQuestSelectionMaster,
                                                 v77->obj.klass->_1.element_class);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_85;
            }
            if ( v62 >= v77->max_length )
              break;
            *(Il2CppClass **)((char *)&v77->obj.klass + v65) = (Il2CppClass *)v84;
            sub_B2C2F8((BattleServantConfConponent_o *)((char *)v77 + v65), v84, v78, v79, v80, v81, v82, v83);
            if ( v62 >= releaseSkillLvs->max_length )
              break;
            v85 = *explanationList;
            Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectExplanation(v76, v64[v62], 0LL);
            if ( !v85 )
              goto LABEL_84;
            v92 = (System_Int32_array **)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              Master_WarQuestSelectionMaster = sub_B2C41C(
                                                 Master_WarQuestSelectionMaster,
                                                 v85->obj.klass->_1.element_class);
              if ( !Master_WarQuestSelectionMaster )
              {
LABEL_85:
                v169 = sub_B2C454();
                sub_B2C400(v169, 0LL);
              }
            }
            if ( v62 >= v85->max_length )
              break;
            v93 = (BattleServantConfConponent_o *)((char *)v85 + v65);
            v94 = v92;
            *(Il2CppClass **)((char *)&v85->obj.klass + v65) = (Il2CppClass *)v92;
          }
          else
          {
            Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectTitle(
                                                        (SkillEntity_o *)Master_WarQuestSelectionMaster,
                                                        1,
                                                        0LL);
            if ( !v77 )
              goto LABEL_84;
            v111 = (System_Int32_array **)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              Master_WarQuestSelectionMaster = sub_B2C41C(
                                                 Master_WarQuestSelectionMaster,
                                                 v77->obj.klass->_1.element_class);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_85;
            }
            if ( v62 >= v77->max_length )
              break;
            *(Il2CppClass **)((char *)&v77->obj.klass + v65) = (Il2CppClass *)v111;
            sub_B2C2F8((BattleServantConfConponent_o *)((char *)v77 + v65), v111, v105, v106, v107, v108, v109, v110);
            v112 = *explanationList;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3305/*"COND_TYPE_TITLE"*/,
                                                        0LL);
            if ( !v112 )
              goto LABEL_84;
            v119 = (System_Int32_array **)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              Master_WarQuestSelectionMaster = sub_B2C41C(
                                                 Master_WarQuestSelectionMaster,
                                                 v112->obj.klass->_1.element_class);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_85;
            }
            if ( v62 >= v112->max_length )
              break;
            *(Il2CppClass **)((char *)&v112->obj.klass + v65) = (Il2CppClass *)v119;
            sub_B2C2F8((BattleServantConfConponent_o *)((char *)v112 + v65), v119, v113, v114, v115, v116, v117, v118);
            v120 = *explanationList;
            if ( !*explanationList )
LABEL_84:
              sub_B2C434(Master_WarQuestSelectionMaster, v59);
            if ( v62 >= v120->max_length )
              break;
            Master_WarQuestSelectionMaster = System_String__op_Inequality(
                                               *(System_String_o **)((char *)&v120->obj.klass + v65),
                                               (System_String_o *)StringLiteral_1/*""*/,
                                               0LL);
            if ( (Master_WarQuestSelectionMaster & 1) != 0 )
            {
              v121 = *explanationList;
              if ( !*explanationList )
                goto LABEL_84;
              if ( v62 >= v121->max_length )
                break;
              v122 = (BattleServantConfConponent_o *)((char *)v121 + v65);
              v123 = (System_Int32_array **)System_String__Concat_44305532(
                                              *(System_String_o **)((char *)&v121->obj.klass + v65),
                                              (System_String_o *)StringLiteral_26/*"\n"*/,
                                              0LL);
              v122->klass = (BattleServantConfConponent_c *)v123;
              sub_B2C2F8(v122, v123, v124, v125, v126, v127, v128, v129);
            }
            v130 = *explanationList;
            if ( !*explanationList )
              goto LABEL_84;
            if ( v62 >= v130->max_length )
              break;
            v131 = *(System_String_o **)((char *)&v130->obj.klass + v65);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v132 = LocalizationManager__Get((System_String_o *)StringLiteral_3293/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
            v94 = (System_Int32_array **)System_String__Concat_44305532(v131, v132, 0LL);
            v93 = (BattleServantConfConponent_o *)((char *)v130 + v65);
            *(Il2CppClass **)((char *)&v130->obj.klass + v65) = (Il2CppClass *)v94;
          }
          sub_B2C2F8(v93, v94, v86, v87, v88, v89, v90, v91);
          releaseStateList = v170;
        }
        else
        {
          v95 = *titleList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          if ( !byte_4185BC0 )
          {
            sub_B2C35C(&LocalizationManager_TypeInfo, v59);
            byte_4185BC0 = 1;
          }
          Master_WarQuestSelectionMaster = (__int64)LocalizationManager_TypeInfo;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Master_WarQuestSelectionMaster = (__int64)LocalizationManager_TypeInfo;
          }
          if ( !v95 )
            goto LABEL_84;
          v96 = *(System_Int32_array ***)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 32LL);
          if ( v96 )
          {
            Master_WarQuestSelectionMaster = sub_B2C41C(v96, v95->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_85;
          }
          if ( v62 >= v95->max_length )
            break;
          *(Il2CppClass **)((char *)&v95->obj.klass + v65) = (Il2CppClass *)v96;
          sub_B2C2F8((BattleServantConfConponent_o *)((char *)v95 + v65), v96, v69, v70, v71, v72, v73, v74);
          v103 = *explanationList;
          if ( !*explanationList )
            goto LABEL_84;
          releaseStateList = v170;
          Master_WarQuestSelectionMaster = (__int64)StringLiteral_1/*""*/;
          if ( StringLiteral_1/*""*/ )
          {
            Master_WarQuestSelectionMaster = sub_B2C41C(StringLiteral_1/*""*/, v103->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_85;
            v104 = (System_Int32_array **)StringLiteral_1/*""*/;
          }
          else
          {
            v104 = 0LL;
          }
          if ( v62 >= v103->max_length )
            break;
          *(Il2CppClass **)((char *)&v103->obj.klass + v65) = (Il2CppClass *)v104;
          sub_B2C2F8((BattleServantConfConponent_o *)((char *)v103 + v65), v104, v97, v98, v99, v100, v101, v102);
        }
        LODWORD(v60) = releaseSkillIds->max_length;
        ++v62;
        v65 += 8LL;
        if ( (__int64)v62 >= (int)v60 )
          return;
      }
      v168 = sub_B2C460(Master_WarQuestSelectionMaster);
      sub_B2C400(v168, 0LL);
    }
  }
  else
  {
    v133 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
    *idList = v133;
    sub_B2C2F8((BattleServantConfConponent_o *)idList, (System_Int32_array **)v133, v134, v135, v136, v137, v138, v139);
    v140 = (System_String_array *)sub_B2C374(string___TypeInfo, 0LL);
    *titleList = v140;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)titleList,
      (System_Int32_array **)v140,
      v141,
      v142,
      v143,
      v144,
      v145,
      v146);
    v147 = (System_String_array *)sub_B2C374(string___TypeInfo, 0LL);
    *explanationList = v147;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v147,
      v148,
      v149,
      v150,
      v151,
      v152,
      v153);
    v154 = (System_Boolean_array *)sub_B2C374(bool___TypeInfo, 0LL);
    *releaseStateList = v154;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)releaseStateList,
      (System_Int32_array **)v154,
      v155,
      v156,
      v157,
      v158,
      v159,
      v160);
    v161 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
    *lvList = v161;
    sub_B2C2F8((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v161, v162, v163, v164, v165, v166, v167);
  }
}


System_String_o *__fastcall BattleServantConfConponent__GetAttribute(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *individualities,
        System_String_o *split,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x3
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v32; // x1
  __int64 v33; // x3
  __int64 v34; // x21
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  __int64 v39; // x3
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  int v44; // w22
  double v45; // d0
  System_String_o *v46; // x0
  __int64 v47; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v48; // x22
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  System_String_o *separator; // [xsp+8h] [xbp-68h]

  if ( (byte_4185AE1 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, individualities);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_int__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_int__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v11);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&System_Math_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_11756/*"SERVANT_POLICY_6"*/, v15);
    sub_B2C35C(&StringLiteral_11748/*"SERVANT_PERSONALITY_2"*/, v16);
    sub_B2C35C(&StringLiteral_11752/*"SERVANT_POLICY_1"*/, v17);
    sub_B2C35C(&StringLiteral_11750/*"SERVANT_PERSONALITY_8"*/, v18);
    sub_B2C35C(&StringLiteral_11749/*"SERVANT_PERSONALITY_4"*/, v19);
    sub_B2C35C(&StringLiteral_11747/*"SERVANT_PERSONALITY_1"*/, v20);
    sub_B2C35C(&StringLiteral_11755/*"SERVANT_POLICY_4"*/, v21);
    sub_B2C35C(&StringLiteral_11753/*"SERVANT_POLICY_2"*/, v22);
    sub_B2C35C(&StringLiteral_11754/*"SERVANT_POLICY_3"*/, v23);
    byte_4185AE1 = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  if ( !individualities )
    sub_B2C434(v25, v26);
  klass = individualities->klass;
  if ( *(_WORD *)&individualities->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v29;
      p_offset += 4;
      if ( v29 >= *(unsigned __int16 *)&individualities->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(individualities, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v27);
  }
  separator = split;
  v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          individualities,
          *(_QWORD *)(p_method + 8));
  if ( !v34 )
    sub_B2C434(0LL, v32);
  while ( 1 )
  {
    v35 = *(_QWORD *)v34;
    if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
    {
      v36 = 0LL;
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
          goto LABEL_15;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_15:
      v38 = sub_AC5258(v34, System_Collections_IEnumerator_TypeInfo, 0LL, v33);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8)) & 1) == 0 )
      break;
    v40 = *(_QWORD *)v34;
    if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
    {
      v41 = 0LL;
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v42 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
          goto LABEL_22;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_22:
      v43 = sub_AC5258(v34, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v39);
    }
    v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v34, *(_QWORD *)(v43 + 8));
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v45 = log10((double)v44);
    if ( v45 == INFINITY )
      v45 = -INFINITY;
    if ( (unsigned int)(v44 - 300) <= 0x63 && (int)v45 == 2 )
    {
      switch ( v44 )
      {
        case 300:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11754/*"SERVANT_POLICY_3"*/, 0LL);
          goto LABEL_68;
        case 301:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11753/*"SERVANT_POLICY_2"*/, 0LL);
          goto LABEL_68;
        case 302:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11752/*"SERVANT_POLICY_1"*/, 0LL);
          goto LABEL_68;
        case 303:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11747/*"SERVANT_PERSONALITY_1"*/, 0LL);
          goto LABEL_68;
        case 304:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11748/*"SERVANT_PERSONALITY_2"*/, 0LL);
          goto LABEL_68;
        case 305:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11755/*"SERVANT_POLICY_4"*/, 0LL);
          goto LABEL_68;
        case 306:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11749/*"SERVANT_PERSONALITY_4"*/, 0LL);
          goto LABEL_68;
        case 307:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11756/*"SERVANT_POLICY_6"*/, 0LL);
          goto LABEL_68;
        case 308:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11750/*"SERVANT_PERSONALITY_8"*/, 0LL);
LABEL_68:
          v48 = (EventMissionProgressRequest_Argument_ProgressData_o *)v46;
          if ( !v24 )
            sub_B2C434(v46, v47);
          if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                  (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v24,
                  (WarBoardManager_TaskList_o *)v46,
                  (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v24,
              v48,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
          break;
        default:
          continue;
      }
    }
  }
  v49 = *(_QWORD *)v34;
  if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
  {
    v50 = 0LL;
    v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      ++v50;
      v51 += 4;
      if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
        goto LABEL_75;
    }
    v52 = v49 + 16LL * *v51 + 312;
  }
  else
  {
LABEL_75:
    v52 = sub_AC5258(v34, System_IDisposable_TypeInfo, 0LL, v39);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v52)(v34, *(_QWORD *)(v52 + 8));
  return System_String__Join_44360976(separator, (System_Collections_Generic_IEnumerable_string__o *)v24, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantConfConponent__Initialize(
        BattleServantConfConponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x1
  UnityEngine_Transform_o *transform; // x20
  int v12; // s1
  int v13; // s0
  int v14; // s2
  UnityEngine_Object_o *commandCard; // x20
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UILabel_o *havenotTdLabel; // x20
  UnityEngine_Object_o *classBoardSkillObj; // x20

  if ( (byte_4185ACE & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, data);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_2446/*"BATTLE_HASNOT_TD"*/, v8);
    byte_4185ACE = 1;
  }
  this->fields.data = data;
  sub_B2C2F8(&this->fields.data, data);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_34;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_34;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_34;
  *(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
  if ( !transform )
    goto LABEL_34;
  v13 = 0;
  v14 = 0;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v12 - 1), 0LL);
  commandCard = (UnityEngine_Object_o *)this->fields.commandCard;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(commandCard, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !gameObject )
      goto LABEL_34;
    if ( !this->fields.commandCard )
      goto LABEL_34;
    BattleCommandComponent__setDepth(this->fields.commandCard, LODWORD(gameObject[7].klass) + 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.commandCard;
    if ( !gameObject )
      goto LABEL_34;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)gameObject,
                                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_34;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, 0, 0LL);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.commandCard;
    if ( !gameObject
      || (BattleCommandComponent__InitTreasureDeviceErrorSpriteMark((BattleCommandComponent_o *)gameObject, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.commandCard) == 0LL) )
    {
LABEL_34:
      sub_B2C434(gameObject, v10);
    }
    BattleCommandComponent__SetDownloadEventSprite((BattleCommandComponent_o *)gameObject, 0LL);
  }
  havenotTdLabel = this->fields.havenotTdLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2446/*"BATTLE_HASNOT_TD"*/, 0LL);
  if ( !havenotTdLabel )
    goto LABEL_34;
  UILabel__set_text(havenotTdLabel, (System_String_o *)gameObject, 0LL);
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.classBoardSkillObj;
    if ( gameObject )
    {
      BattleServantClassBoardSkillEffectListComponent__Init(
        (BattleServantClassBoardSkillEffectListComponent_o *)gameObject,
        v10);
      goto LABEL_33;
    }
    goto LABEL_34;
  }
LABEL_33:
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0LL);
}


bool __fastcall BattleServantConfConponent__IsLastOpenServantAbility(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4185ADA & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2786/*"BattleServantDetailTab"*/, method);
    byte_4185ADA = 1;
  }
  return !UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_2786/*"BattleServantDetailTab"*/, 0LL)
      || !UnityEngine_PlayerPrefs__GetInt_35342280((System_String_o *)StringLiteral_2786/*"BattleServantDetailTab"*/, 0LL)
      || UnityEngine_PlayerPrefs__GetInt_35342280((System_String_o *)StringLiteral_2786/*"BattleServantDetailTab"*/, 0LL) != 1;
}


void __fastcall BattleServantConfConponent__OnClick(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleCommandComponent_array *CommandCardList; // x8
  __int64 v9; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v11; // x23
  UnityEngine_Object_o *v12; // x20
  struct BattleCommandComponent_array *v13; // x8
  BattleServantConfConponent_CloseButtonCallBack_o *callback_close; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x0
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4185AD7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__, v6);
    this = (BattleServantConfConponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4185AD7 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  CommandCardList = v2->fields.CommandCardList;
  if ( !CommandCardList )
    goto LABEL_16;
  v9 = 4LL;
  while ( 1 )
  {
    max_length = CommandCardList->max_length;
    v11 = v9 - 4;
    if ( v9 - 4 >= (int)max_length )
      break;
    if ( v11 >= max_length )
      goto LABEL_29;
    v12 = (UnityEngine_Object_o *)*((_QWORD *)&CommandCardList->obj.klass + v9);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleServantConfConponent_o *)UnityEngine_Object__op_Equality(v12, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v13 = v2->fields.CommandCardList;
      if ( !v13 )
        goto LABEL_16;
      if ( v11 >= v13->max_length )
      {
LABEL_29:
        v23 = sub_B2C460(this);
        sub_B2C400(v23, 0LL);
      }
      this = (BattleServantConfConponent_o *)*((_QWORD *)&v13->obj.klass + v9);
      if ( !this )
        goto LABEL_16;
      BattleCommandComponent__ClearCardEffect((BattleCommandComponent_o *)this, 0LL);
    }
    CommandCardList = v2->fields.CommandCardList;
    ++v9;
    if ( !CommandCardList )
      goto LABEL_16;
  }
  callback_close = v2->fields.callback_close;
  if ( callback_close )
    BattleServantConfConponent_CloseButtonCallBack__Invoke(callback_close, 0LL);
  this = (BattleServantConfConponent_o *)v2->fields.equipPossessionSkillInfoComponentList;
  if ( !this )
    goto LABEL_16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__) )
  {
    if ( !v24.fields.current )
      sub_B2C434(0LL, v15);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v24.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
  this = (BattleServantConfConponent_o *)v2->fields.equipPossessionSkillInfoComponentList;
  if ( !this )
LABEL_16:
    sub_B2C434(this, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Clear__);
  v2->fields.bsvtData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.bsvtData, 0LL, v17, v18, v19, v20, v21, v22);
}


void __fastcall BattleServantConfConponent__OnClickServantAbility(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *BattleServantAbilityObj; // x0

  v2 = this;
  if ( (byte_4185ADB & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_16977/*"btn_bg_on_1"*/, v3);
    sub_B2C35C(&StringLiteral_16972/*"btn_bg_off_1"*/, v4);
    sub_B2C35C(&StringLiteral_17091/*"btn_txt_servant_states_off"*/, v5);
    sub_B2C35C(&StringLiteral_2786/*"BattleServantDetailTab"*/, v6);
    this = (BattleServantConfConponent_o *)sub_B2C35C(&StringLiteral_17089/*"btn_txt_servant_property_on"*/, v7);
    byte_4185ADB = 1;
  }
  if ( !v2->fields.isOpenAfter )
  {
    if ( BattleServantConfConponent__IsLastOpenServantAbility(this, method) )
      return;
    if ( !v2->fields.isOpenAfter )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
    }
  }
  BattleServantAbilityObj = v2->fields.BattleServantAbilityObj;
  v2->fields.isOpenAfter = 0;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL);
  BattleServantAbilityObj = v2->fields.AbillityTab;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL);
  BattleServantAbilityObj = v2->fields.AbillityBtnBg;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityBtn;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_16977/*"btn_bg_on_1"*/, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17089/*"btn_txt_servant_property_on"*/, 0LL);
  BattleServantAbilityObj = v2->fields.BattleServantStateObj;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL);
  BattleServantAbilityObj = v2->fields.StateTab;
  if ( !BattleServantAbilityObj
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL),
        (BattleServantAbilityObj = v2->fields.StateBtnBg) == 0LL)
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateBtn) == 0LL)
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_16972/*"btn_bg_off_1"*/, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateName) == 0LL) )
  {
LABEL_21:
    sub_B2C434(BattleServantAbilityObj, method);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17091/*"btn_txt_servant_states_off"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_2786/*"BattleServantDetailTab"*/, 0, 0LL);
}


void __fastcall BattleServantConfConponent__OnClickServantState(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *BattleServantAbilityObj; // x0

  v2 = this;
  if ( (byte_4185ADC & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_16977/*"btn_bg_on_1"*/, v3);
    sub_B2C35C(&StringLiteral_17092/*"btn_txt_servant_states_on"*/, v4);
    sub_B2C35C(&StringLiteral_17088/*"btn_txt_servant_property_off"*/, v5);
    sub_B2C35C(&StringLiteral_16972/*"btn_bg_off_1"*/, v6);
    this = (BattleServantConfConponent_o *)sub_B2C35C(&StringLiteral_2786/*"BattleServantDetailTab"*/, v7);
    byte_4185ADC = 1;
  }
  if ( !v2->fields.isOpenAfter )
  {
    if ( !BattleServantConfConponent__IsLastOpenServantAbility(this, method) )
      return;
    if ( !v2->fields.isOpenAfter )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
    }
  }
  BattleServantAbilityObj = v2->fields.BattleServantAbilityObj;
  v2->fields.isOpenAfter = 0;
  if ( !BattleServantAbilityObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL);
  BattleServantAbilityObj = v2->fields.AbillityTab;
  if ( !BattleServantAbilityObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL);
  BattleServantAbilityObj = v2->fields.AbillityBtnBg;
  if ( !BattleServantAbilityObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityBtn;
  if ( !BattleServantAbilityObj )
    goto LABEL_22;
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_16972/*"btn_bg_off_1"*/, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_22;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17088/*"btn_txt_servant_property_off"*/, 0LL);
  BattleServantAbilityObj = v2->fields.BattleServantStateObj;
  if ( !BattleServantAbilityObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL);
  BattleServantAbilityObj = v2->fields.StateTab;
  if ( !BattleServantAbilityObj
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL),
        (BattleServantAbilityObj = v2->fields.StateBtnBg) == 0LL)
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateBtn) == 0LL)
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_16977/*"btn_bg_on_1"*/, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateName) == 0LL) )
  {
LABEL_22:
    sub_B2C434(BattleServantAbilityObj, method);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17092/*"btn_txt_servant_states_on"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_2786/*"BattleServantDetailTab"*/, 1, 0LL);
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
    sub_B2C434(0LL, call);
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

  if ( (byte_4185AD8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185AD8 = 1;
  }
  BattleServantAbilityObj = (UnityEngine_Object_o *)this->fields.BattleServantAbilityObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(BattleServantAbilityObj, 0LL, 0LL) )
  {
    BattleServantStateObj = (UnityEngine_Object_o *)this->fields.BattleServantStateObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
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
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(AbillityScrollView, 0LL, 0LL) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.AbillityScrollView;
              if ( !buffListView )
                goto LABEL_43;
              UIScrollView__ResetPosition((UIScrollView_o *)buffListView, 0LL);
            }
            AbillityScrollBarWiget = (UnityEngine_Object_o *)this->fields.AbillityScrollBarWiget;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(AbillityScrollBarWiget, 0LL, 0LL) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.AbillityScrollBarWiget;
              if ( !buffListView )
                goto LABEL_43;
              UIWidget__ResizeCollider((UIWidget_o *)buffListView, 0LL);
            }
            StateScrollView = (UnityEngine_Object_o *)this->fields.StateScrollView;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(StateScrollView, 0LL, 0LL) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.StateScrollView;
              if ( !buffListView )
                goto LABEL_43;
              UIScrollView__ResetPosition((UIScrollView_o *)buffListView, 0LL);
            }
            StateScrollBarWiget = (UnityEngine_Object_o *)this->fields.StateScrollBarWiget;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(StateScrollBarWiget, 0LL, 0LL) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.StateScrollBarWiget;
              if ( !buffListView )
                goto LABEL_43;
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
LABEL_43:
      sub_B2C434(buffListView, v5);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantConfConponent__SetAppendSkillList(
        BattleServantConfConponent_o *this,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *AppendSkillObj; // x21
  const MethodInfo *v14; // x1
  UnityEngine_GameObject_o *AppendSkillTitle; // x0
  UnityEngine_Object_o *AppendSkillListParent; // x21
  UnityEngine_Object_o *AppendSkillInfoPrefab; // x21
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  struct BattleServantData_o *bsvtData; // x8
  __int128 v20; // q1
  int64_t v21; // x0
  struct BattleServantData_o *v22; // x8
  UnityEngine_GameObject_o *v23; // x20
  _BOOL8 IsNpc; // x0
  ServantAppendPassiveSkillMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t v26; // w20
  System_Int32_array *v27; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x26
  unsigned __int64 v29; // x28
  int32_t v30; // w21
  float v31; // s8
  unsigned __int64 max_length; // x9
  int32_t v33; // w22
  System_String_o *v34; // x24
  System_String_o *v35; // x23
  _BOOL4 v36; // w20
  UnityEngine_GameObject_o *v37; // x25
  struct UnityEngine_GameObject_o *v38; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v39; // x21
  UnityEngine_Transform_o *v40; // x26
  UnityEngine_Transform_o *transform; // x26
  int v42; // s0
  UnityEngine_Transform_o *v45; // x26
  int v46; // s0
  srcLineSprite_o *Component_srcLineSprite; // x25
  int32_t v51; // w6
  const MethodInfo *v52; // x7
  struct TweenScale_o *mcTweenScaleP; // x8
  int mTable_high; // w9
  __int64 v55; // x0
  System_Int32_array *releaseSkillLvs; // [xsp+0h] [xbp-100h]
  int32_t v57; // [xsp+1Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+40h] [xbp-C0h]
  WarEntity_o *entity; // [xsp+68h] [xbp-98h] BYREF
  System_Int32_array *lvList; // [xsp+70h] [xbp-90h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+78h] [xbp-88h] BYREF
  System_String_array *explanationList; // [xsp+80h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+88h] [xbp-78h] BYREF
  System_Int32_array *idList[2]; // [xsp+90h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4185AD3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, battleInfoData);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___, v8);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_19685/*"img_txt_extraskill"*/, v12);
    byte_4185AD3 = 1;
  }
  titleList = 0LL;
  idList[0] = 0LL;
  explanationList = 0LL;
  lvList = 0LL;
  releaseStateList = 0LL;
  entity = 0LL;
  AppendSkillObj = (UnityEngine_Object_o *)this->fields.AppendSkillObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(AppendSkillObj, 0LL, 0LL) )
  {
    AppendSkillTitle = this->fields.AppendSkillObj;
    if ( !AppendSkillTitle )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive(AppendSkillTitle, 0, 0LL);
  }
  if ( !battleInfoData )
    return;
  AppendSkillListParent = (UnityEngine_Object_o *)this->fields.AppendSkillListParent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(AppendSkillListParent, 0LL, 0LL) || !this->fields.bsvtData )
    return;
  AppendSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.AppendSkillInfoPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(AppendSkillInfoPrefab, 0LL, 0LL) )
    return;
  this->fields.AppendSkillOffset = 0.0;
  BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL) && !BattleServantConfConponent__SetAtlas(this, v14) )
    return;
  AppendSkillTitle = (UnityEngine_GameObject_o *)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_100;
  UISprite__set_atlas((UISprite_o *)AppendSkillTitle, this->fields.BattleAssetUIAtlas, 0LL);
  AppendSkillTitle = (UnityEngine_GameObject_o *)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_100;
  UISprite__set_spriteName((UISprite_o *)AppendSkillTitle, (System_String_o *)StringLiteral_19685/*"img_txt_extraskill"*/, 0LL);
  AppendSkillTitle = (UnityEngine_GameObject_o *)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_100;
  AppendSkillTitle = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, void *))AppendSkillTitle->klass[2]._1.typeMetadataHandle)(
                                                   AppendSkillTitle,
                                                   AppendSkillTitle->klass[2]._1.interopData);
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_100;
  v20 = *(_OWORD *)&bsvtData->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&bsvtData->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v59.fields.fakeValue = v20;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v58 = v59;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v58, 0LL);
  AppendSkillTitle = (UnityEngine_GameObject_o *)BattleInfoData__getUserServantFromID(battleInfoData, v21, 0LL);
  if ( !AppendSkillTitle )
    return;
  v22 = this->fields.bsvtData;
  if ( !v22 )
    goto LABEL_100;
  v23 = AppendSkillTitle;
  IsNpc = Follower__IsNpc(v22->fields.followerType, 0LL);
  if ( IsNpc )
  {
    BattleServantConfConponent__GetAppendSkillInfo(
      (BattleServantConfConponent_o *)IsNpc,
      idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      (System_Int32_array *)v23[20].monitor,
      *(System_Int32_array **)&v23[20].fields.m_CachedPtr,
      (const MethodInfo *)releaseSkillLvs);
  }
  else
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantAppendPassiveSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    AppendSkillTitle = (UnityEngine_GameObject_o *)UserServantEntity__getSvtId((UserServantEntity_o *)v23, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_100;
    ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_25315732(
      Master_WarQuestSelectionMaster,
      idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      (int32_t)AppendSkillTitle,
      (System_Int32_array *)v23[20].monitor,
      *(System_Int32_array **)&v23[20].fields.m_CachedPtr,
      0LL);
  }
  if ( !idList[0] || !*(_QWORD *)&idList[0]->max_length )
    return;
  AppendSkillTitle = this->fields.AppendSkillObj;
  if ( !AppendSkillTitle )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive(AppendSkillTitle, 1, 0LL);
  AppendSkillTitle = this->fields.AppendSkillListParent;
  if ( !AppendSkillTitle )
    goto LABEL_100;
  v26 = 0;
  while ( 1 )
  {
    AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(AppendSkillTitle, 0LL);
    if ( !AppendSkillTitle )
      goto LABEL_100;
    if ( v26 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AppendSkillTitle, 0LL) )
      break;
    AppendSkillTitle = this->fields.AppendSkillListParent;
    if ( AppendSkillTitle )
    {
      AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(AppendSkillTitle, 0LL);
      if ( AppendSkillTitle )
      {
        AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                         (UnityEngine_Transform_o *)AppendSkillTitle,
                                                         v26,
                                                         0LL);
        if ( AppendSkillTitle )
        {
          AppendSkillTitle = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)AppendSkillTitle, 0LL);
          if ( AppendSkillTitle )
          {
            UnityEngine_GameObject__SetActive(AppendSkillTitle, 0, 0LL);
            AppendSkillTitle = this->fields.AppendSkillListParent;
            ++v26;
            if ( AppendSkillTitle )
              continue;
          }
        }
      }
    }
    goto LABEL_100;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  AppendSkillTitle = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
  v27 = idList[0];
  entity = 0LL;
  if ( !idList[0] )
LABEL_100:
    sub_B2C434(AppendSkillTitle, v14);
  v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)AppendSkillTitle;
  v29 = 0LL;
  v30 = 0;
  v31 = 0.0;
  while ( 1 )
  {
    max_length = v27->max_length;
    if ( (__int64)v29 >= (int)max_length )
      break;
    if ( v29 >= max_length )
      goto LABEL_103;
    if ( !lvList )
      goto LABEL_100;
    if ( v29 >= lvList->max_length )
      goto LABEL_103;
    v33 = v27->m_Items[v29 + 1];
    if ( v33 >= 1 )
    {
      if ( !v28 )
        goto LABEL_100;
      AppendSkillTitle = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       v28,
                                                       &entity,
                                                       v33,
                                                       (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)AppendSkillTitle & 1) == 0 )
        return;
      if ( !titleList )
        goto LABEL_100;
      if ( v29 >= titleList->max_length )
        goto LABEL_103;
      if ( !explanationList )
        goto LABEL_100;
      if ( v29 >= explanationList->max_length )
        goto LABEL_103;
      if ( !releaseStateList )
        goto LABEL_100;
      if ( v29 >= releaseStateList->max_length )
      {
LABEL_103:
        v55 = sub_B2C460(AppendSkillTitle);
        sub_B2C400(v55, 0LL);
      }
      AppendSkillTitle = this->fields.AppendSkillListParent;
      if ( !AppendSkillTitle )
        goto LABEL_100;
      v34 = titleList->m_Items[v29];
      v35 = explanationList->m_Items[v29];
      v36 = releaseStateList->m_Items[v29 + 4];
      AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(AppendSkillTitle, 0LL);
      if ( !AppendSkillTitle )
        goto LABEL_100;
      if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AppendSkillTitle, 0LL) <= v30 )
      {
        v38 = this->fields.AppendSkillInfoPrefab;
        v57 = v30;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v39 = v28;
        AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                         (UnityEngine_UI_Dropdown_DropdownItem_o *)v38,
                                                         (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !AppendSkillTitle )
          goto LABEL_100;
        v37 = AppendSkillTitle;
        UnityEngine_GameObject__SetActive(AppendSkillTitle, 1, 0LL);
        AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v37, 0LL);
        if ( !this->fields.AppendSkillListParent )
          goto LABEL_100;
        v40 = (UnityEngine_Transform_o *)AppendSkillTitle;
        AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         this->fields.AppendSkillListParent,
                                                         0LL);
        if ( !v40 )
          goto LABEL_100;
        UnityEngine_Transform__set_parent(v40, (UnityEngine_Transform_o *)AppendSkillTitle, 0LL);
        AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v37, 0LL);
        if ( !AppendSkillTitle )
          goto LABEL_100;
        v67.fields.y = -v31;
        v67.fields.x = 0.0;
        v67.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AppendSkillTitle, v67, 0LL);
        transform = UnityEngine_GameObject__get_transform(v37, 0LL);
        *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Vector3__get_one(0LL);
        if ( !transform )
          goto LABEL_100;
        UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v42, 0LL);
        v45 = UnityEngine_GameObject__get_transform(v37, 0LL);
        *(UnityEngine_Quaternion_o *)&v46 = UnityEngine_Quaternion__get_identity(0LL);
        if ( !v45 )
          goto LABEL_100;
        UnityEngine_Transform__set_localRotation(v45, *(UnityEngine_Quaternion_o *)&v46, 0LL);
        v28 = v39;
        v30 = v57;
      }
      else
      {
        AppendSkillTitle = this->fields.AppendSkillListParent;
        if ( !AppendSkillTitle )
          goto LABEL_100;
        AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(AppendSkillTitle, 0LL);
        if ( !AppendSkillTitle )
          goto LABEL_100;
        AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                         (UnityEngine_Transform_o *)AppendSkillTitle,
                                                         v30,
                                                         0LL);
        if ( !AppendSkillTitle )
          goto LABEL_100;
        AppendSkillTitle = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)AppendSkillTitle, 0LL);
        if ( !AppendSkillTitle )
          goto LABEL_100;
        v37 = AppendSkillTitle;
        UnityEngine_GameObject__SetActive(AppendSkillTitle, 1, 0LL);
        AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v37, 0LL);
        if ( !AppendSkillTitle )
          goto LABEL_100;
        v66.fields.y = -v31;
        v66.fields.x = 0.0;
        v66.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AppendSkillTitle, v66, 0LL);
      }
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v37,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_srcLineSprite,
                                                       0LL,
                                                       0LL);
      if ( ((unsigned __int8)AppendSkillTitle & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_100;
        BattleServantConfSkillComponent__SetItem(
          (BattleServantConfSkillComponent_o *)Component_srcLineSprite,
          v29 + 1,
          v33,
          v34,
          v35,
          v36,
          v51,
          v52);
      }
      else if ( !Component_srcLineSprite )
      {
        goto LABEL_100;
      }
      mcTweenScaleP = Component_srcLineSprite->fields.mcTweenScaleP;
      if ( !mcTweenScaleP )
        goto LABEL_100;
      mTable_high = HIDWORD(mcTweenScaleP->fields.mTable);
      v27 = idList[0];
      ++v30;
      v31 = v31 + (float)((float)(mTable_high - Component_srcLineSprite->fields.miLineW) + 110.0);
    }
    ++v29;
    if ( !v27 )
      goto LABEL_100;
  }
  this->fields.AppendSkillOffset = -(float)(v31 + 1.0);
}


bool __fastcall BattleServantConfConponent__SetAtlas(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AssetData_o *AssetStorage; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0

  if ( (byte_4185ADD & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, method);
    sub_B2C35C(&AssetManager_TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_2755/*"Battle/Common"*/, v6);
    sub_B2C35C(&StringLiteral_2770/*"BattleAssetUIAtlas"*/, v7);
    byte_4185ADD = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2755/*"Battle/Common"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_14;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             AssetStorage,
                                                             (System_String_o *)StringLiteral_2770/*"BattleAssetUIAtlas"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  if ( ((unsigned __int8)AssetStorage & 1) != 0 )
  {
    if ( Object_WarBoardWaitTimeSetting )
    {
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      this->fields.BattleAssetUIAtlas = (struct UIAtlas_o *)Component_srcLineSprite;
      sub_B2C2F8(&this->fields.BattleAssetUIAtlas, Component_srcLineSprite);
      return 1;
    }
LABEL_14:
    sub_B2C434(AssetStorage, v9);
  }
  return 0;
}


void __fastcall BattleServantConfConponent__SetAttribute(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  long double v2; // q8
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_Object_o *AbillityScrollView; // x20
  UnityEngine_Component_o *attributeBaseSprite; // x0
  const MethodInfo *v21; // x1
  struct UIScrollView_o *v22; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIScrollView_o *v24; // x8
  struct UIScrollView_o *v25; // x8
  __int64 v26; // x8
  struct UIScrollView_o *v27; // x8
  __int64 v28; // x8
  struct UIScrollView_o *v29; // x8
  __int64 v30; // x8
  UnityEngine_Object_o *BattleAssetUIAtlas; // x20
  System_String_o *v32; // x20
  System_String_o *Attribute; // x21
  struct BattleServantData_o *bsvtData; // x8
  ServantLimitMaster_o *v35; // x22
  __int64 v36; // x23
  __int64 v37; // x24
  const MethodInfo *v38; // x3
  struct BattleServantData_o *v39; // x8
  __int64 v40; // x23
  __int64 v41; // x24
  const MethodInfo *v42; // x2
  int32_t v43; // w23
  int32_t v44; // w3
  ServantLimitMaster_o *v45; // x0
  int32_t v46; // w2
  UnityEngine_Object_o *attributeObj; // x20
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  struct BattleServantData_o *v49; // x8
  __int64 v50; // x23
  __int64 v51; // x24
  bool IsNullOrEmpty; // w0
  const MethodInfo *v53; // x2
  int v54; // w22
  int32_t policy; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x21
  System_String_o *v57; // x0
  System_String_o *v58; // x22
  System_String_o *v59; // x0
  System_String_o *v60; // x22
  System_String_o *v61; // x0
  BattleServantConfConponent_o *ServantIndividualityList; // x0
  const MethodInfo *v63; // x3
  System_String_o *v64; // x0
  System_String_o *v65; // x20
  Il2CppObject *v66; // x20
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  UnityEngine_Object_o *attributeLabel; // x21
  System_String_o *v70; // x20
  int32_t Attri; // [xsp+4h] [xbp-6Ch] BYREF
  __int64 v72; // [xsp+8h] [xbp-68h] BYREF
  ServantLimitEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_4185AE0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v6);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_20234/*"line_whiteAlpha"*/, v11);
    sub_B2C35C(&StringLiteral_11746/*"SERVANT_PERSONALITY_"*/, v12);
    sub_B2C35C(&StringLiteral_11661/*"SERVANT_ATTRIBUTE_SPLIT"*/, v13);
    sub_B2C35C(&StringLiteral_12053/*"SERVANT_SUB_ATTRIBUTE_"*/, v14);
    sub_B2C35C(&StringLiteral_11751/*"SERVANT_POLICY_"*/, v15);
    sub_B2C35C(&StringLiteral_11660/*"SERVANT_ATTRIBUTE_NONE"*/, v16);
    sub_B2C35C(&StringLiteral_1/*""*/, v17);
    sub_B2C35C(&StringLiteral_11659/*"SERVANT_ATTRIBUTE_FORMAT"*/, v18);
    byte_4185AE0 = 1;
  }
  entity = 0LL;
  v72 = 0LL;
  Attri = 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_11659/*"SERVANT_ATTRIBUTE_FORMAT"*/, 0LL) )
  {
    AbillityScrollView = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    attributeBaseSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(AbillityScrollView, 0LL, 0LL);
    if ( ((unsigned __int8)attributeBaseSprite & 1) != 0 )
    {
      v22 = this->fields.AbillityScrollView;
      if ( !v22 )
        goto LABEL_101;
      attributeBaseSprite = *(UnityEngine_Component_o **)&v22->fields.mPlane.fields.m_Normal.fields.x;
      if ( !attributeBaseSprite )
        goto LABEL_101;
      LODWORD(v2) = 1138163712;
      if ( UIPanel__get_height((UIPanel_o *)attributeBaseSprite, 0LL) > 430.0 )
      {
        attributeBaseSprite = (UnityEngine_Component_o *)this->fields.AbillityScrollView;
        if ( !attributeBaseSprite )
          goto LABEL_101;
        gameObject = UnityEngine_Component__get_gameObject(attributeBaseSprite, 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, -55.0, 0LL);
        v24 = this->fields.AbillityScrollView;
        if ( !v24 )
          goto LABEL_101;
        attributeBaseSprite = *(UnityEngine_Component_o **)&v24->fields.mPlane.fields.m_Normal.fields.x;
        if ( !attributeBaseSprite )
          goto LABEL_101;
        ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, float, float, float, long double))attributeBaseSprite->klass[1]._2.genericContainerHandle)(
          attributeBaseSprite,
          *(_QWORD *)&attributeBaseSprite->klass[1]._2.instance_size,
          0.0,
          -127.0,
          670.0,
          v2);
        GameObjectExtensions__SetLocalPositionY(this->fields.abillityScrollBarObject, -238.0, 0LL);
        v25 = this->fields.AbillityScrollView;
        if ( !v25 )
          goto LABEL_101;
        v26 = *(_QWORD *)&v25->fields.showScrollBars;
        if ( !v26 )
          goto LABEL_101;
        attributeBaseSprite = *(UnityEngine_Component_o **)(v26 + 40);
        if ( !attributeBaseSprite )
          goto LABEL_101;
        UIWidget__set_height((UIWidget_o *)attributeBaseSprite, 430, 0LL);
        v27 = this->fields.AbillityScrollView;
        if ( !v27 )
          goto LABEL_101;
        v28 = *(_QWORD *)&v27->fields.showScrollBars;
        if ( !v28 )
          goto LABEL_101;
        attributeBaseSprite = *(UnityEngine_Component_o **)(v28 + 48);
        if ( !attributeBaseSprite )
          goto LABEL_101;
        UIWidget__set_width((UIWidget_o *)attributeBaseSprite, 26, 0LL);
        v29 = this->fields.AbillityScrollView;
        if ( !v29 )
          goto LABEL_101;
        v30 = *(_QWORD *)&v29->fields.showScrollBars;
        if ( !v30 )
          goto LABEL_101;
        attributeBaseSprite = *(UnityEngine_Component_o **)(v30 + 48);
        if ( !attributeBaseSprite )
          goto LABEL_101;
        UIWidget__set_height((UIWidget_o *)attributeBaseSprite, 430, 0LL);
      }
    }
    BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL)
      && !BattleServantConfConponent__SetAtlas(this, v21) )
    {
      return;
    }
    attributeBaseSprite = (UnityEngine_Component_o *)this->fields.attributeBaseSprite;
    if ( !attributeBaseSprite )
      goto LABEL_101;
    UISprite__set_atlas((UISprite_o *)attributeBaseSprite, this->fields.BattleAssetUIAtlas, 0LL);
    attributeBaseSprite = (UnityEngine_Component_o *)this->fields.attributeBaseSprite;
    if ( !attributeBaseSprite )
      goto LABEL_101;
    UISprite__set_spriteName((UISprite_o *)attributeBaseSprite, (System_String_o *)StringLiteral_20234/*"line_whiteAlpha"*/, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11661/*"SERVANT_ATTRIBUTE_SPLIT"*/, 0LL);
    Attribute = (System_String_o *)StringLiteral_1/*""*/;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    attributeBaseSprite = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitMaster___);
    entity = 0LL;
    bsvtData = this->fields.bsvtData;
    if ( !bsvtData )
      goto LABEL_101;
    v35 = (ServantLimitMaster_o *)attributeBaseSprite;
    v37 = *(_QWORD *)&bsvtData->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
    v36 = *(_QWORD *)&bsvtData->fields._dispLimitCount_k__BackingField.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v74.fields.currentCryptoKey = v37;
    *(_QWORD *)&v74.fields.fakeValue = v36;
    attributeBaseSprite = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                       v74,
                                                       0LL);
    v39 = this->fields.bsvtData;
    if ( !v39 )
      goto LABEL_101;
    if ( (int)attributeBaseSprite >= 11 )
    {
      svtlimitaddent = v39->fields.svtlimitaddent;
      if ( !svtlimitaddent )
        goto LABEL_101;
      Attribute = BattleServantConfConponent__GetAttribute(
                    (BattleServantConfConponent_o *)attributeBaseSprite,
                    (System_Collections_Generic_IEnumerable_int__o *)svtlimitaddent->fields.individuality,
                    v32,
                    v38);
      attributeBaseSprite = (UnityEngine_Component_o *)System_String__IsNullOrEmpty(Attribute, 0LL);
      if ( ((unsigned __int8)attributeBaseSprite & 1) == 0 )
      {
LABEL_67:
        IsNullOrEmpty = System_String__IsNullOrEmpty(Attribute, 0LL);
        if ( entity )
        {
          policy = entity->fields.policy;
          LODWORD(v72) = entity->fields.personality;
          v54 = v72;
          HIDWORD(v72) = policy;
          if ( (unsigned int)v72 | policy )
          {
            v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v56,
              (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
            if ( policy )
            {
              v57 = System_Int32__ToString((int32_t)&v72 + 4, 0LL);
              v58 = System_String__Concat_44305532((System_String_o *)StringLiteral_11751/*"SERVANT_POLICY_"*/, v57, 0LL);
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              attributeBaseSprite = (UnityEngine_Component_o *)LocalizationManager__Get(v58, 0LL);
              if ( !v56 )
                goto LABEL_101;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v56,
                (EventMissionProgressRequest_Argument_ProgressData_o *)attributeBaseSprite,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
              v54 = v72;
            }
            if ( v54 )
            {
              v59 = System_Int32__ToString((int32_t)&v72, 0LL);
              v60 = System_String__Concat_44305532((System_String_o *)StringLiteral_11746/*"SERVANT_PERSONALITY_"*/, v59, 0LL);
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              attributeBaseSprite = (UnityEngine_Component_o *)LocalizationManager__Get(v60, 0LL);
              if ( !v56 )
                goto LABEL_101;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v56,
                (EventMissionProgressRequest_Argument_ProgressData_o *)attributeBaseSprite,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
            }
            v61 = System_String__Join_44360976(v32, (System_Collections_Generic_IEnumerable_string__o *)v56, 0LL);
            goto LABEL_89;
          }
        }
        else if ( !IsNullOrEmpty )
        {
          goto LABEL_90;
        }
        attributeBaseSprite = (UnityEngine_Component_o *)this->fields.bsvtData;
        if ( !attributeBaseSprite )
          goto LABEL_101;
        ServantIndividualityList = (BattleServantConfConponent_o *)BattleServantData__GetServantIndividualityList(
                                                                     (BattleServantData_o *)attributeBaseSprite,
                                                                     0LL,
                                                                     v53);
        Attribute = BattleServantConfConponent__GetAttribute(
                      ServantIndividualityList,
                      (System_Collections_Generic_IEnumerable_int__o *)ServantIndividualityList,
                      v32,
                      v63);
        if ( !System_String__IsNullOrEmpty(Attribute, 0LL) )
        {
LABEL_90:
          attributeBaseSprite = (UnityEngine_Component_o *)this->fields.bsvtData;
          if ( !attributeBaseSprite )
            goto LABEL_101;
          Attri = BattleServantData__getAttri((BattleServantData_o *)attributeBaseSprite, v21);
          v64 = System_Int32__ToString((int32_t)&Attri, 0LL);
          v65 = System_String__Concat_44305532((System_String_o *)StringLiteral_12053/*"SERVANT_SUB_ATTRIBUTE_"*/, v64, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v66 = (Il2CppObject *)LocalizationManager__Get(v65, 0LL);
          v67 = LocalizationManager__Get((System_String_o *)StringLiteral_11659/*"SERVANT_ATTRIBUTE_FORMAT"*/, 0LL);
          v68 = System_String__Format_44301068(v67, (Il2CppObject *)Attribute, v66, 0LL);
          attributeLabel = (UnityEngine_Object_o *)this->fields.attributeLabel;
          v70 = v68;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(attributeLabel, 0LL, 0LL) )
          {
            attributeBaseSprite = (UnityEngine_Component_o *)this->fields.attributeLabel;
            if ( attributeBaseSprite )
            {
              UILabel__set_text((UILabel_o *)attributeBaseSprite, v70, 0LL);
              return;
            }
LABEL_101:
            sub_B2C434(attributeBaseSprite, v21);
          }
          return;
        }
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v61 = LocalizationManager__Get((System_String_o *)StringLiteral_11660/*"SERVANT_ATTRIBUTE_NONE"*/, 0LL);
LABEL_89:
        Attribute = v61;
        goto LABEL_90;
      }
      v49 = this->fields.bsvtData;
      if ( !v49 )
        goto LABEL_101;
      v51 = *(_QWORD *)&v49->fields.svtId.fields.currentCryptoKey;
      v50 = *(_QWORD *)&v49->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v76.fields.currentCryptoKey = v51;
      *(_QWORD *)&v76.fields.fakeValue = v50;
      attributeBaseSprite = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                         v76,
                                                         0LL);
      if ( !v35 )
        goto LABEL_101;
      v46 = (int)attributeBaseSprite;
      v45 = v35;
      v44 = 0;
    }
    else
    {
      v41 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
      v40 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v75.fields.currentCryptoKey = v41;
      *(_QWORD *)&v75.fields.fakeValue = v40;
      attributeBaseSprite = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                         v75,
                                                         0LL);
      if ( !this->fields.bsvtData )
        goto LABEL_101;
      v43 = (int)attributeBaseSprite;
      attributeBaseSprite = (UnityEngine_Component_o *)BattleServantData__getDispLimitCount(
                                                         this->fields.bsvtData,
                                                         1,
                                                         v42);
      if ( !v35 )
        goto LABEL_101;
      v44 = (int)attributeBaseSprite;
      v45 = v35;
      v46 = v43;
    }
    ServantLimitMaster__TryGetEntity(v45, &entity, v46, v44, 0LL);
    goto LABEL_67;
  }
  attributeObj = (UnityEngine_Object_o *)this->fields.attributeObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(attributeObj, 0LL, 0LL) )
  {
    attributeBaseSprite = (UnityEngine_Component_o *)this->fields.attributeObj;
    if ( attributeBaseSprite )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)attributeBaseSprite, 0, 0LL);
      return;
    }
    goto LABEL_101;
  }
}


void __fastcall BattleServantConfConponent__SetClassBoardSkillList(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *classBoardSkillObj; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  BattleServantConfWindowPassiveSkillListComponent_o *v7; // x0
  struct BattleServantData_o *bsvtData; // x8
  UnityEngine_Object_o *BattleAssetUIAtlas; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_4185ADF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_20470/*"menu_txt_class_score"*/, v3);
    byte_4185ADF = 1;
  }
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0LL, 0LL) )
  {
    v7 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
    if ( !v7 )
      goto LABEL_21;
    BattleServantConfWindowPassiveSkillListComponent__SetActive(v7, 0, v6);
  }
  bsvtData = this->fields.bsvtData;
  if ( bsvtData
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)bsvtData->fields.classBoardAddPassiveSkills, 0LL) )
  {
    BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL)
      || BattleServantConfConponent__SetAtlas(this, v5) )
    {
      v7 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
      if ( v7 )
      {
        ((void (__fastcall *)(BattleServantConfWindowPassiveSkillListComponent_o *, struct UIAtlas_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._5_SetSkillTitle.method)(
          v7,
          this->fields.BattleAssetUIAtlas,
          StringLiteral_20470/*"menu_txt_class_score"*/,
          v7->klass->vtable._6_SetSkillInfoObject.methodPtr);
        v7 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
        if ( v7 )
        {
          BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
            (BattleServantClassBoardSkillEffectListComponent_o *)v7,
            this->fields.bsvtData,
            v10);
          v7 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
          if ( v7 )
          {
            BattleServantConfWindowPassiveSkillListComponent__SetActive(v7, 1, v11);
            return;
          }
        }
      }
LABEL_21:
      sub_B2C434(v7, v5);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantConfConponent__SetClassSkillList(
        BattleServantConfConponent_o *this,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *ClassSkillObj; // x21
  const MethodInfo *v14; // x1
  __int64 bsvtData; // x0
  UnityEngine_Object_o *ClassSkillListParent; // x21
  UnityEngine_Object_o *ClassSkillInfoPrefab; // x21
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  struct BattleServantData_o *v19; // x8
  __int128 v20; // q1
  int64_t v21; // x0
  __int64 v22; // x27
  int32_t v23; // w20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  struct TweenScale_o *mcTweenScaleP; // x8
  SkillLvMaster_o *v26; // x24
  unsigned __int64 v27; // x21
  int32_t v28; // w22
  float v29; // s8
  int32_t v30; // w23
  System_String_o *v31; // x24
  System_String_o *v32; // x25
  UnityEngine_GameObject_o *v33; // x26
  struct UnityEngine_GameObject_o *v34; // x26
  __int64 v35; // x20
  UnityEngine_Transform_o *v36; // x27
  UnityEngine_Transform_o *transform; // x27
  int v38; // s0
  UnityEngine_Transform_o *v41; // x27
  int v42; // s0
  srcLineSprite_o *Component_srcLineSprite; // x26
  int32_t v47; // w6
  const MethodInfo *v48; // x7
  int mTable_high; // w9
  __int64 v50; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // [xsp+8h] [xbp-C8h]
  SkillLvMaster_o *v52; // [xsp+10h] [xbp-C0h]
  __int64 v53; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-90h]
  SkillLvEntity_o *v56; // [xsp+60h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4185AD2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, battleInfoData);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___, v8);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_19672/*"img_txt_classskill"*/, v12);
    byte_4185AD2 = 1;
  }
  v56 = 0LL;
  entity = 0LL;
  ClassSkillObj = (UnityEngine_Object_o *)this->fields.ClassSkillObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ClassSkillObj, 0LL, 0LL) )
  {
    bsvtData = (__int64)this->fields.ClassSkillObj;
    if ( !bsvtData )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0LL);
  }
  if ( !battleInfoData )
    return;
  ClassSkillListParent = (UnityEngine_Object_o *)this->fields.ClassSkillListParent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(ClassSkillListParent, 0LL, 0LL) || !this->fields.bsvtData )
    return;
  ClassSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.ClassSkillInfoPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(ClassSkillInfoPrefab, 0LL, 0LL) )
    return;
  bsvtData = (__int64)this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_46;
  if ( BattleServantData__IsHideClassSkillNpcFollower((BattleServantData_o *)bsvtData, v14) )
    return;
  this->fields.ClassSkillOffset = 0.0;
  BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL) && !BattleServantConfConponent__SetAtlas(this, v14) )
    return;
  bsvtData = (__int64)this->fields.ClassSkillTitle;
  if ( !bsvtData )
    goto LABEL_46;
  UISprite__set_atlas((UISprite_o *)bsvtData, this->fields.BattleAssetUIAtlas, 0LL);
  bsvtData = (__int64)this->fields.ClassSkillTitle;
  if ( !bsvtData )
    goto LABEL_46;
  UISprite__set_spriteName((UISprite_o *)bsvtData, (System_String_o *)StringLiteral_19672/*"img_txt_classskill"*/, 0LL);
  bsvtData = (__int64)this->fields.ClassSkillTitle;
  if ( !bsvtData )
    goto LABEL_46;
  bsvtData = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bsvtData + 840LL))(
               bsvtData,
               *(_QWORD *)(*(_QWORD *)bsvtData + 848LL));
  v19 = this->fields.bsvtData;
  if ( !v19 )
    goto LABEL_46;
  v20 = *(_OWORD *)&v19->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&v19->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v55.fields.fakeValue = v20;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v54 = v55;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v54, 0LL);
  bsvtData = (__int64)BattleInfoData__getUserServantFromID(battleInfoData, v21, 0LL);
  if ( !bsvtData )
    return;
  v22 = *(_QWORD *)(bsvtData + 424);
  if ( !v22 )
    goto LABEL_46;
  if ( !*(_QWORD *)(v22 + 24) )
    return;
  bsvtData = (__int64)this->fields.ClassSkillObj;
  if ( !bsvtData
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL),
        (bsvtData = (__int64)this->fields.ClassSkillListParent) == 0) )
  {
LABEL_46:
    sub_B2C434(bsvtData, v14);
  }
  v23 = 0;
  while ( 1 )
  {
    bsvtData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)bsvtData, 0LL);
    if ( !bsvtData )
      goto LABEL_46;
    if ( v23 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0LL) )
      break;
    bsvtData = (__int64)this->fields.ClassSkillListParent;
    if ( bsvtData )
    {
      bsvtData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)bsvtData, 0LL);
      if ( bsvtData )
      {
        bsvtData = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)bsvtData, v23, 0LL);
        if ( bsvtData )
        {
          bsvtData = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bsvtData, 0LL);
          if ( bsvtData )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0LL);
            bsvtData = (__int64)this->fields.ClassSkillListParent;
            ++v23;
            if ( bsvtData )
              continue;
          }
        }
      }
    }
    goto LABEL_46;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
  entity = 0LL;
  bsvtData = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
  v56 = 0LL;
  mcTweenScaleP = *(struct TweenScale_o **)(v22 + 24);
  if ( (int)mcTweenScaleP >= 1 )
  {
    v53 = v22 + 32;
    v26 = (SkillLvMaster_o *)bsvtData;
    v27 = 0LL;
    v28 = 0;
    v29 = 0.0;
    v51 = Master_WarQuestSelectionMaster;
    v52 = (SkillLvMaster_o *)bsvtData;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)mcTweenScaleP )
      {
        v50 = sub_B2C460(bsvtData);
        sub_B2C400(v50, 0LL);
      }
      v30 = *(_DWORD *)(v53 + 4 * v27);
      if ( v30 >= 1 )
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_46;
        bsvtData = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                     Master_WarQuestSelectionMaster,
                     &entity,
                     v30,
                     (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( (bsvtData & 1) == 0 )
          return;
        if ( !v26 )
          goto LABEL_46;
        if ( !SkillLvMaster__TryGetEntity(v26, &v56, v30, 1, 0LL) )
          return;
        bsvtData = (__int64)entity;
        if ( !entity )
          goto LABEL_46;
        bsvtData = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
        if ( !v56 )
          goto LABEL_46;
        v31 = (System_String_o *)bsvtData;
        bsvtData = (__int64)SkillLvEntity__getDetail_23775852(v56, 1, 0, 0LL);
        if ( !this->fields.ClassSkillListParent )
          goto LABEL_46;
        v32 = (System_String_o *)bsvtData;
        bsvtData = (__int64)UnityEngine_GameObject__get_transform(this->fields.ClassSkillListParent, 0LL);
        if ( !bsvtData )
          goto LABEL_46;
        if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0LL) <= v28 )
        {
          v34 = this->fields.ClassSkillInfoPrefab;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v35 = v22;
          bsvtData = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                (UnityEngine_UI_Dropdown_DropdownItem_o *)v34,
                                (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !bsvtData )
            goto LABEL_46;
          v33 = (UnityEngine_GameObject_o *)bsvtData;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
          bsvtData = (__int64)UnityEngine_GameObject__get_transform(v33, 0LL);
          if ( !this->fields.ClassSkillListParent )
            goto LABEL_46;
          v36 = (UnityEngine_Transform_o *)bsvtData;
          bsvtData = (__int64)UnityEngine_GameObject__get_transform(this->fields.ClassSkillListParent, 0LL);
          if ( !v36 )
            goto LABEL_46;
          UnityEngine_Transform__set_parent(v36, (UnityEngine_Transform_o *)bsvtData, 0LL);
          bsvtData = (__int64)UnityEngine_GameObject__get_transform(v33, 0LL);
          if ( !bsvtData )
            goto LABEL_46;
          v59.fields.y = -v29;
          v59.fields.x = 0.0;
          v59.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v59, 0LL);
          transform = UnityEngine_GameObject__get_transform(v33, 0LL);
          *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_one(0LL);
          if ( !transform )
            goto LABEL_46;
          UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v38, 0LL);
          v41 = UnityEngine_GameObject__get_transform(v33, 0LL);
          *(UnityEngine_Quaternion_o *)&v42 = UnityEngine_Quaternion__get_identity(0LL);
          if ( !v41 )
            goto LABEL_46;
          UnityEngine_Transform__set_localRotation(v41, *(UnityEngine_Quaternion_o *)&v42, 0LL);
          v22 = v35;
          Master_WarQuestSelectionMaster = v51;
        }
        else
        {
          bsvtData = (__int64)this->fields.ClassSkillListParent;
          if ( !bsvtData )
            goto LABEL_46;
          bsvtData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)bsvtData, 0LL);
          if ( !bsvtData )
            goto LABEL_46;
          bsvtData = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)bsvtData, v28, 0LL);
          if ( !bsvtData )
            goto LABEL_46;
          bsvtData = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bsvtData, 0LL);
          if ( !bsvtData )
            goto LABEL_46;
          v33 = (UnityEngine_GameObject_o *)bsvtData;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
          bsvtData = (__int64)UnityEngine_GameObject__get_transform(v33, 0LL);
          if ( !bsvtData )
            goto LABEL_46;
          v58.fields.y = -v29;
          v58.fields.x = 0.0;
          v58.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v58, 0LL);
        }
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v33,
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        bsvtData = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL);
        if ( (bsvtData & 1) != 0 )
        {
          if ( !Component_srcLineSprite )
            goto LABEL_46;
          BattleServantConfSkillComponent__SetItem(
            (BattleServantConfSkillComponent_o *)Component_srcLineSprite,
            v27 + 1,
            v30,
            v31,
            v32,
            1,
            v47,
            v48);
        }
        else if ( !Component_srcLineSprite )
        {
          goto LABEL_46;
        }
        mcTweenScaleP = Component_srcLineSprite->fields.mcTweenScaleP;
        if ( !mcTweenScaleP )
          goto LABEL_46;
        mTable_high = HIDWORD(mcTweenScaleP->fields.mTable);
        LODWORD(mcTweenScaleP) = *(_DWORD *)(v22 + 24);
        v26 = v52;
        ++v28;
        v29 = v29 + (float)((float)(mTable_high - Component_srcLineSprite->fields.miLineW) + 110.0);
      }
      if ( (__int64)++v27 >= (int)mcTweenScaleP )
        goto LABEL_91;
    }
  }
  v29 = 0.0;
LABEL_91:
  this->fields.ClassSkillOffset = -(float)(v29 + 1.0);
}


void __fastcall BattleServantConfConponent__SetCommandCard(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantData_o *bsvtData; // x0
  System_Int32_array *CommandCodeIdsEX; // x0
  __int64 v6; // x1
  struct BattleCommandComponent_array *CommandCardList; // x8
  System_Int32_array *v8; // x20
  unsigned __int64 v9; // x21
  int32_t *v10; // x23
  unsigned __int64 max_length; // x9
  BattleCommandComponent_o *v12; // x22
  const MethodInfo *v13; // x2
  struct BattleCommandData_o *data; // x8
  __int64 v15; // x0
  UIWidget_o *component; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4185AD5 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_TryGetComponent_UIWidget___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4185AD5 = 1;
  }
  component = 0LL;
  bsvtData = this->fields.bsvtData;
  if ( bsvtData && this->fields.CommandCardList )
  {
    CommandCodeIdsEX = BattleServantData__GetCommandCodeIdsEX(bsvtData, method);
    CommandCardList = this->fields.CommandCardList;
    this->fields.isCommandCardUnderIcon = 0;
    if ( !CommandCardList )
LABEL_24:
      sub_B2C434(CommandCodeIdsEX, v6);
    v8 = CommandCodeIdsEX;
    v9 = 0LL;
    v10 = &CommandCodeIdsEX->m_Items[1];
    while ( 1 )
    {
      max_length = CommandCardList->max_length;
      if ( (__int64)v9 >= (int)max_length )
        break;
      if ( v9 >= max_length )
        goto LABEL_26;
      v12 = CommandCardList->m_Items[v9];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0LL, 0LL);
      if ( ((unsigned __int8)CommandCodeIdsEX & 1) == 0 )
      {
        if ( !v12 )
          goto LABEL_24;
        BattleCommandComponent__Initialize(v12, 0LL);
        v12->fields.isCodeTextureView = 1;
        BattleCommandComponent__setData_18362620(v12, this->fields.bsvtData, v9, 0LL);
        CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Component__TryGetComponent_UIWidget_(
                                                   (UnityEngine_Component_o *)this,
                                                   &component,
                                                   (const MethodInfo_172E13C *)Method_UnityEngine_Component_TryGetComponent_UIWidget___);
        if ( ((unsigned __int8)CommandCodeIdsEX & 1) != 0 )
        {
          if ( !component )
            goto LABEL_24;
          BattleCommandComponent__setDepth(v12, component->fields.mDepth + 1, 0LL);
        }
        BattleCommandComponent__SetDownloadEventSprite(v12, 0LL);
        if ( !v8 )
          goto LABEL_24;
        if ( v9 >= v8->max_length
          || (BattleCommandComponent__SetCommandCodeView_18368196(v12, v10[v9], 0LL), v9 >= v8->max_length)
          || (BattleCommandComponent__SetLockInfo(v12, v10[v9] == -1, 0LL),
              BattleServantConfConponent__SetCommandCardTypeChangeBuff(this, v12, v13),
              BattleCommandComponent__HidePowerUpValueLabelActive(v12, this->fields.isCommandCardUnderIcon, 0LL),
              BattleCommandComponent__ResetCardBuffIconAlphaAnim(v12, 0LL),
              BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(v12, 0LL),
              v9 >= v8->max_length) )
        {
LABEL_26:
          v15 = sub_B2C460(CommandCodeIdsEX);
          sub_B2C400(v15, 0LL);
        }
        data = v12->fields.data;
        if ( !data )
          goto LABEL_24;
        data->fields.commandCodeId = v10[v9];
        BattleCommandComponent__UpdateCommandCardEffect(v12, 0LL);
        BattleCommandComponent__ChangeCardEffectMaskForInside(v12, 0LL);
      }
      CommandCardList = this->fields.CommandCardList;
      ++v9;
      if ( !CommandCardList )
        goto LABEL_24;
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
    sub_B2C434(this, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantConfConponent__SetCommandCodeSkillList(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_Object_o *CommandCodeListParent; // x20
  UnityEngine_Object_o *CommandCodeInfoPrefab; // x20
  const MethodInfo *v18; // x1
  UnityEngine_GameObject_o *transform; // x0
  int32_t v20; // w20
  BattleServantConfConponent___c_c *v21; // x8
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x9
  System_Predicate_int__o *_9__83_0; // x21
  Il2CppObject *v24; // x22
  struct BattleServantConfConponent___c_StaticFields *v25; // x0
  int v26; // w21
  System_Int32_array *v27; // x20
  __int64 v28; // x8
  int32_t v29; // w22
  unsigned __int64 v30; // x27
  float v31; // s8
  int32_t v32; // w23
  System_Int32_array *v33; // x8
  unsigned __int64 v34; // x20
  unsigned __int64 max_length; // x9
  UnityEngine_GameObject_o *v36; // x24
  struct UnityEngine_GameObject_o *v37; // x24
  UnityEngine_Transform_o *v38; // x25
  UnityEngine_Transform_o *v39; // x25
  int v40; // s0
  UnityEngine_Transform_o *v43; // x25
  int v44; // s0
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UILabel_o *NoCommandCodeLabel; // x19
  __int64 v50; // x0
  System_Int32_array *array; // [xsp+0h] [xbp-80h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-78h]
  System_String_array *explanationList; // [xsp+10h] [xbp-70h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4185AD6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_FindIndex_int___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_System_Predicate_int___ctor__, v10);
    sub_B2C35C(&System_Predicate_int__TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__83_0__, v13);
    sub_B2C35C(&BattleServantConfConponent___c_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_2417/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/, v15);
    byte_4185AD6 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  CommandCodeListParent = (UnityEngine_Object_o *)this->fields.CommandCodeListParent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(CommandCodeListParent, 0LL, 0LL) || !this->fields.bsvtData )
    return;
  CommandCodeInfoPrefab = (UnityEngine_Object_o *)this->fields.CommandCodeInfoPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(CommandCodeInfoPrefab, 0LL, 0LL) )
    return;
  transform = this->fields.CommandCodeInfoPrefab;
  if ( !transform )
    goto LABEL_91;
  UnityEngine_GameObject__SetActive(transform, 0, 0LL);
  transform = this->fields.CommandCodeListParent;
  if ( !transform )
    goto LABEL_91;
  v20 = 0;
  while ( 1 )
  {
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_91;
    if ( v20 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) )
      break;
    transform = this->fields.CommandCodeListParent;
    if ( transform )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( transform )
      {
        transform = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                  (UnityEngine_Transform_o *)transform,
                                                  v20,
                                                  0LL);
        if ( transform )
        {
          transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          if ( transform )
          {
            UnityEngine_GameObject__SetActive(transform, 0, 0LL);
            transform = this->fields.CommandCodeListParent;
            ++v20;
            if ( transform )
              continue;
          }
        }
      }
    }
    goto LABEL_91;
  }
  transform = (UnityEngine_GameObject_o *)this->fields.bsvtData;
  if ( !transform )
    goto LABEL_91;
  array = BattleServantData__GetCommandCodeIds((BattleServantData_o *)transform, v18);
  v21 = BattleServantConfConponent___c_TypeInfo;
  if ( (BYTE3(BattleServantConfConponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
    v21 = BattleServantConfConponent___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__83_0 = static_fields->__9__83_0;
  if ( !_9__83_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__83_0 = (System_Predicate_int__o *)sub_B2C42C(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__83_0,
      v24,
      Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__83_0__,
      (const MethodInfo_2951520 *)Method_System_Predicate_int___ctor__);
    v25 = BattleServantConfConponent___c_TypeInfo->static_fields;
    v25->__9__83_0 = _9__83_0;
    sub_B2C2F8(&v25->__9__83_0, _9__83_0);
  }
  transform = (UnityEngine_GameObject_o *)System_Array__FindIndex_int_(
                                            array,
                                            (System_Predicate_T__o *)_9__83_0,
                                            (const MethodInfo_1FFC714 *)Method_System_Array_FindIndex_int___);
  if ( !this->fields.NoCommandCodeLabel
    || (v26 = (int)transform,
        (transform = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.NoCommandCodeLabel,
                       0LL)) == 0LL) )
  {
LABEL_91:
    sub_B2C434(transform, v18);
  }
  if ( v26 == -1 )
  {
    UnityEngine_GameObject__SetActive(transform, 1, 0LL);
    NoCommandCodeLabel = this->fields.NoCommandCodeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2417/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/, 0LL);
    if ( NoCommandCodeLabel )
    {
      UILabel__set_text(NoCommandCodeLabel, (System_String_o *)transform, 0LL);
      return;
    }
    goto LABEL_91;
  }
  UnityEngine_GameObject__SetActive(transform, 0, 0LL);
  transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_91;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)transform,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_91;
  transform = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)transform,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  v27 = array;
  if ( !array )
    goto LABEL_91;
  v28 = *(_QWORD *)&array->max_length;
  if ( (int)v28 >= 1 )
  {
    v29 = 0;
    v30 = 0LL;
    v31 = 0.0;
    do
    {
      if ( v30 >= (unsigned int)v28 )
      {
LABEL_92:
        v50 = sub_B2C460(transform);
        sub_B2C400(v50, 0LL);
      }
      v32 = v27->m_Items[v30 + 1];
      if ( v32 >= 1 )
      {
        transform = (UnityEngine_GameObject_o *)MasterData_WarQuestSelectionMaster;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_91;
        transform = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  MasterData_WarQuestSelectionMaster,
                                                  v32,
                                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( transform )
        {
          CommandCodeEntity__GetSkillInfo((CommandCodeEntity_o *)transform, &idList, &titleList, &explanationList, 0LL);
          v33 = idList;
          if ( !idList )
            goto LABEL_91;
          v34 = 0LL;
          while ( 1 )
          {
            max_length = v33->max_length;
            if ( (__int64)v34 >= (int)max_length )
              break;
            if ( v34 >= max_length )
              goto LABEL_92;
            if ( v33->m_Items[v34 + 1] >= 1 )
            {
              transform = this->fields.CommandCodeListParent;
              if ( !transform )
                goto LABEL_91;
              transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
              if ( !transform )
                goto LABEL_91;
              if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) <= v29 )
              {
                v37 = this->fields.CommandCodeInfoPrefab;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v37,
                                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                if ( !transform )
                  goto LABEL_91;
                v36 = transform;
                UnityEngine_GameObject__SetActive(transform, 1, 0LL);
                transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v36, 0LL);
                if ( !this->fields.CommandCodeListParent )
                  goto LABEL_91;
                v38 = (UnityEngine_Transform_o *)transform;
                transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                          this->fields.CommandCodeListParent,
                                                          0LL);
                if ( !v38 )
                  goto LABEL_91;
                UnityEngine_Transform__set_parent(v38, (UnityEngine_Transform_o *)transform, 0LL);
                transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v36, 0LL);
                if ( !transform )
                  goto LABEL_91;
                v56.fields.x = 0.0;
                v56.fields.z = 0.0;
                v56.fields.y = v31;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v56, 0LL);
                v39 = UnityEngine_GameObject__get_transform(v36, 0LL);
                *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Vector3__get_one(0LL);
                if ( !v39 )
                  goto LABEL_91;
                UnityEngine_Transform__set_localScale(v39, *(UnityEngine_Vector3_o *)&v40, 0LL);
                v43 = UnityEngine_GameObject__get_transform(v36, 0LL);
                *(UnityEngine_Quaternion_o *)&v44 = UnityEngine_Quaternion__get_identity(0LL);
                if ( !v43 )
                  goto LABEL_91;
                UnityEngine_Transform__set_localRotation(v43, *(UnityEngine_Quaternion_o *)&v44, 0LL);
              }
              else
              {
                transform = this->fields.CommandCodeListParent;
                if ( !transform )
                  goto LABEL_91;
                transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
                if ( !transform )
                  goto LABEL_91;
                transform = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                          (UnityEngine_Transform_o *)transform,
                                                          v29,
                                                          0LL);
                if ( !transform )
                  goto LABEL_91;
                transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
                if ( !transform )
                  goto LABEL_91;
                v36 = transform;
                UnityEngine_GameObject__SetActive(transform, 1, 0LL);
              }
              Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v36,
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                        Component_srcLineSprite,
                                                        0LL,
                                                        0LL);
              if ( ((unsigned __int8)transform & 1) != 0 )
              {
                if ( !idList )
                  goto LABEL_91;
                if ( v34 >= idList->max_length )
                  goto LABEL_92;
                if ( !titleList )
                  goto LABEL_91;
                if ( v34 >= titleList->max_length )
                  goto LABEL_92;
                if ( !explanationList )
                  goto LABEL_91;
                if ( v34 >= explanationList->max_length )
                  goto LABEL_92;
                if ( !Component_srcLineSprite )
                  goto LABEL_91;
                CommandCodeSkillInfo__Set(
                  (CommandCodeSkillInfo_o *)Component_srcLineSprite,
                  v32,
                  idList->m_Items[v34 + 1],
                  titleList->m_Items[v34],
                  explanationList->m_Items[v34],
                  v34 == 0,
                  0LL);
              }
              v33 = idList;
              ++v29;
              v31 = v31 + flt_319FBA8[v34 == 0];
            }
            ++v34;
            if ( !v33 )
              goto LABEL_91;
          }
          v27 = array;
        }
      }
      LODWORD(v28) = v27->max_length;
      ++v30;
    }
    while ( (__int64)v30 < (int)v28 );
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantConfConponent__StartOpenTab(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4185AD9 & 1) == 0 )
  {
    sub_B2C35C(&BattleServantConfConponent__StartOpenTab_d__90_TypeInfo, method);
    byte_4185AD9 = 1;
  }
  v3 = sub_B2C42C(BattleServantConfConponent__StartOpenTab_d__90_TypeInfo);
  BattleServantConfConponent__StartOpenTab_d__90___ctor((BattleServantConfConponent__StartOpenTab_d__90_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_String_o *__fastcall BattleServantConfConponent__get_closeBtnPath(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x19
  bool v8; // w0
  __int64 *v9; // x8

  if ( (byte_4185ADE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17475/*"close"*/, v3);
    sub_B2C35C(&StringLiteral_14526/*"Top/close"*/, v4);
    byte_4185ADE = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B2C434(0LL, v6);
  v7 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_14526/*"Top/close"*/, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  v9 = &StringLiteral_17475/*"close"*/;
  if ( v8 )
    v9 = &StringLiteral_14526/*"Top/close"*/;
  return (System_String_o *)*v9;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.callback_close = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callback_close,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleServantConfConponent__setConfData(
        BattleServantConfConponent_o *this,
        BattleServantData_o *inbsvtData,
        bool isShowBuffIcon,
        BattleInfoData_o *battleInfoData,
        bool isNpc,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  BattleServantData_o **p_bsvtData; // x21
  UnityEngine_Object_o *data; // x24
  unsigned __int64 bsvtData; // x0
  unsigned __int64 npcSvtClassId; // x1
  struct BattleData_o *v27; // x8
  UnityEngine_Object_o *shortNameLabel; // x25
  UILabel_o *v29; // x25
  UnityEngine_Object_o *atklabel; // x25
  struct BattleServantData_o *v31; // x8
  UILabel_o *v32; // x25
  Il2CppObject *v33; // x0
  struct BattleServantData_o *v34; // x8
  BattleViewBufflistComponent_o *buffListView; // x25
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x2
  int32_t v42; // w23
  UnityEngine_Object_o *equipObj; // x24
  UnityEngine_GameObject_o *v44; // x24
  float LocalPositionY; // s0
  int32_t *p_adjustHeight; // x26
  UnityEngine_Object_o *npRoot; // x24
  TreasureDvcLvEntity_o *v48; // x23
  UIWidget_o *npdetail; // x24
  UILabel_o *v50; // x24
  System_String_o *DetalShort_28585128; // x0
  UILabel_o *maxNp; // x24
  Il2CppObject *v53; // x0
  struct UILabel_o *v54; // x8
  UILabel_o *nplevel; // x23
  System_String_o *v56; // x1
  UnityEngine_Object_o *v57; // x23
  bool IsNpDetailActive; // w23
  UITexture_o *facetex; // x23
  const MethodInfo *v60; // x2
  int32_t v61; // w24
  int32_t v62; // w25
  int32_t CommandDispLimitCount; // w26
  struct UITexture_o *Manager__loadCommandCard; // x0
  UnityEngine_Object_o *havenotTdLabel; // x22
  bool v66; // w1
  System_String_o **v67; // x8
  UnityEngine_Object_o *unknownNp; // x24
  UILabel_o *v69; // x24
  UnityEngine_Object_o *commandCard; // x23
  BattleCommandData_o *v71; // x23
  struct ServantTreasureDvcEntity_o *SvtTDvc; // x8
  const MethodInfo *v73; // x2
  UnityEngine_Object_o *npSpeedChange; // x22
  UnityEngine_Object_o *classIcon; // x21
  struct ServantEntity_o *svtdata; // x8
  int32_t IconSpriteScaledWidth; // w0
  UnityEngine_Object_o *v78; // x21
  int32_t v79; // w20
  UnityEngine_Object_o *Component_WebViewObject; // x20
  const MethodInfo *v81; // x1
  int v82; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t atk; // [xsp+8h] [xbp-58h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4185ACF & 1) == 0 )
  {
    sub_B2C35C(&BattleCommandData_TypeInfo, inbsvtData);
    sub_B2C35C(&BattleServantConfConponent_TypeInfo, v11);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIAnchor___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v13);
    sub_B2C35C(&int_TypeInfo, v14);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&StringLiteral_9386/*"NP_UNKNOWN"*/, v19);
    sub_B2C35C(&StringLiteral_23489/*"{0:#,0}"*/, v20);
    sub_B2C35C(&StringLiteral_1/*""*/, v21);
    sub_B2C35C(&StringLiteral_8990/*"Max {0}%"*/, v22);
    byte_4185ACF = 1;
  }
  lv = 0;
  this->fields.bsvtData = inbsvtData;
  p_bsvtData = &this->fields.bsvtData;
  sub_B2C2F8(&this->fields.bsvtData, inbsvtData);
  if ( this->fields.bsvtData )
  {
    if ( !battleInfoData )
    {
      data = (UnityEngine_Object_o *)this->fields.data;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      bsvtData = UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
      battleInfoData = 0LL;
      if ( (bsvtData & 1) != 0 )
      {
        v27 = this->fields.data;
        if ( !v27 )
          goto LABEL_171;
        battleInfoData = v27->fields.battle_info;
      }
    }
    shortNameLabel = (UnityEngine_Object_o *)this->fields.shortNameLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(shortNameLabel, 0LL, 0LL) )
    {
      bsvtData = (unsigned __int64)this->fields.bsvtData;
      if ( !bsvtData )
        goto LABEL_171;
      v29 = this->fields.shortNameLabel;
      bsvtData = (unsigned __int64)BattleServantData__getServantShortName(
                                     (BattleServantData_o *)bsvtData,
                                     (const MethodInfo *)npcSvtClassId);
      if ( !v29 )
        goto LABEL_171;
      UILabel__set_text(v29, (System_String_o *)bsvtData, 0LL);
      CommonFunction__ScalingLabelWidth(this->fields.shortNameLabel, 270, 0LL);
    }
    atklabel = (UnityEngine_Object_o *)this->fields.atklabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    bsvtData = UnityEngine_Object__op_Inequality(atklabel, 0LL, 0LL);
    if ( (bsvtData & 1) != 0 )
    {
      v31 = this->fields.bsvtData;
      if ( !v31 )
        goto LABEL_171;
      v32 = this->fields.atklabel;
      atk = v31->fields.atk;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &atk);
      bsvtData = (unsigned __int64)System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v33, 0LL);
      if ( !v32 )
        goto LABEL_171;
      UILabel__set_text(v32, (System_String_o *)bsvtData, 0LL);
    }
    bsvtData = (unsigned __int64)this->fields.buffListView;
    if ( bsvtData )
    {
      BattleViewBufflistComponent__setClassIcon((BattleViewBufflistComponent_o *)bsvtData, this->fields.bsvtData, 0LL);
      v34 = this->fields.bsvtData;
      if ( v34 )
      {
        bsvtData = (unsigned __int64)v34->fields.buffData;
        if ( bsvtData )
        {
          buffListView = this->fields.buffListView;
          bsvtData = (unsigned __int64)BattleBuffData__getShowServantConf((BattleBuffData_o *)bsvtData, 0LL);
          if ( buffListView )
          {
            BattleViewBufflistComponent__setBuffList(buffListView, (BattleBuffData_ShowBuffData_array *)bsvtData, 0LL);
            BattleServantConfConponent__setEquipList(this, v36);
            BattleServantConfConponent__SetClassSkillList(this, battleInfoData, v37);
            BattleServantConfConponent__SetAppendSkillList(this, battleInfoData, v38);
            if ( !isNpc )
              BattleServantConfConponent__SetClassBoardSkillList(this, v39);
            BattleServantConfConponent__SetCommandCard(this, v39);
            BattleServantConfConponent__SetCommandCodeSkillList(this, v40);
            bsvtData = (unsigned __int64)this->fields.bsvtData;
            if ( bsvtData )
            {
              bsvtData = BattleServantData__getTreasureDvcId((BattleServantData_o *)bsvtData, 1, v41);
              if ( *p_bsvtData )
              {
                v42 = bsvtData;
                lv = (*p_bsvtData)->fields.treasuredvcLevel;
                equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(equipObj, 0LL, 0LL) )
                {
                  v44 = this->fields.equipObj;
                  LocalPositionY = GameObjectExtensions__GetLocalPositionY(v44, 0LL);
                  p_adjustHeight = &this->fields.adjustHeight;
                  GameObjectExtensions__SetLocalPositionY(v44, LocalPositionY - (float)this->fields.adjustHeight, 0LL);
                }
                else
                {
                  p_adjustHeight = &this->fields.adjustHeight;
                }
                this->fields.adjustHeight = 0;
                npRoot = (UnityEngine_Object_o *)this->fields.npRoot;
                if ( v42 < 1 )
                {
                  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(npRoot, 0LL, 0LL) )
                  {
                    bsvtData = (unsigned __int64)this->fields.npRoot;
                    if ( !bsvtData )
                      goto LABEL_171;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0LL);
                    bsvtData = (unsigned __int64)this->fields.commandCard;
                    if ( !bsvtData )
                      goto LABEL_171;
                    bsvtData = (unsigned __int64)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)bsvtData,
                                                   0LL);
                    if ( !bsvtData )
                      goto LABEL_171;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0LL);
                  }
                  facetex = this->fields.facetex;
                  bsvtData = (unsigned __int64)this->fields.bsvtData;
                  if ( !bsvtData )
                    goto LABEL_171;
                  bsvtData = BattleServantData__GetImageSvtId(
                               (BattleServantData_o *)bsvtData,
                               (const MethodInfo *)npcSvtClassId);
                  if ( !*p_bsvtData )
                    goto LABEL_171;
                  v61 = bsvtData;
                  bsvtData = BattleServantData__getDispLimitCount(*p_bsvtData, 1, v60);
                  if ( !*p_bsvtData )
                    goto LABEL_171;
                  v62 = bsvtData;
                  CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(
                                            *p_bsvtData,
                                            (const MethodInfo *)npcSvtClassId);
                  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                  }
                  Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(
                                               facetex,
                                               v61,
                                               v62,
                                               CommandDispLimitCount,
                                               0LL);
                  this->fields.facetex = Manager__loadCommandCard;
                  sub_B2C2F8(&this->fields.facetex, Manager__loadCommandCard);
                  havenotTdLabel = (UnityEngine_Object_o *)this->fields.havenotTdLabel;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( !UnityEngine_Object__op_Inequality(havenotTdLabel, 0LL, 0LL) )
                    goto LABEL_139;
                  bsvtData = (unsigned __int64)this->fields.havenotTdLabel;
                  if ( !bsvtData )
                    goto LABEL_171;
                  bsvtData = (unsigned __int64)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)bsvtData,
                                                 0LL);
                  if ( !bsvtData )
                    goto LABEL_171;
                  v66 = 1;
                  goto LABEL_138;
                }
                if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Inequality(npRoot, 0LL, 0LL) )
                  goto LABEL_139;
                bsvtData = (unsigned __int64)this->fields.npRoot;
                if ( !bsvtData )
                  goto LABEL_171;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                bsvtData = (unsigned __int64)this->fields.commandCard;
                if ( !bsvtData )
                  goto LABEL_171;
                bsvtData = (unsigned __int64)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)bsvtData,
                                               0LL);
                if ( !bsvtData )
                  goto LABEL_171;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                bsvtData = (unsigned __int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !bsvtData )
                  goto LABEL_171;
                bsvtData = (unsigned __int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)bsvtData,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                if ( !bsvtData )
                  goto LABEL_171;
                bsvtData = (unsigned __int64)TreasureDvcLvMaster__GetEntity(
                                               (TreasureDvcLvMaster_o *)bsvtData,
                                               v42,
                                               lv,
                                               0LL);
                if ( !this->fields.maxNp )
                  goto LABEL_171;
                v48 = (TreasureDvcLvEntity_o *)bsvtData;
                UILabel__set_text(this->fields.maxNp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                if ( v48 )
                {
                  npdetail = (UIWidget_o *)this->fields.npdetail;
                  bsvtData = (unsigned __int64)BattleServantConfConponent_TypeInfo;
                  if ( (BYTE3(BattleServantConfConponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
                  }
                  if ( !npdetail )
                    goto LABEL_171;
                  UIWidget__set_height(
                    npdetail,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                    0LL);
                  v50 = this->fields.npdetail;
                  DetalShort_28585128 = TreasureDvcLvEntity__getDetalShort_28585128(v48, lv, 0LL);
                  WrapControlText__textBBCodeAdjust(
                    v50,
                    DetalShort_28585128,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT,
                    0LL);
                  maxNp = this->fields.maxNp;
                  v82 = 100 * v48->fields.gaugeCount;
                  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
                  bsvtData = (unsigned __int64)System_String__Format((System_String_o *)StringLiteral_8990/*"Max {0}%"*/, v53, 0LL);
                  if ( !maxNp )
                    goto LABEL_171;
                  UILabel__set_text(maxNp, (System_String_o *)bsvtData, 0LL);
                  v54 = this->fields.npdetail;
                  if ( !v54 )
                    goto LABEL_171;
                  if ( BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT < v54->fields.mHeight )
                  {
                    if ( (BYTE3(BattleServantConfConponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
                      v54 = this->fields.npdetail;
                      if ( !v54 )
                        goto LABEL_171;
                    }
                    *p_adjustHeight = BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT
                                    - v54->fields.mHeight;
                  }
                }
                nplevel = this->fields.nplevel;
                bsvtData = (unsigned __int64)System_Int32__ToString((int32_t)&lv, 0LL);
                if ( !nplevel )
                  goto LABEL_171;
                if ( bsvtData )
                  v56 = (System_String_o *)bsvtData;
                else
                  v56 = (System_String_o *)StringLiteral_1/*""*/;
                UILabel__set_text(nplevel, v56, 0LL);
                v57 = (UnityEngine_Object_o *)this->fields.data;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v57, 0LL, 0LL) )
                {
                  bsvtData = (unsigned __int64)this->fields.data;
                  if ( !bsvtData )
                    goto LABEL_171;
                  IsNpDetailActive = BattleData__IsNpDetailActive((BattleData_o *)bsvtData, *p_bsvtData, 1, 0LL);
                }
                else
                {
                  IsNpDetailActive = 1;
                }
                bsvtData = (unsigned __int64)this->fields.maxNp;
                if ( bsvtData )
                {
                  bsvtData = (unsigned __int64)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)bsvtData,
                                                 0LL);
                  if ( bsvtData )
                  {
                    bsvtData = (unsigned __int64)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)bsvtData,
                                                   0LL);
                    if ( bsvtData )
                    {
                      bsvtData = (unsigned __int64)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)bsvtData,
                                                     0LL);
                      if ( bsvtData )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, IsNpDetailActive, 0LL);
                        bsvtData = (unsigned __int64)this->fields.nplevel;
                        if ( bsvtData )
                        {
                          bsvtData = (unsigned __int64)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)bsvtData,
                                                         0LL);
                          if ( bsvtData )
                          {
                            bsvtData = (unsigned __int64)UnityEngine_Transform__get_parent(
                                                           (UnityEngine_Transform_o *)bsvtData,
                                                           0LL);
                            if ( bsvtData )
                            {
                              bsvtData = (unsigned __int64)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)bsvtData,
                                                             0LL);
                              if ( bsvtData )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)bsvtData,
                                  IsNpDetailActive,
                                  0LL);
                                bsvtData = (unsigned __int64)this->fields.npdetail;
                                if ( IsNpDetailActive )
                                {
                                  if ( !bsvtData )
                                    goto LABEL_171;
                                  v67 = (System_String_o **)(bsvtData + 408);
                                }
                                else
                                {
                                  if ( !bsvtData )
                                    goto LABEL_171;
                                  v67 = (System_String_o **)&StringLiteral_1/*""*/;
                                }
                                UILabel__set_text((UILabel_o *)bsvtData, *v67, 0LL);
                                unknownNp = (UnityEngine_Object_o *)this->fields.unknownNp;
                                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                }
                                bsvtData = UnityEngine_Object__op_Inequality(unknownNp, 0LL, 0LL);
                                if ( (bsvtData & 1) != 0 )
                                {
                                  v69 = this->fields.unknownNp;
                                  if ( IsNpDetailActive )
                                  {
                                    npcSvtClassId = (unsigned __int64)StringLiteral_1/*""*/;
                                    if ( !v69 )
                                      goto LABEL_171;
                                  }
                                  else
                                  {
                                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    }
                                    bsvtData = (unsigned __int64)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_9386/*"NP_UNKNOWN"*/,
                                                                   0LL);
                                    npcSvtClassId = bsvtData;
                                    if ( !v69 )
                                      goto LABEL_171;
                                  }
                                  UILabel__set_text(v69, (System_String_o *)npcSvtClassId, 0LL);
                                }
                                commandCard = (UnityEngine_Object_o *)this->fields.commandCard;
                                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                }
                                if ( UnityEngine_Object__op_Inequality(commandCard, 0LL, 0LL) )
                                {
                                  v71 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
                                  BattleCommandData___ctor(v71, 0LL);
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  SvtTDvc = (*p_bsvtData)->fields._SvtTDvc;
                                  if ( !SvtTDvc )
                                    goto LABEL_171;
                                  if ( !v71 )
                                    goto LABEL_171;
                                  v71->fields._type = SvtTDvc->fields.cardId;
                                  bsvtData = (unsigned __int64)*p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v71->fields.svtlimit = BattleServantData__getCommandDispLimitCount(
                                                           (BattleServantData_o *)bsvtData,
                                                           (const MethodInfo *)npcSvtClassId);
                                  bsvtData = (unsigned __int64)*p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  bsvtData = BattleServantData__getDispLimitCount(
                                               (BattleServantData_o *)bsvtData,
                                               1,
                                               v73);
                                  v71->fields._loadsvtLimit = bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v71->fields.uniqueId = (*p_bsvtData)->fields.uniqueId;
                                  bsvtData = (unsigned __int64)*p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v71->fields.svtId = BattleServantData__getSvtId(
                                                        (BattleServantData_o *)bsvtData,
                                                        (const MethodInfo *)npcSvtClassId);
                                  bsvtData = (unsigned __int64)*p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  bsvtData = BattleServantData__GetImageSvtId(
                                               (BattleServantData_o *)bsvtData,
                                               (const MethodInfo *)npcSvtClassId);
                                  v71->fields.imageSvtId = bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v71->fields.treasureDvc = (*p_bsvtData)->fields.treasuredvcId;
                                  bsvtData = (unsigned __int64)this->fields.commandCard;
                                  if ( !bsvtData )
                                    goto LABEL_171;
                                  BattleCommandComponent__setData(
                                    (BattleCommandComponent_o *)bsvtData,
                                    v71,
                                    this->fields.bsvtData,
                                    0,
                                    isShowBuffIcon,
                                    0,
                                    0LL);
                                  bsvtData = (unsigned __int64)this->fields.commandCard;
                                  if ( !bsvtData )
                                    goto LABEL_171;
                                  BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(
                                    (BattleCommandComponent_o *)bsvtData,
                                    0LL);
                                }
                                bsvtData = (unsigned __int64)this->fields.havenotTdLabel;
                                if ( !bsvtData )
                                  goto LABEL_171;
                                bsvtData = (unsigned __int64)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)bsvtData,
                                                               0LL);
                                if ( !bsvtData )
                                  goto LABEL_171;
                                v66 = 0;
LABEL_138:
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, v66, 0LL);
LABEL_139:
                                npSpeedChange = (UnityEngine_Object_o *)this->fields.npSpeedChange;
                                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                }
                                if ( UnityEngine_Object__op_Inequality(npSpeedChange, 0LL, 0LL) )
                                {
                                  bsvtData = (unsigned __int64)this->fields.npSpeedChange;
                                  if ( !bsvtData )
                                    goto LABEL_171;
                                  BattleServantNPSpeedChangeComponent__SetData(
                                    (BattleServantNPSpeedChangeComponent_o *)bsvtData,
                                    *p_bsvtData,
                                    0LL);
                                }
                                classIcon = (UnityEngine_Object_o *)this->fields.classIcon;
                                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                }
                                bsvtData = UnityEngine_Object__op_Inequality(classIcon, 0LL, 0LL);
                                if ( (bsvtData & 1) == 0 )
                                {
LABEL_169:
                                  BattleServantConfConponent__SetAttribute(this, (const MethodInfo *)npcSvtClassId);
                                  BattleServantConfConponent__ChangeLayout(this, v81);
                                  return;
                                }
                                if ( !inbsvtData )
                                  goto LABEL_171;
                                npcSvtClassId = (unsigned int)inbsvtData->fields.npcSvtClassId;
                                bsvtData = (unsigned __int64)this->fields.classIcon;
                                if ( !(_DWORD)npcSvtClassId )
                                {
                                  svtdata = inbsvtData->fields.svtdata;
                                  if ( !svtdata )
                                    goto LABEL_171;
                                  npcSvtClassId = (unsigned int)svtdata->fields.classId;
                                }
                                if ( bsvtData )
                                {
                                  ServantClassIconComponent__SetImage(
                                    (ServantClassIconComponent_o *)bsvtData,
                                    npcSvtClassId,
                                    inbsvtData->fields._frameType_k__BackingField,
                                    0LL);
                                  bsvtData = (unsigned __int64)this->fields.classIcon;
                                  if ( bsvtData )
                                  {
                                    IconSpriteScaledWidth = ServantClassIconComponent__GetIconSpriteScaledWidth(
                                                              (ServantClassIconComponent_o *)bsvtData,
                                                              0LL);
                                    v78 = (UnityEngine_Object_o *)this->fields.shortNameLabel;
                                    v79 = IconSpriteScaledWidth;
                                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                    }
                                    if ( UnityEngine_Object__op_Inequality(v78, 0LL, 0LL) )
                                    {
                                      bsvtData = (unsigned __int64)this->fields.shortNameLabel;
                                      if ( !bsvtData )
                                        goto LABEL_171;
                                      if ( *(_DWORD *)(bsvtData + 160) + v79 >= 270 )
                                        CommonFunction__ScalingLabelWidth((UILabel_o *)bsvtData, 270 - v79, 0LL);
                                    }
                                    bsvtData = (unsigned __int64)this->fields.classIcon;
                                    if ( bsvtData )
                                    {
                                      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                                          (UnityEngine_Component_o *)bsvtData,
                                                                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIAnchor___);
                                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                      }
                                      bsvtData = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
                                      if ( (bsvtData & 1) != 0 )
                                      {
                                        if ( !Component_WebViewObject )
                                          goto LABEL_171;
                                        UnityEngine_Behaviour__set_enabled(
                                          (UnityEngine_Behaviour_o *)Component_WebViewObject,
                                          1,
                                          0LL);
                                      }
                                      goto LABEL_169;
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
LABEL_171:
    sub_B2C434(bsvtData, npcSvtClassId);
  }
}


void __fastcall BattleServantConfConponent__setEquipList(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *baseEquipSkillInfoPrefab; // x20
  UnityEngine_Object_o *equipSkillInfoRoot; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  __int64 BattleSkillIdList; // x0
  __int64 v13; // x1
  struct BattleServantData_o *bsvtData; // x8
  struct BattleUserServantData_array *equipList; // x24
  __int64 v16; // x8
  SkillLvMaster_o *v17; // x19
  unsigned __int64 v18; // x27
  Il2CppClass **v19; // x21
  __int64 *v20; // x21
  __int64 v21; // t1
  __int64 v22; // x22
  __int64 v23; // x23
  unsigned __int64 v24; // x21
  float v25; // s8
  int32_t v26; // w25
  int32_t v27; // w26
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x24
  SkillLvMaster_o *v29; // x20
  EquipPossessionSkillInfoComponent_o *v30; // x27
  BattleServantConfConponent_o *v31; // x19
  System_String_o *v32; // x28
  float v33; // s0
  __int64 v34; // x0
  struct BattleUserServantData_array *v35; // [xsp+0h] [xbp-90h]
  unsigned __int64 v36; // [xsp+8h] [xbp-88h]
  __int64 v37; // [xsp+18h] [xbp-78h]
  int32_t index; // [xsp+24h] [xbp-6Ch]
  SkillLvEntity_o *v39; // [xsp+28h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4185AD0 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4185AD0 = 1;
  }
  entity = 0LL;
  v39 = 0LL;
  if ( this->fields.bsvtData )
  {
    baseEquipSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.baseEquipSkillInfoPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(baseEquipSkillInfoPrefab, 0LL, 0LL) )
    {
      equipSkillInfoRoot = (UnityEngine_Object_o *)this->fields.equipSkillInfoRoot;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(equipSkillInfoRoot, 0LL, 0LL) )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
        BattleSkillIdList = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
        bsvtData = this->fields.bsvtData;
        this->fields.isEquip = 0;
        if ( !bsvtData )
          goto LABEL_48;
        equipList = bsvtData->fields.equipList;
        if ( !equipList )
          goto LABEL_48;
        v16 = *(_QWORD *)&equipList->max_length;
        if ( (int)v16 >= 1 )
        {
          v17 = (SkillLvMaster_o *)BattleSkillIdList;
          v18 = 0LL;
          v35 = equipList;
          do
          {
            if ( v18 >= (unsigned int)v16 )
            {
LABEL_49:
              v34 = sub_B2C460(BattleSkillIdList);
              sub_B2C400(v34, 0LL);
            }
            v19 = &equipList->obj.klass + v18;
            v21 = (__int64)v19[4];
            v20 = (__int64 *)(v19 + 4);
            BattleSkillIdList = v21;
            if ( v21 )
            {
              BattleSkillIdList = (__int64)BattleUserServantData__getBattleSkillIdList(
                                             (BattleUserServantData_o *)BattleSkillIdList,
                                             0LL);
              if ( v18 >= equipList->max_length )
                goto LABEL_49;
              v22 = BattleSkillIdList;
              BattleSkillIdList = *v20;
              if ( !*v20 )
                goto LABEL_48;
              BattleSkillIdList = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)BattleSkillIdList + 408LL))(
                                    BattleSkillIdList,
                                    *(_QWORD *)(*(_QWORD *)BattleSkillIdList + 416LL));
              if ( !v22 )
                goto LABEL_48;
              if ( *(int *)(v22 + 24) >= 1 )
              {
                v23 = BattleSkillIdList;
                v24 = 0LL;
                v37 = BattleSkillIdList + 32;
                v25 = 0.0;
                index = 0;
                v36 = v18;
                do
                {
                  BattleSkillIdList = (__int64)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    BattleSkillIdList = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( *(_DWORD *)(*(_QWORD *)(BattleSkillIdList + 184) + 44LL) <= index )
                    break;
                  if ( v24 >= *(unsigned int *)(v22 + 24) )
                    goto LABEL_49;
                  if ( !v23 )
                    goto LABEL_48;
                  if ( v24 >= *(unsigned int *)(v23 + 24) )
                    goto LABEL_49;
                  v26 = *(_DWORD *)(v22 + 32 + 4 * v24);
                  v27 = *(_DWORD *)(v37 + 4 * v24);
                  entity = 0LL;
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_48;
                  BattleSkillIdList = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        Master_WarQuestSelectionMaster,
                                        &entity,
                                        v26,
                                        (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                  if ( (BattleSkillIdList & 1) != 0 )
                  {
                    v39 = 0LL;
                    if ( !v17 )
                      goto LABEL_48;
                    BattleSkillIdList = SkillLvMaster__TryGetEntity(v17, &v39, v26, v27, 0LL);
                    if ( (BattleSkillIdList & 1) != 0 )
                    {
                      v28 = Master_WarQuestSelectionMaster;
                      v29 = v17;
                      BattleSkillIdList = (__int64)EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
                                                     this->fields.baseEquipSkillInfoPrefab,
                                                     this->fields.equipSkillInfoRoot,
                                                     index,
                                                     v25,
                                                     0LL);
                      if ( !this->fields.equipPossessionSkillInfoComponentList )
                        goto LABEL_48;
                      v30 = (EquipPossessionSkillInfoComponent_o *)BattleSkillIdList;
                      v31 = this;
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.equipPossessionSkillInfoComponentList,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)BattleSkillIdList,
                        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__);
                      BattleSkillIdList = (__int64)entity;
                      if ( !entity )
                        goto LABEL_48;
                      BattleSkillIdList = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                      if ( !v39 )
                        goto LABEL_48;
                      v32 = (System_String_o *)BattleSkillIdList;
                      BattleSkillIdList = (__int64)SkillLvEntity__getDetail_23775852(v39, v27, 0, 0LL);
                      if ( !v30 )
                        goto LABEL_48;
                      v33 = EquipPossessionSkillInfoComponent__SetSkill(
                              v30,
                              v26,
                              v32,
                              (System_String_o *)BattleSkillIdList,
                              0LL);
                      v31->fields.isEquip = 1;
                      this = v31;
                      v17 = v29;
                      Master_WarQuestSelectionMaster = v28;
                      equipList = v35;
                      v18 = v36;
                      v25 = v25 + v33;
                      ++index;
                    }
                  }
                  ++v24;
                }
                while ( (__int64)v24 < *(int *)(v22 + 24) );
              }
            }
            LODWORD(v16) = equipList->max_length;
            ++v18;
          }
          while ( (__int64)v18 < (int)v16 );
        }
        if ( !this->fields.isEquip )
        {
          BattleSkillIdList = (__int64)EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
                                         this->fields.baseEquipSkillInfoPrefab,
                                         this->fields.equipSkillInfoRoot,
                                         0,
                                         0.0,
                                         0LL);
          if ( this->fields.equipPossessionSkillInfoComponentList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.equipPossessionSkillInfoComponentList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)BattleSkillIdList,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__);
            return;
          }
LABEL_48:
          sub_B2C434(BattleSkillIdList, v13);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


System_IAsyncResult_o *__fastcall BattleServantConfConponent_CloseButtonCallBack__BeginInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, &v5, callback, object);
}


void __fastcall BattleServantConfConponent_CloseButtonCallBack__EndInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall BattleServantConfConponent_CloseButtonCallBack__Invoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x23
  BattleServantConfConponent_CloseButtonCallBack_o **v7; // x24
  __int64 v8; // x25
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD); // x0
  BattleServantConfConponent_CloseButtonCallBack_o *v19; // x8
  __int64 *v20; // x20
  __int64 v21; // x21
  void (__fastcall *v22)(__int64); // x22
  char v23; // w22
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  BattleServantConfConponent_CloseButtonCallBack_o *v31; // [xsp+8h] [xbp-38h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (BattleServantConfConponent_CloseButtonCallBack_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(__int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B2C38C(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) )
        goto LABEL_35;
      v22(v21);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B2C384(v21);
      v24 = sub_B2C788(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_34;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v17 = sub_AC5258(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B2C40C(v16, v21);
        (*v18)(v20, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AC5258(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v15)(v20, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v22)(v20, v21);
    goto LABEL_36;
  }
}


void __fastcall BattleServantConfConponent__StartOpenTab_d__90___ctor(
        BattleServantConfConponent__StartOpenTab_d__90_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantConfConponent__StartOpenTab_d__90__MoveNext(
        BattleServantConfConponent__StartOpenTab_d__90_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent__StartOpenTab_d__90_o *v2; // x19
  int32_t _1__state; // w8
  struct BattleServantConfConponent_o *_4__this; // x20
  UnityEngine_Object_o *BattleServantAbilityObj; // x21
  bool v6; // w21
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_41850CC & 1) == 0 )
  {
    this = (BattleServantConfConponent__StartOpenTab_d__90_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41850CC = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
LABEL_18:
      sub_B2C434(this, method);
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
    goto LABEL_18;
  BattleServantAbilityObj = (UnityEngine_Object_o *)_4__this->fields.BattleServantAbilityObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(BattleServantAbilityObj, 0LL, 0LL) )
    return 0;
  this = (BattleServantConfConponent__StartOpenTab_d__90_o *)_4__this->fields.BattleServantAbilityObj;
  v6 = 1;
  _4__this->fields.isOpenAfter = 1;
  if ( !this )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v2->fields.__2__current = 0LL;
  p__2__current = &v2->fields.__2__current;
  sub_B2C2F8(p__2__current, 0LL);
  *((_DWORD *)p__2__current - 2) = 1;
  return v6;
}


Il2CppObject *__fastcall BattleServantConfConponent__StartOpenTab_d__90__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantConfConponent__StartOpenTab_d__90_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantConfConponent__StartOpenTab_d__90__System_Collections_IEnumerator_Reset(
        BattleServantConfConponent__StartOpenTab_d__90_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleServantConfConponent__StartOpenTab_d__90_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattleServantConfConponent__StartOpenTab_d__90__System_Collections_IEnumerator_get_Current(
        BattleServantConfConponent__StartOpenTab_d__90_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantConfConponent__StartOpenTab_d__90__System_IDisposable_Dispose(
        BattleServantConfConponent__StartOpenTab_d__90_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantConfConponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0

  if ( (byte_41850CB & 1) == 0 )
  {
    sub_B2C35C(&BattleServantConfConponent___c_TypeInfo, v1);
    byte_41850CB = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleServantConfConponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleServantConfConponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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


bool __fastcall BattleServantConfConponent___c___SetCommandCodeSkillList_b__83_0(
        BattleServantConfConponent___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id > 0;
}