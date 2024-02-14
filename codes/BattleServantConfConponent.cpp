void __fastcall BattleServantConfConponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleServantConfConponent_c *v2; // x8

  if ( (byte_42127A7 & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantConfConponent_TypeInfo, v1);
    byte_42127A7 = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42127A6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo, v4);
    byte_42127A6 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__);
  this->fields.equipPossessionSkillInfoComponentList = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.equipPossessionSkillInfoComponentList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  UnityEngine_GameObject_o *v15; // x20
  float LocalPositionY; // s0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *equipPossessionSkillInfoComponentList; // x0
  float i; // s8
  Il2CppObject *current; // x22
  _DWORD *monitor; // x8
  BattleServantConfConponent_c *v21; // x0
  int32_t v22; // w24
  _DWORD *v23; // x8
  _BOOL8 v24; // x0
  BattleServantConfConponent_c *v25; // x0
  UnityEngine_Object_o *CardAndCommandObj; // x20
  const MethodInfo *v27; // x1
  unsigned __int64 CommandCodeIds; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  System_Int32_array *v31; // x20
  BattleServantConfConponent___c_c *v32; // x0
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x8
  System_Predicate_int__o *_9__78_0; // x21
  Il2CppObject *v35; // x22
  struct BattleServantConfConponent___c_StaticFields *v36; // x0
  unsigned __int64 v37; // x9
  unsigned __int64 v38; // x8
  int v39; // w12
  UnityEngine_Object_o *npSpeedChange; // x20
  struct BattleServantNPSpeedChangeComponent_o *v41; // x8
  struct BattleServantNPSpeedChangeComponent_o *v42; // x8
  UnityEngine_Object_o *ClassSkillObj; // x20
  UnityEngine_Object_o *AppendSkillObj; // x20
  UnityEngine_Object_o *classBoardSkillObj; // x20
  __int64 v46; // x0
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4212794 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_FindIndex_int___, method);
    sub_B0D8A4(&BattleServantConfConponent_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Predicate_int___ctor__, v10);
    sub_B0D8A4(&System_Predicate_int__TypeInfo, v11);
    sub_B0D8A4(&Method_BattleServantConfConponent___c__ChangeLayout_b__78_0__, v12);
    sub_B0D8A4(&BattleServantConfConponent___c_TypeInfo, v13);
    byte_4212794 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipObj, 0LL, 0LL) )
  {
    v15 = this->fields.equipObj;
    LocalPositionY = GameObjectExtensions__GetLocalPositionY(v15, 0LL);
    GameObjectExtensions__SetLocalPositionY(v15, LocalPositionY + (float)this->fields.adjustHeight, 0LL);
  }
  if ( this->fields.isEquip )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.equipPossessionSkillInfoComponentList;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_86;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v47,
      equipPossessionSkillInfoComponentList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    v48 = v47;
    for ( i = 0.0; ; i = i - (float)v21->static_fields->EQIUP_SKILL_OBJ_HEIGHT )
    {
      v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v48,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
      if ( !v24 )
        break;
      current = v48.fields.current;
      if ( !v48.fields.current )
        sub_B0D97C(v24);
      monitor = v48.fields.current[2].monitor;
      if ( !monitor )
        sub_B0D97C(v24);
      v21 = BattleServantConfConponent_TypeInfo;
      v22 = monitor[41];
      if ( (BYTE3(BattleServantConfConponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
        v21 = BattleServantConfConponent_TypeInfo;
      }
      if ( v22 > v21->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT )
      {
        if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v21);
        v23 = current[2].monitor;
        if ( !v23 )
          sub_B0D97C(v21);
        v21 = BattleServantConfConponent_TypeInfo;
        i = i + (float)(BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT - v23[41]);
      }
      if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = BattleServantConfConponent_TypeInfo;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v48,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    v25 = BattleServantConfConponent_TypeInfo;
    if ( (BYTE3(BattleServantConfConponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
      v25 = BattleServantConfConponent_TypeInfo;
    }
    *(float *)&v2 = i + (float)v25->static_fields->EQIUP_SKILL_OBJ_HEIGHT;
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
                                         v27);
    if ( CommandCodeIds )
    {
      v31 = (System_Int32_array *)CommandCodeIds;
      v32 = BattleServantConfConponent___c_TypeInfo;
      if ( (BYTE3(BattleServantConfConponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
        v32 = BattleServantConfConponent___c_TypeInfo;
      }
      static_fields = v32->static_fields;
      _9__78_0 = static_fields->__9__78_0;
      if ( !_9__78_0 )
      {
        if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v32);
          static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
        }
        v35 = (Il2CppObject *)static_fields->__9;
        _9__78_0 = (System_Predicate_int__o *)sub_B0D974(System_Predicate_int__TypeInfo, v29, v30);
        System_Predicate_int____ctor(
          _9__78_0,
          v35,
          Method_BattleServantConfConponent___c__ChangeLayout_b__78_0__,
          (const MethodInfo_2AF676C *)Method_System_Predicate_int___ctor__);
        v36 = BattleServantConfConponent___c_TypeInfo->static_fields;
        v36->__9__78_0 = _9__78_0;
        sub_B0D840(&v36->__9__78_0, _9__78_0);
      }
      if ( System_Array__FindIndex_int_(
             v31,
             (System_Predicate_T__o *)_9__78_0,
             (const MethodInfo_1F68D08 *)Method_System_Array_FindIndex_int___) == -1
        || (int)*(_QWORD *)&v31->max_length < 1 )
      {
        LODWORD(CommandCodeIds) = 0;
      }
      else
      {
        v37 = (unsigned int)*(_QWORD *)&v31->max_length;
        v38 = 0LL;
        CommandCodeIds = 0LL;
        do
        {
          if ( v38 >= v37 )
          {
            v46 = sub_B0D9A8(CommandCodeIds);
            sub_B0D948(v46, 0LL);
          }
          v39 = v31->m_Items[++v38];
          if ( v39 <= 0 )
            CommandCodeIds = (unsigned int)CommandCodeIds;
          else
            CommandCodeIds = (unsigned int)(CommandCodeIds + 1);
        }
        while ( (__int64)v38 < (int)v37 );
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
    v41 = this->fields.npSpeedChange;
    if ( !v41 )
      goto LABEL_86;
    v41->fields.equipeOffsetZ = *(float *)&v2 + (float)this->fields.adjustHeight;
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.npSpeedChange;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_86;
    BattleServantNPSpeedChangeComponent__SetButtonPosition(
      (BattleServantNPSpeedChangeComponent_o *)equipPossessionSkillInfoComponentList,
      0LL);
    v42 = this->fields.npSpeedChange;
    if ( !v42 )
      goto LABEL_86;
    *(float *)&v2 = *(float *)&v2 - (float)v42->fields.contentsHeight;
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
      sub_B0D97C(equipPossessionSkillInfoComponentList);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
  BattleViewBufflistComponent__setShow(buffListView, 0LL);
  started = BattleServantConfConponent__StartOpenTab(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
  __int64 v59; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v60; // x26
  unsigned __int64 v61; // x19
  int32_t *v62; // x22
  int32_t *v63; // x23
  __int64 v64; // x20
  System_Int32_array *v65; // x8
  System_Boolean_array *v66; // x8
  System_Int32_array *v67; // x8
  __int64 v68; // x1
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

  if ( (byte_4212797 & 1) == 0 )
  {
    sub_B0D8A4(&bool___TypeInfo, idList);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillMaster___, v12);
    sub_B0D8A4(&DataManager_TypeInfo, v13);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_B0D8A4(&int___TypeInfo, v15);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v16);
    sub_B0D8A4(&string___TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v18);
    sub_B0D8A4(&StringLiteral_3318/*"COND_TYPE_TITLE"*/, v19);
    sub_B0D8A4(&StringLiteral_3306/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v20);
    sub_B0D8A4(&StringLiteral_1/*""*/, v21);
    byte_4212797 = 1;
  }
  if ( releaseSkillIds
    && releaseSkillLvs
    && (max_length = releaseSkillIds->max_length, (_DWORD)max_length == releaseSkillLvs->max_length) )
  {
    v23 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, max_length);
    *idList = v23;
    sub_B0D840((BattleServantConfConponent_o *)idList, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
    v30 = (System_String_array *)sub_B0D8BC(string___TypeInfo, releaseSkillIds->max_length);
    *titleList = v30;
    sub_B0D840((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
    v37 = (System_String_array *)sub_B0D8BC(string___TypeInfo, releaseSkillIds->max_length);
    *explanationList = v37;
    sub_B0D840(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    v44 = (System_Boolean_array *)sub_B0D8BC(bool___TypeInfo, releaseSkillIds->max_length);
    *releaseStateList = v44;
    sub_B0D840(
      (BattleServantConfConponent_o *)releaseStateList,
      (System_Int32_array **)v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    v51 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, releaseSkillIds->max_length);
    *lvList = v51;
    sub_B0D840((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillMaster___);
    v59 = *(_QWORD *)&releaseSkillIds->max_length;
    if ( (int)v59 >= 1 )
    {
      v60 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      v61 = 0LL;
      v62 = &releaseSkillIds->m_Items[1];
      v63 = &releaseSkillLvs->m_Items[1];
      v64 = 32LL;
      v170 = releaseStateList;
      while ( v61 < (unsigned int)v59 )
      {
        v65 = *idList;
        if ( !*idList )
          goto LABEL_84;
        if ( v61 >= v65->max_length )
          break;
        v65->m_Items[v61 + 1] = v62[v61];
        if ( v61 >= releaseSkillLvs->max_length )
          break;
        v66 = *releaseStateList;
        if ( !*releaseStateList )
          goto LABEL_84;
        if ( v61 >= v66->max_length )
          break;
        v66->m_Items[v61 + 4] = v63[v61] > 0;
        if ( v61 >= releaseSkillLvs->max_length )
          break;
        v67 = *lvList;
        if ( !*lvList )
          goto LABEL_84;
        if ( v61 >= v67->max_length )
          break;
        v67->m_Items[v61 + 1] = v63[v61];
        if ( v61 >= releaseSkillIds->max_length )
          break;
        if ( !v60 )
          goto LABEL_84;
        Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    v60,
                                                    v62[v61],
                                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Master_WarQuestSelectionMaster )
        {
          v75 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_84;
          if ( v61 >= v75->max_length )
            break;
          v76 = (SkillEntity_o *)Master_WarQuestSelectionMaster;
          v77 = *titleList;
          if ( v75->m_Items[v61 + 4] )
          {
            if ( v61 >= releaseSkillLvs->max_length )
              break;
            Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectTitle(
                                                        (SkillEntity_o *)Master_WarQuestSelectionMaster,
                                                        v63[v61],
                                                        0LL);
            if ( !v77 )
              goto LABEL_84;
            v84 = (System_Int32_array **)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              Master_WarQuestSelectionMaster = sub_B0D964(
                                                 Master_WarQuestSelectionMaster,
                                                 v77->obj.klass->_1.element_class);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_85;
            }
            if ( v61 >= v77->max_length )
              break;
            *(Il2CppClass **)((char *)&v77->obj.klass + v64) = (Il2CppClass *)v84;
            sub_B0D840((BattleServantConfConponent_o *)((char *)v77 + v64), v84, v78, v79, v80, v81, v82, v83);
            if ( v61 >= releaseSkillLvs->max_length )
              break;
            v85 = *explanationList;
            Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectExplanation(v76, v63[v61], 0LL);
            if ( !v85 )
              goto LABEL_84;
            v92 = (System_Int32_array **)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              Master_WarQuestSelectionMaster = sub_B0D964(
                                                 Master_WarQuestSelectionMaster,
                                                 v85->obj.klass->_1.element_class);
              if ( !Master_WarQuestSelectionMaster )
              {
LABEL_85:
                v169 = sub_B0D99C();
                sub_B0D948(v169, 0LL);
              }
            }
            if ( v61 >= v85->max_length )
              break;
            v93 = (BattleServantConfConponent_o *)((char *)v85 + v64);
            v94 = v92;
            *(Il2CppClass **)((char *)&v85->obj.klass + v64) = (Il2CppClass *)v92;
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
              Master_WarQuestSelectionMaster = sub_B0D964(
                                                 Master_WarQuestSelectionMaster,
                                                 v77->obj.klass->_1.element_class);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_85;
            }
            if ( v61 >= v77->max_length )
              break;
            *(Il2CppClass **)((char *)&v77->obj.klass + v64) = (Il2CppClass *)v111;
            sub_B0D840((BattleServantConfConponent_o *)((char *)v77 + v64), v111, v105, v106, v107, v108, v109, v110);
            v112 = *explanationList;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3318/*"COND_TYPE_TITLE"*/,
                                                        0LL);
            if ( !v112 )
              goto LABEL_84;
            v119 = (System_Int32_array **)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              Master_WarQuestSelectionMaster = sub_B0D964(
                                                 Master_WarQuestSelectionMaster,
                                                 v112->obj.klass->_1.element_class);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_85;
            }
            if ( v61 >= v112->max_length )
              break;
            *(Il2CppClass **)((char *)&v112->obj.klass + v64) = (Il2CppClass *)v119;
            sub_B0D840((BattleServantConfConponent_o *)((char *)v112 + v64), v119, v113, v114, v115, v116, v117, v118);
            v120 = *explanationList;
            if ( !*explanationList )
LABEL_84:
              sub_B0D97C(Master_WarQuestSelectionMaster);
            if ( v61 >= v120->max_length )
              break;
            Master_WarQuestSelectionMaster = System_String__op_Inequality(
                                               *(System_String_o **)((char *)&v120->obj.klass + v64),
                                               (System_String_o *)StringLiteral_1/*""*/,
                                               0LL);
            if ( (Master_WarQuestSelectionMaster & 1) != 0 )
            {
              v121 = *explanationList;
              if ( !*explanationList )
                goto LABEL_84;
              if ( v61 >= v121->max_length )
                break;
              v122 = (BattleServantConfConponent_o *)((char *)v121 + v64);
              v123 = (System_Int32_array **)System_String__Concat_43849904(
                                              *(System_String_o **)((char *)&v121->obj.klass + v64),
                                              (System_String_o *)StringLiteral_26/*"\n"*/,
                                              0LL);
              v122->klass = (BattleServantConfConponent_c *)v123;
              sub_B0D840(v122, v123, v124, v125, v126, v127, v128, v129);
            }
            v130 = *explanationList;
            if ( !*explanationList )
              goto LABEL_84;
            if ( v61 >= v130->max_length )
              break;
            v131 = *(System_String_o **)((char *)&v130->obj.klass + v64);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v132 = LocalizationManager__Get((System_String_o *)StringLiteral_3306/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
            v94 = (System_Int32_array **)System_String__Concat_43849904(v131, v132, 0LL);
            v93 = (BattleServantConfConponent_o *)((char *)v130 + v64);
            *(Il2CppClass **)((char *)&v130->obj.klass + v64) = (Il2CppClass *)v94;
          }
          sub_B0D840(v93, v94, v86, v87, v88, v89, v90, v91);
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
          if ( !byte_4212885 )
          {
            sub_B0D8A4(&LocalizationManager_TypeInfo, v68);
            byte_4212885 = 1;
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
            Master_WarQuestSelectionMaster = sub_B0D964(v96, v95->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_85;
          }
          if ( v61 >= v95->max_length )
            break;
          *(Il2CppClass **)((char *)&v95->obj.klass + v64) = (Il2CppClass *)v96;
          sub_B0D840((BattleServantConfConponent_o *)((char *)v95 + v64), v96, v69, v70, v71, v72, v73, v74);
          v103 = *explanationList;
          if ( !*explanationList )
            goto LABEL_84;
          releaseStateList = v170;
          Master_WarQuestSelectionMaster = (__int64)StringLiteral_1/*""*/;
          if ( StringLiteral_1/*""*/ )
          {
            Master_WarQuestSelectionMaster = sub_B0D964(StringLiteral_1/*""*/, v103->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_85;
            v104 = (System_Int32_array **)StringLiteral_1/*""*/;
          }
          else
          {
            v104 = 0LL;
          }
          if ( v61 >= v103->max_length )
            break;
          *(Il2CppClass **)((char *)&v103->obj.klass + v64) = (Il2CppClass *)v104;
          sub_B0D840((BattleServantConfConponent_o *)((char *)v103 + v64), v104, v97, v98, v99, v100, v101, v102);
        }
        LODWORD(v59) = releaseSkillIds->max_length;
        ++v61;
        v64 += 8LL;
        if ( (__int64)v61 >= (int)v59 )
          return;
      }
      v168 = sub_B0D9A8(Master_WarQuestSelectionMaster);
      sub_B0D948(v168, 0LL);
    }
  }
  else
  {
    v133 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
    *idList = v133;
    sub_B0D840((BattleServantConfConponent_o *)idList, (System_Int32_array **)v133, v134, v135, v136, v137, v138, v139);
    v140 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 0LL);
    *titleList = v140;
    sub_B0D840(
      (BattleServantConfConponent_o *)titleList,
      (System_Int32_array **)v140,
      v141,
      v142,
      v143,
      v144,
      v145,
      v146);
    v147 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 0LL);
    *explanationList = v147;
    sub_B0D840(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v147,
      v148,
      v149,
      v150,
      v151,
      v152,
      v153);
    v154 = (System_Boolean_array *)sub_B0D8BC(bool___TypeInfo, 0LL);
    *releaseStateList = v154;
    sub_B0D840(
      (BattleServantConfConponent_o *)releaseStateList,
      (System_Int32_array **)v154,
      v155,
      v156,
      v157,
      v158,
      v159,
      v160);
    v161 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
    *lvList = v161;
    sub_B0D840((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v161, v162, v163, v164, v165, v166, v167);
  }
}


int32_t __fastcall BattleServantConfConponent__GetPersonality(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *individualities,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_int__o *v15; // x19
  System_Int32_array *v16; // x0
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x20
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  int32_t v30; // w21
  __int64 v31; // x0
  double v32; // d0
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  IndividualityPersonalityMaster_o *Master_WarQuestSelectionMaster; // x20

  if ( (byte_42127A5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___, individualities);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_int__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_int__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B0D8A4(&System_Math_TypeInfo, v14);
    byte_42127A5 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    individualities,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualities )
    goto LABEL_50;
  klass = individualities->klass;
  if ( *(_WORD *)&individualities->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v18;
      p_offset += 4;
      if ( v18 >= *(unsigned __int16 *)&individualities->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(individualities, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          individualities,
          *(_QWORD *)(p_method + 8));
  if ( !v21 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v22 = *(_QWORD *)v21;
    if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
    {
      v23 = 0LL;
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
          goto LABEL_15;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_15:
      v25 = sub_AA67A0(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v21;
    if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
    {
      v27 = 0LL;
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v28 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
          goto LABEL_22;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_22:
      v29 = sub_AA67A0(v21, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v32 = log10((double)v30);
    if ( v32 == INFINITY )
      v32 = -INFINITY;
    if ( (unsigned int)(v30 - 300) <= 0x63 && (int)v32 == 2 && (unsigned int)(v30 - 303) <= 5 && v30 != 307 )
    {
      if ( !v15 )
        sub_B0D97C(v31);
      System_Collections_Generic_List_int___Add(
        v15,
        v30,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v33 = *(_QWORD *)v21;
  if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
  {
    v34 = 0LL;
    v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
        goto LABEL_39;
    }
    v36 = v33 + 16LL * *v35 + 312;
  }
  else
  {
LABEL_39:
    v36 = sub_AA67A0(v21, System_IDisposable_TypeInfo, 0LL);
  }
  v16 = (System_Int32_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v21, *(_QWORD *)(v36 + 8));
  if ( !v15 )
    goto LABEL_50;
  if ( v15->fields._size >= 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (IndividualityPersonalityMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    v16 = System_Collections_Generic_List_int___ToArray(
            v15,
            (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( Master_WarQuestSelectionMaster )
      return IndividualityPersonalityMaster__GetPersonalityValue(Master_WarQuestSelectionMaster, v16, 0LL);
LABEL_50:
    sub_B0D97C(v16);
  }
  return -1;
}


int32_t __fastcall BattleServantConfConponent__GetPolicy(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *individualities,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_int__o *v15; // x19
  System_Int32_array *v16; // x0
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x20
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  int32_t v30; // w21
  __int64 v31; // x0
  double v32; // d0
  unsigned int v33; // w8
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  IndividualityPolicyMaster_o *Master_WarQuestSelectionMaster; // x20

  if ( (byte_42127A4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_IndividualityPolicyMaster___, individualities);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_int__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_int__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B0D8A4(&System_Math_TypeInfo, v14);
    byte_42127A4 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    individualities,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualities )
    goto LABEL_50;
  klass = individualities->klass;
  if ( *(_WORD *)&individualities->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v18;
      p_offset += 4;
      if ( v18 >= *(unsigned __int16 *)&individualities->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(individualities, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          individualities,
          *(_QWORD *)(p_method + 8));
  if ( !v21 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v22 = *(_QWORD *)v21;
    if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
    {
      v23 = 0LL;
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
          goto LABEL_15;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_15:
      v25 = sub_AA67A0(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v21;
    if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
    {
      v27 = 0LL;
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v28 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
          goto LABEL_22;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_22:
      v29 = sub_AA67A0(v21, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v32 = log10((double)v30);
    v33 = v30 - 300;
    if ( v32 == INFINITY )
      v32 = -INFINITY;
    if ( v33 <= 0x63 && (int)v32 == 2 && v33 <= 7 && ((1 << v33) & 0x87) != 0 )
    {
      if ( !v15 )
        sub_B0D97C(v31);
      System_Collections_Generic_List_int___Add(
        v15,
        v30,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v34 = *(_QWORD *)v21;
  if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
  {
    v35 = 0LL;
    v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
        goto LABEL_39;
    }
    v37 = v34 + 16LL * *v36 + 312;
  }
  else
  {
LABEL_39:
    v37 = sub_AA67A0(v21, System_IDisposable_TypeInfo, 0LL);
  }
  v16 = (System_Int32_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v21, *(_QWORD *)(v37 + 8));
  if ( !v15 )
    goto LABEL_50;
  if ( v15->fields._size >= 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (IndividualityPolicyMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    v16 = System_Collections_Generic_List_int___ToArray(
            v15,
            (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( Master_WarQuestSelectionMaster )
      return IndividualityPolicyMaster__GetPolicyValue(Master_WarQuestSelectionMaster, v16, 0LL);
LABEL_50:
    sub_B0D97C(v16);
  }
  return -1;
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
  UnityEngine_Transform_o *transform; // x20
  int v11; // s1
  int v12; // s0
  int v13; // s2
  UnityEngine_Object_o *commandCard; // x20
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UILabel_o *havenotTdLabel; // x20
  UnityEngine_Object_o *classBoardSkillObj; // x20
  const MethodInfo *v18; // x1

  if ( (byte_4212791 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, data);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_2457/*"BATTLE_HASNOT_TD"*/, v8);
    byte_4212791 = 1;
  }
  this->fields.data = data;
  sub_B0D840(&this->fields.data, data);
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
  *(UnityEngine_Vector3_o *)(&v11 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
  if ( !transform )
    goto LABEL_34;
  v12 = 0;
  v13 = 0;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v11 - 1), 0LL);
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
                                               (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      sub_B0D97C(gameObject);
    }
    BattleCommandComponent__SetDownloadEventSprite((BattleCommandComponent_o *)gameObject, 0LL);
  }
  havenotTdLabel = this->fields.havenotTdLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2457/*"BATTLE_HASNOT_TD"*/, 0LL);
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
        v18);
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
  if ( (byte_421279D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2797/*"BattleServantDetailTab"*/, method);
    byte_421279D = 1;
  }
  return !UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_2797/*"BattleServantDetailTab"*/, 0LL)
      || !UnityEngine_PlayerPrefs__GetInt_34962660((System_String_o *)StringLiteral_2797/*"BattleServantDetailTab"*/, 0LL)
      || UnityEngine_PlayerPrefs__GetInt_34962660((System_String_o *)StringLiteral_2797/*"BattleServantDetailTab"*/, 0LL) != 1;
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
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x0
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_421279A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__, v6);
    this = (BattleServantConfConponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_421279A = 1;
  }
  memset(&v23, 0, sizeof(v23));
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
        v22 = sub_B0D9A8(this);
        sub_B0D948(v22, 0LL);
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
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__) )
  {
    if ( !v23.fields.current )
      sub_B0D97C(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v23.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
  this = (BattleServantConfConponent_o *)v2->fields.equipPossessionSkillInfoComponentList;
  if ( !this )
LABEL_16:
    sub_B0D97C(this);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Clear__);
  v2->fields.bsvtData = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v2->fields.bsvtData, 0LL, v16, v17, v18, v19, v20, v21);
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
  if ( (byte_421279E & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17028/*"btn_bg_on_1"*/, v3);
    sub_B0D8A4(&StringLiteral_17023/*"btn_bg_off_1"*/, v4);
    sub_B0D8A4(&StringLiteral_17143/*"btn_txt_servant_states_off"*/, v5);
    sub_B0D8A4(&StringLiteral_2797/*"BattleServantDetailTab"*/, v6);
    this = (BattleServantConfConponent_o *)sub_B0D8A4(&StringLiteral_17141/*"btn_txt_servant_property_on"*/, v7);
    byte_421279E = 1;
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
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17028/*"btn_bg_on_1"*/, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17141/*"btn_txt_servant_property_on"*/, 0LL);
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
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17023/*"btn_bg_off_1"*/, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateName) == 0LL) )
  {
LABEL_21:
    sub_B0D97C(BattleServantAbilityObj);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17143/*"btn_txt_servant_states_off"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_2797/*"BattleServantDetailTab"*/, 0, 0LL);
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
  if ( (byte_421279F & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17028/*"btn_bg_on_1"*/, v3);
    sub_B0D8A4(&StringLiteral_17144/*"btn_txt_servant_states_on"*/, v4);
    sub_B0D8A4(&StringLiteral_17140/*"btn_txt_servant_property_off"*/, v5);
    sub_B0D8A4(&StringLiteral_17023/*"btn_bg_off_1"*/, v6);
    this = (BattleServantConfConponent_o *)sub_B0D8A4(&StringLiteral_2797/*"BattleServantDetailTab"*/, v7);
    byte_421279F = 1;
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
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17023/*"btn_bg_off_1"*/, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_22;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17140/*"btn_txt_servant_property_off"*/, 0LL);
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
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17028/*"btn_bg_on_1"*/, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateName) == 0LL) )
  {
LABEL_22:
    sub_B0D97C(BattleServantAbilityObj);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17144/*"btn_txt_servant_states_on"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_2797/*"BattleServantDetailTab"*/, 1, 0LL);
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
    sub_B0D97C(0LL);
  BattleViewBufflistComponent__setHide(buffListView, 0, 0LL);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  BattleServantConfConponent__ResetScroll(this, v6);
}


void __fastcall BattleServantConfConponent__ResetScroll(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *BattleServantAbilityObj; // x20
  UnityEngine_Object_o *BattleServantStateObj; // x20
  UnityEngine_GameObject_o *buffListView; // x0
  UnityEngine_Object_o *AbillityScrollView; // x20
  UnityEngine_Object_o *AbillityScrollBarWiget; // x20
  UnityEngine_Object_o *StateScrollView; // x20
  UnityEngine_Object_o *StateScrollBarWiget; // x20

  if ( (byte_421279B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421279B = 1;
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
      sub_B0D97C(buffListView);
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
  UnityEngine_GameObject_o *AppendSkillTitle; // x0
  UnityEngine_Object_o *AppendSkillListParent; // x21
  UnityEngine_Object_o *AppendSkillInfoPrefab; // x21
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  const MethodInfo *v18; // x1
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

  if ( (byte_4212796 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, battleInfoData);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___, v8);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_19747/*"img_txt_extraskill"*/, v12);
    byte_4212796 = 1;
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
  if ( UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL) && !BattleServantConfConponent__SetAtlas(this, v18) )
    return;
  AppendSkillTitle = (UnityEngine_GameObject_o *)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_100;
  UISprite__set_atlas((UISprite_o *)AppendSkillTitle, this->fields.BattleAssetUIAtlas, 0LL);
  AppendSkillTitle = (UnityEngine_GameObject_o *)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_100;
  UISprite__set_spriteName((UISprite_o *)AppendSkillTitle, (System_String_o *)StringLiteral_19747/*"img_txt_extraskill"*/, 0LL);
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
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v58, 0LL);
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
    Master_WarQuestSelectionMaster = (ServantAppendPassiveSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    AppendSkillTitle = (UnityEngine_GameObject_o *)UserServantEntity__getSvtId((UserServantEntity_o *)v23, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_100;
    ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_26472008(
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
  AppendSkillTitle = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillMaster___);
  v27 = idList[0];
  entity = 0LL;
  if ( !idList[0] )
LABEL_100:
    sub_B0D97C(AppendSkillTitle);
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
                                                       (const MethodInfo_2669C30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
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
        v55 = sub_B0D9A8(AppendSkillTitle);
        sub_B0D948(v55, 0LL);
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
                                                         (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
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
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0

  if ( (byte_42127A0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, method);
    sub_B0D8A4(&AssetManager_TypeInfo, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_2766/*"Battle/Common"*/, v6);
    sub_B0D8A4(&StringLiteral_2781/*"BattleAssetUIAtlas"*/, v7);
    byte_42127A0 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2766/*"Battle/Common"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_14;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             AssetStorage,
                                                             (System_String_o *)StringLiteral_2781/*"BattleAssetUIAtlas"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
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
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      this->fields.BattleAssetUIAtlas = (struct UIAtlas_o *)Component_srcLineSprite;
      sub_B0D840(&this->fields.BattleAssetUIAtlas, Component_srcLineSprite);
      return 1;
    }
LABEL_14:
    sub_B0D97C(AssetStorage);
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  UnityEngine_Object_o *AbillityScrollView; // x20
  void *attributeBaseSprite; // x0
  struct UIScrollView_o *v25; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIScrollView_o *v27; // x8
  struct UIScrollView_o *v28; // x8
  __int64 v29; // x8
  struct UIScrollView_o *v30; // x8
  __int64 v31; // x8
  struct UIScrollView_o *v32; // x8
  __int64 v33; // x8
  UnityEngine_Object_o *BattleAssetUIAtlas; // x20
  const MethodInfo *v35; // x1
  System_String_o *v36; // x28
  const MethodInfo *v37; // x1
  __int64 v38; // x2
  struct BattleServantData_o *bsvtData; // x8
  System_String_o *v40; // x20
  int32_t v41; // w22
  UnityEngine_Object_o *attributeObj; // x20
  struct BattleServantData_o *v43; // x8
  int32_t v44; // w24
  struct BattleServantData_o *v45; // x8
  BattleDeckServantData_o *deckSvt; // x0
  int v47; // w24
  struct BattleServantData_o *v48; // x8
  ServantLimitMaster_o *v49; // x23
  __int64 v50; // x25
  __int64 v51; // x26
  const MethodInfo *v52; // x2
  struct BattleServantData_o *v53; // x8
  __int64 v54; // x22
  __int64 v55; // x24
  const MethodInfo *v56; // x2
  int32_t v57; // w22
  int32_t v58; // w3
  ServantLimitMaster_o *v59; // x0
  int32_t v60; // w2
  BattleDeckServantData_o *v61; // x0
  _BOOL4 IsHidePersonality; // w0
  int32_t v63; // w21
  _BOOL4 v64; // w8
  Il2CppObject *v65; // x22
  System_String_o *v66; // x0
  int v67; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v69; // x1
  System_String_o *v70; // x0
  System_String_o *v71; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v72; // x1
  System_String_o *v73; // x0
  System_String_o *v74; // x23
  System_String_o *v75; // x0
  System_String_o *v76; // x20
  System_String_o *v77; // x0
  System_String_o *v78; // x0
  UnityEngine_Object_o *attributeLabel; // x21
  System_String_o *v80; // x20
  struct BattleServantData_o *v81; // x8
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  struct BattleServantData_o *v83; // x8
  struct ServantLimitAddEntity_o *v84; // x8
  struct BattleServantData_o *v85; // x8
  __int64 v86; // x22
  __int64 v87; // x24
  int32_t Attri; // [xsp+4h] [xbp-6Ch] BYREF
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  int32_t personality; // [xsp+18h] [xbp-58h] BYREF
  int32_t policy; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16

  if ( (byte_42127A3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_IndividualityPolicyMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int__GetEntity__, v7);
    sub_B0D8A4(
      &Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int__GetEntity__,
      v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v11);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_20297/*"line_whiteAlpha"*/, v15);
    sub_B0D8A4(&StringLiteral_11774/*"SERVANT_PERSONALITY_"*/, v16);
    sub_B0D8A4(&StringLiteral_11687/*"SERVANT_ATTRIBUTE_HIDE"*/, v17);
    sub_B0D8A4(&StringLiteral_11689/*"SERVANT_ATTRIBUTE_SPLIT"*/, v18);
    sub_B0D8A4(&StringLiteral_12091/*"SERVANT_SUB_ATTRIBUTE_"*/, v19);
    sub_B0D8A4(&StringLiteral_11775/*"SERVANT_POLICY_"*/, v20);
    sub_B0D8A4(&StringLiteral_11688/*"SERVANT_ATTRIBUTE_NONE"*/, v21);
    sub_B0D8A4(&StringLiteral_11686/*"SERVANT_ATTRIBUTE_FORMAT"*/, v22);
    byte_42127A3 = 1;
  }
  policy = 0;
  personality = 0;
  entity = 0LL;
  Attri = 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !LocalizationManager__ContainsKey((System_String_o *)StringLiteral_11686/*"SERVANT_ATTRIBUTE_FORMAT"*/, 0LL) )
  {
    attributeObj = (UnityEngine_Object_o *)this->fields.attributeObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(attributeObj, 0LL, 0LL) )
    {
      attributeBaseSprite = this->fields.attributeObj;
      if ( attributeBaseSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)attributeBaseSprite, 0, 0LL);
        return;
      }
      goto LABEL_155;
    }
    return;
  }
  AbillityScrollView = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  attributeBaseSprite = (void *)UnityEngine_Object__op_Inequality(AbillityScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)attributeBaseSprite & 1) != 0 )
  {
    v25 = this->fields.AbillityScrollView;
    if ( !v25 )
      goto LABEL_155;
    attributeBaseSprite = *(void **)&v25->fields.mPlane.fields.m_Normal.fields.x;
    if ( !attributeBaseSprite )
      goto LABEL_155;
    LODWORD(v2) = 1138163712;
    if ( UIPanel__get_height((UIPanel_o *)attributeBaseSprite, 0LL) > 430.0 )
    {
      attributeBaseSprite = this->fields.AbillityScrollView;
      if ( !attributeBaseSprite )
        goto LABEL_155;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)attributeBaseSprite, 0LL);
      GameObjectExtensions__SetLocalPositionY(gameObject, -55.0, 0LL);
      v27 = this->fields.AbillityScrollView;
      if ( !v27 )
        goto LABEL_155;
      attributeBaseSprite = *(void **)&v27->fields.mPlane.fields.m_Normal.fields.x;
      if ( !attributeBaseSprite )
        goto LABEL_155;
      (*(void (__fastcall **)(void *, _QWORD, float, float, float, long double))(*(_QWORD *)attributeBaseSprite + 600LL))(
        attributeBaseSprite,
        *(_QWORD *)(*(_QWORD *)attributeBaseSprite + 608LL),
        0.0,
        -127.0,
        670.0,
        v2);
      GameObjectExtensions__SetLocalPositionY(this->fields.abillityScrollBarObject, -238.0, 0LL);
      v28 = this->fields.AbillityScrollView;
      if ( !v28 )
        goto LABEL_155;
      v29 = *(_QWORD *)&v28->fields.showScrollBars;
      if ( !v29 )
        goto LABEL_155;
      attributeBaseSprite = *(void **)(v29 + 40);
      if ( !attributeBaseSprite )
        goto LABEL_155;
      UIWidget__set_height((UIWidget_o *)attributeBaseSprite, 430, 0LL);
      v30 = this->fields.AbillityScrollView;
      if ( !v30 )
        goto LABEL_155;
      v31 = *(_QWORD *)&v30->fields.showScrollBars;
      if ( !v31 )
        goto LABEL_155;
      attributeBaseSprite = *(void **)(v31 + 48);
      if ( !attributeBaseSprite )
        goto LABEL_155;
      UIWidget__set_width((UIWidget_o *)attributeBaseSprite, 26, 0LL);
      v32 = this->fields.AbillityScrollView;
      if ( !v32 )
        goto LABEL_155;
      v33 = *(_QWORD *)&v32->fields.showScrollBars;
      if ( !v33 )
        goto LABEL_155;
      attributeBaseSprite = *(void **)(v33 + 48);
      if ( !attributeBaseSprite )
        goto LABEL_155;
      UIWidget__set_height((UIWidget_o *)attributeBaseSprite, 430, 0LL);
    }
  }
  BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL) && !BattleServantConfConponent__SetAtlas(this, v35) )
    return;
  attributeBaseSprite = this->fields.attributeBaseSprite;
  if ( !attributeBaseSprite )
    goto LABEL_155;
  UISprite__set_atlas((UISprite_o *)attributeBaseSprite, this->fields.BattleAssetUIAtlas, 0LL);
  attributeBaseSprite = this->fields.attributeBaseSprite;
  if ( !attributeBaseSprite )
    goto LABEL_155;
  UISprite__set_spriteName((UISprite_o *)attributeBaseSprite, (System_String_o *)StringLiteral_20297/*"line_whiteAlpha"*/, 0LL);
  attributeBaseSprite = this->fields.attributeBaseSprite;
  if ( !attributeBaseSprite )
    goto LABEL_155;
  (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)attributeBaseSprite + 952LL))(
    attributeBaseSprite,
    1LL,
    *(_QWORD *)(*(_QWORD *)attributeBaseSprite + 960LL));
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11689/*"SERVANT_ATTRIBUTE_SPLIT"*/, 0LL);
  attributeBaseSprite = LocalizationManager__Get((System_String_o *)StringLiteral_11687/*"SERVANT_ATTRIBUTE_HIDE"*/, 0LL);
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_155;
  v40 = (System_String_o *)attributeBaseSprite;
  attributeBaseSprite = bsvtData->fields.deckSvt;
  if ( attributeBaseSprite )
  {
    attributeBaseSprite = (void *)BattleDeckServantData__GetChangePolicy(
                                    (BattleDeckServantData_o *)attributeBaseSprite,
                                    0LL);
    v41 = (int)attributeBaseSprite;
    policy = (int)attributeBaseSprite;
    if ( ((unsigned int)attributeBaseSprite & 0x80000000) != 0 )
      goto LABEL_55;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    attributeBaseSprite = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    if ( !attributeBaseSprite )
      goto LABEL_155;
    attributeBaseSprite = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)attributeBaseSprite,
                            v41,
                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int__GetEntity__);
    if ( !attributeBaseSprite )
      goto LABEL_155;
    v41 = *((_DWORD *)attributeBaseSprite + 5);
  }
  else
  {
    v41 = -1;
  }
  policy = v41;
LABEL_55:
  v43 = this->fields.bsvtData;
  if ( !v43 )
    goto LABEL_155;
  attributeBaseSprite = v43->fields.deckSvt;
  if ( attributeBaseSprite )
  {
    attributeBaseSprite = (void *)BattleDeckServantData__GetChangePersonality(
                                    (BattleDeckServantData_o *)attributeBaseSprite,
                                    0LL);
    v44 = (int)attributeBaseSprite;
    personality = (int)attributeBaseSprite;
    if ( ((unsigned int)attributeBaseSprite & 0x80000000) != 0 )
      goto LABEL_66;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    attributeBaseSprite = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    if ( !attributeBaseSprite )
      goto LABEL_155;
    attributeBaseSprite = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)attributeBaseSprite,
                            v44,
                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int__GetEntity__);
    if ( !attributeBaseSprite )
      goto LABEL_155;
    v44 = *((_DWORD *)attributeBaseSprite + 5);
  }
  else
  {
    v44 = -1;
  }
  personality = v44;
LABEL_66:
  if ( ((v44 | v41) & 0x80000000) != 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    attributeBaseSprite = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitMaster___);
    v48 = this->fields.bsvtData;
    if ( !v48 )
      goto LABEL_155;
    v49 = (ServantLimitMaster_o *)attributeBaseSprite;
    v51 = *(_QWORD *)&v48->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
    v50 = *(_QWORD *)&v48->fields._dispLimitCount_k__BackingField.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v92.fields.currentCryptoKey = v51;
    *(_QWORD *)&v92.fields.fakeValue = v50;
    attributeBaseSprite = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v92, 0LL);
    if ( (int)attributeBaseSprite >= 11 )
    {
      if ( (v41 & 0x80000000) != 0 )
      {
        v81 = this->fields.bsvtData;
        if ( !v81 )
          goto LABEL_155;
        svtlimitaddent = v81->fields.svtlimitaddent;
        if ( !svtlimitaddent )
          goto LABEL_155;
        attributeBaseSprite = (void *)BattleServantConfConponent__GetPolicy(
                                        (BattleServantConfConponent_o *)attributeBaseSprite,
                                        (System_Collections_Generic_IEnumerable_int__o *)svtlimitaddent->fields.individuality,
                                        v52);
        policy = (int)attributeBaseSprite;
      }
      if ( (v44 & 0x80000000) != 0 )
      {
        v83 = this->fields.bsvtData;
        if ( !v83 )
          goto LABEL_155;
        v84 = v83->fields.svtlimitaddent;
        if ( !v84 )
          goto LABEL_155;
        attributeBaseSprite = (void *)BattleServantConfConponent__GetPersonality(
                                        (BattleServantConfConponent_o *)attributeBaseSprite,
                                        (System_Collections_Generic_IEnumerable_int__o *)v84->fields.individuality,
                                        v52);
        personality = (int)attributeBaseSprite;
      }
      v85 = this->fields.bsvtData;
      if ( !v85 )
        goto LABEL_155;
      v87 = *(_QWORD *)&v85->fields.svtId.fields.currentCryptoKey;
      v86 = *(_QWORD *)&v85->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v94.fields.currentCryptoKey = v87;
      *(_QWORD *)&v94.fields.fakeValue = v86;
      attributeBaseSprite = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v94, 0LL);
      if ( !v49 )
LABEL_155:
        sub_B0D97C(attributeBaseSprite);
      v60 = (int)attributeBaseSprite;
      v59 = v49;
      v58 = 0;
    }
    else
    {
      v53 = this->fields.bsvtData;
      if ( !v53 )
        goto LABEL_155;
      v55 = *(_QWORD *)&v53->fields.svtId.fields.currentCryptoKey;
      v54 = *(_QWORD *)&v53->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v93.fields.currentCryptoKey = v55;
      *(_QWORD *)&v93.fields.fakeValue = v54;
      attributeBaseSprite = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v93, 0LL);
      if ( !this->fields.bsvtData )
        goto LABEL_155;
      v57 = (int)attributeBaseSprite;
      attributeBaseSprite = (void *)BattleServantData__getDispLimitCount(this->fields.bsvtData, 1, v56);
      if ( !v49 )
        goto LABEL_155;
      v58 = (int)attributeBaseSprite;
      v59 = v49;
      v60 = v57;
    }
    attributeBaseSprite = (void *)ServantLimitMaster__TryGetEntity(v59, &entity, v60, v58, 0LL);
    if ( entity )
    {
      if ( (policy & 0x80000000) != 0 )
        policy = entity->fields.policy;
      if ( (personality & 0x80000000) != 0 )
        personality = entity->fields.personality;
    }
  }
  v45 = this->fields.bsvtData;
  if ( !v45 )
    goto LABEL_155;
  deckSvt = v45->fields.deckSvt;
  if ( deckSvt )
  {
    attributeBaseSprite = (void *)BattleDeckServantData__IsHidePolicy(deckSvt, 0LL);
    v45 = this->fields.bsvtData;
    if ( !v45 )
      goto LABEL_155;
    v47 = (int)attributeBaseSprite;
  }
  else
  {
    v47 = 0;
  }
  v61 = v45->fields.deckSvt;
  if ( !v61 )
  {
    v63 = personality;
    v67 = 0;
    v64 = policy == 0;
    if ( personality )
    {
LABEL_100:
      v68 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_string__TypeInfo, v37, v38);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v68,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
      if ( ((policy < 1) & ~v47) == 0 )
      {
        v69 = (EventMissionProgressRequest_Argument_ProgressData_o *)v40;
        if ( (v47 & 1) == 0 )
        {
          v70 = System_Int32__ToString((int32_t)&policy, 0LL);
          v71 = System_String__Concat_43849904((System_String_o *)StringLiteral_11775/*"SERVANT_POLICY_"*/, v70, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          attributeBaseSprite = LocalizationManager__Get(v71, 0LL);
          v69 = (EventMissionProgressRequest_Argument_ProgressData_o *)attributeBaseSprite;
        }
        if ( !v68 )
          goto LABEL_155;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v68,
          v69,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
        v63 = personality;
      }
      if ( ((v63 < 1) & ~v67) == 0 )
      {
        v72 = (EventMissionProgressRequest_Argument_ProgressData_o *)v40;
        if ( (v67 & 1) == 0 )
        {
          v73 = System_Int32__ToString((int32_t)&personality, 0LL);
          v74 = System_String__Concat_43849904((System_String_o *)StringLiteral_11774/*"SERVANT_PERSONALITY_"*/, v73, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          attributeBaseSprite = LocalizationManager__Get(v74, 0LL);
          v72 = (EventMissionProgressRequest_Argument_ProgressData_o *)attributeBaseSprite;
        }
        if ( !v68 )
          goto LABEL_155;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v68,
          v72,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
      }
      v66 = System_String__Join_43905348(v36, (System_Collections_Generic_IEnumerable_string__o *)v68, 0LL);
      goto LABEL_117;
    }
LABEL_93:
    if ( v64 )
    {
      v65 = (Il2CppObject *)v40;
      if ( ((v47 | v67) & 1) != 0 )
        goto LABEL_118;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_11688/*"SERVANT_ATTRIBUTE_NONE"*/, 0LL);
      goto LABEL_117;
    }
    goto LABEL_100;
  }
  IsHidePersonality = BattleDeckServantData__IsHidePersonality(v61, 0LL);
  v63 = personality;
  v64 = policy == 0;
  if ( ((unsigned __int8)v47 & IsHidePersonality & 1) == 0 )
  {
    v67 = IsHidePersonality;
    if ( personality )
      goto LABEL_100;
    goto LABEL_93;
  }
  v65 = (Il2CppObject *)v40;
  if ( policy )
  {
    v65 = (Il2CppObject *)v40;
    if ( personality )
    {
      v66 = System_String__Concat_43852188(v40, v36, v40, 0LL);
LABEL_117:
      v65 = (Il2CppObject *)v66;
    }
  }
LABEL_118:
  attributeBaseSprite = this->fields.bsvtData;
  if ( !attributeBaseSprite )
    goto LABEL_155;
  if ( *((_QWORD *)attributeBaseSprite + 34) )
  {
    if ( BattleDeckServantData__IsHideAttri(*((BattleDeckServantData_o **)attributeBaseSprite + 34), 0LL) )
      goto LABEL_126;
    attributeBaseSprite = this->fields.bsvtData;
    if ( !attributeBaseSprite )
      goto LABEL_155;
  }
  Attri = BattleServantData__getAttri((BattleServantData_o *)attributeBaseSprite, v37);
  v75 = System_Int32__ToString((int32_t)&Attri, 0LL);
  v76 = System_String__Concat_43849904((System_String_o *)StringLiteral_12091/*"SERVANT_SUB_ATTRIBUTE_"*/, v75, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v40 = LocalizationManager__Get(v76, 0LL);
LABEL_126:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v77 = LocalizationManager__Get((System_String_o *)StringLiteral_11686/*"SERVANT_ATTRIBUTE_FORMAT"*/, 0LL);
  v78 = System_String__Format_43845440(v77, v65, (Il2CppObject *)v40, 0LL);
  attributeLabel = (UnityEngine_Object_o *)this->fields.attributeLabel;
  v80 = v78;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(attributeLabel, 0LL, 0LL) )
  {
    attributeBaseSprite = this->fields.attributeLabel;
    if ( attributeBaseSprite )
    {
      UILabel__set_text((UILabel_o *)attributeBaseSprite, v80, 0LL);
      return;
    }
    goto LABEL_155;
  }
}


void __fastcall BattleServantConfConponent__SetClassBoardSkillList(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *classBoardSkillObj; // x20
  const MethodInfo *v5; // x2
  BattleServantConfWindowPassiveSkillListComponent_o *v6; // x0
  struct BattleServantData_o *bsvtData; // x8
  UnityEngine_Object_o *BattleAssetUIAtlas; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_42127A2 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_20533/*"menu_txt_class_score"*/, v3);
    byte_42127A2 = 1;
  }
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0LL, 0LL) )
  {
    v6 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
    if ( !v6 )
      goto LABEL_21;
    BattleServantConfWindowPassiveSkillListComponent__SetActive(v6, 0, v5);
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
      || BattleServantConfConponent__SetAtlas(this, v9) )
    {
      v6 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
      if ( v6 )
      {
        ((void (__fastcall *)(BattleServantConfWindowPassiveSkillListComponent_o *, struct UIAtlas_o *, __int64, Il2CppMethodPointer))v6->klass->vtable._5_SetSkillTitle.method)(
          v6,
          this->fields.BattleAssetUIAtlas,
          StringLiteral_20533/*"menu_txt_class_score"*/,
          v6->klass->vtable._6_SetSkillInfoObject.methodPtr);
        v6 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
        if ( v6 )
        {
          BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
            (BattleServantClassBoardSkillEffectListComponent_o *)v6,
            this->fields.bsvtData,
            v10);
          v6 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
          if ( v6 )
          {
            BattleServantConfWindowPassiveSkillListComponent__SetActive(v6, 1, v11);
            return;
          }
        }
      }
LABEL_21:
      sub_B0D97C(v6);
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
  __int64 bsvtData; // x0
  UnityEngine_Object_o *ClassSkillListParent; // x21
  UnityEngine_Object_o *ClassSkillInfoPrefab; // x21
  const MethodInfo *v17; // x1
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  const MethodInfo *v19; // x1
  struct BattleServantData_o *v20; // x8
  __int128 v21; // q1
  int64_t v22; // x0
  __int64 v23; // x27
  int32_t v24; // w20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  struct TweenScale_o *mcTweenScaleP; // x8
  SkillLvMaster_o *v27; // x24
  unsigned __int64 v28; // x21
  int32_t v29; // w22
  float v30; // s8
  int32_t v31; // w23
  System_String_o *v32; // x24
  System_String_o *v33; // x25
  UnityEngine_GameObject_o *v34; // x26
  struct UnityEngine_GameObject_o *v35; // x26
  __int64 v36; // x20
  UnityEngine_Transform_o *v37; // x27
  UnityEngine_Transform_o *transform; // x27
  int v39; // s0
  UnityEngine_Transform_o *v42; // x27
  int v43; // s0
  srcLineSprite_o *Component_srcLineSprite; // x26
  int32_t v48; // w6
  const MethodInfo *v49; // x7
  int mTable_high; // w9
  __int64 v51; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v52; // [xsp+8h] [xbp-C8h]
  SkillLvMaster_o *v53; // [xsp+10h] [xbp-C0h]
  __int64 v54; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+40h] [xbp-90h]
  SkillLvEntity_o *v57; // [xsp+60h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4212795 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillLvMaster___, battleInfoData);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___, v8);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_19734/*"img_txt_classskill"*/, v12);
    byte_4212795 = 1;
  }
  v57 = 0LL;
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
  if ( BattleServantData__IsHideClassSkillNpcFollower((BattleServantData_o *)bsvtData, v17) )
    return;
  this->fields.ClassSkillOffset = 0.0;
  BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL) && !BattleServantConfConponent__SetAtlas(this, v19) )
    return;
  bsvtData = (__int64)this->fields.ClassSkillTitle;
  if ( !bsvtData )
    goto LABEL_46;
  UISprite__set_atlas((UISprite_o *)bsvtData, this->fields.BattleAssetUIAtlas, 0LL);
  bsvtData = (__int64)this->fields.ClassSkillTitle;
  if ( !bsvtData )
    goto LABEL_46;
  UISprite__set_spriteName((UISprite_o *)bsvtData, (System_String_o *)StringLiteral_19734/*"img_txt_classskill"*/, 0LL);
  bsvtData = (__int64)this->fields.ClassSkillTitle;
  if ( !bsvtData )
    goto LABEL_46;
  bsvtData = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bsvtData + 840LL))(
               bsvtData,
               *(_QWORD *)(*(_QWORD *)bsvtData + 848LL));
  v20 = this->fields.bsvtData;
  if ( !v20 )
    goto LABEL_46;
  v21 = *(_OWORD *)&v20->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&v20->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v56.fields.fakeValue = v21;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v55 = v56;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v55, 0LL);
  bsvtData = (__int64)BattleInfoData__getUserServantFromID(battleInfoData, v22, 0LL);
  if ( !bsvtData )
    return;
  v23 = *(_QWORD *)(bsvtData + 424);
  if ( !v23 )
    goto LABEL_46;
  if ( !*(_QWORD *)(v23 + 24) )
    return;
  bsvtData = (__int64)this->fields.ClassSkillObj;
  if ( !bsvtData
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL),
        (bsvtData = (__int64)this->fields.ClassSkillListParent) == 0) )
  {
LABEL_46:
    sub_B0D97C(bsvtData);
  }
  v24 = 0;
  while ( 1 )
  {
    bsvtData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)bsvtData, 0LL);
    if ( !bsvtData )
      goto LABEL_46;
    if ( v24 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0LL) )
      break;
    bsvtData = (__int64)this->fields.ClassSkillListParent;
    if ( bsvtData )
    {
      bsvtData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)bsvtData, 0LL);
      if ( bsvtData )
      {
        bsvtData = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)bsvtData, v24, 0LL);
        if ( bsvtData )
        {
          bsvtData = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bsvtData, 0LL);
          if ( bsvtData )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0LL);
            bsvtData = (__int64)this->fields.ClassSkillListParent;
            ++v24;
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
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillMaster___);
  entity = 0LL;
  bsvtData = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v57 = 0LL;
  mcTweenScaleP = *(struct TweenScale_o **)(v23 + 24);
  if ( (int)mcTweenScaleP >= 1 )
  {
    v54 = v23 + 32;
    v27 = (SkillLvMaster_o *)bsvtData;
    v28 = 0LL;
    v29 = 0;
    v30 = 0.0;
    v52 = Master_WarQuestSelectionMaster;
    v53 = (SkillLvMaster_o *)bsvtData;
    while ( 1 )
    {
      if ( v28 >= (unsigned int)mcTweenScaleP )
      {
        v51 = sub_B0D9A8(bsvtData);
        sub_B0D948(v51, 0LL);
      }
      v31 = *(_DWORD *)(v54 + 4 * v28);
      if ( v31 >= 1 )
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_46;
        bsvtData = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                     Master_WarQuestSelectionMaster,
                     &entity,
                     v31,
                     (const MethodInfo_2669C30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( (bsvtData & 1) == 0 )
          return;
        if ( !v27 )
          goto LABEL_46;
        if ( !SkillLvMaster__TryGetEntity(v27, &v57, v31, 1, 0LL) )
          return;
        bsvtData = (__int64)entity;
        if ( !entity )
          goto LABEL_46;
        bsvtData = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
        if ( !v57 )
          goto LABEL_46;
        v32 = (System_String_o *)bsvtData;
        bsvtData = (__int64)SkillLvEntity__getDetail_26117940(v57, 1, 0, 0LL);
        if ( !this->fields.ClassSkillListParent )
          goto LABEL_46;
        v33 = (System_String_o *)bsvtData;
        bsvtData = (__int64)UnityEngine_GameObject__get_transform(this->fields.ClassSkillListParent, 0LL);
        if ( !bsvtData )
          goto LABEL_46;
        if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0LL) <= v29 )
        {
          v35 = this->fields.ClassSkillInfoPrefab;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v36 = v23;
          bsvtData = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                (UnityEngine_UI_Dropdown_DropdownItem_o *)v35,
                                (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !bsvtData )
            goto LABEL_46;
          v34 = (UnityEngine_GameObject_o *)bsvtData;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
          bsvtData = (__int64)UnityEngine_GameObject__get_transform(v34, 0LL);
          if ( !this->fields.ClassSkillListParent )
            goto LABEL_46;
          v37 = (UnityEngine_Transform_o *)bsvtData;
          bsvtData = (__int64)UnityEngine_GameObject__get_transform(this->fields.ClassSkillListParent, 0LL);
          if ( !v37 )
            goto LABEL_46;
          UnityEngine_Transform__set_parent(v37, (UnityEngine_Transform_o *)bsvtData, 0LL);
          bsvtData = (__int64)UnityEngine_GameObject__get_transform(v34, 0LL);
          if ( !bsvtData )
            goto LABEL_46;
          v60.fields.y = -v30;
          v60.fields.x = 0.0;
          v60.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v60, 0LL);
          transform = UnityEngine_GameObject__get_transform(v34, 0LL);
          *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Vector3__get_one(0LL);
          if ( !transform )
            goto LABEL_46;
          UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v39, 0LL);
          v42 = UnityEngine_GameObject__get_transform(v34, 0LL);
          *(UnityEngine_Quaternion_o *)&v43 = UnityEngine_Quaternion__get_identity(0LL);
          if ( !v42 )
            goto LABEL_46;
          UnityEngine_Transform__set_localRotation(v42, *(UnityEngine_Quaternion_o *)&v43, 0LL);
          v23 = v36;
          Master_WarQuestSelectionMaster = v52;
        }
        else
        {
          bsvtData = (__int64)this->fields.ClassSkillListParent;
          if ( !bsvtData )
            goto LABEL_46;
          bsvtData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)bsvtData, 0LL);
          if ( !bsvtData )
            goto LABEL_46;
          bsvtData = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)bsvtData, v29, 0LL);
          if ( !bsvtData )
            goto LABEL_46;
          bsvtData = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bsvtData, 0LL);
          if ( !bsvtData )
            goto LABEL_46;
          v34 = (UnityEngine_GameObject_o *)bsvtData;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
          bsvtData = (__int64)UnityEngine_GameObject__get_transform(v34, 0LL);
          if ( !bsvtData )
            goto LABEL_46;
          v59.fields.y = -v30;
          v59.fields.x = 0.0;
          v59.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v59, 0LL);
        }
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v34,
                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
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
            v28 + 1,
            v31,
            v32,
            v33,
            1,
            v48,
            v49);
        }
        else if ( !Component_srcLineSprite )
        {
          goto LABEL_46;
        }
        mcTweenScaleP = Component_srcLineSprite->fields.mcTweenScaleP;
        if ( !mcTweenScaleP )
          goto LABEL_46;
        mTable_high = HIDWORD(mcTweenScaleP->fields.mTable);
        LODWORD(mcTweenScaleP) = *(_DWORD *)(v23 + 24);
        v27 = v53;
        ++v29;
        v30 = v30 + (float)((float)(mTable_high - Component_srcLineSprite->fields.miLineW) + 110.0);
      }
      if ( (__int64)++v28 >= (int)mcTweenScaleP )
        goto LABEL_91;
    }
  }
  v30 = 0.0;
LABEL_91:
  this->fields.ClassSkillOffset = -(float)(v30 + 1.0);
}


void __fastcall BattleServantConfConponent__SetCommandCard(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantData_o *bsvtData; // x0
  System_Int32_array *CommandCodeIdsEX; // x0
  struct BattleCommandComponent_array *CommandCardList; // x8
  System_Int32_array *v7; // x20
  unsigned __int64 v8; // x21
  int32_t *v9; // x23
  unsigned __int64 max_length; // x9
  BattleCommandComponent_o *v11; // x22
  const MethodInfo *v12; // x2
  struct BattleCommandData_o *data; // x8
  __int64 v14; // x0
  UIWidget_o *component; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4212798 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_TryGetComponent_UIWidget___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4212798 = 1;
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
      sub_B0D97C(CommandCodeIdsEX);
    v7 = CommandCodeIdsEX;
    v8 = 0LL;
    v9 = &CommandCodeIdsEX->m_Items[1];
    while ( 1 )
    {
      max_length = CommandCardList->max_length;
      if ( (__int64)v8 >= (int)max_length )
        break;
      if ( v8 >= max_length )
        goto LABEL_26;
      v11 = CommandCardList->m_Items[v8];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v11, 0LL, 0LL);
      if ( ((unsigned __int8)CommandCodeIdsEX & 1) == 0 )
      {
        if ( !v11 )
          goto LABEL_24;
        BattleCommandComponent__Initialize(v11, 0LL);
        v11->fields.isCodeTextureView = 1;
        BattleCommandComponent__setData_18472464(v11, this->fields.bsvtData, v8, 0LL);
        CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Component__TryGetComponent_UIWidget_(
                                                   (UnityEngine_Component_o *)this,
                                                   &component,
                                                   (const MethodInfo_170EC50 *)Method_UnityEngine_Component_TryGetComponent_UIWidget___);
        if ( ((unsigned __int8)CommandCodeIdsEX & 1) != 0 )
        {
          if ( !component )
            goto LABEL_24;
          BattleCommandComponent__setDepth(v11, component->fields.mDepth + 1, 0LL);
        }
        BattleCommandComponent__SetDownloadEventSprite(v11, 0LL);
        if ( !v7 )
          goto LABEL_24;
        if ( v8 >= v7->max_length
          || (BattleCommandComponent__SetCommandCodeView_18478040(v11, v9[v8], 0LL), v8 >= v7->max_length)
          || (BattleCommandComponent__SetLockInfo(v11, v9[v8] == -1, 0LL),
              BattleServantConfConponent__SetCommandCardTypeChangeBuff(this, v11, v12),
              BattleCommandComponent__HidePowerUpValueLabelActive(v11, this->fields.isCommandCardUnderIcon, 0LL),
              BattleCommandComponent__ResetCardBuffIconAlphaAnim(v11, 0LL),
              BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(v11, 0LL),
              v8 >= v7->max_length) )
        {
LABEL_26:
          v14 = sub_B0D9A8(CommandCodeIdsEX);
          sub_B0D948(v14, 0LL);
        }
        data = v11->fields.data;
        if ( !data )
          goto LABEL_24;
        data->fields.commandCodeId = v9[v8];
        BattleCommandComponent__UpdateCommandCardEffect(v11, 0LL);
        BattleCommandComponent__ChangeCardEffectMaskForInside(v11, 0LL);
      }
      CommandCardList = this->fields.CommandCardList;
      ++v8;
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
    sub_B0D97C(this);
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
  UnityEngine_GameObject_o *transform; // x0
  int32_t v19; // w20
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  BattleServantConfConponent___c_c *v23; // x8
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x9
  System_Predicate_int__o *_9__83_0; // x21
  Il2CppObject *v26; // x22
  struct BattleServantConfConponent___c_StaticFields *v27; // x0
  int v28; // w21
  System_Int32_array *v29; // x20
  __int64 v30; // x8
  int32_t v31; // w22
  unsigned __int64 v32; // x27
  float v33; // s8
  int32_t v34; // w23
  System_Int32_array *v35; // x8
  unsigned __int64 v36; // x20
  unsigned __int64 max_length; // x9
  UnityEngine_GameObject_o *v38; // x24
  struct UnityEngine_GameObject_o *v39; // x24
  UnityEngine_Transform_o *v40; // x25
  UnityEngine_Transform_o *v41; // x25
  int v42; // s0
  UnityEngine_Transform_o *v45; // x25
  int v46; // s0
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UILabel_o *NoCommandCodeLabel; // x19
  __int64 v52; // x0
  System_Int32_array *array; // [xsp+0h] [xbp-80h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-78h]
  System_String_array *explanationList; // [xsp+10h] [xbp-70h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4212799 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_FindIndex_int___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandCodeMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Predicate_int___ctor__, v10);
    sub_B0D8A4(&System_Predicate_int__TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__83_0__, v13);
    sub_B0D8A4(&BattleServantConfConponent___c_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_2427/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/, v15);
    byte_4212799 = 1;
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
  v19 = 0;
  while ( 1 )
  {
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_91;
    if ( v19 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) )
      break;
    transform = this->fields.CommandCodeListParent;
    if ( transform )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( transform )
      {
        transform = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                  (UnityEngine_Transform_o *)transform,
                                                  v19,
                                                  0LL);
        if ( transform )
        {
          transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          if ( transform )
          {
            UnityEngine_GameObject__SetActive(transform, 0, 0LL);
            transform = this->fields.CommandCodeListParent;
            ++v19;
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
  array = BattleServantData__GetCommandCodeIds((BattleServantData_o *)transform, v20);
  v23 = BattleServantConfConponent___c_TypeInfo;
  if ( (BYTE3(BattleServantConfConponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
    v23 = BattleServantConfConponent___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__83_0 = static_fields->__9__83_0;
  if ( !_9__83_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__83_0 = (System_Predicate_int__o *)sub_B0D974(System_Predicate_int__TypeInfo, v21, v22);
    System_Predicate_int____ctor(
      _9__83_0,
      v26,
      Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__83_0__,
      (const MethodInfo_2AF676C *)Method_System_Predicate_int___ctor__);
    v27 = BattleServantConfConponent___c_TypeInfo->static_fields;
    v27->__9__83_0 = _9__83_0;
    sub_B0D840(&v27->__9__83_0, _9__83_0);
  }
  transform = (UnityEngine_GameObject_o *)System_Array__FindIndex_int_(
                                            array,
                                            (System_Predicate_T__o *)_9__83_0,
                                            (const MethodInfo_1F68D08 *)Method_System_Array_FindIndex_int___);
  if ( !this->fields.NoCommandCodeLabel
    || (v28 = (int)transform,
        (transform = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.NoCommandCodeLabel,
                       0LL)) == 0LL) )
  {
LABEL_91:
    sub_B0D97C(transform);
  }
  if ( v28 == -1 )
  {
    UnityEngine_GameObject__SetActive(transform, 1, 0LL);
    NoCommandCodeLabel = this->fields.NoCommandCodeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2427/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/, 0LL);
    if ( NoCommandCodeLabel )
    {
      UILabel__set_text(NoCommandCodeLabel, (System_String_o *)transform, 0LL);
      return;
    }
    goto LABEL_91;
  }
  UnityEngine_GameObject__SetActive(transform, 0, 0LL);
  transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_91;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)transform,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_91;
  transform = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)transform,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
  v29 = array;
  if ( !array )
    goto LABEL_91;
  v30 = *(_QWORD *)&array->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = 0;
    v32 = 0LL;
    v33 = 0.0;
    do
    {
      if ( v32 >= (unsigned int)v30 )
      {
LABEL_92:
        v52 = sub_B0D9A8(transform);
        sub_B0D948(v52, 0LL);
      }
      v34 = v29->m_Items[v32 + 1];
      if ( v34 >= 1 )
      {
        transform = (UnityEngine_GameObject_o *)MasterData_WarQuestSelectionMaster;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_91;
        transform = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  MasterData_WarQuestSelectionMaster,
                                                  v34,
                                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( transform )
        {
          CommandCodeEntity__GetSkillInfo((CommandCodeEntity_o *)transform, &idList, &titleList, &explanationList, 0LL);
          v35 = idList;
          if ( !idList )
            goto LABEL_91;
          v36 = 0LL;
          while ( 1 )
          {
            max_length = v35->max_length;
            if ( (__int64)v36 >= (int)max_length )
              break;
            if ( v36 >= max_length )
              goto LABEL_92;
            if ( v35->m_Items[v36 + 1] >= 1 )
            {
              transform = this->fields.CommandCodeListParent;
              if ( !transform )
                goto LABEL_91;
              transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
              if ( !transform )
                goto LABEL_91;
              if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) <= v31 )
              {
                v39 = this->fields.CommandCodeInfoPrefab;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v39,
                                                          (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                if ( !transform )
                  goto LABEL_91;
                v38 = transform;
                UnityEngine_GameObject__SetActive(transform, 1, 0LL);
                transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v38, 0LL);
                if ( !this->fields.CommandCodeListParent )
                  goto LABEL_91;
                v40 = (UnityEngine_Transform_o *)transform;
                transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                          this->fields.CommandCodeListParent,
                                                          0LL);
                if ( !v40 )
                  goto LABEL_91;
                UnityEngine_Transform__set_parent(v40, (UnityEngine_Transform_o *)transform, 0LL);
                transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v38, 0LL);
                if ( !transform )
                  goto LABEL_91;
                v58.fields.x = 0.0;
                v58.fields.z = 0.0;
                v58.fields.y = v33;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v58, 0LL);
                v41 = UnityEngine_GameObject__get_transform(v38, 0LL);
                *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Vector3__get_one(0LL);
                if ( !v41 )
                  goto LABEL_91;
                UnityEngine_Transform__set_localScale(v41, *(UnityEngine_Vector3_o *)&v42, 0LL);
                v45 = UnityEngine_GameObject__get_transform(v38, 0LL);
                *(UnityEngine_Quaternion_o *)&v46 = UnityEngine_Quaternion__get_identity(0LL);
                if ( !v45 )
                  goto LABEL_91;
                UnityEngine_Transform__set_localRotation(v45, *(UnityEngine_Quaternion_o *)&v46, 0LL);
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
                                                          v31,
                                                          0LL);
                if ( !transform )
                  goto LABEL_91;
                transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
                if ( !transform )
                  goto LABEL_91;
                v38 = transform;
                UnityEngine_GameObject__SetActive(transform, 1, 0LL);
              }
              Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v38,
                                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___);
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
                if ( v36 >= idList->max_length )
                  goto LABEL_92;
                if ( !titleList )
                  goto LABEL_91;
                if ( v36 >= titleList->max_length )
                  goto LABEL_92;
                if ( !explanationList )
                  goto LABEL_91;
                if ( v36 >= explanationList->max_length )
                  goto LABEL_92;
                if ( !Component_srcLineSprite )
                  goto LABEL_91;
                CommandCodeSkillInfo__Set(
                  (CommandCodeSkillInfo_o *)Component_srcLineSprite,
                  v34,
                  idList->m_Items[v36 + 1],
                  titleList->m_Items[v36],
                  explanationList->m_Items[v36],
                  v36 == 0,
                  0LL);
              }
              v35 = idList;
              ++v31;
              v33 = v33 + flt_3201988[v36 == 0];
            }
            ++v36;
            if ( !v35 )
              goto LABEL_91;
          }
          v29 = array;
        }
      }
      LODWORD(v30) = v29->max_length;
      ++v32;
    }
    while ( (__int64)v32 < (int)v30 );
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantConfConponent__StartOpenTab(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_421279C & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantConfConponent__StartOpenTab_d__90_TypeInfo, method);
    byte_421279C = 1;
  }
  v4 = sub_B0D974(BattleServantConfConponent__StartOpenTab_d__90_TypeInfo, method, v2);
  BattleServantConfConponent__StartOpenTab_d__90___ctor((BattleServantConfConponent__StartOpenTab_d__90_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


System_String_o *__fastcall BattleServantConfConponent__get_closeBtnPath(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v6; // x19
  bool v7; // w0
  __int64 *v8; // x8

  if ( (byte_42127A1 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17531/*"close"*/, v3);
    sub_B0D8A4(&StringLiteral_14571/*"Top/close"*/, v4);
    byte_42127A1 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B0D97C(0LL);
  v6 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_14571/*"Top/close"*/, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  v8 = &StringLiteral_17531/*"close"*/;
  if ( v7 )
    v8 = &StringLiteral_14571/*"Top/close"*/;
  return (System_String_o *)*v8;
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
  sub_B0D840(
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
  BattleServantData_o *bsvtData; // x0
  struct BattleData_o *v26; // x8
  UnityEngine_Object_o *shortNameLabel; // x25
  const MethodInfo *v28; // x1
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
  System_String_o *DetalShort_28055856; // x0
  UILabel_o *maxNp; // x24
  Il2CppObject *v53; // x0
  struct UILabel_o *v54; // x8
  UILabel_o *nplevel; // x23
  System_String_o *v56; // x1
  UnityEngine_Object_o *v57; // x23
  bool IsNpDetailActive; // w23
  const MethodInfo *v59; // x1
  UITexture_o *facetex; // x23
  const MethodInfo *v61; // x2
  int32_t v62; // w24
  const MethodInfo *v63; // x1
  int32_t v64; // w25
  int32_t CommandDispLimitCount; // w26
  struct UITexture_o *Manager__loadCommandCard; // x0
  UnityEngine_Object_o *havenotTdLabel; // x22
  bool v68; // w1
  System_String_o **p_atktdrate; // x8
  UnityEngine_Object_o *unknownNp; // x24
  UILabel_o *v71; // x24
  System_String_o *v72; // x1
  UnityEngine_Object_o *commandCard; // x23
  __int64 v74; // x1
  __int64 v75; // x2
  BattleCommandData_o *v76; // x23
  const MethodInfo *v77; // x1
  struct ServantTreasureDvcEntity_o *SvtTDvc; // x8
  const MethodInfo *v79; // x2
  const MethodInfo *v80; // x1
  const MethodInfo *v81; // x1
  UnityEngine_Object_o *npSpeedChange; // x22
  UnityEngine_Object_o *classIcon; // x21
  const MethodInfo *v84; // x1
  int32_t npcSvtClassId; // w1
  struct ServantEntity_o *svtdata; // x8
  int32_t IconSpriteScaledWidth; // w0
  UnityEngine_Object_o *v88; // x21
  int32_t v89; // w20
  UnityEngine_Object_o *Component_WebViewObject; // x20
  const MethodInfo *v91; // x1
  int v92; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t atk; // [xsp+8h] [xbp-58h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4212792 & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandData_TypeInfo, inbsvtData);
    sub_B0D8A4(&BattleServantConfConponent_TypeInfo, v11);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIAnchor___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v13);
    sub_B0D8A4(&int_TypeInfo, v14);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B0D8A4(&StringLiteral_9409/*"NP_UNKNOWN"*/, v19);
    sub_B0D8A4(&StringLiteral_23567/*"{0:#,0}"*/, v20);
    sub_B0D8A4(&StringLiteral_1/*""*/, v21);
    sub_B0D8A4(&StringLiteral_9013/*"Max {0}%"*/, v22);
    byte_4212792 = 1;
  }
  lv = 0;
  this->fields.bsvtData = inbsvtData;
  p_bsvtData = &this->fields.bsvtData;
  sub_B0D840(&this->fields.bsvtData, inbsvtData);
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
      bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
      battleInfoData = 0LL;
      if ( ((unsigned __int8)bsvtData & 1) != 0 )
      {
        v26 = this->fields.data;
        if ( !v26 )
          goto LABEL_171;
        battleInfoData = v26->fields.battle_info;
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
      bsvtData = this->fields.bsvtData;
      if ( !bsvtData )
        goto LABEL_171;
      v29 = this->fields.shortNameLabel;
      bsvtData = (BattleServantData_o *)BattleServantData__getServantShortName(bsvtData, v28);
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
    bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(atklabel, 0LL, 0LL);
    if ( ((unsigned __int8)bsvtData & 1) != 0 )
    {
      v31 = this->fields.bsvtData;
      if ( !v31 )
        goto LABEL_171;
      v32 = this->fields.atklabel;
      atk = v31->fields.atk;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &atk);
      bsvtData = (BattleServantData_o *)System_String__Format((System_String_o *)StringLiteral_23567/*"{0:#,0}"*/, v33, 0LL);
      if ( !v32 )
        goto LABEL_171;
      UILabel__set_text(v32, (System_String_o *)bsvtData, 0LL);
    }
    bsvtData = (BattleServantData_o *)this->fields.buffListView;
    if ( bsvtData )
    {
      BattleViewBufflistComponent__setClassIcon((BattleViewBufflistComponent_o *)bsvtData, this->fields.bsvtData, 0LL);
      v34 = this->fields.bsvtData;
      if ( v34 )
      {
        bsvtData = (BattleServantData_o *)v34->fields.buffData;
        if ( bsvtData )
        {
          buffListView = this->fields.buffListView;
          bsvtData = (BattleServantData_o *)BattleBuffData__getShowServantConf((BattleBuffData_o *)bsvtData, 0LL);
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
            bsvtData = this->fields.bsvtData;
            if ( bsvtData )
            {
              bsvtData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(bsvtData, 1, v41);
              if ( *p_bsvtData )
              {
                v42 = (int)bsvtData;
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
                    bsvtData = (BattleServantData_o *)this->fields.npRoot;
                    if ( !bsvtData )
                      goto LABEL_171;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0LL);
                    bsvtData = (BattleServantData_o *)this->fields.commandCard;
                    if ( !bsvtData )
                      goto LABEL_171;
                    bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)bsvtData,
                                                        0LL);
                    if ( !bsvtData )
                      goto LABEL_171;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0LL);
                  }
                  facetex = this->fields.facetex;
                  bsvtData = this->fields.bsvtData;
                  if ( !bsvtData )
                    goto LABEL_171;
                  bsvtData = (BattleServantData_o *)BattleServantData__GetImageSvtId(bsvtData, v59);
                  if ( !*p_bsvtData )
                    goto LABEL_171;
                  v62 = (int)bsvtData;
                  bsvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(*p_bsvtData, 1, v61);
                  if ( !*p_bsvtData )
                    goto LABEL_171;
                  v64 = (int)bsvtData;
                  CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(*p_bsvtData, v63);
                  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                  }
                  Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(
                                               facetex,
                                               v62,
                                               v64,
                                               CommandDispLimitCount,
                                               0LL);
                  this->fields.facetex = Manager__loadCommandCard;
                  sub_B0D840(&this->fields.facetex, Manager__loadCommandCard);
                  havenotTdLabel = (UnityEngine_Object_o *)this->fields.havenotTdLabel;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( !UnityEngine_Object__op_Inequality(havenotTdLabel, 0LL, 0LL) )
                    goto LABEL_139;
                  bsvtData = (BattleServantData_o *)this->fields.havenotTdLabel;
                  if ( !bsvtData )
                    goto LABEL_171;
                  bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)bsvtData,
                                                      0LL);
                  if ( !bsvtData )
                    goto LABEL_171;
                  v68 = 1;
                  goto LABEL_138;
                }
                if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Inequality(npRoot, 0LL, 0LL) )
                  goto LABEL_139;
                bsvtData = (BattleServantData_o *)this->fields.npRoot;
                if ( !bsvtData )
                  goto LABEL_171;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                bsvtData = (BattleServantData_o *)this->fields.commandCard;
                if ( !bsvtData )
                  goto LABEL_171;
                bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)bsvtData,
                                                    0LL);
                if ( !bsvtData )
                  goto LABEL_171;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                bsvtData = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !bsvtData )
                  goto LABEL_171;
                bsvtData = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)bsvtData,
                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                if ( !bsvtData )
                  goto LABEL_171;
                bsvtData = (BattleServantData_o *)TreasureDvcLvMaster__GetEntity(
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
                  bsvtData = (BattleServantData_o *)BattleServantConfConponent_TypeInfo;
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
                  DetalShort_28055856 = TreasureDvcLvEntity__getDetalShort_28055856(v48, lv, 0LL);
                  WrapControlText__textBBCodeAdjust(
                    v50,
                    DetalShort_28055856,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT,
                    0LL);
                  maxNp = this->fields.maxNp;
                  v92 = 100 * v48->fields.gaugeCount;
                  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92);
                  bsvtData = (BattleServantData_o *)System_String__Format(
                                                      (System_String_o *)StringLiteral_9013/*"Max {0}%"*/,
                                                      v53,
                                                      0LL);
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
                bsvtData = (BattleServantData_o *)System_Int32__ToString((int32_t)&lv, 0LL);
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
                  bsvtData = (BattleServantData_o *)this->fields.data;
                  if ( !bsvtData )
                    goto LABEL_171;
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
                                    goto LABEL_171;
                                  p_atktdrate = (System_String_o **)&bsvtData->fields.atktdrate;
                                }
                                else
                                {
                                  if ( !bsvtData )
                                    goto LABEL_171;
                                  p_atktdrate = (System_String_o **)&StringLiteral_1/*""*/;
                                }
                                UILabel__set_text((UILabel_o *)bsvtData, *p_atktdrate, 0LL);
                                unknownNp = (UnityEngine_Object_o *)this->fields.unknownNp;
                                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                }
                                bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(unknownNp, 0LL, 0LL);
                                if ( ((unsigned __int8)bsvtData & 1) != 0 )
                                {
                                  v71 = this->fields.unknownNp;
                                  if ( IsNpDetailActive )
                                  {
                                    v72 = (System_String_o *)StringLiteral_1/*""*/;
                                    if ( !v71 )
                                      goto LABEL_171;
                                  }
                                  else
                                  {
                                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    }
                                    bsvtData = (BattleServantData_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_9409/*"NP_UNKNOWN"*/,
                                                                        0LL);
                                    v72 = (System_String_o *)bsvtData;
                                    if ( !v71 )
                                      goto LABEL_171;
                                  }
                                  UILabel__set_text(v71, v72, 0LL);
                                }
                                commandCard = (UnityEngine_Object_o *)this->fields.commandCard;
                                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                }
                                if ( UnityEngine_Object__op_Inequality(commandCard, 0LL, 0LL) )
                                {
                                  v76 = (BattleCommandData_o *)sub_B0D974(BattleCommandData_TypeInfo, v74, v75);
                                  BattleCommandData___ctor(v76, 0LL);
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  SvtTDvc = (*p_bsvtData)->fields._SvtTDvc;
                                  if ( !SvtTDvc )
                                    goto LABEL_171;
                                  if ( !v76 )
                                    goto LABEL_171;
                                  v76->fields._type = SvtTDvc->fields.cardId;
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v76->fields.svtlimit = BattleServantData__getCommandDispLimitCount(bsvtData, v77);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  bsvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(
                                                                      bsvtData,
                                                                      1,
                                                                      v79);
                                  v76->fields._loadsvtLimit = (int)bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v76->fields.uniqueId = (*p_bsvtData)->fields.uniqueId;
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v76->fields.svtId = BattleServantData__getSvtId(bsvtData, v80);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  bsvtData = (BattleServantData_o *)BattleServantData__GetImageSvtId(bsvtData, v81);
                                  v76->fields.imageSvtId = (int)bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v76->fields.treasureDvc = (*p_bsvtData)->fields.treasuredvcId;
                                  bsvtData = (BattleServantData_o *)this->fields.commandCard;
                                  if ( !bsvtData )
                                    goto LABEL_171;
                                  BattleCommandComponent__setData(
                                    (BattleCommandComponent_o *)bsvtData,
                                    v76,
                                    this->fields.bsvtData,
                                    0,
                                    isShowBuffIcon,
                                    0,
                                    0LL);
                                  bsvtData = (BattleServantData_o *)this->fields.commandCard;
                                  if ( !bsvtData )
                                    goto LABEL_171;
                                  BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(
                                    (BattleCommandComponent_o *)bsvtData,
                                    0LL);
                                }
                                bsvtData = (BattleServantData_o *)this->fields.havenotTdLabel;
                                if ( !bsvtData )
                                  goto LABEL_171;
                                bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)bsvtData,
                                                                    0LL);
                                if ( !bsvtData )
                                  goto LABEL_171;
                                v68 = 0;
LABEL_138:
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, v68, 0LL);
LABEL_139:
                                npSpeedChange = (UnityEngine_Object_o *)this->fields.npSpeedChange;
                                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                }
                                if ( UnityEngine_Object__op_Inequality(npSpeedChange, 0LL, 0LL) )
                                {
                                  bsvtData = (BattleServantData_o *)this->fields.npSpeedChange;
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
                                bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(classIcon, 0LL, 0LL);
                                if ( ((unsigned __int8)bsvtData & 1) == 0 )
                                {
LABEL_169:
                                  BattleServantConfConponent__SetAttribute(this, v84);
                                  BattleServantConfConponent__ChangeLayout(this, v91);
                                  return;
                                }
                                if ( !inbsvtData )
                                  goto LABEL_171;
                                npcSvtClassId = inbsvtData->fields.npcSvtClassId;
                                bsvtData = (BattleServantData_o *)this->fields.classIcon;
                                if ( !npcSvtClassId )
                                {
                                  svtdata = inbsvtData->fields.svtdata;
                                  if ( !svtdata )
                                    goto LABEL_171;
                                  npcSvtClassId = svtdata->fields.classId;
                                }
                                if ( bsvtData )
                                {
                                  ServantClassIconComponent__SetImage(
                                    (ServantClassIconComponent_o *)bsvtData,
                                    npcSvtClassId,
                                    inbsvtData->fields._frameType_k__BackingField,
                                    0LL);
                                  bsvtData = (BattleServantData_o *)this->fields.classIcon;
                                  if ( bsvtData )
                                  {
                                    IconSpriteScaledWidth = ServantClassIconComponent__GetIconSpriteScaledWidth(
                                                              (ServantClassIconComponent_o *)bsvtData,
                                                              0LL);
                                    v88 = (UnityEngine_Object_o *)this->fields.shortNameLabel;
                                    v89 = IconSpriteScaledWidth;
                                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                    }
                                    if ( UnityEngine_Object__op_Inequality(v88, 0LL, 0LL) )
                                    {
                                      bsvtData = (BattleServantData_o *)this->fields.shortNameLabel;
                                      if ( !bsvtData )
                                        goto LABEL_171;
                                      if ( bsvtData->fields._frameType_k__BackingField + v89 >= 270 )
                                        CommonFunction__ScalingLabelWidth((UILabel_o *)bsvtData, 270 - v89, 0LL);
                                    }
                                    bsvtData = (BattleServantData_o *)this->fields.classIcon;
                                    if ( bsvtData )
                                    {
                                      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                                          (UnityEngine_Component_o *)bsvtData,
                                                                                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIAnchor___);
                                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                      }
                                      bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(
                                                                          Component_WebViewObject,
                                                                          0LL,
                                                                          0LL);
                                      if ( ((unsigned __int8)bsvtData & 1) != 0 )
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
    sub_B0D97C(bsvtData);
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
  struct BattleServantData_o *bsvtData; // x8
  struct BattleUserServantData_array *equipList; // x24
  __int64 v15; // x8
  SkillLvMaster_o *v16; // x19
  unsigned __int64 v17; // x27
  Il2CppClass **v18; // x21
  __int64 *v19; // x21
  __int64 v20; // t1
  __int64 v21; // x22
  __int64 v22; // x23
  unsigned __int64 v23; // x21
  float v24; // s8
  int32_t v25; // w25
  int32_t v26; // w26
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x24
  SkillLvMaster_o *v28; // x20
  EquipPossessionSkillInfoComponent_o *v29; // x27
  BattleServantConfConponent_o *v30; // x19
  System_String_o *v31; // x28
  float v32; // s0
  __int64 v33; // x0
  struct BattleUserServantData_array *v34; // [xsp+0h] [xbp-90h]
  unsigned __int64 v35; // [xsp+8h] [xbp-88h]
  __int64 v36; // [xsp+18h] [xbp-78h]
  int32_t index; // [xsp+24h] [xbp-6Ch]
  SkillLvEntity_o *v38; // [xsp+28h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4212793 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillLvMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    byte_4212793 = 1;
  }
  entity = 0LL;
  v38 = 0LL;
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
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillMaster___);
        BattleSkillIdList = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillLvMaster___);
        bsvtData = this->fields.bsvtData;
        this->fields.isEquip = 0;
        if ( !bsvtData )
          goto LABEL_48;
        equipList = bsvtData->fields.equipList;
        if ( !equipList )
          goto LABEL_48;
        v15 = *(_QWORD *)&equipList->max_length;
        if ( (int)v15 >= 1 )
        {
          v16 = (SkillLvMaster_o *)BattleSkillIdList;
          v17 = 0LL;
          v34 = equipList;
          do
          {
            if ( v17 >= (unsigned int)v15 )
            {
LABEL_49:
              v33 = sub_B0D9A8(BattleSkillIdList);
              sub_B0D948(v33, 0LL);
            }
            v18 = &equipList->obj.klass + v17;
            v20 = (__int64)v18[4];
            v19 = (__int64 *)(v18 + 4);
            BattleSkillIdList = v20;
            if ( v20 )
            {
              BattleSkillIdList = (__int64)BattleUserServantData__getBattleSkillIdList(
                                             (BattleUserServantData_o *)BattleSkillIdList,
                                             0LL);
              if ( v17 >= equipList->max_length )
                goto LABEL_49;
              v21 = BattleSkillIdList;
              BattleSkillIdList = *v19;
              if ( !*v19 )
                goto LABEL_48;
              BattleSkillIdList = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)BattleSkillIdList + 408LL))(
                                    BattleSkillIdList,
                                    *(_QWORD *)(*(_QWORD *)BattleSkillIdList + 416LL));
              if ( !v21 )
                goto LABEL_48;
              if ( *(int *)(v21 + 24) >= 1 )
              {
                v22 = BattleSkillIdList;
                v23 = 0LL;
                v36 = BattleSkillIdList + 32;
                v24 = 0.0;
                index = 0;
                v35 = v17;
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
                  if ( v23 >= *(unsigned int *)(v21 + 24) )
                    goto LABEL_49;
                  if ( !v22 )
                    goto LABEL_48;
                  if ( v23 >= *(unsigned int *)(v22 + 24) )
                    goto LABEL_49;
                  v25 = *(_DWORD *)(v21 + 32 + 4 * v23);
                  v26 = *(_DWORD *)(v36 + 4 * v23);
                  entity = 0LL;
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_48;
                  BattleSkillIdList = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        Master_WarQuestSelectionMaster,
                                        &entity,
                                        v25,
                                        (const MethodInfo_2669C30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                  if ( (BattleSkillIdList & 1) != 0 )
                  {
                    v38 = 0LL;
                    if ( !v16 )
                      goto LABEL_48;
                    BattleSkillIdList = SkillLvMaster__TryGetEntity(v16, &v38, v25, v26, 0LL);
                    if ( (BattleSkillIdList & 1) != 0 )
                    {
                      v27 = Master_WarQuestSelectionMaster;
                      v28 = v16;
                      BattleSkillIdList = (__int64)EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
                                                     this->fields.baseEquipSkillInfoPrefab,
                                                     this->fields.equipSkillInfoRoot,
                                                     index,
                                                     v24,
                                                     0LL);
                      if ( !this->fields.equipPossessionSkillInfoComponentList )
                        goto LABEL_48;
                      v29 = (EquipPossessionSkillInfoComponent_o *)BattleSkillIdList;
                      v30 = this;
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.equipPossessionSkillInfoComponentList,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)BattleSkillIdList,
                        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__);
                      BattleSkillIdList = (__int64)entity;
                      if ( !entity )
                        goto LABEL_48;
                      BattleSkillIdList = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                      if ( !v38 )
                        goto LABEL_48;
                      v31 = (System_String_o *)BattleSkillIdList;
                      BattleSkillIdList = (__int64)SkillLvEntity__getDetail_26117940(v38, v26, 0, 0LL);
                      if ( !v29 )
                        goto LABEL_48;
                      v32 = EquipPossessionSkillInfoComponent__SetSkill(
                              v29,
                              v25,
                              v31,
                              (System_String_o *)BattleSkillIdList,
                              0LL);
                      v30->fields.isEquip = 1;
                      this = v30;
                      v16 = v28;
                      Master_WarQuestSelectionMaster = v27;
                      equipList = v34;
                      v17 = v35;
                      v24 = v24 + v32;
                      ++index;
                    }
                  }
                  ++v23;
                }
                while ( (__int64)v23 < *(int *)(v21 + 24) );
              }
            }
            LODWORD(v15) = equipList->max_length;
            ++v17;
          }
          while ( (__int64)v17 < (int)v15 );
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
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__);
            return;
          }
LABEL_48:
          sub_B0D97C(BattleSkillIdList);
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
  sub_B0D840(p_method, object);
}


System_IAsyncResult_o *__fastcall BattleServantConfConponent_CloseButtonCallBack__BeginInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B0D848(this, &v5, callback, object);
}


void __fastcall BattleServantConfConponent_CloseButtonCallBack__EndInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  BattleServantConfConponent_CloseButtonCallBack_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  BattleServantConfConponent_CloseButtonCallBack_o *v29; // [xsp+8h] [xbp-38h] BYREF

  v29 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v29;
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
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v18->fields.extra_arg, method, v2, v3);
      if ( (sub_B0D8D4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B0D8CC(v20);
      v23 = sub_B0DCD0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AA67A0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B0D954(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AA67A0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v14)(v19, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v21)(v19, v20);
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
  if ( (byte_4211EF8 & 1) == 0 )
  {
    this = (BattleServantConfConponent__StartOpenTab_d__90_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4211EF8 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
LABEL_18:
      sub_B0D97C(this);
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
  sub_B0D840(p__2__current, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleServantConfConponent__StartOpenTab_d__90_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0

  if ( (byte_4211EF7 & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantConfConponent___c_TypeInfo, v1);
    byte_4211EF7 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleServantConfConponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleServantConfConponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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