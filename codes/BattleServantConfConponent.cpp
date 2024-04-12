void __fastcall BattleServantConfConponent___cctor(const MethodInfo *method)
{
  BattleServantConfConponent_c *v1; // x8

  if ( (byte_42ADE02 & 1) == 0 )
  {
    sub_B52984(&BattleServantConfConponent_TypeInfo);
    byte_42ADE02 = 1;
  }
  BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE = 20;
  BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT = 90;
  v1 = BattleServantConfConponent_TypeInfo;
  BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT = 500;
  v1->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT = 60;
  v1->static_fields->EQIUP_SKILL_OBJ_HEIGHT = 110;
}


void __fastcall BattleServantConfConponent___ctor(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42ADE01 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__);
    sub_B52984(&System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo);
    byte_42ADE01 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__);
  this->fields.equipPossessionSkillInfoComponentList = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.equipPossessionSkillInfoComponentList,
    (System_Int32_array **)v3,
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
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *v6; // x20
  float LocalPositionY; // s0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *equipPossessionSkillInfoComponentList; // x0
  float i; // s8
  Il2CppObject *current; // x22
  _DWORD *monitor; // x8
  BattleServantConfConponent_c *v12; // x0
  int32_t v13; // w24
  __int64 v14; // x1
  _DWORD *v15; // x8
  _BOOL8 v16; // x0
  BattleServantConfConponent_c *v17; // x0
  UnityEngine_Object_o *CardAndCommandObj; // x20
  unsigned __int64 CommandCodeIds; // x0
  System_Int32_array *v20; // x20
  BattleServantConfConponent___c_c *v21; // x0
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x8
  System_Predicate_int__o *_9__78_0; // x21
  Il2CppObject *v24; // x22
  struct BattleServantConfConponent___c_StaticFields *v25; // x0
  unsigned __int64 v26; // x9
  unsigned __int64 v27; // x8
  int v28; // w12
  UnityEngine_Object_o *npSpeedChange; // x20
  struct BattleServantNPSpeedChangeComponent_o *v30; // x8
  struct BattleServantNPSpeedChangeComponent_o *v31; // x8
  UnityEngine_Object_o *ClassSkillObj; // x20
  UnityEngine_Object_o *AppendSkillObj; // x20
  UnityEngine_Object_o *classBoardSkillObj; // x20
  __int64 v35; // x0
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42ADDEE & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_FindIndex_int___);
    sub_B52984(&BattleServantConfConponent_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_System_Predicate_int___ctor__);
    sub_B52984(&System_Predicate_int__TypeInfo);
    sub_B52984(&Method_BattleServantConfConponent___c__ChangeLayout_b__78_0__);
    sub_B52984(&BattleServantConfConponent___c_TypeInfo);
    byte_42ADDEE = 1;
  }
  memset(&v37, 0, sizeof(v37));
  equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipObj, 0LL, 0LL) )
  {
    v6 = this->fields.equipObj;
    LocalPositionY = GameObjectExtensions__GetLocalPositionY(v6, 0LL);
    GameObjectExtensions__SetLocalPositionY(v6, LocalPositionY + (float)this->fields.adjustHeight, 0LL);
  }
  if ( this->fields.isEquip )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.equipPossessionSkillInfoComponentList;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_86;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v36,
      equipPossessionSkillInfoComponentList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    v37 = v36;
    for ( i = 0.0; ; i = i - (float)v12->static_fields->EQIUP_SKILL_OBJ_HEIGHT )
    {
      v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
      if ( !v16 )
        break;
      current = v37.fields.current;
      if ( !v37.fields.current )
        sub_B52A5C(v16, v14);
      monitor = v37.fields.current[2].monitor;
      if ( !monitor )
        sub_B52A5C(v16, v14);
      v12 = BattleServantConfConponent_TypeInfo;
      v13 = monitor[41];
      if ( (BYTE3(BattleServantConfConponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
        v12 = BattleServantConfConponent_TypeInfo;
      }
      if ( v13 > v12->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT )
      {
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        v15 = current[2].monitor;
        if ( !v15 )
          sub_B52A5C(v12, v14);
        v12 = BattleServantConfConponent_TypeInfo;
        i = i + (float)(BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT - v15[41]);
      }
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = BattleServantConfConponent_TypeInfo;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    v17 = BattleServantConfConponent_TypeInfo;
    if ( (BYTE3(BattleServantConfConponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
      v17 = BattleServantConfConponent_TypeInfo;
    }
    *(float *)&v2 = i + (float)v17->static_fields->EQIUP_SKILL_OBJ_HEIGHT;
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
                                         v5);
    if ( CommandCodeIds )
    {
      v20 = (System_Int32_array *)CommandCodeIds;
      v21 = BattleServantConfConponent___c_TypeInfo;
      if ( (BYTE3(BattleServantConfConponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
        v21 = BattleServantConfConponent___c_TypeInfo;
      }
      static_fields = v21->static_fields;
      _9__78_0 = static_fields->__9__78_0;
      if ( !_9__78_0 )
      {
        if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
        }
        v24 = (Il2CppObject *)static_fields->__9;
        _9__78_0 = (System_Predicate_int__o *)sub_B52A54(System_Predicate_int__TypeInfo);
        System_Predicate_int____ctor(
          _9__78_0,
          v24,
          Method_BattleServantConfConponent___c__ChangeLayout_b__78_0__,
          (const MethodInfo_28D16F8 *)Method_System_Predicate_int___ctor__);
        v25 = BattleServantConfConponent___c_TypeInfo->static_fields;
        v25->__9__78_0 = _9__78_0;
        sub_B52920(&v25->__9__78_0);
      }
      if ( System_Array__FindIndex_int_(
             v20,
             (System_Predicate_T__o *)_9__78_0,
             (const MethodInfo_201ADB0 *)Method_System_Array_FindIndex_int___) == -1
        || (int)*(_QWORD *)&v20->max_length < 1 )
      {
        LODWORD(CommandCodeIds) = 0;
      }
      else
      {
        v26 = (unsigned int)*(_QWORD *)&v20->max_length;
        v27 = 0LL;
        CommandCodeIds = 0LL;
        do
        {
          if ( v27 >= v26 )
          {
            v35 = sub_B52A88(CommandCodeIds);
            sub_B52A28(v35, 0LL);
          }
          v28 = v20->m_Items[++v27];
          if ( v28 <= 0 )
            CommandCodeIds = (unsigned int)CommandCodeIds;
          else
            CommandCodeIds = (unsigned int)(CommandCodeIds + 1);
        }
        while ( (__int64)v27 < (int)v26 );
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
    v30 = this->fields.npSpeedChange;
    if ( !v30 )
      goto LABEL_86;
    v30->fields.equipeOffsetZ = *(float *)&v2 + (float)this->fields.adjustHeight;
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.npSpeedChange;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_86;
    BattleServantNPSpeedChangeComponent__SetButtonPosition(
      (BattleServantNPSpeedChangeComponent_o *)equipPossessionSkillInfoComponentList,
      0LL);
    v31 = this->fields.npSpeedChange;
    if ( !v31 )
      goto LABEL_86;
    *(float *)&v2 = *(float *)&v2 - (float)v31->fields.contentsHeight;
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
      sub_B52A5C(equipPossessionSkillInfoComponentList, v5);
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
    sub_B52A5C(0LL, call);
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
    sub_B52A5C(0LL, method);
  BattleViewBufflistComponent__setShow(buffListView, 0LL);
  started = BattleServantConfConponent__StartOpenTab(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
  System_Int32_array *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Boolean_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v49; // x1
  __int64 v50; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x26
  unsigned __int64 v52; // x19
  int32_t *v53; // x22
  int32_t *v54; // x23
  __int64 v55; // x20
  System_Int32_array *v56; // x8
  System_Boolean_array *v57; // x8
  System_Int32_array *v58; // x8
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Boolean_array *v65; // x8
  SkillEntity_o *v66; // x28
  System_String_array *v67; // x21
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x27
  System_String_array *v75; // x21
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x27
  BattleServantConfConponent_o *v83; // x0
  System_Int32_array **v84; // x1
  System_String_array *v85; // x21
  System_Int32_array **v86; // x27
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_String_array *v93; // x21
  System_Int32_array **v94; // x1
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **v101; // x27
  System_String_array *v102; // x21
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Int32_array **v109; // x27
  System_String_array *v110; // x8
  System_String_array *v111; // x8
  BattleServantConfConponent_o *v112; // x27
  System_Int32_array **v113; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_String_array *v120; // x21
  System_String_o *v121; // x27
  System_String_o *v122; // x0
  System_Int32_array *v123; // x0
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_String_array *v130; // x0
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_String_array *v137; // x0
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  System_Boolean_array *v144; // x0
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  System_Int32_array *v151; // x0
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  __int64 v158; // x0
  __int64 v159; // x0
  System_Boolean_array **v160; // [xsp+8h] [xbp-78h]

  if ( (byte_42ADDF2 & 1) == 0 )
  {
    sub_B52984(&bool___TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_26/*"\n"*/);
    sub_B52984(&StringLiteral_3338/*"COND_TYPE_TITLE"*/);
    sub_B52984(&StringLiteral_3326/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42ADDF2 = 1;
  }
  if ( releaseSkillIds
    && releaseSkillLvs
    && (max_length = releaseSkillIds->max_length, (_DWORD)max_length == releaseSkillLvs->max_length) )
  {
    v13 = (System_Int32_array *)sub_B5299C(int___TypeInfo, max_length);
    *idList = v13;
    sub_B52920((BattleServantConfConponent_o *)idList, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
    v20 = (System_String_array *)sub_B5299C(string___TypeInfo, releaseSkillIds->max_length);
    *titleList = v20;
    sub_B52920((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
    v27 = (System_String_array *)sub_B5299C(string___TypeInfo, releaseSkillIds->max_length);
    *explanationList = v27;
    sub_B52920(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    v34 = (System_Boolean_array *)sub_B5299C(bool___TypeInfo, releaseSkillIds->max_length);
    *releaseStateList = v34;
    sub_B52920(
      (BattleServantConfConponent_o *)releaseStateList,
      (System_Int32_array **)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    v41 = (System_Int32_array *)sub_B5299C(int___TypeInfo, releaseSkillIds->max_length);
    *lvList = v41;
    sub_B52920((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v41, v42, v43, v44, v45, v46, v47);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillMaster___);
    v50 = *(_QWORD *)&releaseSkillIds->max_length;
    if ( (int)v50 >= 1 )
    {
      v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      v52 = 0LL;
      v53 = &releaseSkillIds->m_Items[1];
      v54 = &releaseSkillLvs->m_Items[1];
      v55 = 32LL;
      v160 = releaseStateList;
      while ( v52 < (unsigned int)v50 )
      {
        v56 = *idList;
        if ( !*idList )
          goto LABEL_84;
        if ( v52 >= v56->max_length )
          break;
        v56->m_Items[v52 + 1] = v53[v52];
        if ( v52 >= releaseSkillLvs->max_length )
          break;
        v57 = *releaseStateList;
        if ( !*releaseStateList )
          goto LABEL_84;
        if ( v52 >= v57->max_length )
          break;
        v57->m_Items[v52 + 4] = v54[v52] > 0;
        if ( v52 >= releaseSkillLvs->max_length )
          break;
        v58 = *lvList;
        if ( !*lvList )
          goto LABEL_84;
        if ( v52 >= v58->max_length )
          break;
        v58->m_Items[v52 + 1] = v54[v52];
        if ( v52 >= releaseSkillIds->max_length )
          break;
        if ( !v51 )
          goto LABEL_84;
        Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    v51,
                                                    v53[v52],
                                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Master_WarQuestSelectionMaster )
        {
          v65 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_84;
          if ( v52 >= v65->max_length )
            break;
          v66 = (SkillEntity_o *)Master_WarQuestSelectionMaster;
          v67 = *titleList;
          if ( v65->m_Items[v52 + 4] )
          {
            if ( v52 >= releaseSkillLvs->max_length )
              break;
            Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectTitle(
                                                        (SkillEntity_o *)Master_WarQuestSelectionMaster,
                                                        v54[v52],
                                                        0LL);
            if ( !v67 )
              goto LABEL_84;
            v74 = (System_Int32_array **)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              Master_WarQuestSelectionMaster = sub_B52A44(
                                                 Master_WarQuestSelectionMaster,
                                                 v67->obj.klass->_1.element_class);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_85;
            }
            if ( v52 >= v67->max_length )
              break;
            *(Il2CppClass **)((char *)&v67->obj.klass + v55) = (Il2CppClass *)v74;
            sub_B52920((BattleServantConfConponent_o *)((char *)v67 + v55), v74, v68, v69, v70, v71, v72, v73);
            if ( v52 >= releaseSkillLvs->max_length )
              break;
            v75 = *explanationList;
            Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectExplanation(v66, v54[v52], 0LL);
            if ( !v75 )
              goto LABEL_84;
            v82 = (System_Int32_array **)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              Master_WarQuestSelectionMaster = sub_B52A44(
                                                 Master_WarQuestSelectionMaster,
                                                 v75->obj.klass->_1.element_class);
              if ( !Master_WarQuestSelectionMaster )
              {
LABEL_85:
                v159 = sub_B52A7C();
                sub_B52A28(v159, 0LL);
              }
            }
            if ( v52 >= v75->max_length )
              break;
            v83 = (BattleServantConfConponent_o *)((char *)v75 + v55);
            v84 = v82;
            *(Il2CppClass **)((char *)&v75->obj.klass + v55) = (Il2CppClass *)v82;
          }
          else
          {
            Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectTitle(
                                                        (SkillEntity_o *)Master_WarQuestSelectionMaster,
                                                        1,
                                                        0LL);
            if ( !v67 )
              goto LABEL_84;
            v101 = (System_Int32_array **)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              Master_WarQuestSelectionMaster = sub_B52A44(
                                                 Master_WarQuestSelectionMaster,
                                                 v67->obj.klass->_1.element_class);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_85;
            }
            if ( v52 >= v67->max_length )
              break;
            *(Il2CppClass **)((char *)&v67->obj.klass + v55) = (Il2CppClass *)v101;
            sub_B52920((BattleServantConfConponent_o *)((char *)v67 + v55), v101, v95, v96, v97, v98, v99, v100);
            v102 = *explanationList;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3338/*"COND_TYPE_TITLE"*/,
                                                        0LL);
            if ( !v102 )
              goto LABEL_84;
            v109 = (System_Int32_array **)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              Master_WarQuestSelectionMaster = sub_B52A44(
                                                 Master_WarQuestSelectionMaster,
                                                 v102->obj.klass->_1.element_class);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_85;
            }
            if ( v52 >= v102->max_length )
              break;
            *(Il2CppClass **)((char *)&v102->obj.klass + v55) = (Il2CppClass *)v109;
            sub_B52920((BattleServantConfConponent_o *)((char *)v102 + v55), v109, v103, v104, v105, v106, v107, v108);
            v110 = *explanationList;
            if ( !*explanationList )
LABEL_84:
              sub_B52A5C(Master_WarQuestSelectionMaster, v49);
            if ( v52 >= v110->max_length )
              break;
            Master_WarQuestSelectionMaster = System_String__op_Inequality(
                                               *(System_String_o **)((char *)&v110->obj.klass + v55),
                                               (System_String_o *)StringLiteral_1/*""*/,
                                               0LL);
            if ( (Master_WarQuestSelectionMaster & 1) != 0 )
            {
              v111 = *explanationList;
              if ( !*explanationList )
                goto LABEL_84;
              if ( v52 >= v111->max_length )
                break;
              v112 = (BattleServantConfConponent_o *)((char *)v111 + v55);
              v113 = (System_Int32_array **)System_String__Concat_44568316(
                                              *(System_String_o **)((char *)&v111->obj.klass + v55),
                                              (System_String_o *)StringLiteral_26/*"\n"*/,
                                              0LL);
              v112->klass = (BattleServantConfConponent_c *)v113;
              sub_B52920(v112, v113, v114, v115, v116, v117, v118, v119);
            }
            v120 = *explanationList;
            if ( !*explanationList )
              goto LABEL_84;
            if ( v52 >= v120->max_length )
              break;
            v121 = *(System_String_o **)((char *)&v120->obj.klass + v55);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v122 = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
            v84 = (System_Int32_array **)System_String__Concat_44568316(v121, v122, 0LL);
            v83 = (BattleServantConfConponent_o *)((char *)v120 + v55);
            *(Il2CppClass **)((char *)&v120->obj.klass + v55) = (Il2CppClass *)v84;
          }
          sub_B52920(v83, v84, v76, v77, v78, v79, v80, v81);
          releaseStateList = v160;
        }
        else
        {
          v85 = *titleList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          if ( !byte_42ADEE6 )
          {
            sub_B52984(&LocalizationManager_TypeInfo);
            byte_42ADEE6 = 1;
          }
          Master_WarQuestSelectionMaster = (__int64)LocalizationManager_TypeInfo;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Master_WarQuestSelectionMaster = (__int64)LocalizationManager_TypeInfo;
          }
          if ( !v85 )
            goto LABEL_84;
          v86 = *(System_Int32_array ***)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 32LL);
          if ( v86 )
          {
            Master_WarQuestSelectionMaster = sub_B52A44(v86, v85->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_85;
          }
          if ( v52 >= v85->max_length )
            break;
          *(Il2CppClass **)((char *)&v85->obj.klass + v55) = (Il2CppClass *)v86;
          sub_B52920((BattleServantConfConponent_o *)((char *)v85 + v55), v86, v59, v60, v61, v62, v63, v64);
          v93 = *explanationList;
          if ( !*explanationList )
            goto LABEL_84;
          releaseStateList = v160;
          Master_WarQuestSelectionMaster = (__int64)StringLiteral_1/*""*/;
          if ( StringLiteral_1/*""*/ )
          {
            Master_WarQuestSelectionMaster = sub_B52A44(StringLiteral_1/*""*/, v93->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_85;
            v94 = (System_Int32_array **)StringLiteral_1/*""*/;
          }
          else
          {
            v94 = 0LL;
          }
          if ( v52 >= v93->max_length )
            break;
          *(Il2CppClass **)((char *)&v93->obj.klass + v55) = (Il2CppClass *)v94;
          sub_B52920((BattleServantConfConponent_o *)((char *)v93 + v55), v94, v87, v88, v89, v90, v91, v92);
        }
        LODWORD(v50) = releaseSkillIds->max_length;
        ++v52;
        v55 += 8LL;
        if ( (__int64)v52 >= (int)v50 )
          return;
      }
      v158 = sub_B52A88(Master_WarQuestSelectionMaster);
      sub_B52A28(v158, 0LL);
    }
  }
  else
  {
    v123 = (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
    *idList = v123;
    sub_B52920((BattleServantConfConponent_o *)idList, (System_Int32_array **)v123, v124, v125, v126, v127, v128, v129);
    v130 = (System_String_array *)sub_B5299C(string___TypeInfo, 0LL);
    *titleList = v130;
    sub_B52920(
      (BattleServantConfConponent_o *)titleList,
      (System_Int32_array **)v130,
      v131,
      v132,
      v133,
      v134,
      v135,
      v136);
    v137 = (System_String_array *)sub_B5299C(string___TypeInfo, 0LL);
    *explanationList = v137;
    sub_B52920(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v137,
      v138,
      v139,
      v140,
      v141,
      v142,
      v143);
    v144 = (System_Boolean_array *)sub_B5299C(bool___TypeInfo, 0LL);
    *releaseStateList = v144;
    sub_B52920(
      (BattleServantConfConponent_o *)releaseStateList,
      (System_Int32_array **)v144,
      v145,
      v146,
      v147,
      v148,
      v149,
      v150);
    v151 = (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
    *lvList = v151;
    sub_B52920((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v151, v152, v153, v154, v155, v156, v157);
  }
}


int32_t __fastcall BattleServantConfConponent__GetPersonality(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *individualities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x19
  System_Int32_array *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  __int64 v14; // x20
  __int64 v15; // x8
  unsigned __int64 v16; // x10
  int *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  int32_t v24; // w21
  __int64 v25; // x0
  __int64 v26; // x1
  double v27; // d0
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  IndividualityPersonalityMaster_o *Master_WarQuestSelectionMaster; // x20

  if ( (byte_42ADE00 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&System_Math_TypeInfo);
    byte_42ADE00 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualities )
    goto LABEL_50;
  klass = individualities->klass;
  if ( *(_WORD *)&individualities->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&individualities->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(individualities, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v7);
  }
  v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          individualities,
          *(_QWORD *)(p_method + 8));
  if ( !v14 )
    sub_B52A5C(0LL, v12);
  while ( 1 )
  {
    v15 = *(_QWORD *)v14;
    if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
    {
      v16 = 0LL;
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
          goto LABEL_15;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_15:
      v18 = sub_AEB880(v14, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
      break;
    v20 = *(_QWORD *)v14;
    if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
    {
      v21 = 0LL;
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v22 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
          goto LABEL_22;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_22:
      v23 = sub_AEB880(v14, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v19);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v14, *(_QWORD *)(v23 + 8));
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v27 = log10((double)v24);
    if ( v27 == INFINITY )
      v27 = -INFINITY;
    if ( (unsigned int)(v24 - 300) <= 0x63 && (int)v27 == 2 && (unsigned int)(v24 - 303) <= 5 && v24 != 307 )
    {
      if ( !v4 )
        sub_B52A5C(v25, v26);
      System_Collections_Generic_List_int___Add(
        v4,
        v24,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v28 = *(_QWORD *)v14;
  if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
  {
    v29 = 0LL;
    v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
        goto LABEL_39;
    }
    v31 = v28 + 16LL * *v30 + 312;
  }
  else
  {
LABEL_39:
    v31 = sub_AEB880(v14, System_IDisposable_TypeInfo, 0LL, v19);
  }
  v5 = (System_Int32_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v14, *(_QWORD *)(v31 + 8));
  if ( !v4 )
    goto LABEL_50;
  if ( v4->fields._size >= 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (IndividualityPersonalityMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    v5 = System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( Master_WarQuestSelectionMaster )
      return IndividualityPersonalityMaster__GetPersonalityValue(Master_WarQuestSelectionMaster, v5, 0LL);
LABEL_50:
    sub_B52A5C(v5, v6);
  }
  return -1;
}


int32_t __fastcall BattleServantConfConponent__GetPolicy(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *individualities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x19
  System_Int32_array *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  __int64 v14; // x20
  __int64 v15; // x8
  unsigned __int64 v16; // x10
  int *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  int32_t v24; // w21
  __int64 v25; // x0
  __int64 v26; // x1
  double v27; // d0
  unsigned int v28; // w8
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  IndividualityPolicyMaster_o *Master_WarQuestSelectionMaster; // x20

  if ( (byte_42ADDFF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&System_Math_TypeInfo);
    byte_42ADDFF = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualities )
    goto LABEL_50;
  klass = individualities->klass;
  if ( *(_WORD *)&individualities->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&individualities->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(individualities, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v7);
  }
  v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          individualities,
          *(_QWORD *)(p_method + 8));
  if ( !v14 )
    sub_B52A5C(0LL, v12);
  while ( 1 )
  {
    v15 = *(_QWORD *)v14;
    if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
    {
      v16 = 0LL;
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
          goto LABEL_15;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_15:
      v18 = sub_AEB880(v14, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
      break;
    v20 = *(_QWORD *)v14;
    if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
    {
      v21 = 0LL;
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v22 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
          goto LABEL_22;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_22:
      v23 = sub_AEB880(v14, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v19);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v14, *(_QWORD *)(v23 + 8));
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v27 = log10((double)v24);
    v28 = v24 - 300;
    if ( v27 == INFINITY )
      v27 = -INFINITY;
    if ( v28 <= 0x63 && (int)v27 == 2 && v28 <= 7 && ((1 << v28) & 0x87) != 0 )
    {
      if ( !v4 )
        sub_B52A5C(v25, v26);
      System_Collections_Generic_List_int___Add(
        v4,
        v24,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v29 = *(_QWORD *)v14;
  if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
  {
    v30 = 0LL;
    v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
        goto LABEL_39;
    }
    v32 = v29 + 16LL * *v31 + 312;
  }
  else
  {
LABEL_39:
    v32 = sub_AEB880(v14, System_IDisposable_TypeInfo, 0LL, v19);
  }
  v5 = (System_Int32_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v14, *(_QWORD *)(v32 + 8));
  if ( !v4 )
    goto LABEL_50;
  if ( v4->fields._size >= 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (IndividualityPolicyMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    v5 = System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( Master_WarQuestSelectionMaster )
      return IndividualityPolicyMaster__GetPolicyValue(Master_WarQuestSelectionMaster, v5, 0LL);
LABEL_50:
    sub_B52A5C(v5, v6);
  }
  return -1;
}


int32_t __fastcall BattleServantConfConponent__GetSpecialPassiveSkillStartIndex(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_List_int__o *skillIdList,
        const MethodInfo *method)
{
  BattleServantConfConponent___c__DisplayClass80_0_o *v5; // x20
  int32_t result; // w0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  struct BattleServantData_o *bsvtData; // x8
  ServantPassiveSkillMaster_o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x21
  BattleServantConfConponent___c_c *v14; // x8
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__80_0; // x22
  Il2CppObject *v17; // x23
  struct BattleServantConfConponent___c_StaticFields *v18; // x0
  System_Collections_Generic_IEnumerable_T__o *v19; // x22
  System_Collections_Generic_HashSet_int__o *v20; // x21
  System_Predicate_int__o *v21; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_42ADDF0 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Select_ServantPassiveSkillEntity__int___);
    sub_B52984(&Method_System_Func_ServantPassiveSkillEntity__int___ctor__);
    sub_B52984(&System_Func_ServantPassiveSkillEntity__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488960);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__FindIndex__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_System_Predicate_int___ctor__);
    sub_B52984(&System_Predicate_int__TypeInfo);
    sub_B52984(&Method_BattleServantConfConponent___c__GetSpecialPassiveSkillStartIndex_b__80_0__);
    sub_B52984(&Method_BattleServantConfConponent___c__DisplayClass80_0__GetSpecialPassiveSkillStartIndex_b__1__);
    sub_B52984(&BattleServantConfConponent___c__DisplayClass80_0_TypeInfo);
    sub_B52984(&BattleServantConfConponent___c_TypeInfo);
    byte_42ADDF0 = 1;
  }
  v5 = (BattleServantConfConponent___c__DisplayClass80_0_o *)sub_B52A54(BattleServantConfConponent___c__DisplayClass80_0_TypeInfo);
  BattleServantConfConponent___c__DisplayClass80_0___ctor(v5, 0LL);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillIdList, 0LL) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_26;
  v10 = (ServantPassiveSkillMaster_o *)Master_WarQuestSelectionMaster;
  v12 = *(_QWORD *)&bsvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&bsvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v12;
  *(_QWORD *)&v22.fields.fakeValue = v11;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                  v22,
                                                                  0LL);
  if ( !v10 )
    goto LABEL_26;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantPassiveSkillMaster__EnumerateSpecialSkillsBySvtId(
                                                               v10,
                                                               (int32_t)Master_WarQuestSelectionMaster,
                                                               0LL);
  v14 = BattleServantConfConponent___c_TypeInfo;
  if ( (BYTE3(BattleServantConfConponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
    v14 = BattleServantConfConponent___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__80_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__80_0;
  if ( !_9__80_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__80_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_ServantPassiveSkillEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__80_0,
      v17,
      Method_BattleServantConfConponent___c__GetSpecialPassiveSkillStartIndex_b__80_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_ServantPassiveSkillEntity__int___ctor__);
    v18 = BattleServantConfConponent___c_TypeInfo->static_fields;
    v18->__9__80_0 = (struct System_Func_ServantPassiveSkillEntity__int__o *)_9__80_0;
    sub_B52920(&v18->__9__80_0);
  }
  v19 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                         v13,
                                                         (System_Func_TSource__TResult__o *)_9__80_0,
                                                         (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_ServantPassiveSkillEntity__int___);
  v20 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_38639384(
    v20,
    v19,
    (const MethodInfo_24D9718 *)Method_System_Collections_Generic_HashSet_int___ctor___68488960);
  if ( !v5
    || (v5->fields.passiveIdHashSet = v20,
        sub_B52920(&v5->fields),
        v21 = (System_Predicate_int__o *)sub_B52A54(System_Predicate_int__TypeInfo),
        System_Predicate_int____ctor(
          v21,
          (Il2CppObject *)v5,
          Method_BattleServantConfConponent___c__DisplayClass80_0__GetSpecialPassiveSkillStartIndex_b__1__,
          (const MethodInfo_28D16F8 *)Method_System_Predicate_int___ctor__),
        !skillIdList) )
  {
LABEL_26:
    sub_B52A5C(Master_WarQuestSelectionMaster, v8);
  }
  result = System_Collections_Generic_List_int___FindIndex(
             skillIdList,
             (System_Predicate_T__o *)v21,
             (const MethodInfo_3057A24 *)Method_System_Collections_Generic_List_int__FindIndex__);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Transform_o *transform; // x20
  int v8; // s1
  int v9; // s0
  int v10; // s2
  UnityEngine_Object_o *commandCard; // x20
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UILabel_o *havenotTdLabel; // x20
  UnityEngine_Object_o *classBoardSkillObj; // x20

  if ( (byte_42ADDEB & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_2478/*"BATTLE_HASNOT_TD"*/);
    byte_42ADDEB = 1;
  }
  this->fields.data = data;
  sub_B52920(&this->fields.data);
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
  *(UnityEngine_Vector3_o *)(&v8 - 1) = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)gameObject,
                                          0LL);
  if ( !transform )
    goto LABEL_34;
  v9 = 0;
  v10 = 0;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v8 - 1), 0LL);
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
                                               (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                                        (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      sub_B52A5C(gameObject, v6);
    }
    BattleCommandComponent__SetDownloadEventSprite((BattleCommandComponent_o *)gameObject, 0LL);
  }
  havenotTdLabel = this->fields.havenotTdLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2478/*"BATTLE_HASNOT_TD"*/, 0LL);
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
        v6);
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
  if ( (byte_42ADDF8 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_2817/*"BattleServantDetailTab"*/);
    byte_42ADDF8 = 1;
  }
  return !UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_2817/*"BattleServantDetailTab"*/, 0LL)
      || !UnityEngine_PlayerPrefs__GetInt_35644340((System_String_o *)StringLiteral_2817/*"BattleServantDetailTab"*/, 0LL)
      || UnityEngine_PlayerPrefs__GetInt_35644340((System_String_o *)StringLiteral_2817/*"BattleServantDetailTab"*/, 0LL) != 1;
}


void __fastcall BattleServantConfConponent__OnClick(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *v2; // x19
  struct BattleCommandComponent_array *CommandCardList; // x8
  __int64 v4; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v6; // x23
  UnityEngine_Object_o *v7; // x20
  struct BattleCommandComponent_array *v8; // x8
  BattleServantConfConponent_CloseButtonCallBack_o *callback_close; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_42ADDF5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    this = (BattleServantConfConponent_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADDF5 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  CommandCardList = v2->fields.CommandCardList;
  if ( !CommandCardList )
    goto LABEL_16;
  v4 = 4LL;
  while ( 1 )
  {
    max_length = CommandCardList->max_length;
    v6 = v4 - 4;
    if ( v4 - 4 >= (int)max_length )
      break;
    if ( v6 >= max_length )
      goto LABEL_29;
    v7 = (UnityEngine_Object_o *)*((_QWORD *)&CommandCardList->obj.klass + v4);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleServantConfConponent_o *)UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v8 = v2->fields.CommandCardList;
      if ( !v8 )
        goto LABEL_16;
      if ( v6 >= v8->max_length )
      {
LABEL_29:
        v18 = sub_B52A88(this);
        sub_B52A28(v18, 0LL);
      }
      this = (BattleServantConfConponent_o *)*((_QWORD *)&v8->obj.klass + v4);
      if ( !this )
        goto LABEL_16;
      BattleCommandComponent__ClearCardEffect((BattleCommandComponent_o *)this, 0LL);
    }
    CommandCardList = v2->fields.CommandCardList;
    ++v4;
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
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B52A5C(0LL, v10);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v19.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
  this = (BattleServantConfConponent_o *)v2->fields.equipPossessionSkillInfoComponentList;
  if ( !this )
LABEL_16:
    sub_B52A5C(this, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Clear__);
  v2->fields.bsvtData = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v2->fields.bsvtData, 0LL, v12, v13, v14, v15, v16, v17);
}


void __fastcall BattleServantConfConponent__OnClickServantAbility(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v2; // x19
  UnityEngine_GameObject_o *BattleServantAbilityObj; // x0

  v2 = this;
  if ( (byte_42ADDF9 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_17095/*"btn_bg_on_1"*/);
    sub_B52984(&StringLiteral_17090/*"btn_bg_off_1"*/);
    sub_B52984(&StringLiteral_17210/*"btn_txt_servant_states_off"*/);
    sub_B52984(&StringLiteral_2817/*"BattleServantDetailTab"*/);
    this = (BattleServantConfConponent_o *)sub_B52984(&StringLiteral_17208/*"btn_txt_servant_property_on"*/);
    byte_42ADDF9 = 1;
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
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17095/*"btn_bg_on_1"*/, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17208/*"btn_txt_servant_property_on"*/, 0LL);
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
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17090/*"btn_bg_off_1"*/, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateName) == 0LL) )
  {
LABEL_21:
    sub_B52A5C(BattleServantAbilityObj, method);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17210/*"btn_txt_servant_states_off"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_2817/*"BattleServantDetailTab"*/, 0, 0LL);
}


void __fastcall BattleServantConfConponent__OnClickServantState(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v2; // x19
  UnityEngine_GameObject_o *BattleServantAbilityObj; // x0

  v2 = this;
  if ( (byte_42ADDFA & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_17095/*"btn_bg_on_1"*/);
    sub_B52984(&StringLiteral_17211/*"btn_txt_servant_states_on"*/);
    sub_B52984(&StringLiteral_17207/*"btn_txt_servant_property_off"*/);
    sub_B52984(&StringLiteral_17090/*"btn_bg_off_1"*/);
    this = (BattleServantConfConponent_o *)sub_B52984(&StringLiteral_2817/*"BattleServantDetailTab"*/);
    byte_42ADDFA = 1;
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
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17090/*"btn_bg_off_1"*/, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_22;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17207/*"btn_txt_servant_property_off"*/, 0LL);
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
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17095/*"btn_bg_on_1"*/, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateName) == 0LL) )
  {
LABEL_22:
    sub_B52A5C(BattleServantAbilityObj, method);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17211/*"btn_txt_servant_states_on"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_2817/*"BattleServantDetailTab"*/, 1, 0LL);
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
    sub_B52A5C(0LL, call);
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

  if ( (byte_42ADDF6 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADDF6 = 1;
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
      sub_B52A5C(buffListView, v5);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantConfConponent__SetAppendSkillList(
        BattleServantConfConponent_o *this,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *AppendSkillObj; // x21
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *AppendSkillTitle; // x0
  UnityEngine_Object_o *AppendSkillListParent; // x21
  UnityEngine_Object_o *AppendSkillInfoPrefab; // x21
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  struct BattleServantData_o *bsvtData; // x8
  __int128 v12; // q1
  int64_t v13; // x0
  struct BattleServantData_o *v14; // x8
  UnityEngine_GameObject_o *v15; // x20
  _BOOL8 IsNpc; // x0
  const MethodInfo *v17; // x3
  ServantAppendPassiveSkillMaster_o *Master_WarQuestSelectionMaster; // x21
  System_Int32_array *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x27
  int32_t v21; // w21
  System_Int32_array *v22; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x22
  unsigned __int64 v24; // x21
  int32_t v25; // w26
  float v26; // s8
  unsigned __int64 max_length; // x9
  int32_t v28; // w23
  System_String_o *v29; // x25
  System_String_o *v30; // x24
  _BOOL4 v31; // w20
  int32_t v32; // w24
  UnityEngine_GameObject_o *v33; // x26
  struct UnityEngine_GameObject_o *v34; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x22
  UnityEngine_Transform_o *v36; // x27
  UnityEngine_Transform_o *transform; // x27
  int v38; // s0
  UnityEngine_Transform_o *v41; // x27
  int v42; // s0
  srcLineSprite_o *Component_srcLineSprite; // x26
  int32_t v47; // w6
  const MethodInfo *v48; // x7
  struct TweenScale_o *mcTweenScaleP; // x8
  __int64 v50; // x0
  System_Int32_array *releaseSkillLvs; // [xsp+0h] [xbp-100h]
  DataMasterBase_WarMaster__WarEntity__int__o *v52; // [xsp+10h] [xbp-F0h]
  System_String_o *explanationMessage; // [xsp+18h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-C0h]
  WarEntity_o *entity; // [xsp+68h] [xbp-98h] BYREF
  System_Int32_array *lvList; // [xsp+70h] [xbp-90h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+78h] [xbp-88h] BYREF
  System_String_array *explanationList; // [xsp+80h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+88h] [xbp-78h] BYREF
  System_Int32_array *idList[2]; // [xsp+90h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ADDF1 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&StringLiteral_19832/*"img_txt_extraskill"*/);
    byte_42ADDF1 = 1;
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
      goto LABEL_104;
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
  if ( UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL) && !BattleServantConfConponent__SetAtlas(this, v6) )
    return;
  AppendSkillTitle = (UnityEngine_GameObject_o *)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_104;
  UISprite__set_atlas((UISprite_o *)AppendSkillTitle, this->fields.BattleAssetUIAtlas, 0LL);
  AppendSkillTitle = (UnityEngine_GameObject_o *)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_104;
  UISprite__set_spriteName((UISprite_o *)AppendSkillTitle, (System_String_o *)StringLiteral_19832/*"img_txt_extraskill"*/, 0LL);
  AppendSkillTitle = (UnityEngine_GameObject_o *)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_104;
  AppendSkillTitle = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, void *))AppendSkillTitle->klass[2]._1.typeMetadataHandle)(
                                                   AppendSkillTitle,
                                                   AppendSkillTitle->klass[2]._1.interopData);
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_104;
  v12 = *(_OWORD *)&bsvtData->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&bsvtData->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v55.fields.fakeValue = v12;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v54 = v55;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v54, 0LL);
  AppendSkillTitle = (UnityEngine_GameObject_o *)BattleInfoData__getUserServantFromID(battleInfoData, v13, 0LL);
  if ( !AppendSkillTitle )
    return;
  v14 = this->fields.bsvtData;
  if ( !v14 )
    goto LABEL_104;
  v15 = AppendSkillTitle;
  IsNpc = Follower__IsNpc(v14->fields.followerType, 0LL);
  if ( IsNpc )
  {
    BattleServantConfConponent__GetAppendSkillInfo(
      (BattleServantConfConponent_o *)IsNpc,
      idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      (System_Int32_array *)v15[20].monitor,
      *(System_Int32_array **)&v15[20].fields.m_CachedPtr,
      (const MethodInfo *)releaseSkillLvs);
  }
  else
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantAppendPassiveSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    AppendSkillTitle = (UnityEngine_GameObject_o *)UserServantEntity__getSvtId((UserServantEntity_o *)v15, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_104;
    ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_26786072(
      Master_WarQuestSelectionMaster,
      idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      (int32_t)AppendSkillTitle,
      (System_Int32_array *)v15[20].monitor,
      *(System_Int32_array **)&v15[20].fields.m_CachedPtr,
      0LL);
  }
  AppendSkillTitle = (UnityEngine_GameObject_o *)this->fields.bsvtData;
  if ( !AppendSkillTitle )
    goto LABEL_104;
  v19 = BattleServantData__FilterDisplayingSkillIdArray((BattleServantData_o *)AppendSkillTitle, idList[0], 1, v17);
  if ( !v19 )
    return;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
  if ( !*(_QWORD *)&v19->max_length )
    return;
  AppendSkillTitle = this->fields.AppendSkillObj;
  if ( !AppendSkillTitle )
    goto LABEL_104;
  UnityEngine_GameObject__SetActive(AppendSkillTitle, 1, 0LL);
  AppendSkillTitle = this->fields.AppendSkillListParent;
  if ( !AppendSkillTitle )
    goto LABEL_104;
  v21 = 0;
  while ( 1 )
  {
    AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(AppendSkillTitle, 0LL);
    if ( !AppendSkillTitle )
      goto LABEL_104;
    if ( v21 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AppendSkillTitle, 0LL) )
      break;
    AppendSkillTitle = this->fields.AppendSkillListParent;
    if ( AppendSkillTitle )
    {
      AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(AppendSkillTitle, 0LL);
      if ( AppendSkillTitle )
      {
        AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                         (UnityEngine_Transform_o *)AppendSkillTitle,
                                                         v21,
                                                         0LL);
        if ( AppendSkillTitle )
        {
          AppendSkillTitle = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)AppendSkillTitle, 0LL);
          if ( AppendSkillTitle )
          {
            UnityEngine_GameObject__SetActive(AppendSkillTitle, 0, 0LL);
            AppendSkillTitle = this->fields.AppendSkillListParent;
            ++v21;
            if ( AppendSkillTitle )
              continue;
          }
        }
      }
    }
    goto LABEL_104;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  AppendSkillTitle = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillMaster___);
  v22 = idList[0];
  entity = 0LL;
  if ( !idList[0] )
LABEL_104:
    sub_B52A5C(AppendSkillTitle, v6);
  v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)AppendSkillTitle;
  v24 = 0LL;
  v25 = 0;
  v26 = 0.0;
  v52 = (DataMasterBase_WarMaster__WarEntity__int__o *)AppendSkillTitle;
  while ( 1 )
  {
    max_length = v22->max_length;
    if ( (__int64)v24 >= (int)max_length )
      break;
    if ( v24 >= max_length )
      goto LABEL_107;
    AppendSkillTitle = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Contains_int_(
                                                     v20,
                                                     v22->m_Items[v24 + 1],
                                                     (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___);
    if ( ((unsigned __int8)AppendSkillTitle & 1) != 0 )
    {
      if ( !idList[0] )
        goto LABEL_104;
      if ( v24 >= idList[0]->max_length )
        goto LABEL_107;
      if ( !lvList )
        goto LABEL_104;
      if ( v24 >= lvList->max_length )
        goto LABEL_107;
      v28 = idList[0]->m_Items[v24 + 1];
      if ( v28 >= 1 )
      {
        if ( !v23 )
          goto LABEL_104;
        AppendSkillTitle = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                         v23,
                                                         &entity,
                                                         v28,
                                                         (const MethodInfo_23E2334 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)AppendSkillTitle & 1) == 0 )
          return;
        if ( !titleList )
          goto LABEL_104;
        if ( v24 >= titleList->max_length )
          goto LABEL_107;
        if ( !explanationList )
          goto LABEL_104;
        if ( v24 >= explanationList->max_length )
          goto LABEL_107;
        if ( !releaseStateList )
          goto LABEL_104;
        if ( v24 >= releaseStateList->max_length )
        {
LABEL_107:
          v50 = sub_B52A88(AppendSkillTitle);
          sub_B52A28(v50, 0LL);
        }
        AppendSkillTitle = this->fields.AppendSkillListParent;
        if ( !AppendSkillTitle )
          goto LABEL_104;
        v29 = titleList->m_Items[v24];
        v30 = explanationList->m_Items[v24];
        v31 = releaseStateList->m_Items[v24 + 4];
        AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(AppendSkillTitle, 0LL);
        if ( !AppendSkillTitle )
          goto LABEL_104;
        explanationMessage = v30;
        if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AppendSkillTitle, 0LL) <= v25 )
        {
          v32 = v25;
          v34 = this->fields.AppendSkillInfoPrefab;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v35 = v20;
          AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                           (UnityEngine_UI_Dropdown_DropdownItem_o *)v34,
                                                           (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !AppendSkillTitle )
            goto LABEL_104;
          v33 = AppendSkillTitle;
          UnityEngine_GameObject__SetActive(AppendSkillTitle, 1, 0LL);
          AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v33, 0LL);
          if ( !this->fields.AppendSkillListParent )
            goto LABEL_104;
          v36 = (UnityEngine_Transform_o *)AppendSkillTitle;
          AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                           this->fields.AppendSkillListParent,
                                                           0LL);
          if ( !v36 )
            goto LABEL_104;
          UnityEngine_Transform__set_parent(v36, (UnityEngine_Transform_o *)AppendSkillTitle, 0LL);
          AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v33, 0LL);
          if ( !AppendSkillTitle )
            goto LABEL_104;
          v63.fields.y = -v26;
          v63.fields.x = 0.0;
          v63.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AppendSkillTitle, v63, 0LL);
          transform = UnityEngine_GameObject__get_transform(v33, 0LL);
          *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_one(0LL);
          if ( !transform )
            goto LABEL_104;
          UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v38, 0LL);
          v41 = UnityEngine_GameObject__get_transform(v33, 0LL);
          *(UnityEngine_Quaternion_o *)&v42 = UnityEngine_Quaternion__get_identity(0LL);
          if ( !v41 )
            goto LABEL_104;
          UnityEngine_Transform__set_localRotation(v41, *(UnityEngine_Quaternion_o *)&v42, 0LL);
          v20 = v35;
          v23 = v52;
        }
        else
        {
          AppendSkillTitle = this->fields.AppendSkillListParent;
          if ( !AppendSkillTitle )
            goto LABEL_104;
          AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(AppendSkillTitle, 0LL);
          if ( !AppendSkillTitle )
            goto LABEL_104;
          v32 = v25;
          AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                           (UnityEngine_Transform_o *)AppendSkillTitle,
                                                           v25,
                                                           0LL);
          if ( !AppendSkillTitle )
            goto LABEL_104;
          AppendSkillTitle = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)AppendSkillTitle, 0LL);
          if ( !AppendSkillTitle )
            goto LABEL_104;
          v33 = AppendSkillTitle;
          UnityEngine_GameObject__SetActive(AppendSkillTitle, 1, 0LL);
          AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v33, 0LL);
          if ( !AppendSkillTitle )
            goto LABEL_104;
          v62.fields.y = -v26;
          v62.fields.x = 0.0;
          v62.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AppendSkillTitle, v62, 0LL);
        }
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v33,
                                    (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
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
            goto LABEL_104;
          BattleServantConfSkillComponent__SetItem(
            (BattleServantConfSkillComponent_o *)Component_srcLineSprite,
            v32 + 1,
            v28,
            v29,
            explanationMessage,
            v31,
            v47,
            v48);
        }
        else if ( !Component_srcLineSprite )
        {
          goto LABEL_104;
        }
        mcTweenScaleP = Component_srcLineSprite->fields.mcTweenScaleP;
        if ( !mcTweenScaleP )
          goto LABEL_104;
        v26 = v26
            + (float)((float)(HIDWORD(mcTweenScaleP->fields.mTable) - Component_srcLineSprite->fields.miLineW) + 110.0);
        v25 = v32 + 1;
      }
    }
    v22 = idList[0];
    ++v24;
    if ( !idList[0] )
      goto LABEL_104;
  }
  this->fields.AppendSkillOffset = -(float)(v26 + 1.0);
}


bool __fastcall BattleServantConfConponent__SetAtlas(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20

  if ( (byte_42ADDFB & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_2786/*"Battle/Common"*/);
    sub_B52984(&StringLiteral_2801/*"BattleAssetUIAtlas"*/);
    byte_42ADDFB = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2786/*"Battle/Common"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_14;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             AssetStorage,
                                                             (System_String_o *)StringLiteral_2801/*"BattleAssetUIAtlas"*/,
                                                             (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
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
      this->fields.BattleAssetUIAtlas = (struct UIAtlas_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
                                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      sub_B52920(&this->fields.BattleAssetUIAtlas);
      return 1;
    }
LABEL_14:
    sub_B52A5C(AssetStorage, v4);
  }
  return 0;
}


void __fastcall BattleServantConfConponent__SetAttribute(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *attributeObj; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_42ADDFE & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADDFE = 1;
  }
  attributeObj = (UnityEngine_Object_o *)this->fields.attributeObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(attributeObj, 0LL, 0LL) )
  {
    v5 = this->fields.attributeObj;
    if ( !v5 )
      sub_B52A5C(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0LL);
  }
}


void __fastcall BattleServantConfConponent__SetClassBoardSkillList(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *classBoardSkillObj; // x20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  BattleServantConfWindowPassiveSkillListComponent_o *v6; // x0
  struct BattleServantData_o *bsvtData; // x8
  UnityEngine_Object_o *BattleAssetUIAtlas; // x20
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_42ADDFD & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_20625/*"menu_txt_class_score"*/);
    byte_42ADDFD = 1;
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
      || BattleServantConfConponent__SetAtlas(this, v4) )
    {
      v6 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
      if ( v6 )
      {
        ((void (__fastcall *)(BattleServantConfWindowPassiveSkillListComponent_o *, struct UIAtlas_o *, __int64, Il2CppMethodPointer))v6->klass->vtable._5_SetSkillTitle.method)(
          v6,
          this->fields.BattleAssetUIAtlas,
          StringLiteral_20625/*"menu_txt_class_score"*/,
          v6->klass->vtable._6_SetSkillInfoObject.methodPtr);
        v6 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
        if ( v6 )
        {
          BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
            (BattleServantClassBoardSkillEffectListComponent_o *)v6,
            this->fields.bsvtData,
            v9);
          v6 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
          if ( v6 )
          {
            BattleServantConfWindowPassiveSkillListComponent__SetActive(v6, 1, v10);
            return;
          }
        }
      }
LABEL_21:
      sub_B52A5C(v6, v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantConfConponent__SetClassSkillList(
        BattleServantConfConponent_o *this,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *ClassSkillObj; // x21
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *bsvtData; // x0
  UnityEngine_Object_o *ClassSkillListParent; // x21
  UnityEngine_Object_o *ClassSkillInfoPrefab; // x21
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  struct BattleServantData_o *v11; // x8
  __int128 v12; // q1
  int64_t v13; // x0
  BattleUserServantData_o *UserServantFromID; // x0
  const MethodInfo *v15; // x3
  BattleUserServantData_o *v16; // x21
  System_Collections_Generic_IEnumerable_T__o *v17; // x22
  System_Collections_Generic_List_int__o *v18; // x20
  BattleServantData_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Collections_ICollection_o *v21; // x21
  const MethodInfo *v22; // x2
  int32_t v23; // w21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x28
  __int64 size; // x8
  SkillLvMaster_o *v26; // x25
  int32_t v27; // w22
  float v28; // s8
  __int64 v29; // x21
  int32_t v30; // w24
  System_String_o *v31; // x25
  System_String_o *v32; // x26
  UnityEngine_GameObject_o *v33; // x27
  struct UnityEngine_GameObject_o *v34; // x27
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x20
  UnityEngine_Transform_o *v36; // x28
  UnityEngine_Transform_o *transform; // x28
  int v38; // s0
  UnityEngine_Transform_o *v41; // x28
  int v42; // s0
  srcLineSprite_o *Component_srcLineSprite; // x27
  int32_t v47; // w6
  const MethodInfo *v48; // x7
  struct TweenScale_o *mcTweenScaleP; // x8
  __int64 v50; // x9
  System_Collections_Generic_List_int__o *v51; // [xsp+0h] [xbp-C0h]
  SkillLvMaster_o *v52; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+30h] [xbp-90h]
  SkillLvEntity_o *v55; // [xsp+50h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ADDEF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_int__InsertRange__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor___68512808);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&StringLiteral_19819/*"img_txt_classskill"*/);
    byte_42ADDEF = 1;
  }
  v55 = 0LL;
  entity = 0LL;
  ClassSkillObj = (UnityEngine_Object_o *)this->fields.ClassSkillObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ClassSkillObj, 0LL, 0LL) )
  {
    bsvtData = this->fields.ClassSkillObj;
    if ( !bsvtData )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive(bsvtData, 0, 0LL);
  }
  if ( battleInfoData )
  {
    ClassSkillListParent = (UnityEngine_Object_o *)this->fields.ClassSkillListParent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(ClassSkillListParent, 0LL, 0LL) && this->fields.bsvtData )
    {
      ClassSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.ClassSkillInfoPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(ClassSkillInfoPrefab, 0LL, 0LL) )
      {
        bsvtData = (UnityEngine_GameObject_o *)this->fields.bsvtData;
        if ( !bsvtData )
          goto LABEL_100;
        if ( !BattleServantData__IsHideClassSkillNpcFollower((BattleServantData_o *)bsvtData, v6) )
        {
          this->fields.ClassSkillOffset = 0.0;
          BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL)
            || BattleServantConfConponent__SetAtlas(this, v6) )
          {
            bsvtData = (UnityEngine_GameObject_o *)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_100;
            UISprite__set_atlas((UISprite_o *)bsvtData, this->fields.BattleAssetUIAtlas, 0LL);
            bsvtData = (UnityEngine_GameObject_o *)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_100;
            UISprite__set_spriteName((UISprite_o *)bsvtData, (System_String_o *)StringLiteral_19819/*"img_txt_classskill"*/, 0LL);
            bsvtData = (UnityEngine_GameObject_o *)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_100;
            bsvtData = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, void *))bsvtData->klass[2]._1.typeMetadataHandle)(
                                                     bsvtData,
                                                     bsvtData->klass[2]._1.interopData);
            v11 = this->fields.bsvtData;
            if ( !v11 )
              goto LABEL_100;
            v12 = *(_OWORD *)&v11->fields.userSvtId.fields.fakeValue;
            *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&v11->fields.userSvtId.fields.currentCryptoKey;
            *(_OWORD *)&v54.fields.fakeValue = v12;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v53 = v54;
            v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v53, 0LL);
            UserServantFromID = BattleInfoData__getUserServantFromID(battleInfoData, v13, 0LL);
            if ( !UserServantFromID )
              return;
            v16 = UserServantFromID;
            bsvtData = (UnityEngine_GameObject_o *)this->fields.bsvtData;
            if ( !bsvtData )
              goto LABEL_100;
            v17 = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__FilterDisplayingSkillIdArray(
                                                                   (BattleServantData_o *)bsvtData,
                                                                   v16->fields.classPassive,
                                                                   1,
                                                                   v15);
            v18 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor_50685004(
              v18,
              v17,
              (const MethodInfo_305644C *)Method_System_Collections_Generic_List_int___ctor___68512808);
            v19 = this->fields.bsvtData;
            bsvtData = (UnityEngine_GameObject_o *)BattleUserServantData__getAddPassiveSkill(v16, 0LL);
            if ( !v19 )
              goto LABEL_100;
            v21 = (System_Collections_ICollection_o *)BattleServantData__FilterDisplayingSkillIdArray(
                                                        v19,
                                                        (System_Int32_array *)bsvtData,
                                                        0,
                                                        v20);
            bsvtData = (UnityEngine_GameObject_o *)BasicHelper__IsNullOrEmpty(v21, 0LL);
            if ( ((unsigned __int8)bsvtData & 1) != 0 )
            {
              if ( !v18 )
                goto LABEL_100;
            }
            else
            {
              bsvtData = (UnityEngine_GameObject_o *)BattleServantConfConponent__GetSpecialPassiveSkillStartIndex(
                                                       this,
                                                       v18,
                                                       v22);
              if ( !v18 )
                goto LABEL_100;
              System_Collections_Generic_List_int___InsertRange(
                v18,
                (int32_t)bsvtData,
                (System_Collections_Generic_IEnumerable_T__o *)v21,
                (const MethodInfo_3058418 *)Method_System_Collections_Generic_List_int__InsertRange__);
            }
            if ( v18->fields._size >= 1 )
            {
              bsvtData = this->fields.ClassSkillObj;
              if ( bsvtData )
              {
                UnityEngine_GameObject__SetActive(bsvtData, 1, 0LL);
                bsvtData = this->fields.ClassSkillListParent;
                if ( bsvtData )
                {
                  v23 = 0;
                  while ( 1 )
                  {
                    bsvtData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(bsvtData, 0LL);
                    if ( !bsvtData )
                      goto LABEL_100;
                    if ( v23 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0LL) )
                      break;
                    bsvtData = this->fields.ClassSkillListParent;
                    if ( bsvtData )
                    {
                      bsvtData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(bsvtData, 0LL);
                      if ( bsvtData )
                      {
                        bsvtData = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                                 (UnityEngine_Transform_o *)bsvtData,
                                                                 v23,
                                                                 0LL);
                        if ( bsvtData )
                        {
                          bsvtData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bsvtData, 0LL);
                          if ( bsvtData )
                          {
                            UnityEngine_GameObject__SetActive(bsvtData, 0, 0LL);
                            bsvtData = this->fields.ClassSkillListParent;
                            ++v23;
                            if ( bsvtData )
                              continue;
                          }
                        }
                      }
                    }
                    goto LABEL_100;
                  }
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillMaster___);
                  entity = 0LL;
                  bsvtData = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillLvMaster___);
                  v55 = 0LL;
                  LODWORD(size) = v18->fields._size;
                  if ( (int)size >= 1 )
                  {
                    v26 = (SkillLvMaster_o *)bsvtData;
                    v27 = 0;
                    v28 = 0.0;
                    v29 = 8LL;
                    v51 = v18;
                    v52 = (SkillLvMaster_o *)bsvtData;
                    while ( 1 )
                    {
                      if ( v29 - 8 >= (unsigned __int64)(unsigned int)size )
                        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                      v30 = *((_DWORD *)&v18->fields._items->obj.klass + v29);
                      if ( v30 >= 1 )
                      {
                        if ( !Master_WarQuestSelectionMaster )
                          goto LABEL_100;
                        bsvtData = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                 Master_WarQuestSelectionMaster,
                                                                 &entity,
                                                                 v30,
                                                                 (const MethodInfo_23E2334 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                        if ( ((unsigned __int8)bsvtData & 1) == 0 )
                          return;
                        if ( !v26 )
                          goto LABEL_100;
                        if ( !SkillLvMaster__TryGetEntity(v26, &v55, v30, 1, 0LL) )
                          return;
                        bsvtData = (UnityEngine_GameObject_o *)entity;
                        if ( !entity )
                          goto LABEL_100;
                        bsvtData = (UnityEngine_GameObject_o *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                        if ( !v55 )
                          goto LABEL_100;
                        v31 = (System_String_o *)bsvtData;
                        bsvtData = (UnityEngine_GameObject_o *)SkillLvEntity__getDetail_26526320(v55, 1, 0, 0LL);
                        if ( !this->fields.ClassSkillListParent )
                          goto LABEL_100;
                        v32 = (System_String_o *)bsvtData;
                        bsvtData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                 this->fields.ClassSkillListParent,
                                                                 0LL);
                        if ( !bsvtData )
                          goto LABEL_100;
                        if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0LL) <= v27 )
                        {
                          v34 = this->fields.ClassSkillInfoPrefab;
                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          }
                          v35 = Master_WarQuestSelectionMaster;
                          bsvtData = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)v34,
                                                                   (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                          if ( !bsvtData )
                            goto LABEL_100;
                          v33 = bsvtData;
                          UnityEngine_GameObject__SetActive(bsvtData, 1, 0LL);
                          bsvtData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v33, 0LL);
                          if ( !this->fields.ClassSkillListParent )
                            goto LABEL_100;
                          v36 = (UnityEngine_Transform_o *)bsvtData;
                          bsvtData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                   this->fields.ClassSkillListParent,
                                                                   0LL);
                          if ( !v36 )
                            goto LABEL_100;
                          UnityEngine_Transform__set_parent(v36, (UnityEngine_Transform_o *)bsvtData, 0LL);
                          bsvtData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v33, 0LL);
                          if ( !bsvtData )
                            goto LABEL_100;
                          v58.fields.y = -v28;
                          v58.fields.x = 0.0;
                          v58.fields.z = 0.0;
                          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v58, 0LL);
                          transform = UnityEngine_GameObject__get_transform(v33, 0LL);
                          *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_one(0LL);
                          if ( !transform )
                            goto LABEL_100;
                          UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v38, 0LL);
                          v41 = UnityEngine_GameObject__get_transform(v33, 0LL);
                          *(UnityEngine_Quaternion_o *)&v42 = UnityEngine_Quaternion__get_identity(0LL);
                          if ( !v41 )
                            goto LABEL_100;
                          UnityEngine_Transform__set_localRotation(v41, *(UnityEngine_Quaternion_o *)&v42, 0LL);
                          Master_WarQuestSelectionMaster = v35;
                          v18 = v51;
                        }
                        else
                        {
                          bsvtData = this->fields.ClassSkillListParent;
                          if ( !bsvtData )
                            goto LABEL_100;
                          bsvtData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(bsvtData, 0LL);
                          if ( !bsvtData )
                            goto LABEL_100;
                          bsvtData = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                                   (UnityEngine_Transform_o *)bsvtData,
                                                                   v27,
                                                                   0LL);
                          if ( !bsvtData )
                            goto LABEL_100;
                          bsvtData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bsvtData, 0LL);
                          if ( !bsvtData )
                            goto LABEL_100;
                          v33 = bsvtData;
                          UnityEngine_GameObject__SetActive(bsvtData, 1, 0LL);
                          bsvtData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v33, 0LL);
                          if ( !bsvtData )
                            goto LABEL_100;
                          v57.fields.y = -v28;
                          v57.fields.x = 0.0;
                          v57.fields.z = 0.0;
                          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v57, 0LL);
                        }
                        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v33,
                                                    (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        bsvtData = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                 (UnityEngine_Object_o *)Component_srcLineSprite,
                                                                 0LL,
                                                                 0LL);
                        if ( ((unsigned __int8)bsvtData & 1) != 0 )
                        {
                          if ( !Component_srcLineSprite )
                            goto LABEL_100;
                          BattleServantConfSkillComponent__SetItem(
                            (BattleServantConfSkillComponent_o *)Component_srcLineSprite,
                            v29 - 7,
                            v30,
                            v31,
                            v32,
                            1,
                            v47,
                            v48);
                        }
                        else if ( !Component_srcLineSprite )
                        {
                          goto LABEL_100;
                        }
                        mcTweenScaleP = Component_srcLineSprite->fields.mcTweenScaleP;
                        if ( !mcTweenScaleP )
                          goto LABEL_100;
                        v26 = v52;
                        ++v27;
                        v28 = v28
                            + (float)((float)(HIDWORD(mcTweenScaleP->fields.mTable)
                                            - Component_srcLineSprite->fields.miLineW)
                                    + 110.0);
                      }
                      size = v18->fields._size;
                      v50 = v29 - 7;
                      ++v29;
                      if ( v50 >= size )
                        goto LABEL_98;
                    }
                  }
                  v28 = 0.0;
LABEL_98:
                  this->fields.ClassSkillOffset = -(float)(v28 + 1.0);
                  return;
                }
              }
LABEL_100:
              sub_B52A5C(bsvtData, v6);
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
  __int64 v14; // x0
  UIWidget_o *component; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42ADDF3 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_TryGetComponent_UIWidget___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADDF3 = 1;
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
      sub_B52A5C(CommandCodeIdsEX, v5);
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
        BattleCommandComponent__setData_19012032(v11, this->fields.bsvtData, v8, 0LL);
        CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Component__TryGetComponent_UIWidget_(
                                                   (UnityEngine_Component_o *)this,
                                                   &component,
                                                   (const MethodInfo_1A49784 *)Method_UnityEngine_Component_TryGetComponent_UIWidget___);
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
          || (BattleCommandComponent__SetCommandCodeView_19017608(v11, v9[v8], 0LL), v8 >= v7->max_length)
          || (BattleCommandComponent__SetLockInfo(v11, v9[v8] == -1, 0LL),
              BattleServantConfConponent__SetCommandCardTypeChangeBuff(this, v11, v12),
              BattleCommandComponent__HidePowerUpValueLabelActive(v11, this->fields.isCommandCardUnderIcon, 0LL),
              BattleCommandComponent__ResetCardBuffIconAlphaAnim(v11, 0LL),
              BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(v11, 0LL),
              v8 >= v7->max_length) )
        {
LABEL_26:
          v14 = sub_B52A88(CommandCodeIdsEX);
          sub_B52A28(v14, 0LL);
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
    sub_B52A5C(this, 0LL);
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
  UnityEngine_Object_o *CommandCodeListParent; // x20
  UnityEngine_Object_o *CommandCodeInfoPrefab; // x20
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *transform; // x0
  int32_t v7; // w20
  BattleServantConfConponent___c_c *v8; // x8
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x9
  System_Predicate_int__o *_9__84_0; // x21
  Il2CppObject *v11; // x22
  struct BattleServantConfConponent___c_StaticFields *v12; // x0
  int v13; // w21
  System_Int32_array *v14; // x20
  __int64 v15; // x8
  int32_t v16; // w22
  unsigned __int64 v17; // x27
  float v18; // s8
  int32_t v19; // w23
  System_Int32_array *v20; // x8
  unsigned __int64 v21; // x20
  unsigned __int64 max_length; // x9
  UnityEngine_GameObject_o *v23; // x24
  struct UnityEngine_GameObject_o *v24; // x24
  UnityEngine_Transform_o *v25; // x25
  UnityEngine_Transform_o *v26; // x25
  int v27; // s0
  UnityEngine_Transform_o *v30; // x25
  int v31; // s0
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UILabel_o *NoCommandCodeLabel; // x19
  __int64 v37; // x0
  System_Int32_array *array; // [xsp+0h] [xbp-80h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-78h]
  System_String_array *explanationList; // [xsp+10h] [xbp-70h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ADDF4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_FindIndex_int___);
    sub_B52984(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_System_Predicate_int___ctor__);
    sub_B52984(&System_Predicate_int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__84_0__);
    sub_B52984(&BattleServantConfConponent___c_TypeInfo);
    sub_B52984(&StringLiteral_2448/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/);
    byte_42ADDF4 = 1;
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
  v7 = 0;
  while ( 1 )
  {
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_91;
    if ( v7 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) )
      break;
    transform = this->fields.CommandCodeListParent;
    if ( transform )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( transform )
      {
        transform = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                  (UnityEngine_Transform_o *)transform,
                                                  v7,
                                                  0LL);
        if ( transform )
        {
          transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          if ( transform )
          {
            UnityEngine_GameObject__SetActive(transform, 0, 0LL);
            transform = this->fields.CommandCodeListParent;
            ++v7;
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
  array = BattleServantData__GetCommandCodeIds((BattleServantData_o *)transform, v5);
  v8 = BattleServantConfConponent___c_TypeInfo;
  if ( (BYTE3(BattleServantConfConponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
    v8 = BattleServantConfConponent___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__84_0 = static_fields->__9__84_0;
  if ( !_9__84_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__84_0 = (System_Predicate_int__o *)sub_B52A54(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__84_0,
      v11,
      Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__84_0__,
      (const MethodInfo_28D16F8 *)Method_System_Predicate_int___ctor__);
    v12 = BattleServantConfConponent___c_TypeInfo->static_fields;
    v12->__9__84_0 = _9__84_0;
    sub_B52920(&v12->__9__84_0);
  }
  transform = (UnityEngine_GameObject_o *)System_Array__FindIndex_int_(
                                            array,
                                            (System_Predicate_T__o *)_9__84_0,
                                            (const MethodInfo_201ADB0 *)Method_System_Array_FindIndex_int___);
  if ( !this->fields.NoCommandCodeLabel
    || (v13 = (int)transform,
        (transform = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.NoCommandCodeLabel,
                       0LL)) == 0LL) )
  {
LABEL_91:
    sub_B52A5C(transform, v5);
  }
  if ( v13 == -1 )
  {
    UnityEngine_GameObject__SetActive(transform, 1, 0LL);
    NoCommandCodeLabel = this->fields.NoCommandCodeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2448/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/, 0LL);
    if ( NoCommandCodeLabel )
    {
      UILabel__set_text(NoCommandCodeLabel, (System_String_o *)transform, 0LL);
      return;
    }
    goto LABEL_91;
  }
  UnityEngine_GameObject__SetActive(transform, 0, 0LL);
  transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_91;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)transform,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_91;
  transform = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)transform,
                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
  v14 = array;
  if ( !array )
    goto LABEL_91;
  v15 = *(_QWORD *)&array->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0;
    v17 = 0LL;
    v18 = 0.0;
    do
    {
      if ( v17 >= (unsigned int)v15 )
      {
LABEL_92:
        v37 = sub_B52A88(transform);
        sub_B52A28(v37, 0LL);
      }
      v19 = v14->m_Items[v17 + 1];
      if ( v19 >= 1 )
      {
        transform = (UnityEngine_GameObject_o *)MasterData_WarQuestSelectionMaster;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_91;
        transform = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  MasterData_WarQuestSelectionMaster,
                                                  v19,
                                                  (const MethodInfo_23E22D8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( transform )
        {
          CommandCodeEntity__GetSkillInfo((CommandCodeEntity_o *)transform, &idList, &titleList, &explanationList, 0LL);
          v20 = idList;
          if ( !idList )
            goto LABEL_91;
          v21 = 0LL;
          while ( 1 )
          {
            max_length = v20->max_length;
            if ( (__int64)v21 >= (int)max_length )
              break;
            if ( v21 >= max_length )
              goto LABEL_92;
            if ( v20->m_Items[v21 + 1] >= 1 )
            {
              transform = this->fields.CommandCodeListParent;
              if ( !transform )
                goto LABEL_91;
              transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
              if ( !transform )
                goto LABEL_91;
              if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) <= v16 )
              {
                v24 = this->fields.CommandCodeInfoPrefab;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v24,
                                                          (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                if ( !transform )
                  goto LABEL_91;
                v23 = transform;
                UnityEngine_GameObject__SetActive(transform, 1, 0LL);
                transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v23, 0LL);
                if ( !this->fields.CommandCodeListParent )
                  goto LABEL_91;
                v25 = (UnityEngine_Transform_o *)transform;
                transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                          this->fields.CommandCodeListParent,
                                                          0LL);
                if ( !v25 )
                  goto LABEL_91;
                UnityEngine_Transform__set_parent(v25, (UnityEngine_Transform_o *)transform, 0LL);
                transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v23, 0LL);
                if ( !transform )
                  goto LABEL_91;
                v43.fields.x = 0.0;
                v43.fields.z = 0.0;
                v43.fields.y = v18;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v43, 0LL);
                v26 = UnityEngine_GameObject__get_transform(v23, 0LL);
                *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL);
                if ( !v26 )
                  goto LABEL_91;
                UnityEngine_Transform__set_localScale(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
                v30 = UnityEngine_GameObject__get_transform(v23, 0LL);
                *(UnityEngine_Quaternion_o *)&v31 = UnityEngine_Quaternion__get_identity(0LL);
                if ( !v30 )
                  goto LABEL_91;
                UnityEngine_Transform__set_localRotation(v30, *(UnityEngine_Quaternion_o *)&v31, 0LL);
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
                                                          v16,
                                                          0LL);
                if ( !transform )
                  goto LABEL_91;
                transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
                if ( !transform )
                  goto LABEL_91;
                v23 = transform;
                UnityEngine_GameObject__SetActive(transform, 1, 0LL);
              }
              Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v23,
                                                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___);
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
                if ( v21 >= idList->max_length )
                  goto LABEL_92;
                if ( !titleList )
                  goto LABEL_91;
                if ( v21 >= titleList->max_length )
                  goto LABEL_92;
                if ( !explanationList )
                  goto LABEL_91;
                if ( v21 >= explanationList->max_length )
                  goto LABEL_92;
                if ( !Component_srcLineSprite )
                  goto LABEL_91;
                CommandCodeSkillInfo__Set(
                  (CommandCodeSkillInfo_o *)Component_srcLineSprite,
                  v19,
                  idList->m_Items[v21 + 1],
                  titleList->m_Items[v21],
                  explanationList->m_Items[v21],
                  v21 == 0,
                  0LL);
              }
              v20 = idList;
              ++v16;
              v18 = v18 + flt_32798C8[v21 == 0];
            }
            ++v21;
            if ( !v20 )
              goto LABEL_91;
          }
          v14 = array;
        }
      }
      LODWORD(v15) = v14->max_length;
      ++v17;
    }
    while ( (__int64)v17 < (int)v15 );
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

  if ( (byte_42ADDF7 & 1) == 0 )
  {
    sub_B52984(&BattleServantConfConponent__StartOpenTab_d__91_TypeInfo);
    byte_42ADDF7 = 1;
  }
  v3 = sub_B52A54(BattleServantConfConponent__StartOpenTab_d__91_TypeInfo);
  BattleServantConfConponent__StartOpenTab_d__91___ctor((BattleServantConfConponent__StartOpenTab_d__91_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_String_o *__fastcall BattleServantConfConponent__get_closeBtnPath(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x19
  bool v6; // w0
  __int64 *v7; // x8

  if ( (byte_42ADDFC & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_17600/*"close"*/);
    sub_B52984(&StringLiteral_14624/*"Top/close"*/);
    byte_42ADDFC = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B52A5C(0LL, v4);
  v5 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_14624/*"Top/close"*/, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  v7 = &StringLiteral_17600/*"close"*/;
  if ( v6 )
    v7 = &StringLiteral_14624/*"Top/close"*/;
  return (System_String_o *)*v7;
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
  sub_B52920(
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
  BattleServantData_o **p_bsvtData; // x21
  UnityEngine_Object_o *data; // x24
  unsigned __int64 bsvtData; // x0
  unsigned __int64 npcSvtClassId; // x1
  struct BattleData_o *v15; // x8
  UnityEngine_Object_o *shortNameLabel; // x25
  UILabel_o *v17; // x25
  UnityEngine_Object_o *atklabel; // x25
  struct BattleServantData_o *v19; // x8
  UILabel_o *v20; // x25
  Il2CppObject *v21; // x0
  struct BattleServantData_o *v22; // x8
  BattleViewBufflistComponent_o *buffListView; // x25
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  int32_t v30; // w23
  UnityEngine_Object_o *equipObj; // x24
  UnityEngine_GameObject_o *v32; // x24
  float LocalPositionY; // s0
  int32_t *p_adjustHeight; // x26
  UnityEngine_Object_o *npRoot; // x24
  TreasureDvcLvEntity_o *v36; // x23
  UIWidget_o *npdetail; // x24
  UILabel_o *v38; // x24
  System_String_o *DetalShort_29185304; // x0
  UILabel_o *maxNp; // x24
  Il2CppObject *v41; // x0
  struct UILabel_o *v42; // x8
  UILabel_o *nplevel; // x23
  System_String_o *v44; // x1
  UnityEngine_Object_o *v45; // x23
  bool IsNpDetailActive; // w23
  UITexture_o *facetex; // x23
  const MethodInfo *v48; // x2
  int32_t v49; // w24
  int32_t v50; // w25
  int32_t CommandDispLimitCount; // w26
  UnityEngine_Object_o *havenotTdLabel; // x22
  bool v53; // w1
  System_String_o **v54; // x8
  UnityEngine_Object_o *unknownNp; // x24
  UILabel_o *v56; // x24
  UnityEngine_Object_o *commandCard; // x23
  BattleCommandData_o *v58; // x23
  struct ServantTreasureDvcEntity_o *SvtTDvc; // x8
  const MethodInfo *v60; // x2
  UnityEngine_Object_o *npSpeedChange; // x22
  UnityEngine_Object_o *classIcon; // x21
  struct ServantEntity_o *svtdata; // x8
  int32_t IconSpriteScaledWidth; // w0
  UnityEngine_Object_o *v65; // x21
  int32_t v66; // w20
  UnityEngine_Object_o *Component_WebViewObject; // x20
  const MethodInfo *v68; // x1
  int v69; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t atk; // [xsp+8h] [xbp-58h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42ADDEC & 1) == 0 )
  {
    sub_B52984(&BattleCommandData_TypeInfo);
    sub_B52984(&BattleServantConfConponent_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIAnchor___);
    sub_B52984(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantAssetLoadManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_9443/*"NP_UNKNOWN"*/);
    sub_B52984(&StringLiteral_23682/*"{0:#,0}"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_9046/*"Max {0}%"*/);
    byte_42ADDEC = 1;
  }
  lv = 0;
  this->fields.bsvtData = inbsvtData;
  p_bsvtData = &this->fields.bsvtData;
  sub_B52920(&this->fields.bsvtData);
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
        v15 = this->fields.data;
        if ( !v15 )
          goto LABEL_171;
        battleInfoData = v15->fields.battle_info;
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
      v17 = this->fields.shortNameLabel;
      bsvtData = (unsigned __int64)BattleServantData__getServantShortName(
                                     (BattleServantData_o *)bsvtData,
                                     (const MethodInfo *)npcSvtClassId);
      if ( !v17 )
        goto LABEL_171;
      UILabel__set_text(v17, (System_String_o *)bsvtData, 0LL);
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
      v19 = this->fields.bsvtData;
      if ( !v19 )
        goto LABEL_171;
      v20 = this->fields.atklabel;
      atk = v19->fields.atk;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &atk);
      bsvtData = (unsigned __int64)System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v21, 0LL);
      if ( !v20 )
        goto LABEL_171;
      UILabel__set_text(v20, (System_String_o *)bsvtData, 0LL);
    }
    bsvtData = (unsigned __int64)this->fields.buffListView;
    if ( bsvtData )
    {
      BattleViewBufflistComponent__setClassIcon((BattleViewBufflistComponent_o *)bsvtData, this->fields.bsvtData, 0LL);
      v22 = this->fields.bsvtData;
      if ( v22 )
      {
        bsvtData = (unsigned __int64)v22->fields.buffData;
        if ( bsvtData )
        {
          buffListView = this->fields.buffListView;
          bsvtData = (unsigned __int64)BattleBuffData__getShowServantConf((BattleBuffData_o *)bsvtData, 0LL);
          if ( buffListView )
          {
            BattleViewBufflistComponent__setBuffList(buffListView, (BattleBuffData_ShowBuffData_array *)bsvtData, 0LL);
            BattleServantConfConponent__setEquipList(this, v24);
            BattleServantConfConponent__SetClassSkillList(this, battleInfoData, v25);
            BattleServantConfConponent__SetAppendSkillList(this, battleInfoData, v26);
            if ( !isNpc )
              BattleServantConfConponent__SetClassBoardSkillList(this, v27);
            BattleServantConfConponent__SetCommandCard(this, v27);
            BattleServantConfConponent__SetCommandCodeSkillList(this, v28);
            bsvtData = (unsigned __int64)this->fields.bsvtData;
            if ( bsvtData )
            {
              bsvtData = BattleServantData__getTreasureDvcId((BattleServantData_o *)bsvtData, 1, v29);
              if ( *p_bsvtData )
              {
                v30 = bsvtData;
                lv = (*p_bsvtData)->fields.treasuredvcLevel;
                equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(equipObj, 0LL, 0LL) )
                {
                  v32 = this->fields.equipObj;
                  LocalPositionY = GameObjectExtensions__GetLocalPositionY(v32, 0LL);
                  p_adjustHeight = &this->fields.adjustHeight;
                  GameObjectExtensions__SetLocalPositionY(v32, LocalPositionY - (float)this->fields.adjustHeight, 0LL);
                }
                else
                {
                  p_adjustHeight = &this->fields.adjustHeight;
                }
                this->fields.adjustHeight = 0;
                npRoot = (UnityEngine_Object_o *)this->fields.npRoot;
                if ( v30 < 1 )
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
                  v49 = bsvtData;
                  bsvtData = BattleServantData__getDispLimitCount(*p_bsvtData, 1, v48);
                  if ( !*p_bsvtData )
                    goto LABEL_171;
                  v50 = bsvtData;
                  CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(
                                            *p_bsvtData,
                                            (const MethodInfo *)npcSvtClassId);
                  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                  }
                  this->fields.facetex = ServantAssetLoadManager__loadCommandCard(
                                           facetex,
                                           v49,
                                           v50,
                                           CommandDispLimitCount,
                                           0LL);
                  sub_B52920(&this->fields.facetex);
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
                  v53 = 1;
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
                bsvtData = (unsigned __int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !bsvtData )
                  goto LABEL_171;
                bsvtData = (unsigned __int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)bsvtData,
                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                if ( !bsvtData )
                  goto LABEL_171;
                bsvtData = (unsigned __int64)TreasureDvcLvMaster__GetEntity(
                                               (TreasureDvcLvMaster_o *)bsvtData,
                                               v30,
                                               lv,
                                               0LL);
                if ( !this->fields.maxNp )
                  goto LABEL_171;
                v36 = (TreasureDvcLvEntity_o *)bsvtData;
                UILabel__set_text(this->fields.maxNp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                if ( v36 )
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
                  v38 = this->fields.npdetail;
                  DetalShort_29185304 = TreasureDvcLvEntity__getDetalShort_29185304(v36, lv, 0LL);
                  WrapControlText__textBBCodeAdjust(
                    v38,
                    DetalShort_29185304,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT,
                    0LL);
                  maxNp = this->fields.maxNp;
                  v69 = 100 * v36->fields.gaugeCount;
                  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
                  bsvtData = (unsigned __int64)System_String__Format((System_String_o *)StringLiteral_9046/*"Max {0}%"*/, v41, 0LL);
                  if ( !maxNp )
                    goto LABEL_171;
                  UILabel__set_text(maxNp, (System_String_o *)bsvtData, 0LL);
                  v42 = this->fields.npdetail;
                  if ( !v42 )
                    goto LABEL_171;
                  if ( BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT < v42->fields.mHeight )
                  {
                    if ( (BYTE3(BattleServantConfConponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
                      v42 = this->fields.npdetail;
                      if ( !v42 )
                        goto LABEL_171;
                    }
                    *p_adjustHeight = BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT
                                    - v42->fields.mHeight;
                  }
                }
                nplevel = this->fields.nplevel;
                bsvtData = (unsigned __int64)System_Int32__ToString((int32_t)&lv, 0LL);
                if ( !nplevel )
                  goto LABEL_171;
                if ( bsvtData )
                  v44 = (System_String_o *)bsvtData;
                else
                  v44 = (System_String_o *)StringLiteral_1/*""*/;
                UILabel__set_text(nplevel, v44, 0LL);
                v45 = (UnityEngine_Object_o *)this->fields.data;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
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
                                  v54 = (System_String_o **)(bsvtData + 408);
                                }
                                else
                                {
                                  if ( !bsvtData )
                                    goto LABEL_171;
                                  v54 = (System_String_o **)&StringLiteral_1/*""*/;
                                }
                                UILabel__set_text((UILabel_o *)bsvtData, *v54, 0LL);
                                unknownNp = (UnityEngine_Object_o *)this->fields.unknownNp;
                                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                }
                                bsvtData = UnityEngine_Object__op_Inequality(unknownNp, 0LL, 0LL);
                                if ( (bsvtData & 1) != 0 )
                                {
                                  v56 = this->fields.unknownNp;
                                  if ( IsNpDetailActive )
                                  {
                                    npcSvtClassId = (unsigned __int64)StringLiteral_1/*""*/;
                                    if ( !v56 )
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
                                                                   (System_String_o *)StringLiteral_9443/*"NP_UNKNOWN"*/,
                                                                   0LL);
                                    npcSvtClassId = bsvtData;
                                    if ( !v56 )
                                      goto LABEL_171;
                                  }
                                  UILabel__set_text(v56, (System_String_o *)npcSvtClassId, 0LL);
                                }
                                commandCard = (UnityEngine_Object_o *)this->fields.commandCard;
                                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                }
                                if ( UnityEngine_Object__op_Inequality(commandCard, 0LL, 0LL) )
                                {
                                  v58 = (BattleCommandData_o *)sub_B52A54(BattleCommandData_TypeInfo);
                                  BattleCommandData___ctor(v58, 0LL);
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  SvtTDvc = (*p_bsvtData)->fields._SvtTDvc;
                                  if ( !SvtTDvc )
                                    goto LABEL_171;
                                  if ( !v58 )
                                    goto LABEL_171;
                                  v58->fields._type = SvtTDvc->fields.cardId;
                                  bsvtData = (unsigned __int64)*p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v58->fields.svtlimit = BattleServantData__getCommandDispLimitCount(
                                                           (BattleServantData_o *)bsvtData,
                                                           (const MethodInfo *)npcSvtClassId);
                                  bsvtData = (unsigned __int64)*p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  bsvtData = BattleServantData__getDispLimitCount(
                                               (BattleServantData_o *)bsvtData,
                                               1,
                                               v60);
                                  v58->fields._loadsvtLimit = bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v58->fields.uniqueId = (*p_bsvtData)->fields.uniqueId;
                                  bsvtData = (unsigned __int64)*p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v58->fields.svtId = BattleServantData__getSvtId(
                                                        (BattleServantData_o *)bsvtData,
                                                        (const MethodInfo *)npcSvtClassId);
                                  bsvtData = (unsigned __int64)*p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  bsvtData = BattleServantData__GetImageSvtId(
                                               (BattleServantData_o *)bsvtData,
                                               (const MethodInfo *)npcSvtClassId);
                                  v58->fields.imageSvtId = bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v58->fields.treasureDvc = (*p_bsvtData)->fields.treasuredvcId;
                                  bsvtData = (unsigned __int64)this->fields.commandCard;
                                  if ( !bsvtData )
                                    goto LABEL_171;
                                  BattleCommandComponent__setData(
                                    (BattleCommandComponent_o *)bsvtData,
                                    v58,
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
                                v53 = 0;
LABEL_138:
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, v53, 0LL);
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
                                  BattleServantConfConponent__ChangeLayout(this, v68);
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
                                    v65 = (UnityEngine_Object_o *)this->fields.shortNameLabel;
                                    v66 = IconSpriteScaledWidth;
                                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                    }
                                    if ( UnityEngine_Object__op_Inequality(v65, 0LL, 0LL) )
                                    {
                                      bsvtData = (unsigned __int64)this->fields.shortNameLabel;
                                      if ( !bsvtData )
                                        goto LABEL_171;
                                      if ( *(_DWORD *)(bsvtData + 160) + v66 >= 270 )
                                        CommonFunction__ScalingLabelWidth((UILabel_o *)bsvtData, 270 - v66, 0LL);
                                    }
                                    bsvtData = (unsigned __int64)this->fields.classIcon;
                                    if ( bsvtData )
                                    {
                                      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                                          (UnityEngine_Component_o *)bsvtData,
                                                                                          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIAnchor___);
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
    sub_B52A5C(bsvtData, npcSvtClassId);
  }
}


void __fastcall BattleServantConfConponent__setEquipList(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseEquipSkillInfoPrefab; // x20
  UnityEngine_Object_o *equipSkillInfoRoot; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  __int64 BattleSkillIdList; // x0
  __int64 v7; // x1
  struct BattleServantData_o *bsvtData; // x8
  struct BattleUserServantData_array *equipList; // x24
  __int64 v10; // x8
  SkillLvMaster_o *v11; // x19
  unsigned __int64 v12; // x27
  Il2CppClass **v13; // x21
  __int64 *v14; // x21
  __int64 v15; // t1
  __int64 v16; // x22
  __int64 v17; // x23
  unsigned __int64 v18; // x21
  float v19; // s8
  int32_t v20; // w25
  int32_t v21; // w26
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x24
  SkillLvMaster_o *v23; // x20
  EquipPossessionSkillInfoComponent_o *v24; // x27
  BattleServantConfConponent_o *v25; // x19
  System_String_o *v26; // x28
  float v27; // s0
  __int64 v28; // x0
  struct BattleUserServantData_array *v29; // [xsp+0h] [xbp-90h]
  unsigned __int64 v30; // [xsp+8h] [xbp-88h]
  __int64 v31; // [xsp+18h] [xbp-78h]
  int32_t index; // [xsp+24h] [xbp-6Ch]
  SkillLvEntity_o *v33; // [xsp+28h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_42ADDED & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADDED = 1;
  }
  entity = 0LL;
  v33 = 0LL;
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
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillMaster___);
        BattleSkillIdList = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillLvMaster___);
        bsvtData = this->fields.bsvtData;
        this->fields.isEquip = 0;
        if ( !bsvtData )
          goto LABEL_48;
        equipList = bsvtData->fields.equipList;
        if ( !equipList )
          goto LABEL_48;
        v10 = *(_QWORD *)&equipList->max_length;
        if ( (int)v10 >= 1 )
        {
          v11 = (SkillLvMaster_o *)BattleSkillIdList;
          v12 = 0LL;
          v29 = equipList;
          do
          {
            if ( v12 >= (unsigned int)v10 )
            {
LABEL_49:
              v28 = sub_B52A88(BattleSkillIdList);
              sub_B52A28(v28, 0LL);
            }
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
                goto LABEL_49;
              v16 = BattleSkillIdList;
              BattleSkillIdList = *v14;
              if ( !*v14 )
                goto LABEL_48;
              BattleSkillIdList = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)BattleSkillIdList + 408LL))(
                                    BattleSkillIdList,
                                    *(_QWORD *)(*(_QWORD *)BattleSkillIdList + 416LL));
              if ( !v16 )
                goto LABEL_48;
              if ( *(int *)(v16 + 24) >= 1 )
              {
                v17 = BattleSkillIdList;
                v18 = 0LL;
                v31 = BattleSkillIdList + 32;
                v19 = 0.0;
                index = 0;
                v30 = v12;
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
                  if ( v18 >= *(unsigned int *)(v16 + 24) )
                    goto LABEL_49;
                  if ( !v17 )
                    goto LABEL_48;
                  if ( v18 >= *(unsigned int *)(v17 + 24) )
                    goto LABEL_49;
                  v20 = *(_DWORD *)(v16 + 32 + 4 * v18);
                  v21 = *(_DWORD *)(v31 + 4 * v18);
                  entity = 0LL;
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_48;
                  BattleSkillIdList = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        Master_WarQuestSelectionMaster,
                                        &entity,
                                        v20,
                                        (const MethodInfo_23E2334 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                  if ( (BattleSkillIdList & 1) != 0 )
                  {
                    v33 = 0LL;
                    if ( !v11 )
                      goto LABEL_48;
                    BattleSkillIdList = SkillLvMaster__TryGetEntity(v11, &v33, v20, v21, 0LL);
                    if ( (BattleSkillIdList & 1) != 0 )
                    {
                      v22 = Master_WarQuestSelectionMaster;
                      v23 = v11;
                      BattleSkillIdList = (__int64)EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
                                                     this->fields.baseEquipSkillInfoPrefab,
                                                     this->fields.equipSkillInfoRoot,
                                                     index,
                                                     v19,
                                                     0LL);
                      if ( !this->fields.equipPossessionSkillInfoComponentList )
                        goto LABEL_48;
                      v24 = (EquipPossessionSkillInfoComponent_o *)BattleSkillIdList;
                      v25 = this;
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.equipPossessionSkillInfoComponentList,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)BattleSkillIdList,
                        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__);
                      BattleSkillIdList = (__int64)entity;
                      if ( !entity )
                        goto LABEL_48;
                      BattleSkillIdList = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                      if ( !v33 )
                        goto LABEL_48;
                      v26 = (System_String_o *)BattleSkillIdList;
                      BattleSkillIdList = (__int64)SkillLvEntity__getDetail_26526320(v33, v21, 0, 0LL);
                      if ( !v24 )
                        goto LABEL_48;
                      v27 = EquipPossessionSkillInfoComponent__SetSkill(
                              v24,
                              v20,
                              v26,
                              (System_String_o *)BattleSkillIdList,
                              0LL);
                      v25->fields.isEquip = 1;
                      this = v25;
                      v11 = v23;
                      Master_WarQuestSelectionMaster = v22;
                      equipList = v29;
                      v12 = v30;
                      v19 = v19 + v27;
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
          if ( this->fields.equipPossessionSkillInfoComponentList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.equipPossessionSkillInfoComponentList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)BattleSkillIdList,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__);
            return;
          }
LABEL_48:
          sub_B52A5C(BattleSkillIdList, v7);
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
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall BattleServantConfConponent_CloseButtonCallBack__BeginInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B52928(this, &v5, callback, object);
}


void __fastcall BattleServantConfConponent_CloseButtonCallBack__EndInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B529B4(v21) & 1) == 0 )
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
      v23 = sub_B529AC(v21);
      v24 = sub_B52DB0(v21);
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
            v17 = sub_AEB880(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B52A34(v16, v21);
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
            v15 = sub_AEB880(v20, class_0, v9, v11);
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
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_42AD862 & 1) == 0 )
  {
    this = (BattleServantConfConponent__StartOpenTab_d__91_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD862 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
LABEL_18:
      sub_B52A5C(this, method);
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
  this = (BattleServantConfConponent__StartOpenTab_d__91_o *)_4__this->fields.BattleServantAbilityObj;
  v6 = 1;
  _4__this->fields.isOpenAfter = 1;
  if ( !this )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v2->fields.__2__current = 0LL;
  p__2__current = &v2->fields.__2__current;
  sub_B52920(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_BattleServantConfConponent__StartOpenTab_d__91_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0

  if ( (byte_42AD860 & 1) == 0 )
  {
    sub_B52984(&BattleServantConfConponent___c_TypeInfo);
    byte_42AD860 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleServantConfConponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleServantConfConponent___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
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

  if ( (byte_42AD861 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_42AD861 = 1;
  }
  passiveIdHashSet = this->fields.passiveIdHashSet;
  if ( !passiveIdHashSet )
    sub_B52A5C(0LL, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           passiveIdHashSet,
           x,
           (const MethodInfo_24D9CCC *)Method_System_Collections_Generic_HashSet_int__Contains__);
}