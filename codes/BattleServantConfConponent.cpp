void __fastcall BattleServantConfConponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleServantConfConponent_c *v2; // x8

  if ( (byte_40F8A1C & 1) == 0 )
  {
    sub_B16FFC(&BattleServantConfConponent_TypeInfo, v1);
    byte_40F8A1C = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F8A1B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo, v6);
    byte_40F8A1B = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__);
  this->fields.equipPossessionSkillInfoComponentList = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipPossessionSkillInfoComponentList,
    (System_Int32_array **)v7,
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
  struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *equipPossessionSkillInfoComponentList; // x0
  float v18; // s8
  Il2CppObject *current; // x22
  _DWORD *monitor; // x8
  BattleServantConfConponent_c *v21; // x0
  int32_t v22; // w24
  _DWORD *v23; // x8
  BattleServantConfConponent_c *v24; // x0
  UnityEngine_Object_o *CardAndCommandObj; // x20
  const MethodInfo *v26; // x1
  BattleServantData_o *bsvtData; // x0
  unsigned __int64 CommandCodeIds; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Int32_array *v33; // x20
  BattleServantConfConponent___c_c *v34; // x0
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x8
  System_Predicate_int__o *_9__74_0; // x21
  Il2CppObject *v37; // x22
  struct BattleServantConfConponent___c_StaticFields *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  unsigned __int64 v41; // x9
  unsigned __int64 v42; // x8
  int v43; // w12
  UnityEngine_Object_o *npSpeedChange; // x20
  struct BattleServantNPSpeedChangeComponent_o *v45; // x8
  BattleServantNPSpeedChangeComponent_o *v46; // x0
  struct BattleServantNPSpeedChangeComponent_o *v47; // x8
  UnityEngine_Object_o *ClassSkillObj; // x20
  UnityEngine_Object_o *AppendSkillObj; // x20
  UnityEngine_Object_o *classBoardSkillObj; // x20
  struct BattleServantClassBoardSkillEffectListComponent_o *v51; // x0
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F8A0C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_FindIndex_int___, method);
    sub_B16FFC(&BattleServantConfConponent_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_System_Predicate_int___ctor__, v10);
    sub_B16FFC(&System_Predicate_int__TypeInfo, v11);
    sub_B16FFC(&Method_BattleServantConfConponent___c__ChangeLayout_b__74_0__, v12);
    sub_B16FFC(&BattleServantConfConponent___c_TypeInfo, v13);
    byte_40F8A0C = 1;
  }
  memset(&v53, 0, sizeof(v53));
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
    equipPossessionSkillInfoComponentList = this->fields.equipPossessionSkillInfoComponentList;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_86;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v52,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipPossessionSkillInfoComponentList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    v53 = v52;
    v18 = 0.0;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v53,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__) )
    {
      current = v53.fields.current;
      if ( !v53.fields.current )
        sub_B170D4();
      monitor = v53.fields.current[2].monitor;
      if ( !monitor )
        sub_B170D4();
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
          sub_B170D4();
        v21 = BattleServantConfConponent_TypeInfo;
        v18 = v18
            + (float)(BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT - v23[41]);
      }
      if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = BattleServantConfConponent_TypeInfo;
      }
      v18 = v18 - (float)v21->static_fields->EQIUP_SKILL_OBJ_HEIGHT;
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v53,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    v24 = BattleServantConfConponent_TypeInfo;
    if ( (BYTE3(BattleServantConfConponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
      v24 = BattleServantConfConponent_TypeInfo;
    }
    *(float *)&v2 = v18 + (float)v24->static_fields->EQIUP_SKILL_OBJ_HEIGHT;
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
    bsvtData = this->fields.bsvtData;
    if ( !bsvtData )
      goto LABEL_86;
    CommandCodeIds = (unsigned __int64)BattleServantData__GetCommandCodeIds(bsvtData, v26);
    if ( CommandCodeIds )
    {
      v33 = (System_Int32_array *)CommandCodeIds;
      v34 = BattleServantConfConponent___c_TypeInfo;
      if ( (BYTE3(BattleServantConfConponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
        v34 = BattleServantConfConponent___c_TypeInfo;
      }
      static_fields = v34->static_fields;
      _9__74_0 = static_fields->__9__74_0;
      if ( !_9__74_0 )
      {
        if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v34);
          static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
        }
        v37 = (Il2CppObject *)static_fields->__9;
        _9__74_0 = (System_Predicate_int__o *)sub_B170CC(System_Predicate_int__TypeInfo, v29, v30, v31, v32);
        System_Predicate_int____ctor(
          _9__74_0,
          v37,
          Method_BattleServantConfConponent___c__ChangeLayout_b__74_0__,
          (const MethodInfo_2B09B40 *)Method_System_Predicate_int___ctor__);
        v38 = BattleServantConfConponent___c_TypeInfo->static_fields;
        v38->__9__74_0 = _9__74_0;
        sub_B16F98(&v38->__9__74_0, _9__74_0);
      }
      if ( System_Array__FindIndex_int_(
             v33,
             (System_Predicate_T__o *)_9__74_0,
             (const MethodInfo_2044748 *)Method_System_Array_FindIndex_int___) == -1
        || (int)*(_QWORD *)&v33->max_length < 1 )
      {
        LODWORD(CommandCodeIds) = 0;
      }
      else
      {
        v41 = (unsigned int)*(_QWORD *)&v33->max_length;
        v42 = 0LL;
        CommandCodeIds = 0LL;
        do
        {
          if ( v42 >= v41 )
          {
            sub_B17100(CommandCodeIds, v39, v40);
            sub_B170A0();
          }
          v43 = v33->m_Items[++v42];
          if ( v43 <= 0 )
            CommandCodeIds = (unsigned int)CommandCodeIds;
          else
            CommandCodeIds = (unsigned int)(CommandCodeIds + 1);
        }
        while ( (__int64)v42 < (int)v41 );
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
  if ( UnityEngine_Object__op_Inequality(npSpeedChange, 0LL, 0LL) )
  {
    v45 = this->fields.npSpeedChange;
    if ( !v45 )
      goto LABEL_86;
    v45->fields.equipeOffsetZ = *(float *)&v2 + (float)this->fields.adjustHeight;
    v46 = this->fields.npSpeedChange;
    if ( !v46 )
      goto LABEL_86;
    BattleServantNPSpeedChangeComponent__SetButtonPosition(v46, 0LL);
    v47 = this->fields.npSpeedChange;
    if ( !v47 )
      goto LABEL_86;
    *(float *)&v2 = *(float *)&v2 - (float)v47->fields.contentsHeight;
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
    v51 = this->fields.classBoardSkillObj;
    if ( !v51
      || (((void (__fastcall *)(struct BattleServantClassBoardSkillEffectListComponent_o *, Il2CppMethodPointer, long double, float))v51->klass->vtable._4_InitPositionY.method)(
            v51,
            v51->klass->vtable._5_SetSkillTitle.methodPtr,
            v2,
            (float)this->fields.adjustHeight),
          !this->fields.classBoardSkillObj) )
    {
LABEL_86:
      sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  BattleViewBufflistComponent__setShow(buffListView, 0LL);
  started = BattleServantConfConponent__StartOpenTab(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
  __int64 v30; // x2
  System_String_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x2
  System_String_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x2
  System_Boolean_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x2
  System_Int32_array *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 Master_WarQuestSelectionMaster; // x0
  System_Int32_array **v63; // x1
  System_String_array **v64; // x2
  __int64 v65; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v66; // x26
  unsigned __int64 v67; // x19
  int32_t *v68; // x22
  int32_t *v69; // x23
  __int64 v70; // x20
  System_Int32_array *v71; // x8
  System_Boolean_array *v72; // x8
  System_Int32_array *v73; // x8
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Boolean_array *v79; // x8
  SkillEntity_o *v80; // x28
  System_String_array *v81; // x21
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x27
  System_String_array *v88; // x21
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x27
  BattleServantConfConponent_o *v95; // x0
  System_Int32_array **v96; // x1
  System_String_array *v97; // x21
  System_Int32_array **v98; // x27
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_String_array *v104; // x21
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x27
  System_String_array *v111; // x21
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x27
  System_String_array *v118; // x8
  System_String_array *v119; // x8
  BattleServantConfConponent_o *v120; // x27
  System_Int32_array **v121; // x0
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_String_array *v128; // x21
  System_String_o *v129; // x27
  System_String_o *v130; // x0
  System_Int32_array *v131; // x0
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  __int64 v138; // x2
  System_String_array *v139; // x0
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  __int64 v146; // x2
  System_String_array *v147; // x0
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  __int64 v154; // x2
  System_Boolean_array *v155; // x0
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  __int64 v162; // x2
  System_Int32_array *v163; // x0
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  System_Boolean_array **v170; // [xsp+8h] [xbp-78h]

  if ( (byte_40F8A0F & 1) == 0 )
  {
    sub_B16FFC(&bool___TypeInfo, idList);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_B16FFC(&int___TypeInfo, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&string___TypeInfo, v17);
    sub_B16FFC(&StringLiteral_26, v18);
    sub_B16FFC(&StringLiteral_3296, v19);
    sub_B16FFC(&StringLiteral_3284, v20);
    sub_B16FFC(&StringLiteral_1, v21);
    byte_40F8A0F = 1;
  }
  if ( releaseSkillIds
    && releaseSkillLvs
    && (max_length = releaseSkillIds->max_length, (_DWORD)max_length == releaseSkillLvs->max_length) )
  {
    v23 = (System_Int32_array *)sub_B17014(int___TypeInfo, max_length, titleList);
    *idList = v23;
    sub_B16F98((BattleServantConfConponent_o *)idList, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
    v31 = (System_String_array *)sub_B17014(string___TypeInfo, releaseSkillIds->max_length, v30);
    *titleList = v31;
    sub_B16F98((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
    v39 = (System_String_array *)sub_B17014(string___TypeInfo, releaseSkillIds->max_length, v38);
    *explanationList = v39;
    sub_B16F98(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    v47 = (System_Boolean_array *)sub_B17014(bool___TypeInfo, releaseSkillIds->max_length, v46);
    *releaseStateList = v47;
    sub_B16F98(
      (BattleServantConfConponent_o *)releaseStateList,
      (System_Int32_array **)v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    v55 = (System_Int32_array *)sub_B17014(int___TypeInfo, releaseSkillIds->max_length, v54);
    *lvList = v55;
    sub_B16F98((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
    v65 = *(_QWORD *)&releaseSkillIds->max_length;
    if ( (int)v65 >= 1 )
    {
      v66 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      v67 = 0LL;
      v68 = &releaseSkillIds->m_Items[1];
      v69 = &releaseSkillLvs->m_Items[1];
      v70 = 32LL;
      v170 = releaseStateList;
      while ( v67 < (unsigned int)v65 )
      {
        v71 = *idList;
        if ( !*idList )
          goto LABEL_84;
        if ( v67 >= v71->max_length )
          break;
        v71->m_Items[v67 + 1] = v68[v67];
        if ( v67 >= releaseSkillLvs->max_length )
          break;
        v72 = *releaseStateList;
        if ( !*releaseStateList )
          goto LABEL_84;
        if ( v67 >= v72->max_length )
          break;
        v72->m_Items[v67 + 4] = v69[v67] > 0;
        if ( v67 >= releaseSkillLvs->max_length )
          break;
        v73 = *lvList;
        if ( !*lvList )
          goto LABEL_84;
        if ( v67 >= v73->max_length )
          break;
        v73->m_Items[v67 + 1] = v69[v67];
        if ( v67 >= releaseSkillIds->max_length )
          break;
        if ( !v66 )
          goto LABEL_84;
        Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    v66,
                                                    v68[v67],
                                                    (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Master_WarQuestSelectionMaster )
        {
          v79 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_84;
          if ( v67 >= v79->max_length )
            break;
          v80 = (SkillEntity_o *)Master_WarQuestSelectionMaster;
          v81 = *titleList;
          if ( v79->m_Items[v67 + 4] )
          {
            if ( v67 >= releaseSkillLvs->max_length )
              break;
            Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectTitle(
                                                        (SkillEntity_o *)Master_WarQuestSelectionMaster,
                                                        v69[v67],
                                                        0LL);
            if ( !v81 )
              goto LABEL_84;
            v87 = (System_Int32_array **)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              Master_WarQuestSelectionMaster = sub_B170BC(
                                                 Master_WarQuestSelectionMaster,
                                                 v81->obj.klass->_1.element_class);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_85;
            }
            if ( v67 >= v81->max_length )
              break;
            *(Il2CppClass **)((char *)&v81->obj.klass + v70) = (Il2CppClass *)v87;
            sub_B16F98((BattleServantConfConponent_o *)((char *)v81 + v70), v87, v64, v82, v83, v84, v85, v86);
            if ( v67 >= releaseSkillLvs->max_length )
              break;
            v88 = *explanationList;
            Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectExplanation(v80, v69[v67], 0LL);
            if ( !v88 )
              goto LABEL_84;
            v94 = (System_Int32_array **)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              Master_WarQuestSelectionMaster = sub_B170BC(
                                                 Master_WarQuestSelectionMaster,
                                                 v88->obj.klass->_1.element_class);
              if ( !Master_WarQuestSelectionMaster )
              {
LABEL_85:
                sub_B170F4();
                sub_B170A0();
              }
            }
            if ( v67 >= v88->max_length )
              break;
            v95 = (BattleServantConfConponent_o *)((char *)v88 + v70);
            v96 = v94;
            *(Il2CppClass **)((char *)&v88->obj.klass + v70) = (Il2CppClass *)v94;
          }
          else
          {
            Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectTitle(
                                                        (SkillEntity_o *)Master_WarQuestSelectionMaster,
                                                        1,
                                                        0LL);
            if ( !v81 )
              goto LABEL_84;
            v110 = (System_Int32_array **)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              Master_WarQuestSelectionMaster = sub_B170BC(
                                                 Master_WarQuestSelectionMaster,
                                                 v81->obj.klass->_1.element_class);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_85;
            }
            if ( v67 >= v81->max_length )
              break;
            *(Il2CppClass **)((char *)&v81->obj.klass + v70) = (Il2CppClass *)v110;
            sub_B16F98((BattleServantConfConponent_o *)((char *)v81 + v70), v110, v64, v105, v106, v107, v108, v109);
            v111 = *explanationList;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3296,
                                                        0LL);
            if ( !v111 )
              goto LABEL_84;
            v117 = (System_Int32_array **)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              Master_WarQuestSelectionMaster = sub_B170BC(
                                                 Master_WarQuestSelectionMaster,
                                                 v111->obj.klass->_1.element_class);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_85;
            }
            if ( v67 >= v111->max_length )
              break;
            *(Il2CppClass **)((char *)&v111->obj.klass + v70) = (Il2CppClass *)v117;
            sub_B16F98((BattleServantConfConponent_o *)((char *)v111 + v70), v117, v64, v112, v113, v114, v115, v116);
            v118 = *explanationList;
            if ( !*explanationList )
LABEL_84:
              sub_B170D4();
            if ( v67 >= v118->max_length )
              break;
            Master_WarQuestSelectionMaster = System_String__op_Inequality(
                                               *(System_String_o **)((char *)&v118->obj.klass + v70),
                                               (System_String_o *)StringLiteral_1,
                                               0LL);
            if ( (Master_WarQuestSelectionMaster & 1) != 0 )
            {
              v119 = *explanationList;
              if ( !*explanationList )
                goto LABEL_84;
              if ( v67 >= v119->max_length )
                break;
              v120 = (BattleServantConfConponent_o *)((char *)v119 + v70);
              v121 = (System_Int32_array **)System_String__Concat_43743732(
                                              *(System_String_o **)((char *)&v119->obj.klass + v70),
                                              (System_String_o *)StringLiteral_26,
                                              0LL);
              v120->klass = (BattleServantConfConponent_c *)v121;
              sub_B16F98(v120, v121, v122, v123, v124, v125, v126, v127);
            }
            v128 = *explanationList;
            if ( !*explanationList )
              goto LABEL_84;
            if ( v67 >= v128->max_length )
              break;
            v129 = *(System_String_o **)((char *)&v128->obj.klass + v70);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v130 = LocalizationManager__Get((System_String_o *)StringLiteral_3284, 0LL);
            v96 = (System_Int32_array **)System_String__Concat_43743732(v129, v130, 0LL);
            v95 = (BattleServantConfConponent_o *)((char *)v128 + v70);
            *(Il2CppClass **)((char *)&v128->obj.klass + v70) = (Il2CppClass *)v96;
          }
          sub_B16F98(v95, v96, v64, v89, v90, v91, v92, v93);
          releaseStateList = v170;
        }
        else
        {
          v97 = *titleList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          if ( !byte_40F87E5 )
          {
            sub_B16FFC(&LocalizationManager_TypeInfo, v63);
            byte_40F87E5 = 1;
          }
          Master_WarQuestSelectionMaster = (__int64)LocalizationManager_TypeInfo;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Master_WarQuestSelectionMaster = (__int64)LocalizationManager_TypeInfo;
          }
          if ( !v97 )
            goto LABEL_84;
          v98 = *(System_Int32_array ***)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 32LL);
          if ( v98 )
          {
            Master_WarQuestSelectionMaster = sub_B170BC(v98, v97->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_85;
          }
          if ( v67 >= v97->max_length )
            break;
          *(Il2CppClass **)((char *)&v97->obj.klass + v70) = (Il2CppClass *)v98;
          sub_B16F98((BattleServantConfConponent_o *)((char *)v97 + v70), v98, v64, v74, v75, v76, v77, v78);
          v104 = *explanationList;
          if ( !*explanationList )
            goto LABEL_84;
          releaseStateList = v170;
          Master_WarQuestSelectionMaster = (__int64)StringLiteral_1;
          if ( StringLiteral_1 )
          {
            Master_WarQuestSelectionMaster = sub_B170BC(StringLiteral_1, v104->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_85;
            v63 = (System_Int32_array **)StringLiteral_1;
          }
          else
          {
            v63 = 0LL;
          }
          if ( v67 >= v104->max_length )
            break;
          *(Il2CppClass **)((char *)&v104->obj.klass + v70) = (Il2CppClass *)v63;
          sub_B16F98((BattleServantConfConponent_o *)((char *)v104 + v70), v63, v64, v99, v100, v101, v102, v103);
        }
        LODWORD(v65) = releaseSkillIds->max_length;
        ++v67;
        v70 += 8LL;
        if ( (__int64)v67 >= (int)v65 )
          return;
      }
      sub_B17100(Master_WarQuestSelectionMaster, v63, v64);
      sub_B170A0();
    }
  }
  else
  {
    v131 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, titleList);
    *idList = v131;
    sub_B16F98((BattleServantConfConponent_o *)idList, (System_Int32_array **)v131, v132, v133, v134, v135, v136, v137);
    v139 = (System_String_array *)sub_B17014(string___TypeInfo, 0LL, v138);
    *titleList = v139;
    sub_B16F98(
      (BattleServantConfConponent_o *)titleList,
      (System_Int32_array **)v139,
      v140,
      v141,
      v142,
      v143,
      v144,
      v145);
    v147 = (System_String_array *)sub_B17014(string___TypeInfo, 0LL, v146);
    *explanationList = v147;
    sub_B16F98(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v147,
      v148,
      v149,
      v150,
      v151,
      v152,
      v153);
    v155 = (System_Boolean_array *)sub_B17014(bool___TypeInfo, 0LL, v154);
    *releaseStateList = v155;
    sub_B16F98(
      (BattleServantConfConponent_o *)releaseStateList,
      (System_Int32_array **)v155,
      v156,
      v157,
      v158,
      v159,
      v160,
      v161);
    v163 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v162);
    *lvList = v163;
    sub_B16F98((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v163, v164, v165, v166, v167, v168, v169);
  }
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
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Transform_o *v12; // x0
  int v13; // s1
  int v14; // s0
  int v15; // s2
  UnityEngine_Object_o *commandCard; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *v18; // x0
  UnityEngine_Collider_o *v19; // x20
  BattleCommandComponent_o *v20; // x0
  BattleCommandComponent_o *v21; // x0
  UILabel_o *havenotTdLabel; // x20
  System_String_o *v23; // x0
  UnityEngine_Object_o *classBoardSkillObj; // x20
  const MethodInfo *v25; // x1
  BattleServantClassBoardSkillEffectListComponent_o *v26; // x0

  if ( (byte_40F8A09 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, data);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_2437, v8);
    byte_40F8A09 = 1;
  }
  this->fields.data = data;
  sub_B16F98(&this->fields.data, data);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_34;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v11 )
    goto LABEL_34;
  v12 = UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !v12 )
    goto LABEL_34;
  *(UnityEngine_Vector3_o *)(&v13 - 1) = UnityEngine_Transform__get_localPosition(v12, 0LL);
  if ( !transform )
    goto LABEL_34;
  v14 = 0;
  v15 = 0;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v13 - 1), 0LL);
  commandCard = (UnityEngine_Object_o *)this->fields.commandCard;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(commandCard, 0LL, 0LL) )
  {
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !Component_WebViewObject )
      goto LABEL_34;
    if ( !this->fields.commandCard )
      goto LABEL_34;
    BattleCommandComponent__setDepth(
      this->fields.commandCard,
      LODWORD(Component_WebViewObject[1].fields.onLoaded) + 1,
      0LL);
    v18 = (UnityEngine_Component_o *)this->fields.commandCard;
    if ( !v18 )
      goto LABEL_34;
    v19 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      v18,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL) )
    {
      if ( !v19 )
        goto LABEL_34;
      UnityEngine_Collider__set_enabled(v19, 0, 0LL);
    }
    v20 = this->fields.commandCard;
    if ( !v20
      || (BattleCommandComponent__InitTreasureDeviceErrorSpriteMark(v20, 0LL), (v21 = this->fields.commandCard) == 0LL) )
    {
LABEL_34:
      sub_B170D4();
    }
    BattleCommandComponent__SetDownloadEventSprite(v21, 0LL);
  }
  havenotTdLabel = this->fields.havenotTdLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2437, 0LL);
  if ( !havenotTdLabel )
    goto LABEL_34;
  UILabel__set_text(havenotTdLabel, v23, 0LL);
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0LL, 0LL) )
  {
    v26 = this->fields.classBoardSkillObj;
    if ( v26 )
    {
      BattleServantClassBoardSkillEffectListComponent__Init(v26, v25);
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
  if ( (byte_40F8A15 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2774, method);
    byte_40F8A15 = 1;
  }
  return !UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_2774, 0LL)
      || !UnityEngine_PlayerPrefs__GetInt_34836848((System_String_o *)StringLiteral_2774, 0LL)
      || UnityEngine_PlayerPrefs__GetInt_34836848((System_String_o *)StringLiteral_2774, 0LL) != 1;
}


void __fastcall BattleServantConfConponent__OnClick(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantConfConponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleCommandComponent_array *CommandCardList; // x8
  __int64 v10; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v12; // x23
  UnityEngine_Object_o *v13; // x20
  struct BattleCommandComponent_array *v14; // x8
  BattleCommandComponent_o *v15; // x0
  BattleServantConfConponent_CloseButtonCallBack_o *callback_close; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *equipPossessionSkillInfoComponentList; // x0
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_40F8A12 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Clear__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__, v7);
    this = (BattleServantConfConponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40F8A12 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  CommandCardList = v3->fields.CommandCardList;
  if ( !CommandCardList )
    goto LABEL_16;
  v10 = 4LL;
  while ( 1 )
  {
    max_length = CommandCardList->max_length;
    v12 = v10 - 4;
    if ( v10 - 4 >= (int)max_length )
      break;
    if ( v12 >= max_length )
      goto LABEL_29;
    v13 = (UnityEngine_Object_o *)*((_QWORD *)&CommandCardList->obj.klass + v10);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleServantConfConponent_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v14 = v3->fields.CommandCardList;
      if ( !v14 )
        goto LABEL_16;
      if ( v12 >= v14->max_length )
      {
LABEL_29:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v15 = (BattleCommandComponent_o *)*((_QWORD *)&v14->obj.klass + v10);
      if ( !v15 )
        goto LABEL_16;
      BattleCommandComponent__ClearCardEffect(v15, 0LL);
    }
    CommandCardList = v3->fields.CommandCardList;
    ++v10;
    if ( !CommandCardList )
      goto LABEL_16;
  }
  callback_close = v3->fields.callback_close;
  if ( callback_close )
    BattleServantConfConponent_CloseButtonCallBack__Invoke(callback_close, 0LL);
  equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v3->fields.equipPossessionSkillInfoComponentList;
  if ( !equipPossessionSkillInfoComponentList )
    goto LABEL_16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    equipPossessionSkillInfoComponentList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__) )
  {
    if ( !v26.fields.current )
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v26.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
  v19 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v3->fields.equipPossessionSkillInfoComponentList;
  if ( !v19 )
LABEL_16:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    v19,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Clear__);
  v3->fields.bsvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v3->fields.bsvtData, 0LL, v20, v21, v22, v23, v24, v25);
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
  UnityEngine_GameObject_o *AbillityTab; // x0
  UnityEngine_GameObject_o *AbillityBtnBg; // x0
  UIButton_o *AbillityBtn; // x0
  UISprite_o *AbillityName; // x0
  UnityEngine_GameObject_o *BattleServantStateObj; // x0
  UnityEngine_GameObject_o *StateTab; // x0
  UnityEngine_GameObject_o *StateBtnBg; // x0
  UIButton_o *StateBtn; // x0
  UISprite_o *StateName; // x0

  v2 = this;
  if ( (byte_40F8A16 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16911, v3);
    sub_B16FFC(&StringLiteral_16906, v4);
    sub_B16FFC(&StringLiteral_17025, v5);
    sub_B16FFC(&StringLiteral_2774, v6);
    this = (BattleServantConfConponent_o *)sub_B16FFC(&StringLiteral_17023, v7);
    byte_40F8A16 = 1;
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
  AbillityTab = v2->fields.AbillityTab;
  if ( !AbillityTab )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(AbillityTab, 1, 0LL);
  AbillityBtnBg = v2->fields.AbillityBtnBg;
  if ( !AbillityBtnBg )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(AbillityBtnBg, 0, 0LL);
  AbillityBtn = v2->fields.AbillityBtn;
  if ( !AbillityBtn )
    goto LABEL_21;
  UIButton__set_normalSprite(AbillityBtn, (System_String_o *)StringLiteral_16911, 0LL);
  AbillityName = v2->fields.AbillityName;
  if ( !AbillityName )
    goto LABEL_21;
  UISprite__set_spriteName(AbillityName, (System_String_o *)StringLiteral_17023, 0LL);
  BattleServantStateObj = v2->fields.BattleServantStateObj;
  if ( !BattleServantStateObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantStateObj, 0, 0LL);
  StateTab = v2->fields.StateTab;
  if ( !StateTab
    || (UnityEngine_GameObject__SetActive(StateTab, 0, 0LL), (StateBtnBg = v2->fields.StateBtnBg) == 0LL)
    || (UnityEngine_GameObject__SetActive(StateBtnBg, 1, 0LL), (StateBtn = v2->fields.StateBtn) == 0LL)
    || (UIButton__set_normalSprite(StateBtn, (System_String_o *)StringLiteral_16906, 0LL),
        (StateName = v2->fields.StateName) == 0LL) )
  {
LABEL_21:
    sub_B170D4();
  }
  UISprite__set_spriteName(StateName, (System_String_o *)StringLiteral_17025, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_2774, 0, 0LL);
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
  UnityEngine_GameObject_o *AbillityTab; // x0
  UnityEngine_GameObject_o *AbillityBtnBg; // x0
  UIButton_o *AbillityBtn; // x0
  UISprite_o *AbillityName; // x0
  UnityEngine_GameObject_o *BattleServantStateObj; // x0
  UnityEngine_GameObject_o *StateTab; // x0
  UnityEngine_GameObject_o *StateBtnBg; // x0
  UIButton_o *StateBtn; // x0
  UISprite_o *StateName; // x0

  v2 = this;
  if ( (byte_40F8A17 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16911, v3);
    sub_B16FFC(&StringLiteral_17026, v4);
    sub_B16FFC(&StringLiteral_17022, v5);
    sub_B16FFC(&StringLiteral_16906, v6);
    this = (BattleServantConfConponent_o *)sub_B16FFC(&StringLiteral_2774, v7);
    byte_40F8A17 = 1;
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
  AbillityTab = v2->fields.AbillityTab;
  if ( !AbillityTab )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(AbillityTab, 0, 0LL);
  AbillityBtnBg = v2->fields.AbillityBtnBg;
  if ( !AbillityBtnBg )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(AbillityBtnBg, 1, 0LL);
  AbillityBtn = v2->fields.AbillityBtn;
  if ( !AbillityBtn )
    goto LABEL_22;
  UIButton__set_normalSprite(AbillityBtn, (System_String_o *)StringLiteral_16906, 0LL);
  AbillityName = v2->fields.AbillityName;
  if ( !AbillityName )
    goto LABEL_22;
  UISprite__set_spriteName(AbillityName, (System_String_o *)StringLiteral_17022, 0LL);
  BattleServantStateObj = v2->fields.BattleServantStateObj;
  if ( !BattleServantStateObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(BattleServantStateObj, 1, 0LL);
  StateTab = v2->fields.StateTab;
  if ( !StateTab
    || (UnityEngine_GameObject__SetActive(StateTab, 1, 0LL), (StateBtnBg = v2->fields.StateBtnBg) == 0LL)
    || (UnityEngine_GameObject__SetActive(StateBtnBg, 0, 0LL), (StateBtn = v2->fields.StateBtn) == 0LL)
    || (UIButton__set_normalSprite(StateBtn, (System_String_o *)StringLiteral_16911, 0LL),
        (StateName = v2->fields.StateName) == 0LL) )
  {
LABEL_22:
    sub_B170D4();
  }
  UISprite__set_spriteName(StateName, (System_String_o *)StringLiteral_17026, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_2774, 1, 0LL);
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
    sub_B170D4();
  BattleViewBufflistComponent__setHide(buffListView, 0, 0LL);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  BattleServantConfConponent__ResetScroll(this, v6);
}


void __fastcall BattleServantConfConponent__ResetScroll(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *BattleServantAbilityObj; // x20
  UnityEngine_Object_o *BattleServantStateObj; // x20
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_GameObject_o *v6; // x0
  BattleViewBufflistComponent_o *buffListView; // x0
  UnityEngine_Object_o *AbillityScrollView; // x20
  UIScrollView_o *v9; // x0
  UnityEngine_Object_o *AbillityScrollBarWiget; // x20
  UIWidget_o *v11; // x0
  UnityEngine_Object_o *StateScrollView; // x20
  UIScrollView_o *v13; // x0
  UnityEngine_Object_o *StateScrollBarWiget; // x20
  UIWidget_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  BattleViewBufflistComponent_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0

  if ( (byte_40F8A13 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8A13 = 1;
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
      v5 = this->fields.BattleServantAbilityObj;
      if ( v5 )
      {
        UnityEngine_GameObject__SetActive(v5, 1, 0LL);
        v6 = this->fields.BattleServantStateObj;
        if ( v6 )
        {
          UnityEngine_GameObject__SetActive(v6, 1, 0LL);
          buffListView = this->fields.buffListView;
          if ( buffListView )
          {
            BattleViewBufflistComponent__setShow(buffListView, 0LL);
            AbillityScrollView = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(AbillityScrollView, 0LL, 0LL) )
            {
              v9 = this->fields.AbillityScrollView;
              if ( !v9 )
                goto LABEL_43;
              UIScrollView__ResetPosition(v9, 0LL);
            }
            AbillityScrollBarWiget = (UnityEngine_Object_o *)this->fields.AbillityScrollBarWiget;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(AbillityScrollBarWiget, 0LL, 0LL) )
            {
              v11 = this->fields.AbillityScrollBarWiget;
              if ( !v11 )
                goto LABEL_43;
              UIWidget__ResizeCollider(v11, 0LL);
            }
            StateScrollView = (UnityEngine_Object_o *)this->fields.StateScrollView;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(StateScrollView, 0LL, 0LL) )
            {
              v13 = this->fields.StateScrollView;
              if ( !v13 )
                goto LABEL_43;
              UIScrollView__ResetPosition(v13, 0LL);
            }
            StateScrollBarWiget = (UnityEngine_Object_o *)this->fields.StateScrollBarWiget;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(StateScrollBarWiget, 0LL, 0LL) )
            {
              v15 = this->fields.StateScrollBarWiget;
              if ( !v15 )
                goto LABEL_43;
              UIWidget__ResizeCollider(v15, 0LL);
            }
            v16 = this->fields.BattleServantAbilityObj;
            if ( v16 )
            {
              UnityEngine_GameObject__SetActive(v16, 0, 0LL);
              v17 = this->fields.buffListView;
              if ( v17 )
              {
                BattleViewBufflistComponent__setHide(v17, 0, 0LL);
                v18 = this->fields.BattleServantStateObj;
                if ( v18 )
                {
                  UnityEngine_GameObject__SetActive(v18, 0, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_43:
      sub_B170D4();
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
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Object_o *AppendSkillListParent; // x21
  UnityEngine_Object_o *AppendSkillInfoPrefab; // x21
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  const MethodInfo *v18; // x1
  UISprite_o *AppendSkillTitle; // x0
  UISprite_o *v20; // x0
  struct UISprite_o *v21; // x0
  struct BattleServantData_o *bsvtData; // x8
  __int128 v23; // q1
  int64_t v24; // x0
  BattleUserServantData_o *UserServantFromID; // x0
  struct BattleServantData_o *v26; // x8
  BattleUserServantData_o *v27; // x20
  _BOOL8 IsNpc; // x0
  ServantAppendPassiveSkillMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t SvtId; // w0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  int32_t v33; // w20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_Transform_o *v36; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  WarQuestSelectionMaster_o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  System_Int32_array *v42; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v43; // x26
  unsigned __int64 v44; // x28
  int32_t v45; // w21
  float v46; // s8
  unsigned __int64 max_length; // x9
  int32_t v48; // w22
  UnityEngine_GameObject_o *v49; // x0
  System_String_o *v50; // x24
  System_String_o *v51; // x23
  _BOOL4 v52; // w20
  UnityEngine_Transform_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_Transform_o *v55; // x0
  UnityEngine_Component_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x25
  UnityEngine_Transform_o *v59; // x0
  struct UnityEngine_GameObject_o *v60; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v61; // x21
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_Transform_o *v63; // x0
  UnityEngine_Transform_o *v64; // x26
  UnityEngine_Transform_o *v65; // x0
  UnityEngine_Transform_o *v66; // x0
  UnityEngine_Transform_o *v67; // x26
  int v68; // s0
  UnityEngine_Transform_o *v71; // x26
  int v72; // s0
  srcLineSprite_o *Component_srcLineSprite; // x25
  int32_t v77; // w6
  const MethodInfo *v78; // x7
  struct TweenScale_o *mcTweenScaleP; // x8
  int mTable_high; // w9
  System_Int32_array *releaseSkillLvs; // [xsp+0h] [xbp-100h]
  int32_t v82; // [xsp+1Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+40h] [xbp-C0h]
  WarEntity_o *entity; // [xsp+68h] [xbp-98h] BYREF
  System_Int32_array *lvList; // [xsp+70h] [xbp-90h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+78h] [xbp-88h] BYREF
  System_String_array *explanationList; // [xsp+80h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+88h] [xbp-78h] BYREF
  System_Int32_array *idList[2]; // [xsp+90h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8A0E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, battleInfoData);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_19611, v12);
    byte_40F8A0E = 1;
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
    v14 = this->fields.AppendSkillObj;
    if ( !v14 )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive(v14, 0, 0LL);
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
  AppendSkillTitle = this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_100;
  UISprite__set_atlas(AppendSkillTitle, this->fields.BattleAssetUIAtlas, 0LL);
  v20 = this->fields.AppendSkillTitle;
  if ( !v20 )
    goto LABEL_100;
  UISprite__set_spriteName(v20, (System_String_o *)StringLiteral_19611, 0LL);
  v21 = this->fields.AppendSkillTitle;
  if ( !v21 )
    goto LABEL_100;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v21->klass->vtable._33_MakePixelPerfect.method)(
    v21,
    v21->klass->vtable._34_get_minWidth.methodPtr);
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_100;
  v23 = *(_OWORD *)&bsvtData->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&bsvtData->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v84.fields.fakeValue = v23;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v83 = v84;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v83, 0LL);
  UserServantFromID = BattleInfoData__getUserServantFromID(battleInfoData, v24, 0LL);
  if ( !UserServantFromID )
    return;
  v26 = this->fields.bsvtData;
  if ( !v26 )
    goto LABEL_100;
  v27 = UserServantFromID;
  IsNpc = Follower__IsNpc(v26->fields.followerType, 0LL);
  if ( IsNpc )
  {
    BattleServantConfConponent__GetAppendSkillInfo(
      (BattleServantConfConponent_o *)IsNpc,
      idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      v27->fields.appendPassiveSkillIds,
      v27->fields.appendPassiveSkillLvs,
      (const MethodInfo *)releaseSkillLvs);
  }
  else
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantAppendPassiveSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)v27, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_100;
    ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_23785284(
      Master_WarQuestSelectionMaster,
      idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      SvtId,
      v27->fields.appendPassiveSkillIds,
      v27->fields.appendPassiveSkillLvs,
      0LL);
  }
  if ( !idList[0] || !*(_QWORD *)&idList[0]->max_length )
    return;
  v31 = this->fields.AppendSkillObj;
  if ( !v31 )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive(v31, 1, 0LL);
  v32 = this->fields.AppendSkillListParent;
  if ( !v32 )
    goto LABEL_100;
  v33 = 0;
  while ( 1 )
  {
    transform = UnityEngine_GameObject__get_transform(v32, 0LL);
    if ( !transform )
      goto LABEL_100;
    if ( v33 >= UnityEngine_Transform__get_childCount(transform, 0LL) )
      break;
    v35 = this->fields.AppendSkillListParent;
    if ( v35 )
    {
      v36 = UnityEngine_GameObject__get_transform(v35, 0LL);
      if ( v36 )
      {
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v36, v33, 0LL);
        if ( Child )
        {
          gameObject = UnityEngine_Component__get_gameObject(Child, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            v32 = this->fields.AppendSkillListParent;
            ++v33;
            if ( v32 )
              continue;
          }
        }
      }
    }
    goto LABEL_100;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v39 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
  v42 = idList[0];
  entity = 0LL;
  if ( !idList[0] )
LABEL_100:
    sub_B170D4();
  v43 = (DataMasterBase_WarMaster__WarEntity__int__o *)v39;
  v44 = 0LL;
  v45 = 0;
  v46 = 0.0;
  while ( 1 )
  {
    max_length = v42->max_length;
    if ( (__int64)v44 >= (int)max_length )
      break;
    if ( v44 >= max_length )
      goto LABEL_103;
    if ( !lvList )
      goto LABEL_100;
    if ( v44 >= lvList->max_length )
      goto LABEL_103;
    v48 = v42->m_Items[v44 + 1];
    if ( v48 >= 1 )
    {
      if ( !v43 )
        goto LABEL_100;
      v39 = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           v43,
                                           &entity,
                                           v48,
                                           (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)v39 & 1) == 0 )
        return;
      if ( !titleList )
        goto LABEL_100;
      if ( v44 >= titleList->max_length )
        goto LABEL_103;
      if ( !explanationList )
        goto LABEL_100;
      if ( v44 >= explanationList->max_length )
        goto LABEL_103;
      if ( !releaseStateList )
        goto LABEL_100;
      if ( v44 >= releaseStateList->max_length )
      {
LABEL_103:
        sub_B17100(v39, v40, v41);
        sub_B170A0();
      }
      v49 = this->fields.AppendSkillListParent;
      if ( !v49 )
        goto LABEL_100;
      v50 = titleList->m_Items[v44];
      v51 = explanationList->m_Items[v44];
      v52 = releaseStateList->m_Items[v44 + 4];
      v53 = UnityEngine_GameObject__get_transform(v49, 0LL);
      if ( !v53 )
        goto LABEL_100;
      if ( UnityEngine_Transform__get_childCount(v53, 0LL) <= v45 )
      {
        v60 = this->fields.AppendSkillInfoPrefab;
        v82 = v45;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v61 = v43;
        v62 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)v60,
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !v62 )
          goto LABEL_100;
        v58 = v62;
        UnityEngine_GameObject__SetActive(v62, 1, 0LL);
        v63 = UnityEngine_GameObject__get_transform(v58, 0LL);
        if ( !this->fields.AppendSkillListParent )
          goto LABEL_100;
        v64 = v63;
        v65 = UnityEngine_GameObject__get_transform(this->fields.AppendSkillListParent, 0LL);
        if ( !v64 )
          goto LABEL_100;
        UnityEngine_Transform__set_parent(v64, v65, 0LL);
        v66 = UnityEngine_GameObject__get_transform(v58, 0LL);
        if ( !v66 )
          goto LABEL_100;
        v92.fields.y = -v46;
        v92.fields.x = 0.0;
        v92.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(v66, v92, 0LL);
        v67 = UnityEngine_GameObject__get_transform(v58, 0LL);
        *(UnityEngine_Vector3_o *)&v68 = UnityEngine_Vector3__get_one(0LL);
        if ( !v67 )
          goto LABEL_100;
        UnityEngine_Transform__set_localScale(v67, *(UnityEngine_Vector3_o *)&v68, 0LL);
        v71 = UnityEngine_GameObject__get_transform(v58, 0LL);
        *(UnityEngine_Quaternion_o *)&v72 = UnityEngine_Quaternion__get_identity(0LL);
        if ( !v71 )
          goto LABEL_100;
        UnityEngine_Transform__set_localRotation(v71, *(UnityEngine_Quaternion_o *)&v72, 0LL);
        v43 = v61;
        v45 = v82;
      }
      else
      {
        v54 = this->fields.AppendSkillListParent;
        if ( !v54 )
          goto LABEL_100;
        v55 = UnityEngine_GameObject__get_transform(v54, 0LL);
        if ( !v55 )
          goto LABEL_100;
        v56 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v55, v45, 0LL);
        if ( !v56 )
          goto LABEL_100;
        v57 = UnityEngine_Component__get_gameObject(v56, 0LL);
        if ( !v57 )
          goto LABEL_100;
        v58 = v57;
        UnityEngine_GameObject__SetActive(v57, 1, 0LL);
        v59 = UnityEngine_GameObject__get_transform(v58, 0LL);
        if ( !v59 )
          goto LABEL_100;
        v91.fields.y = -v46;
        v91.fields.x = 0.0;
        v91.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(v59, v91, 0LL);
      }
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v58,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v39 = (WarQuestSelectionMaster_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_srcLineSprite,
                                           0LL,
                                           0LL);
      if ( ((unsigned __int8)v39 & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_100;
        BattleServantConfSkillComponent__SetItem(
          (BattleServantConfSkillComponent_o *)Component_srcLineSprite,
          v44 + 1,
          v48,
          v50,
          v51,
          v52,
          v77,
          v78);
      }
      else if ( !Component_srcLineSprite )
      {
        goto LABEL_100;
      }
      mcTweenScaleP = Component_srcLineSprite->fields.mcTweenScaleP;
      if ( !mcTweenScaleP )
        goto LABEL_100;
      mTable_high = HIDWORD(mcTweenScaleP->fields.mTable);
      v42 = idList[0];
      ++v45;
      v46 = v46 + (float)((float)(mTable_high - Component_srcLineSprite->fields.miLineW) + 110.0);
    }
    ++v44;
    if ( !v42 )
      goto LABEL_100;
  }
  this->fields.AppendSkillOffset = -(float)(v46 + 1.0);
}


bool __fastcall BattleServantConfConponent__SetAtlas(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AssetData_o *AssetStorage; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0

  if ( (byte_40F8A18 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&AssetManager_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_2743, v6);
    sub_B16FFC(&StringLiteral_2758, v7);
    byte_40F8A18 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2743, 0LL);
  if ( !AssetStorage )
    goto LABEL_14;
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 AssetStorage,
                                                                 (System_String_o *)StringLiteral_2758,
                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
  {
    if ( Object_WarBoardWaitTimeSetting )
    {
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  Object_WarBoardWaitTimeSetting,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      this->fields.BattleAssetUIAtlas = (struct UIAtlas_o *)Component_srcLineSprite;
      sub_B16F98(&this->fields.BattleAssetUIAtlas, Component_srcLineSprite);
      return 1;
    }
LABEL_14:
    sub_B170D4();
  }
  return 0;
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
  struct BattleServantClassBoardSkillEffectListComponent_o *v10; // x0
  const MethodInfo *v11; // x2
  BattleServantClassBoardSkillEffectListComponent_o *v12; // x0
  const MethodInfo *v13; // x2
  BattleServantConfWindowPassiveSkillListComponent_o *v14; // x0

  if ( (byte_40F8A1A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_20387, v3);
    byte_40F8A1A = 1;
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
      v10 = this->fields.classBoardSkillObj;
      if ( v10 )
      {
        ((void (__fastcall *)(struct BattleServantClassBoardSkillEffectListComponent_o *, struct UIAtlas_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._5_SetSkillTitle.method)(
          v10,
          this->fields.BattleAssetUIAtlas,
          StringLiteral_20387,
          v10->klass->vtable._6_SetSkillInfoObject.methodPtr);
        v12 = this->fields.classBoardSkillObj;
        if ( v12 )
        {
          BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
            v12,
            this->fields.bsvtData,
            v11);
          v14 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
          if ( v14 )
          {
            BattleServantConfWindowPassiveSkillListComponent__SetActive(v14, 1, v13);
            return;
          }
        }
      }
LABEL_21:
      sub_B170D4();
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
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Object_o *ClassSkillListParent; // x21
  UnityEngine_Object_o *ClassSkillInfoPrefab; // x21
  const MethodInfo *v17; // x1
  BattleServantData_o *bsvtData; // x0
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  const MethodInfo *v20; // x1
  UISprite_o *ClassSkillTitle; // x0
  UISprite_o *v22; // x0
  struct UISprite_o *v23; // x0
  struct BattleServantData_o *v24; // x8
  __int128 v25; // q1
  int64_t v26; // x0
  BattleUserServantData_o *UserServantFromID; // x0
  struct System_Int32_array *classPassive; // x27
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  int32_t v31; // w20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_Transform_o *v34; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  WarQuestSelectionMaster_o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  struct TweenScale_o *mcTweenScaleP; // x8
  SkillLvMaster_o *v42; // x24
  unsigned __int64 v43; // x21
  int32_t v44; // w22
  float v45; // s8
  int32_t v46; // w23
  System_String_o *Name; // x0
  System_String_o *v48; // x24
  System_String_o *Detail_23602036; // x0
  System_String_o *v50; // x25
  UnityEngine_Transform_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_Transform_o *v53; // x0
  UnityEngine_Component_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x26
  UnityEngine_Transform_o *v57; // x0
  struct UnityEngine_GameObject_o *v58; // x26
  struct System_Int32_array *v59; // x20
  UnityEngine_GameObject_o *v60; // x0
  UnityEngine_Transform_o *v61; // x0
  UnityEngine_Transform_o *v62; // x27
  UnityEngine_Transform_o *v63; // x0
  UnityEngine_Transform_o *v64; // x0
  UnityEngine_Transform_o *v65; // x27
  int v66; // s0
  UnityEngine_Transform_o *v69; // x27
  int v70; // s0
  srcLineSprite_o *Component_srcLineSprite; // x26
  int32_t v75; // w6
  const MethodInfo *v76; // x7
  int mTable_high; // w9
  DataMasterBase_WarMaster__WarEntity__int__o *v78; // [xsp+8h] [xbp-C8h]
  SkillLvMaster_o *v79; // [xsp+10h] [xbp-C0h]
  int32_t *v80; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+40h] [xbp-90h]
  SkillLvEntity_o *v83; // [xsp+60h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8A0D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_SkillLvMaster___, battleInfoData);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_19598, v12);
    byte_40F8A0D = 1;
  }
  v83 = 0LL;
  entity = 0LL;
  ClassSkillObj = (UnityEngine_Object_o *)this->fields.ClassSkillObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ClassSkillObj, 0LL, 0LL) )
  {
    v14 = this->fields.ClassSkillObj;
    if ( !v14 )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive(v14, 0, 0LL);
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
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_46;
  if ( BattleServantData__IsHideClassSkillNpcFollower(bsvtData, v17) )
    return;
  this->fields.ClassSkillOffset = 0.0;
  BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL) && !BattleServantConfConponent__SetAtlas(this, v20) )
    return;
  ClassSkillTitle = this->fields.ClassSkillTitle;
  if ( !ClassSkillTitle )
    goto LABEL_46;
  UISprite__set_atlas(ClassSkillTitle, this->fields.BattleAssetUIAtlas, 0LL);
  v22 = this->fields.ClassSkillTitle;
  if ( !v22 )
    goto LABEL_46;
  UISprite__set_spriteName(v22, (System_String_o *)StringLiteral_19598, 0LL);
  v23 = this->fields.ClassSkillTitle;
  if ( !v23 )
    goto LABEL_46;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v23->klass->vtable._33_MakePixelPerfect.method)(
    v23,
    v23->klass->vtable._34_get_minWidth.methodPtr);
  v24 = this->fields.bsvtData;
  if ( !v24 )
    goto LABEL_46;
  v25 = *(_OWORD *)&v24->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&v24->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v82.fields.fakeValue = v25;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v81 = v82;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v81, 0LL);
  UserServantFromID = BattleInfoData__getUserServantFromID(battleInfoData, v26, 0LL);
  if ( !UserServantFromID )
    return;
  classPassive = UserServantFromID->fields.classPassive;
  if ( !classPassive )
    goto LABEL_46;
  if ( !*(_QWORD *)&classPassive->max_length )
    return;
  v29 = this->fields.ClassSkillObj;
  if ( !v29 || (UnityEngine_GameObject__SetActive(v29, 1, 0LL), (v30 = this->fields.ClassSkillListParent) == 0LL) )
LABEL_46:
    sub_B170D4();
  v31 = 0;
  while ( 1 )
  {
    transform = UnityEngine_GameObject__get_transform(v30, 0LL);
    if ( !transform )
      goto LABEL_46;
    if ( v31 >= UnityEngine_Transform__get_childCount(transform, 0LL) )
      break;
    v33 = this->fields.ClassSkillListParent;
    if ( v33 )
    {
      v34 = UnityEngine_GameObject__get_transform(v33, 0LL);
      if ( v34 )
      {
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v34, v31, 0LL);
        if ( Child )
        {
          gameObject = UnityEngine_Component__get_gameObject(Child, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            v30 = this->fields.ClassSkillListParent;
            ++v31;
            if ( v30 )
              continue;
          }
        }
      }
    }
    goto LABEL_46;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
  entity = 0LL;
  v38 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v83 = 0LL;
  mcTweenScaleP = *(struct TweenScale_o **)&classPassive->max_length;
  if ( (int)mcTweenScaleP >= 1 )
  {
    v80 = &classPassive->m_Items[1];
    v42 = (SkillLvMaster_o *)v38;
    v43 = 0LL;
    v44 = 0;
    v45 = 0.0;
    v78 = Master_WarQuestSelectionMaster;
    v79 = (SkillLvMaster_o *)v38;
    while ( 1 )
    {
      if ( v43 >= (unsigned int)mcTweenScaleP )
      {
        sub_B17100(v38, v39, v40);
        sub_B170A0();
      }
      v46 = v80[v43];
      if ( v46 >= 1 )
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_46;
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                Master_WarQuestSelectionMaster,
                &entity,
                v46,
                (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
          return;
        if ( !v42 )
          goto LABEL_46;
        if ( !SkillLvMaster__TryGetEntity(v42, &v83, v46, 1, 0LL) )
          return;
        if ( !entity )
          goto LABEL_46;
        Name = SkillEntity__getName((SkillEntity_o *)entity, 0LL);
        if ( !v83 )
          goto LABEL_46;
        v48 = Name;
        Detail_23602036 = SkillLvEntity__getDetail_23602036(v83, 1, 0, 0LL);
        if ( !this->fields.ClassSkillListParent )
          goto LABEL_46;
        v50 = Detail_23602036;
        v51 = UnityEngine_GameObject__get_transform(this->fields.ClassSkillListParent, 0LL);
        if ( !v51 )
          goto LABEL_46;
        if ( UnityEngine_Transform__get_childCount(v51, 0LL) <= v44 )
        {
          v58 = this->fields.ClassSkillInfoPrefab;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v59 = classPassive;
          v60 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)v58,
                                              (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !v60 )
            goto LABEL_46;
          v56 = v60;
          UnityEngine_GameObject__SetActive(v60, 1, 0LL);
          v61 = UnityEngine_GameObject__get_transform(v56, 0LL);
          if ( !this->fields.ClassSkillListParent )
            goto LABEL_46;
          v62 = v61;
          v63 = UnityEngine_GameObject__get_transform(this->fields.ClassSkillListParent, 0LL);
          if ( !v62 )
            goto LABEL_46;
          UnityEngine_Transform__set_parent(v62, v63, 0LL);
          v64 = UnityEngine_GameObject__get_transform(v56, 0LL);
          if ( !v64 )
            goto LABEL_46;
          v86.fields.y = -v45;
          v86.fields.x = 0.0;
          v86.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(v64, v86, 0LL);
          v65 = UnityEngine_GameObject__get_transform(v56, 0LL);
          *(UnityEngine_Vector3_o *)&v66 = UnityEngine_Vector3__get_one(0LL);
          if ( !v65 )
            goto LABEL_46;
          UnityEngine_Transform__set_localScale(v65, *(UnityEngine_Vector3_o *)&v66, 0LL);
          v69 = UnityEngine_GameObject__get_transform(v56, 0LL);
          *(UnityEngine_Quaternion_o *)&v70 = UnityEngine_Quaternion__get_identity(0LL);
          if ( !v69 )
            goto LABEL_46;
          UnityEngine_Transform__set_localRotation(v69, *(UnityEngine_Quaternion_o *)&v70, 0LL);
          classPassive = v59;
          Master_WarQuestSelectionMaster = v78;
        }
        else
        {
          v52 = this->fields.ClassSkillListParent;
          if ( !v52 )
            goto LABEL_46;
          v53 = UnityEngine_GameObject__get_transform(v52, 0LL);
          if ( !v53 )
            goto LABEL_46;
          v54 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v53, v44, 0LL);
          if ( !v54 )
            goto LABEL_46;
          v55 = UnityEngine_Component__get_gameObject(v54, 0LL);
          if ( !v55 )
            goto LABEL_46;
          v56 = v55;
          UnityEngine_GameObject__SetActive(v55, 1, 0LL);
          v57 = UnityEngine_GameObject__get_transform(v56, 0LL);
          if ( !v57 )
            goto LABEL_46;
          v85.fields.y = -v45;
          v85.fields.x = 0.0;
          v85.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(v57, v85, 0LL);
        }
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v56,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v38 = (WarQuestSelectionMaster_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_srcLineSprite,
                                             0LL,
                                             0LL);
        if ( ((unsigned __int8)v38 & 1) != 0 )
        {
          if ( !Component_srcLineSprite )
            goto LABEL_46;
          BattleServantConfSkillComponent__SetItem(
            (BattleServantConfSkillComponent_o *)Component_srcLineSprite,
            v43 + 1,
            v46,
            v48,
            v50,
            1,
            v75,
            v76);
        }
        else if ( !Component_srcLineSprite )
        {
          goto LABEL_46;
        }
        mcTweenScaleP = Component_srcLineSprite->fields.mcTweenScaleP;
        if ( !mcTweenScaleP )
          goto LABEL_46;
        mTable_high = HIDWORD(mcTweenScaleP->fields.mTable);
        LODWORD(mcTweenScaleP) = classPassive->max_length;
        v42 = v79;
        ++v44;
        v45 = v45 + (float)((float)(mTable_high - Component_srcLineSprite->fields.miLineW) + 110.0);
      }
      if ( (__int64)++v43 >= (int)mcTweenScaleP )
        goto LABEL_91;
    }
  }
  v45 = 0.0;
LABEL_91:
  this->fields.ClassSkillOffset = -(float)(v45 + 1.0);
}


void __fastcall BattleServantConfConponent__SetCommandCard(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantData_o *bsvtData; // x0
  System_Int32_array *CommandCodeIdsEX; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct BattleCommandComponent_array *CommandCardList; // x8
  System_Int32_array *v9; // x20
  unsigned __int64 v10; // x21
  int32_t *v11; // x23
  unsigned __int64 max_length; // x9
  BattleCommandComponent_o *v13; // x22
  const MethodInfo *v14; // x2
  struct BattleCommandData_o *data; // x8
  UIWidget_o *component; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F8A10 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_TryGetComponent_UIWidget___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F8A10 = 1;
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
      sub_B170D4();
    v9 = CommandCodeIdsEX;
    v10 = 0LL;
    v11 = &CommandCodeIdsEX->m_Items[1];
    while ( 1 )
    {
      max_length = CommandCardList->max_length;
      if ( (__int64)v10 >= (int)max_length )
        break;
      if ( v10 >= max_length )
        goto LABEL_26;
      v13 = CommandCardList->m_Items[v10];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, 0LL, 0LL);
      if ( ((unsigned __int8)CommandCodeIdsEX & 1) == 0 )
      {
        if ( !v13 )
          goto LABEL_24;
        BattleCommandComponent__Initialize(v13, 0LL);
        v13->fields.isCodeTextureView = 1;
        BattleCommandComponent__setData_18690736(v13, this->fields.bsvtData, v10, 0LL);
        if ( UnityEngine_Component__TryGetComponent_UIWidget_(
               (UnityEngine_Component_o *)this,
               &component,
               (const MethodInfo_18BD9D4 *)Method_UnityEngine_Component_TryGetComponent_UIWidget___) )
        {
          if ( !component )
            goto LABEL_24;
          BattleCommandComponent__setDepth(v13, component->fields.mDepth + 1, 0LL);
        }
        BattleCommandComponent__SetDownloadEventSprite(v13, 0LL);
        if ( !v9 )
          goto LABEL_24;
        if ( v10 >= v9->max_length
          || (BattleCommandComponent__SetCommandCodeView_18696312(v13, v11[v10], 0LL), v10 >= v9->max_length)
          || (BattleCommandComponent__SetLockInfo(v13, v11[v10] == -1, 0LL),
              BattleServantConfConponent__SetCommandCardTypeChangeBuff(this, v13, v14),
              BattleCommandComponent__HidePowerUpValueLabelActive(v13, this->fields.isCommandCardUnderIcon, 0LL),
              BattleCommandComponent__ResetCardBuffIconAlphaAnim(v13, 0LL),
              BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(v13, 0LL),
              v10 >= v9->max_length) )
        {
LABEL_26:
          sub_B17100(CommandCodeIdsEX, v6, v7);
          sub_B170A0();
        }
        data = v13->fields.data;
        if ( !data )
          goto LABEL_24;
        data->fields.commandCodeId = v11[v10];
        BattleCommandComponent__UpdateCommandCardEffect(v13, 0LL);
        BattleCommandComponent__ChangeCardEffectMaskForInside(v13, 0LL);
      }
      CommandCardList = this->fields.CommandCardList;
      ++v10;
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
    sub_B170D4();
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
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  int32_t v20; // w20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v22; // x1
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_Transform_o *v24; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  BattleServantData_o *bsvtData; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  BattleServantConfConponent___c_c *v32; // x8
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x9
  System_Predicate_int__o *_9__79_0; // x21
  Il2CppObject *v35; // x22
  struct BattleServantConfConponent___c_StaticFields *v36; // x0
  int32_t Index_int; // w0
  int32_t v38; // w21
  UnityEngine_GameObject_o *v39; // x0
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v41; // x0
  CommandCodeEntity_o *Entity; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  System_Int32_array *v45; // x20
  __int64 v46; // x8
  int32_t v47; // w22
  unsigned __int64 v48; // x27
  float v49; // s8
  int32_t v50; // w23
  System_Int32_array *v51; // x8
  unsigned __int64 v52; // x20
  unsigned __int64 max_length; // x9
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_Transform_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_Transform_o *v57; // x0
  UnityEngine_Component_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_GameObject_o *v60; // x24
  struct UnityEngine_GameObject_o *v61; // x24
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_Transform_o *v63; // x0
  UnityEngine_Transform_o *v64; // x25
  UnityEngine_Transform_o *v65; // x0
  UnityEngine_Transform_o *v66; // x0
  UnityEngine_Transform_o *v67; // x25
  int v68; // s0
  UnityEngine_Transform_o *v71; // x25
  int v72; // s0
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UILabel_o *NoCommandCodeLabel; // x19
  System_String_o *v78; // x0
  System_Int32_array *array; // [xsp+0h] [xbp-80h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-78h]
  System_String_array *explanationList; // [xsp+10h] [xbp-70h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8A11 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_FindIndex_int___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_System_Predicate_int___ctor__, v10);
    sub_B16FFC(&System_Predicate_int__TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__79_0__, v13);
    sub_B16FFC(&BattleServantConfConponent___c_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_2407, v15);
    byte_40F8A11 = 1;
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
  v18 = this->fields.CommandCodeInfoPrefab;
  if ( !v18 )
    goto LABEL_91;
  UnityEngine_GameObject__SetActive(v18, 0, 0LL);
  v19 = this->fields.CommandCodeListParent;
  if ( !v19 )
    goto LABEL_91;
  v20 = 0;
  while ( 1 )
  {
    transform = UnityEngine_GameObject__get_transform(v19, 0LL);
    if ( !transform )
      goto LABEL_91;
    if ( v20 >= UnityEngine_Transform__get_childCount(transform, 0LL) )
      break;
    v23 = this->fields.CommandCodeListParent;
    if ( v23 )
    {
      v24 = UnityEngine_GameObject__get_transform(v23, 0LL);
      if ( v24 )
      {
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v24, v20, 0LL);
        if ( Child )
        {
          gameObject = UnityEngine_Component__get_gameObject(Child, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            v19 = this->fields.CommandCodeListParent;
            ++v20;
            if ( v19 )
              continue;
          }
        }
      }
    }
    goto LABEL_91;
  }
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_91;
  array = BattleServantData__GetCommandCodeIds(bsvtData, v22);
  v32 = BattleServantConfConponent___c_TypeInfo;
  if ( (BYTE3(BattleServantConfConponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
    v32 = BattleServantConfConponent___c_TypeInfo;
  }
  static_fields = v32->static_fields;
  _9__79_0 = static_fields->__9__79_0;
  if ( !_9__79_0 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__79_0 = (System_Predicate_int__o *)sub_B170CC(System_Predicate_int__TypeInfo, v28, v29, v30, v31);
    System_Predicate_int____ctor(
      _9__79_0,
      v35,
      Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__79_0__,
      (const MethodInfo_2B09B40 *)Method_System_Predicate_int___ctor__);
    v36 = BattleServantConfConponent___c_TypeInfo->static_fields;
    v36->__9__79_0 = _9__79_0;
    sub_B16F98(&v36->__9__79_0, _9__79_0);
  }
  Index_int = System_Array__FindIndex_int_(
                array,
                (System_Predicate_T__o *)_9__79_0,
                (const MethodInfo_2044748 *)Method_System_Array_FindIndex_int___);
  if ( !this->fields.NoCommandCodeLabel
    || (v38 = Index_int,
        (v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.NoCommandCodeLabel, 0LL)) == 0LL) )
  {
LABEL_91:
    sub_B170D4();
  }
  if ( v38 == -1 )
  {
    UnityEngine_GameObject__SetActive(v39, 1, 0LL);
    NoCommandCodeLabel = this->fields.NoCommandCodeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v78 = LocalizationManager__Get((System_String_o *)StringLiteral_2407, 0LL);
    if ( NoCommandCodeLabel )
    {
      UILabel__set_text(NoCommandCodeLabel, v78, 0LL);
      return;
    }
    goto LABEL_91;
  }
  UnityEngine_GameObject__SetActive(v39, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_91;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v41 )
    goto LABEL_91;
  Entity = (CommandCodeEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)v41,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  v45 = array;
  if ( !array )
    goto LABEL_91;
  v46 = *(_QWORD *)&array->max_length;
  if ( (int)v46 >= 1 )
  {
    v47 = 0;
    v48 = 0LL;
    v49 = 0.0;
    do
    {
      if ( v48 >= (unsigned int)v46 )
      {
LABEL_92:
        sub_B17100(Entity, v43, v44);
        sub_B170A0();
      }
      v50 = v45->m_Items[v48 + 1];
      if ( v50 >= 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_91;
        Entity = (CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          MasterData_WarQuestSelectionMaster,
                                          v50,
                                          (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( Entity )
        {
          CommandCodeEntity__GetSkillInfo(Entity, &idList, &titleList, &explanationList, 0LL);
          v51 = idList;
          if ( !idList )
            goto LABEL_91;
          v52 = 0LL;
          while ( 1 )
          {
            max_length = v51->max_length;
            if ( (__int64)v52 >= (int)max_length )
              break;
            if ( v52 >= max_length )
              goto LABEL_92;
            if ( v51->m_Items[v52 + 1] >= 1 )
            {
              v54 = this->fields.CommandCodeListParent;
              if ( !v54 )
                goto LABEL_91;
              v55 = UnityEngine_GameObject__get_transform(v54, 0LL);
              if ( !v55 )
                goto LABEL_91;
              if ( UnityEngine_Transform__get_childCount(v55, 0LL) <= v47 )
              {
                v61 = this->fields.CommandCodeInfoPrefab;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                v62 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)v61,
                                                    (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
                if ( !v62 )
                  goto LABEL_91;
                v60 = v62;
                UnityEngine_GameObject__SetActive(v62, 1, 0LL);
                v63 = UnityEngine_GameObject__get_transform(v60, 0LL);
                if ( !this->fields.CommandCodeListParent )
                  goto LABEL_91;
                v64 = v63;
                v65 = UnityEngine_GameObject__get_transform(this->fields.CommandCodeListParent, 0LL);
                if ( !v64 )
                  goto LABEL_91;
                UnityEngine_Transform__set_parent(v64, v65, 0LL);
                v66 = UnityEngine_GameObject__get_transform(v60, 0LL);
                if ( !v66 )
                  goto LABEL_91;
                v84.fields.x = 0.0;
                v84.fields.z = 0.0;
                v84.fields.y = v49;
                UnityEngine_Transform__set_localPosition(v66, v84, 0LL);
                v67 = UnityEngine_GameObject__get_transform(v60, 0LL);
                *(UnityEngine_Vector3_o *)&v68 = UnityEngine_Vector3__get_one(0LL);
                if ( !v67 )
                  goto LABEL_91;
                UnityEngine_Transform__set_localScale(v67, *(UnityEngine_Vector3_o *)&v68, 0LL);
                v71 = UnityEngine_GameObject__get_transform(v60, 0LL);
                *(UnityEngine_Quaternion_o *)&v72 = UnityEngine_Quaternion__get_identity(0LL);
                if ( !v71 )
                  goto LABEL_91;
                UnityEngine_Transform__set_localRotation(v71, *(UnityEngine_Quaternion_o *)&v72, 0LL);
              }
              else
              {
                v56 = this->fields.CommandCodeListParent;
                if ( !v56 )
                  goto LABEL_91;
                v57 = UnityEngine_GameObject__get_transform(v56, 0LL);
                if ( !v57 )
                  goto LABEL_91;
                v58 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v57, v47, 0LL);
                if ( !v58 )
                  goto LABEL_91;
                v59 = UnityEngine_Component__get_gameObject(v58, 0LL);
                if ( !v59 )
                  goto LABEL_91;
                v60 = v59;
                UnityEngine_GameObject__SetActive(v59, 1, 0LL);
              }
              Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v60,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              Entity = (CommandCodeEntity_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
              if ( ((unsigned __int8)Entity & 1) != 0 )
              {
                if ( !idList )
                  goto LABEL_91;
                if ( v52 >= idList->max_length )
                  goto LABEL_92;
                if ( !titleList )
                  goto LABEL_91;
                if ( v52 >= titleList->max_length )
                  goto LABEL_92;
                if ( !explanationList )
                  goto LABEL_91;
                if ( v52 >= explanationList->max_length )
                  goto LABEL_92;
                if ( !Component_srcLineSprite )
                  goto LABEL_91;
                CommandCodeSkillInfo__Set(
                  (CommandCodeSkillInfo_o *)Component_srcLineSprite,
                  v50,
                  idList->m_Items[v52 + 1],
                  titleList->m_Items[v52],
                  explanationList->m_Items[v52],
                  v52 == 0,
                  0LL);
              }
              v51 = idList;
              ++v47;
              v49 = v49 + flt_31345A0[v52 == 0];
            }
            ++v52;
            if ( !v51 )
              goto LABEL_91;
          }
          v45 = array;
        }
      }
      LODWORD(v46) = v45->max_length;
      ++v48;
    }
    while ( (__int64)v48 < (int)v46 );
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantConfConponent__StartOpenTab(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8A14 & 1) == 0 )
  {
    sub_B16FFC(&BattleServantConfConponent__StartOpenTab_d__86_TypeInfo, method);
    byte_40F8A14 = 1;
  }
  v6 = sub_B170CC(BattleServantConfConponent__StartOpenTab_d__86_TypeInfo, method, v2, v3, v4);
  BattleServantConfConponent__StartOpenTab_d__86___ctor((BattleServantConfConponent__StartOpenTab_d__86_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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

  if ( (byte_40F8A19 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_17409, v3);
    sub_B16FFC(&StringLiteral_14466, v4);
    byte_40F8A19 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B170D4();
  v6 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_14466, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  v8 = &StringLiteral_17409;
  if ( v7 )
    v8 = &StringLiteral_14466;
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
  sub_B16F98(
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
  bool v25; // w0
  struct BattleData_o *v26; // x8
  UnityEngine_Object_o *shortNameLabel; // x25
  const MethodInfo *v28; // x1
  BattleServantData_o *bsvtData; // x0
  UILabel_o *v30; // x25
  System_String_o *ServantShortName; // x0
  UnityEngine_Object_o *atklabel; // x25
  struct BattleServantData_o *v33; // x8
  UILabel_o *v34; // x25
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  BattleViewBufflistComponent_o *buffListView; // x0
  struct BattleServantData_o *v38; // x8
  BattleBuffData_o *buffData; // x0
  BattleViewBufflistComponent_o *v40; // x25
  BattleBuffData_ShowBuffData_array *ShowServantConf; // x0
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x2
  BattleServantData_o *v48; // x0
  int32_t TreasureDvcId; // w0
  int32_t v50; // w23
  UnityEngine_Object_o *equipObj; // x24
  UnityEngine_GameObject_o *v52; // x24
  float LocalPositionY; // s0
  int32_t *p_adjustHeight; // x26
  UnityEngine_Object_o *npRoot; // x24
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_Component_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  WebViewManager_o *Instance; // x0
  TreasureDvcLvMaster_o *MasterData_WarQuestSelectionMaster; // x0
  TreasureDvcLvEntity_o *Entity; // x0
  TreasureDvcLvEntity_o *v62; // x23
  UIWidget_o *npdetail; // x24
  UILabel_o *v64; // x24
  System_String_o *DetalShort_27990712; // x0
  UILabel_o *maxNp; // x24
  Il2CppObject *v67; // x0
  System_String_o *v68; // x0
  struct UILabel_o *v69; // x8
  UILabel_o *nplevel; // x23
  System_String_o *v71; // x0
  System_String_o *v72; // x1
  UnityEngine_Object_o *v73; // x23
  BattleData_o *v74; // x0
  bool IsNpDetailActive; // w23
  const MethodInfo *v76; // x1
  UnityEngine_GameObject_o *v77; // x0
  UnityEngine_Component_o *commandCard; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITexture_o *facetex; // x23
  BattleServantData_o *v81; // x0
  int32_t ImageSvtId; // w0
  const MethodInfo *v83; // x2
  int32_t v84; // w24
  int32_t DispLimitCount; // w0
  const MethodInfo *v86; // x1
  int32_t v87; // w25
  int32_t CommandDispLimitCount; // w26
  struct UITexture_o *Manager__loadCommandCard; // x0
  UnityEngine_Object_o *havenotTdLabel; // x22
  UnityEngine_Component_o *v91; // x0
  UnityEngine_GameObject_o *v92; // x0
  bool v93; // w1
  UnityEngine_Component_o *v94; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v97; // x0
  UnityEngine_Component_o *v98; // x0
  UnityEngine_Transform_o *v99; // x0
  UnityEngine_Component_o *v100; // x0
  UnityEngine_GameObject_o *v101; // x0
  UILabel_o *v102; // x0
  System_String_o **p_mText; // x8
  UnityEngine_Object_o *unknownNp; // x24
  UILabel_o *v105; // x24
  System_String_o *v106; // x1
  UnityEngine_Object_o *v107; // x23
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x3
  __int64 v111; // x4
  BattleCommandData_o *v112; // x23
  const MethodInfo *v113; // x1
  struct ServantTreasureDvcEntity_o *SvtTDvc; // x8
  const MethodInfo *v115; // x2
  const MethodInfo *v116; // x1
  const MethodInfo *v117; // x1
  BattleCommandComponent_o *v118; // x0
  BattleCommandComponent_o *v119; // x0
  UnityEngine_Component_o *v120; // x0
  UnityEngine_Object_o *npSpeedChange; // x22
  BattleServantNPSpeedChangeComponent_o *v122; // x0
  UnityEngine_Object_o *classIcon; // x21
  const MethodInfo *v124; // x1
  int32_t npcSvtClassId; // w1
  ServantClassIconComponent_o *v126; // x0
  struct ServantEntity_o *svtdata; // x8
  ServantClassIconComponent_o *v128; // x0
  int32_t IconSpriteScaledWidth; // w0
  UnityEngine_Object_o *v130; // x21
  int32_t v131; // w20
  struct UILabel_o *v132; // x0
  UnityEngine_Component_o *v133; // x0
  UnityEngine_Behaviour_o *Component_WebViewObject; // x20
  int v135; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t atk; // [xsp+8h] [xbp-58h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F8A0A & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandData_TypeInfo, inbsvtData);
    sub_B16FFC(&BattleServantConfConponent_TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIAnchor___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v13);
    sub_B16FFC(&int_TypeInfo, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&StringLiteral_9356, v19);
    sub_B16FFC(&StringLiteral_23395, v20);
    sub_B16FFC(&StringLiteral_1, v21);
    sub_B16FFC(&StringLiteral_8960, v22);
    byte_40F8A0A = 1;
  }
  lv = 0;
  this->fields.bsvtData = inbsvtData;
  p_bsvtData = &this->fields.bsvtData;
  sub_B16F98(&this->fields.bsvtData, inbsvtData);
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
      v25 = UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
      battleInfoData = 0LL;
      if ( v25 )
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
      v30 = this->fields.shortNameLabel;
      ServantShortName = BattleServantData__getServantShortName(bsvtData, v28);
      if ( !v30 )
        goto LABEL_171;
      UILabel__set_text(v30, ServantShortName, 0LL);
      CommonFunction__ScalingLabelWidth(this->fields.shortNameLabel, 270, 0LL);
    }
    atklabel = (UnityEngine_Object_o *)this->fields.atklabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(atklabel, 0LL, 0LL) )
    {
      v33 = this->fields.bsvtData;
      if ( !v33 )
        goto LABEL_171;
      v34 = this->fields.atklabel;
      atk = v33->fields.atk;
      v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &atk);
      v36 = System_String__Format((System_String_o *)StringLiteral_23395, v35, 0LL);
      if ( !v34 )
        goto LABEL_171;
      UILabel__set_text(v34, v36, 0LL);
    }
    buffListView = this->fields.buffListView;
    if ( buffListView )
    {
      BattleViewBufflistComponent__setClassIcon(buffListView, this->fields.bsvtData, 0LL);
      v38 = this->fields.bsvtData;
      if ( v38 )
      {
        buffData = v38->fields.buffData;
        if ( buffData )
        {
          v40 = this->fields.buffListView;
          ShowServantConf = BattleBuffData__getShowServantConf(buffData, 0LL);
          if ( v40 )
          {
            BattleViewBufflistComponent__setBuffList(v40, ShowServantConf, 0LL);
            BattleServantConfConponent__setEquipList(this, v42);
            BattleServantConfConponent__SetClassSkillList(this, battleInfoData, v43);
            BattleServantConfConponent__SetAppendSkillList(this, battleInfoData, v44);
            if ( !isNpc )
              BattleServantConfConponent__SetClassBoardSkillList(this, v45);
            BattleServantConfConponent__SetCommandCard(this, v45);
            BattleServantConfConponent__SetCommandCodeSkillList(this, v46);
            v48 = this->fields.bsvtData;
            if ( v48 )
            {
              TreasureDvcId = BattleServantData__getTreasureDvcId(v48, 1, v47);
              if ( *p_bsvtData )
              {
                v50 = TreasureDvcId;
                lv = (*p_bsvtData)->fields.treasuredvcLevel;
                equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(equipObj, 0LL, 0LL) )
                {
                  v52 = this->fields.equipObj;
                  LocalPositionY = GameObjectExtensions__GetLocalPositionY(v52, 0LL);
                  p_adjustHeight = &this->fields.adjustHeight;
                  GameObjectExtensions__SetLocalPositionY(v52, LocalPositionY - (float)this->fields.adjustHeight, 0LL);
                }
                else
                {
                  p_adjustHeight = &this->fields.adjustHeight;
                }
                this->fields.adjustHeight = 0;
                npRoot = (UnityEngine_Object_o *)this->fields.npRoot;
                if ( v50 < 1 )
                {
                  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(npRoot, 0LL, 0LL) )
                  {
                    v77 = this->fields.npRoot;
                    if ( !v77 )
                      goto LABEL_171;
                    UnityEngine_GameObject__SetActive(v77, 0, 0LL);
                    commandCard = (UnityEngine_Component_o *)this->fields.commandCard;
                    if ( !commandCard )
                      goto LABEL_171;
                    gameObject = UnityEngine_Component__get_gameObject(commandCard, 0LL);
                    if ( !gameObject )
                      goto LABEL_171;
                    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                  }
                  facetex = this->fields.facetex;
                  v81 = this->fields.bsvtData;
                  if ( !v81 )
                    goto LABEL_171;
                  ImageSvtId = BattleServantData__GetImageSvtId(v81, v76);
                  if ( !*p_bsvtData )
                    goto LABEL_171;
                  v84 = ImageSvtId;
                  DispLimitCount = BattleServantData__getDispLimitCount(*p_bsvtData, 1, v83);
                  if ( !*p_bsvtData )
                    goto LABEL_171;
                  v87 = DispLimitCount;
                  CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(*p_bsvtData, v86);
                  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                  }
                  Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(
                                               facetex,
                                               v84,
                                               v87,
                                               CommandDispLimitCount,
                                               0LL);
                  this->fields.facetex = Manager__loadCommandCard;
                  sub_B16F98(&this->fields.facetex, Manager__loadCommandCard);
                  havenotTdLabel = (UnityEngine_Object_o *)this->fields.havenotTdLabel;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( !UnityEngine_Object__op_Inequality(havenotTdLabel, 0LL, 0LL) )
                    goto LABEL_139;
                  v91 = (UnityEngine_Component_o *)this->fields.havenotTdLabel;
                  if ( !v91 )
                    goto LABEL_171;
                  v92 = UnityEngine_Component__get_gameObject(v91, 0LL);
                  if ( !v92 )
                    goto LABEL_171;
                  v93 = 1;
                  goto LABEL_138;
                }
                if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Inequality(npRoot, 0LL, 0LL) )
                  goto LABEL_139;
                v56 = this->fields.npRoot;
                if ( !v56 )
                  goto LABEL_171;
                UnityEngine_GameObject__SetActive(v56, 1, 0LL);
                v57 = (UnityEngine_Component_o *)this->fields.commandCard;
                if ( !v57 )
                  goto LABEL_171;
                v58 = UnityEngine_Component__get_gameObject(v57, 0LL);
                if ( !v58 )
                  goto LABEL_171;
                UnityEngine_GameObject__SetActive(v58, 1, 0LL);
                Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_171;
                MasterData_WarQuestSelectionMaster = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_171;
                Entity = TreasureDvcLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v50, lv, 0LL);
                if ( !this->fields.maxNp )
                  goto LABEL_171;
                v62 = Entity;
                UILabel__set_text(this->fields.maxNp, (System_String_o *)StringLiteral_1, 0LL);
                if ( v62 )
                {
                  npdetail = (UIWidget_o *)this->fields.npdetail;
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
                  v64 = this->fields.npdetail;
                  DetalShort_27990712 = TreasureDvcLvEntity__getDetalShort_27990712(v62, lv, 0LL);
                  WrapControlText__textBBCodeAdjust(
                    v64,
                    DetalShort_27990712,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT,
                    0LL);
                  maxNp = this->fields.maxNp;
                  v135 = 100 * v62->fields.gaugeCount;
                  v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v135);
                  v68 = System_String__Format((System_String_o *)StringLiteral_8960, v67, 0LL);
                  if ( !maxNp )
                    goto LABEL_171;
                  UILabel__set_text(maxNp, v68, 0LL);
                  v69 = this->fields.npdetail;
                  if ( !v69 )
                    goto LABEL_171;
                  if ( BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT < v69->fields.mHeight )
                  {
                    if ( (BYTE3(BattleServantConfConponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
                      v69 = this->fields.npdetail;
                      if ( !v69 )
                        goto LABEL_171;
                    }
                    *p_adjustHeight = BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT
                                    - v69->fields.mHeight;
                  }
                }
                nplevel = this->fields.nplevel;
                v71 = System_Int32__ToString((int32_t)&lv, 0LL);
                if ( !nplevel )
                  goto LABEL_171;
                if ( v71 )
                  v72 = v71;
                else
                  v72 = (System_String_o *)StringLiteral_1;
                UILabel__set_text(nplevel, v72, 0LL);
                v73 = (UnityEngine_Object_o *)this->fields.data;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v73, 0LL, 0LL) )
                {
                  v74 = this->fields.data;
                  if ( !v74 )
                    goto LABEL_171;
                  IsNpDetailActive = BattleData__IsNpDetailActive(v74, *p_bsvtData, 1, 0LL);
                }
                else
                {
                  IsNpDetailActive = 1;
                }
                v94 = (UnityEngine_Component_o *)this->fields.maxNp;
                if ( v94 )
                {
                  transform = UnityEngine_Component__get_transform(v94, 0LL);
                  if ( transform )
                  {
                    parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
                    if ( parent )
                    {
                      v97 = UnityEngine_Component__get_gameObject(parent, 0LL);
                      if ( v97 )
                      {
                        UnityEngine_GameObject__SetActive(v97, IsNpDetailActive, 0LL);
                        v98 = (UnityEngine_Component_o *)this->fields.nplevel;
                        if ( v98 )
                        {
                          v99 = UnityEngine_Component__get_transform(v98, 0LL);
                          if ( v99 )
                          {
                            v100 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v99, 0LL);
                            if ( v100 )
                            {
                              v101 = UnityEngine_Component__get_gameObject(v100, 0LL);
                              if ( v101 )
                              {
                                UnityEngine_GameObject__SetActive(v101, IsNpDetailActive, 0LL);
                                v102 = this->fields.npdetail;
                                if ( IsNpDetailActive )
                                {
                                  if ( !v102 )
                                    goto LABEL_171;
                                  p_mText = &v102->fields.mText;
                                }
                                else
                                {
                                  if ( !v102 )
                                    goto LABEL_171;
                                  p_mText = (System_String_o **)&StringLiteral_1;
                                }
                                UILabel__set_text(v102, *p_mText, 0LL);
                                unknownNp = (UnityEngine_Object_o *)this->fields.unknownNp;
                                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                }
                                if ( UnityEngine_Object__op_Inequality(unknownNp, 0LL, 0LL) )
                                {
                                  v105 = this->fields.unknownNp;
                                  if ( IsNpDetailActive )
                                  {
                                    v106 = (System_String_o *)StringLiteral_1;
                                    if ( !v105 )
                                      goto LABEL_171;
                                  }
                                  else
                                  {
                                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    }
                                    v106 = LocalizationManager__Get((System_String_o *)StringLiteral_9356, 0LL);
                                    if ( !v105 )
                                      goto LABEL_171;
                                  }
                                  UILabel__set_text(v105, v106, 0LL);
                                }
                                v107 = (UnityEngine_Object_o *)this->fields.commandCard;
                                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                }
                                if ( UnityEngine_Object__op_Inequality(v107, 0LL, 0LL) )
                                {
                                  v112 = (BattleCommandData_o *)sub_B170CC(
                                                                  BattleCommandData_TypeInfo,
                                                                  v108,
                                                                  v109,
                                                                  v110,
                                                                  v111);
                                  BattleCommandData___ctor(v112, 0LL);
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  SvtTDvc = (*p_bsvtData)->fields._SvtTDvc;
                                  if ( !SvtTDvc )
                                    goto LABEL_171;
                                  if ( !v112 )
                                    goto LABEL_171;
                                  v112->fields._type = SvtTDvc->fields.cardId;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v112->fields.svtlimit = BattleServantData__getCommandDispLimitCount(*p_bsvtData, v113);
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v112->fields._loadsvtLimit = BattleServantData__getDispLimitCount(
                                                                 *p_bsvtData,
                                                                 1,
                                                                 v115);
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v112->fields.uniqueId = (*p_bsvtData)->fields.uniqueId;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v112->fields.svtId = BattleServantData__getSvtId(*p_bsvtData, v116);
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v112->fields.imageSvtId = BattleServantData__GetImageSvtId(*p_bsvtData, v117);
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v112->fields.treasureDvc = (*p_bsvtData)->fields.treasuredvcId;
                                  v118 = this->fields.commandCard;
                                  if ( !v118 )
                                    goto LABEL_171;
                                  BattleCommandComponent__setData(
                                    v118,
                                    v112,
                                    this->fields.bsvtData,
                                    0,
                                    isShowBuffIcon,
                                    0,
                                    0LL);
                                  v119 = this->fields.commandCard;
                                  if ( !v119 )
                                    goto LABEL_171;
                                  BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(v119, 0LL);
                                }
                                v120 = (UnityEngine_Component_o *)this->fields.havenotTdLabel;
                                if ( !v120 )
                                  goto LABEL_171;
                                v92 = UnityEngine_Component__get_gameObject(v120, 0LL);
                                if ( !v92 )
                                  goto LABEL_171;
                                v93 = 0;
LABEL_138:
                                UnityEngine_GameObject__SetActive(v92, v93, 0LL);
LABEL_139:
                                npSpeedChange = (UnityEngine_Object_o *)this->fields.npSpeedChange;
                                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                }
                                if ( UnityEngine_Object__op_Inequality(npSpeedChange, 0LL, 0LL) )
                                {
                                  v122 = this->fields.npSpeedChange;
                                  if ( !v122 )
                                    goto LABEL_171;
                                  BattleServantNPSpeedChangeComponent__SetData(v122, *p_bsvtData, 0LL);
                                }
                                classIcon = (UnityEngine_Object_o *)this->fields.classIcon;
                                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                }
                                if ( !UnityEngine_Object__op_Inequality(classIcon, 0LL, 0LL) )
                                {
LABEL_169:
                                  BattleServantConfConponent__ChangeLayout(this, v124);
                                  return;
                                }
                                if ( !inbsvtData )
                                  goto LABEL_171;
                                npcSvtClassId = inbsvtData->fields.npcSvtClassId;
                                v126 = this->fields.classIcon;
                                if ( !npcSvtClassId )
                                {
                                  svtdata = inbsvtData->fields.svtdata;
                                  if ( !svtdata )
                                    goto LABEL_171;
                                  npcSvtClassId = svtdata->fields.classId;
                                }
                                if ( v126 )
                                {
                                  ServantClassIconComponent__SetImage(
                                    v126,
                                    npcSvtClassId,
                                    inbsvtData->fields._frameType_k__BackingField,
                                    0LL);
                                  v128 = this->fields.classIcon;
                                  if ( v128 )
                                  {
                                    IconSpriteScaledWidth = ServantClassIconComponent__GetIconSpriteScaledWidth(
                                                              v128,
                                                              0LL);
                                    v130 = (UnityEngine_Object_o *)this->fields.shortNameLabel;
                                    v131 = IconSpriteScaledWidth;
                                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                    }
                                    if ( UnityEngine_Object__op_Inequality(v130, 0LL, 0LL) )
                                    {
                                      v132 = this->fields.shortNameLabel;
                                      if ( !v132 )
                                        goto LABEL_171;
                                      if ( v132->fields.mWidth + v131 >= 270 )
                                        CommonFunction__ScalingLabelWidth(v132, 270 - v131, 0LL);
                                    }
                                    v133 = (UnityEngine_Component_o *)this->fields.classIcon;
                                    if ( v133 )
                                    {
                                      Component_WebViewObject = (UnityEngine_Behaviour_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                                             v133,
                                                                                             (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIAnchor___);
                                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                      }
                                      if ( UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_WebViewObject,
                                             0LL,
                                             0LL) )
                                      {
                                        if ( !Component_WebViewObject )
                                          goto LABEL_171;
                                        UnityEngine_Behaviour__set_enabled(Component_WebViewObject, 1, 0LL);
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
    sub_B170D4();
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
  __int64 v14; // x2
  struct BattleServantData_o *bsvtData; // x8
  struct BattleUserServantData_array *equipList; // x24
  __int64 v17; // x8
  SkillLvMaster_o *v18; // x19
  unsigned __int64 v19; // x27
  Il2CppClass **v20; // x21
  _QWORD *v21; // x21
  __int64 v22; // t1
  __int64 v23; // x22
  __int64 v24; // x23
  unsigned __int64 v25; // x21
  float v26; // s8
  int32_t v27; // w25
  int32_t v28; // w26
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x24
  SkillLvMaster_o *v30; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *EquipSkillObj; // x0
  EquipPossessionSkillInfoComponent_o *v32; // x27
  BattleServantConfConponent_o *v33; // x19
  System_String_o *Name; // x0
  System_String_o *v35; // x28
  System_String_o *Detail_23602036; // x0
  float v37; // s0
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x0
  struct BattleUserServantData_array *v39; // [xsp+0h] [xbp-90h]
  unsigned __int64 v40; // [xsp+8h] [xbp-88h]
  __int64 v41; // [xsp+18h] [xbp-78h]
  int32_t index; // [xsp+24h] [xbp-6Ch]
  SkillLvEntity_o *v43; // [xsp+28h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_40F8A0B & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillLvMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40F8A0B = 1;
  }
  entity = 0LL;
  v43 = 0LL;
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
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
        BattleSkillIdList = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillLvMaster___);
        bsvtData = this->fields.bsvtData;
        this->fields.isEquip = 0;
        if ( !bsvtData )
          goto LABEL_48;
        equipList = bsvtData->fields.equipList;
        if ( !equipList )
          goto LABEL_48;
        v17 = *(_QWORD *)&equipList->max_length;
        if ( (int)v17 >= 1 )
        {
          v18 = (SkillLvMaster_o *)BattleSkillIdList;
          v19 = 0LL;
          v39 = equipList;
          do
          {
            if ( v19 >= (unsigned int)v17 )
            {
LABEL_49:
              sub_B17100(BattleSkillIdList, v13, v14);
              sub_B170A0();
            }
            v20 = &equipList->obj.klass + v19;
            v22 = (__int64)v20[4];
            v21 = v20 + 4;
            BattleSkillIdList = v22;
            if ( v22 )
            {
              BattleSkillIdList = (__int64)BattleUserServantData__getBattleSkillIdList(
                                             (BattleUserServantData_o *)BattleSkillIdList,
                                             0LL);
              if ( v19 >= equipList->max_length )
                goto LABEL_49;
              v23 = BattleSkillIdList;
              if ( !*v21 )
                goto LABEL_48;
              BattleSkillIdList = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v21 + 408LL))(
                                    *v21,
                                    *(_QWORD *)(*(_QWORD *)*v21 + 416LL));
              if ( !v23 )
                goto LABEL_48;
              if ( *(int *)(v23 + 24) >= 1 )
              {
                v24 = BattleSkillIdList;
                v25 = 0LL;
                v41 = BattleSkillIdList + 32;
                v26 = 0.0;
                index = 0;
                v40 = v19;
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
                  if ( v25 >= *(unsigned int *)(v23 + 24) )
                    goto LABEL_49;
                  if ( !v24 )
                    goto LABEL_48;
                  if ( v25 >= *(unsigned int *)(v24 + 24) )
                    goto LABEL_49;
                  v27 = *(_DWORD *)(v23 + 32 + 4 * v25);
                  v28 = *(_DWORD *)(v41 + 4 * v25);
                  entity = 0LL;
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_48;
                  BattleSkillIdList = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        Master_WarQuestSelectionMaster,
                                        &entity,
                                        v27,
                                        (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                  if ( (BattleSkillIdList & 1) != 0 )
                  {
                    v43 = 0LL;
                    if ( !v18 )
                      goto LABEL_48;
                    BattleSkillIdList = SkillLvMaster__TryGetEntity(v18, &v43, v27, v28, 0LL);
                    if ( (BattleSkillIdList & 1) != 0 )
                    {
                      v29 = Master_WarQuestSelectionMaster;
                      v30 = v18;
                      EquipSkillObj = (EventMissionProgressRequest_Argument_ProgressData_o *)EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
                                                                                               this->fields.baseEquipSkillInfoPrefab,
                                                                                               this->fields.equipSkillInfoRoot,
                                                                                               index,
                                                                                               v26,
                                                                                               0LL);
                      if ( !this->fields.equipPossessionSkillInfoComponentList )
                        goto LABEL_48;
                      v32 = (EquipPossessionSkillInfoComponent_o *)EquipSkillObj;
                      v33 = this;
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.equipPossessionSkillInfoComponentList,
                        EquipSkillObj,
                        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__);
                      if ( !entity )
                        goto LABEL_48;
                      Name = SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                      if ( !v43 )
                        goto LABEL_48;
                      v35 = Name;
                      Detail_23602036 = SkillLvEntity__getDetail_23602036(v43, v28, 0, 0LL);
                      if ( !v32 )
                        goto LABEL_48;
                      v37 = EquipPossessionSkillInfoComponent__SetSkill(v32, v27, v35, Detail_23602036, 0LL);
                      v33->fields.isEquip = 1;
                      this = v33;
                      v18 = v30;
                      Master_WarQuestSelectionMaster = v29;
                      equipList = v39;
                      v19 = v40;
                      v26 = v26 + v37;
                      ++index;
                    }
                  }
                  ++v25;
                }
                while ( (__int64)v25 < *(int *)(v23 + 24) );
              }
            }
            LODWORD(v17) = equipList->max_length;
            ++v19;
          }
          while ( (__int64)v19 < (int)v17 );
        }
        if ( !this->fields.isEquip )
        {
          v38 = (EventMissionProgressRequest_Argument_ProgressData_o *)EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
                                                                         this->fields.baseEquipSkillInfoPrefab,
                                                                         this->fields.equipSkillInfoRoot,
                                                                         0,
                                                                         0.0,
                                                                         0LL);
          if ( this->fields.equipPossessionSkillInfoComponentList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.equipPossessionSkillInfoComponentList,
              v38,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__);
            return;
          }
LABEL_48:
          sub_B170D4();
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
  sub_B16F98(p_method, object);
}


System_IAsyncResult_o *__fastcall BattleServantConfConponent_CloseButtonCallBack__BeginInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B16FA0(this, &v5, callback, object);
}


void __fastcall BattleServantConfConponent_CloseButtonCallBack__EndInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall BattleServantConfConponent_CloseButtonCallBack__Invoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  BattleServantConfConponent_CloseButtonCallBack_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x8
  unsigned __int64 v11; // x10
  _DWORD *v12; // x11
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  void (__fastcall **v16)(__int64 *, _QWORD); // x0
  BattleServantConfConponent_CloseButtonCallBack_o *v17; // x8
  __int64 *v18; // x20
  __int64 v19; // x21
  void (__fastcall *v20)(__int64); // x22
  char v21; // w22
  char v22; // w0
  __int64 v23; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  unsigned __int64 v26; // x10
  _DWORD *v27; // x11
  BattleServantConfConponent_CloseButtonCallBack_o *v28; // [xsp+8h] [xbp-38h] BYREF

  v28 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v28;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (BattleServantConfConponent_CloseButtonCallBack_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v17 = v6[v7];
      v18 = *(__int64 **)&v17->fields.method;
      v19 = *(_QWORD *)&v17->fields.extra_arg;
      v20 = *(void (__fastcall **)(__int64))&v17->fields.method_ptr;
      if ( *(__int16 *)(v19 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v17->fields.extra_arg, method, v2);
      if ( (sub_B1702C(v19) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v19 + 74) )
        goto LABEL_35;
      v20(v19);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v18 && *(__int16 *)(v19 + 72) != -1 && (*(_BYTE *)(*v18 + 277) & 1) == 0 && this->fields.m_target )
    {
      v21 = sub_B17024(v19);
      v22 = sub_B17428(v19);
      if ( (v21 & 1) != 0 )
      {
        if ( (v22 & 1) != 0 )
        {
          v23 = *v18;
          v24 = *(_QWORD *)(v19 + 24);
          v25 = *(unsigned __int16 *)(v19 + 72);
          if ( *(_WORD *)(*v18 + 298) )
          {
            v26 = 0LL;
            v27 = (_DWORD *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((_QWORD *)v27 - 1) != v24 )
            {
              ++v26;
              v27 += 4;
              if ( v26 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_34;
            }
            v15 = v23 + 16LL * (*v27 + (int)v25) + 312;
          }
          else
          {
LABEL_34:
            v15 = sub_AAFEF8(v18, v24, v25);
          }
          v14 = *(_QWORD *)(v15 + 8);
        }
        else
        {
          v14 = *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320);
        }
        v16 = (void (__fastcall **)(__int64 *, _QWORD))sub_B170AC(v14, v19);
        (*v16)(v18, v16);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v19 + 72);
        if ( (v22 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v19);
          v10 = *v18;
          if ( *(_WORD *)(*v18 + 298) )
          {
            v11 = 0LL;
            v12 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v12 - 1) != class_0 )
            {
              ++v11;
              v12 += 4;
              if ( v11 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_11;
            }
            v13 = v10 + 16LL * (int)(*v12 + v8) + 312;
          }
          else
          {
LABEL_11:
            v13 = sub_AAFEF8(v18, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v13)(v18, *(_QWORD *)(v13 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 312))(
            v18,
            *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v20)(v18, v19);
    goto LABEL_36;
  }
}


void __fastcall BattleServantConfConponent__StartOpenTab_d__86___ctor(
        BattleServantConfConponent__StartOpenTab_d__86_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantConfConponent__StartOpenTab_d__86__MoveNext(
        BattleServantConfConponent__StartOpenTab_d__86_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct BattleServantConfConponent_o *_4__this; // x20
  UnityEngine_Object_o *BattleServantAbilityObj; // x21
  UnityEngine_GameObject_o *v6; // x0
  bool v7; // w21
  Il2CppObject **p__2__current; // x19

  if ( (byte_40F71C2 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F71C2 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
LABEL_18:
      sub_B170D4();
    if ( BattleServantConfConponent__IsLastOpenServantAbility(_4__this, 0LL) )
      BattleServantConfConponent__OnClickServantAbility(_4__this, 0LL);
    else
      BattleServantConfConponent__OnClickServantState(_4__this, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
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
  v6 = _4__this->fields.BattleServantAbilityObj;
  v7 = 1;
  _4__this->fields.isOpenAfter = 1;
  if ( !v6 )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(v6, 0, 0LL);
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_B16F98(p__2__current, 0LL);
  *((_DWORD *)p__2__current - 2) = 1;
  return v7;
}


Il2CppObject *__fastcall BattleServantConfConponent__StartOpenTab_d__86__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantConfConponent__StartOpenTab_d__86_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantConfConponent__StartOpenTab_d__86__System_Collections_IEnumerator_Reset(
        BattleServantConfConponent__StartOpenTab_d__86_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleServantConfConponent__StartOpenTab_d__86_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleServantConfConponent__StartOpenTab_d__86__System_Collections_IEnumerator_get_Current(
        BattleServantConfConponent__StartOpenTab_d__86_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantConfConponent__StartOpenTab_d__86__System_IDisposable_Dispose(
        BattleServantConfConponent__StartOpenTab_d__86_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantConfConponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0

  if ( (byte_40F71C1 & 1) == 0 )
  {
    sub_B16FFC(&BattleServantConfConponent___c_TypeInfo, v1);
    byte_40F71C1 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleServantConfConponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleServantConfConponent___c_o *)v5;
  sub_B16F98(static_fields, v5);
}


void __fastcall BattleServantConfConponent___c___ctor(BattleServantConfConponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantConfConponent___c___ChangeLayout_b__74_0(
        BattleServantConfConponent___c_o *this,
        int32_t codeId,
        const MethodInfo *method)
{
  return codeId > 0;
}


bool __fastcall BattleServantConfConponent___c___SetCommandCodeSkillList_b__79_0(
        BattleServantConfConponent___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id > 0;
}