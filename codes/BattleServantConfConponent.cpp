void __fastcall BattleServantConfConponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_c *v4; // x8

  if ( (byte_42E668A & 1) == 0 )
  {
    sub_B5D5C4(&BattleServantConfConponent_TypeInfo, v1, v2, v3);
    byte_42E668A = 1;
  }
  BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE = 20;
  BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT = 90;
  v4 = BattleServantConfConponent_TypeInfo;
  BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT = 500;
  v4->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT = 60;
  v4->static_fields->EQIUP_SKILL_OBJ_HEIGHT = 110;
}


void __fastcall BattleServantConfConponent___ctor(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E6689 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo, v5, v6, v7);
    byte_42E6689 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__);
  this->fields.equipPossessionSkillInfoComponentList = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipPossessionSkillInfoComponentList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.NotEquipObjHeightPos = 45.0;
  this->fields.ClassSkillInitPosY = -633.0;
  this->fields.AppendSkillInitPosY = -679.0;
  this->fields.isOpenAfter = 1;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleServantConfConponent__ChangeLayout(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  long double v4; // q8
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  UnityEngine_Object_o *equipObj; // x20
  const MethodInfo *v37; // x1
  UnityEngine_GameObject_o *v38; // x20
  float LocalPositionY; // s0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *equipPossessionSkillInfoComponentList; // x0
  float i; // s8
  Il2CppObject *current; // x22
  _DWORD *monitor; // x8
  BattleServantConfConponent_c *v44; // x0
  int32_t v45; // w24
  __int64 v46; // x1
  _DWORD *v47; // x8
  _BOOL8 v48; // x0
  BattleServantConfConponent_c *v49; // x0
  UnityEngine_Object_o *CardAndCommandObj; // x20
  unsigned __int64 CommandCodeIds; // x0
  System_Int32_array *v52; // x20
  BattleServantConfConponent___c_c *v53; // x0
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x8
  System_Predicate_int__o *_9__79_0; // x21
  Il2CppObject *v56; // x22
  struct BattleServantConfConponent___c_StaticFields *v57; // x0
  unsigned __int64 v58; // x9
  unsigned __int64 v59; // x8
  int v60; // w12
  UnityEngine_Object_o *npSpeedChange; // x20
  struct BattleServantNPSpeedChangeComponent_o *v62; // x8
  struct BattleServantNPSpeedChangeComponent_o *v63; // x8
  UnityEngine_Object_o *ClassSkillObj; // x20
  UnityEngine_Object_o *AppendSkillObj; // x20
  UnityEngine_Object_o *classBoardSkillObj; // x20
  __int64 v67; // x0
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E6674 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_FindIndex_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleServantConfConponent_TypeInfo, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__,
      v15,
      v16,
      v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__,
      v18,
      v19,
      v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Predicate_int___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Predicate_int__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_BattleServantConfConponent___c__ChangeLayout_b__79_0__, v30, v31, v32);
    sub_B5D5C4(&BattleServantConfConponent___c_TypeInfo, v33, v34, v35);
    byte_42E6674 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipObj, 0LL, 0LL) )
  {
    v38 = this->fields.equipObj;
    LocalPositionY = GameObjectExtensions__GetLocalPositionY(v38, 0LL);
    GameObjectExtensions__SetLocalPositionY(v38, LocalPositionY + (float)this->fields.adjustHeight, 0LL);
  }
  if ( this->fields.isEquip )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.equipPossessionSkillInfoComponentList;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_86;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v68,
      equipPossessionSkillInfoComponentList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    v69 = v68;
    for ( i = 0.0; ; i = i - (float)v44->static_fields->EQIUP_SKILL_OBJ_HEIGHT )
    {
      v48 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v69,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
      if ( !v48 )
        break;
      current = v69.fields.current;
      if ( !v69.fields.current )
        sub_B5D69C(v48, v46);
      monitor = v69.fields.current[2].monitor;
      if ( !monitor )
        sub_B5D69C(v48, v46);
      v44 = BattleServantConfConponent_TypeInfo;
      v45 = monitor[41];
      if ( (BYTE3(BattleServantConfConponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
        v44 = BattleServantConfConponent_TypeInfo;
      }
      if ( v45 > v44->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT )
      {
        if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v44);
        v47 = current[2].monitor;
        if ( !v47 )
          sub_B5D69C(v44, v46);
        v44 = BattleServantConfConponent_TypeInfo;
        i = i + (float)(BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT - v47[41]);
      }
      if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        v44 = BattleServantConfConponent_TypeInfo;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v69,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    v49 = BattleServantConfConponent_TypeInfo;
    if ( (BYTE3(BattleServantConfConponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
      v49 = BattleServantConfConponent_TypeInfo;
    }
    *(float *)&v4 = i + (float)v49->static_fields->EQIUP_SKILL_OBJ_HEIGHT;
  }
  else
  {
    *(float *)&v4 = this->fields.NotEquipObjHeightPos;
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
      *(float *)&v4 + (float)this->fields.adjustHeight,
      0LL);
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.bsvtData;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_86;
    CommandCodeIds = (unsigned __int64)BattleServantData__GetCommandCodeIds(
                                         (BattleServantData_o *)equipPossessionSkillInfoComponentList,
                                         v37);
    if ( CommandCodeIds )
    {
      v52 = (System_Int32_array *)CommandCodeIds;
      v53 = BattleServantConfConponent___c_TypeInfo;
      if ( (BYTE3(BattleServantConfConponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
        v53 = BattleServantConfConponent___c_TypeInfo;
      }
      static_fields = v53->static_fields;
      _9__79_0 = static_fields->__9__79_0;
      if ( !_9__79_0 )
      {
        if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v53);
          static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
        }
        v56 = (Il2CppObject *)static_fields->__9;
        _9__79_0 = (System_Predicate_int__o *)sub_B5D694(System_Predicate_int__TypeInfo);
        System_Predicate_int____ctor(
          _9__79_0,
          v56,
          Method_BattleServantConfConponent___c__ChangeLayout_b__79_0__,
          (const MethodInfo_2B91B48 *)Method_System_Predicate_int___ctor__);
        v57 = BattleServantConfConponent___c_TypeInfo->static_fields;
        v57->__9__79_0 = _9__79_0;
        sub_B5D560(&v57->__9__79_0);
      }
      if ( System_Array__FindIndex_int_(
             v52,
             (System_Predicate_T__o *)_9__79_0,
             (const MethodInfo_1FC0954 *)Method_System_Array_FindIndex_int___) == -1
        || (int)*(_QWORD *)&v52->max_length < 1 )
      {
        LODWORD(CommandCodeIds) = 0;
      }
      else
      {
        v58 = (unsigned int)*(_QWORD *)&v52->max_length;
        v59 = 0LL;
        CommandCodeIds = 0LL;
        do
        {
          if ( v59 >= v58 )
          {
            v67 = sub_B5D6C8(CommandCodeIds);
            sub_B5D668(v67, 0LL);
          }
          v60 = v52->m_Items[++v59];
          if ( v60 <= 0 )
            CommandCodeIds = (unsigned int)CommandCodeIds;
          else
            CommandCodeIds = (unsigned int)(CommandCodeIds + 1);
        }
        while ( (__int64)v59 < (int)v58 );
      }
    }
    *(float *)&v4 = *(float *)&v4 - BattleServantNPSpeedChangeComponent__CalcCommandCodeOffset(CommandCodeIds, 0LL);
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
    v62 = this->fields.npSpeedChange;
    if ( !v62 )
      goto LABEL_86;
    v62->fields.equipeOffsetZ = *(float *)&v4 + (float)this->fields.adjustHeight;
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.npSpeedChange;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_86;
    BattleServantNPSpeedChangeComponent__SetButtonPosition(
      (BattleServantNPSpeedChangeComponent_o *)equipPossessionSkillInfoComponentList,
      0LL);
    v63 = this->fields.npSpeedChange;
    if ( !v63 )
      goto LABEL_86;
    *(float *)&v4 = *(float *)&v4 - (float)v63->fields.contentsHeight;
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
      (float)(*(float *)&v4 + this->fields.ClassSkillInitPosY) + (float)this->fields.adjustHeight,
      0LL);
    *(float *)&v4 = *(float *)&v4 + this->fields.ClassSkillOffset;
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
      (float)(*(float *)&v4 + this->fields.AppendSkillInitPosY) + (float)this->fields.adjustHeight,
      0LL);
    *(float *)&v4 = *(float *)&v4 + this->fields.AppendSkillOffset;
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
      || (equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *, Il2CppMethodPointer, long double, float))equipPossessionSkillInfoComponentList->klass->vtable._4_unknown.method)(equipPossessionSkillInfoComponentList, equipPossessionSkillInfoComponentList->klass->vtable._5_set_Item.methodPtr, v4, (float)this->fields.adjustHeight),
          !this->fields.classBoardSkillObj) )
    {
LABEL_86:
      sub_B5D69C(equipPossessionSkillInfoComponentList, v37);
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
    sub_B5D69C(0LL, call);
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
    sub_B5D69C(0LL, method);
  BattleViewBufflistComponent__setShow(buffListView, 0LL);
  started = BattleServantConfConponent__StartOpenTab(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  __int64 max_length; // x1
  System_Int32_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Boolean_array *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v79; // x1
  __int64 v80; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v81; // x26
  unsigned __int64 v82; // x19
  int32_t *v83; // x22
  int32_t *v84; // x23
  __int64 v85; // x20
  System_Int32_array *v86; // x8
  System_Boolean_array *v87; // x8
  System_Int32_array *v88; // x8
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Boolean_array *v95; // x8
  SkillEntity_o *v96; // x28
  System_String_array *v97; // x21
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **v104; // x27
  System_String_array *v105; // x21
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Int32_array **v112; // x27
  BattleServantConfConponent_o *v113; // x0
  System_Int32_array **v114; // x1
  System_String_array *v115; // x21
  System_Int32_array **v116; // x27
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_String_array *v123; // x21
  System_Int32_array **v124; // x1
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **v131; // x27
  System_String_array *v132; // x21
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_Int32_array **v139; // x27
  System_String_array *v140; // x8
  System_String_array *v141; // x8
  BattleServantConfConponent_o *v142; // x27
  System_Int32_array **v143; // x0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  System_String_array *v150; // x21
  System_String_o *v151; // x27
  System_String_o *v152; // x0
  System_Int32_array *v153; // x0
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  System_String_array *v160; // x0
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  System_String_array *v167; // x0
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  System_Boolean_array *v174; // x0
  System_String_array **v175; // x2
  System_String_array **v176; // x3
  System_Boolean_array **v177; // x4
  System_Int32_array **v178; // x5
  System_Int32_array *v179; // x6
  System_Int32_array *v180; // x7
  System_Int32_array *v181; // x0
  System_String_array **v182; // x2
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  __int64 v188; // x0
  __int64 v189; // x0
  System_Boolean_array **v190; // [xsp+8h] [xbp-78h]

  if ( (byte_42E6678 & 1) == 0 )
  {
    sub_B5D5C4(&bool___TypeInfo, (_DWORD)idList, (_DWORD)titleList, explanationList);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v12, v13, v14);
    sub_B5D5C4(&DataManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&int___TypeInfo, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&string___TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_3371/*"COND_TYPE_TITLE"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_3359/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_1/*""*/, v39, v40, v41);
    byte_42E6678 = 1;
  }
  if ( releaseSkillIds
    && releaseSkillLvs
    && (max_length = releaseSkillIds->max_length, (_DWORD)max_length == releaseSkillLvs->max_length) )
  {
    v43 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, max_length);
    *idList = v43;
    sub_B5D560((BattleServantConfConponent_o *)idList, (System_Int32_array **)v43, v44, v45, v46, v47, v48, v49);
    v50 = (System_String_array *)sub_B5D5DC(string___TypeInfo, releaseSkillIds->max_length);
    *titleList = v50;
    sub_B5D560((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v50, v51, v52, v53, v54, v55, v56);
    v57 = (System_String_array *)sub_B5D5DC(string___TypeInfo, releaseSkillIds->max_length);
    *explanationList = v57;
    sub_B5D560(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v57,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
    v64 = (System_Boolean_array *)sub_B5D5DC(bool___TypeInfo, releaseSkillIds->max_length);
    *releaseStateList = v64;
    sub_B5D560(
      (BattleServantConfConponent_o *)releaseStateList,
      (System_Int32_array **)v64,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
    v71 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, releaseSkillIds->max_length);
    *lvList = v71;
    sub_B5D560((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v71, v72, v73, v74, v75, v76, v77);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
    v80 = *(_QWORD *)&releaseSkillIds->max_length;
    if ( (int)v80 >= 1 )
    {
      v81 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      v82 = 0LL;
      v83 = &releaseSkillIds->m_Items[1];
      v84 = &releaseSkillLvs->m_Items[1];
      v85 = 32LL;
      v190 = releaseStateList;
      while ( v82 < (unsigned int)v80 )
      {
        v86 = *idList;
        if ( !*idList )
          goto LABEL_84;
        if ( v82 >= v86->max_length )
          break;
        v86->m_Items[v82 + 1] = v83[v82];
        if ( v82 >= releaseSkillLvs->max_length )
          break;
        v87 = *releaseStateList;
        if ( !*releaseStateList )
          goto LABEL_84;
        if ( v82 >= v87->max_length )
          break;
        v87->m_Items[v82 + 4] = v84[v82] > 0;
        if ( v82 >= releaseSkillLvs->max_length )
          break;
        v88 = *lvList;
        if ( !*lvList )
          goto LABEL_84;
        if ( v82 >= v88->max_length )
          break;
        v88->m_Items[v82 + 1] = v84[v82];
        if ( v82 >= releaseSkillIds->max_length )
          break;
        if ( !v81 )
          goto LABEL_84;
        Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    v81,
                                                    v83[v82],
                                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Master_WarQuestSelectionMaster )
        {
          v95 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_84;
          if ( v82 >= v95->max_length )
            break;
          v96 = (SkillEntity_o *)Master_WarQuestSelectionMaster;
          v97 = *titleList;
          if ( v95->m_Items[v82 + 4] )
          {
            if ( v82 >= releaseSkillLvs->max_length )
              break;
            Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectTitle(
                                                        (SkillEntity_o *)Master_WarQuestSelectionMaster,
                                                        v84[v82],
                                                        0LL);
            if ( !v97 )
              goto LABEL_84;
            v104 = (System_Int32_array **)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              Master_WarQuestSelectionMaster = sub_B5D684(
                                                 Master_WarQuestSelectionMaster,
                                                 v97->obj.klass->_1.element_class);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_85;
            }
            if ( v82 >= v97->max_length )
              break;
            *(Il2CppClass **)((char *)&v97->obj.klass + v85) = (Il2CppClass *)v104;
            sub_B5D560((BattleServantConfConponent_o *)((char *)v97 + v85), v104, v98, v99, v100, v101, v102, v103);
            if ( v82 >= releaseSkillLvs->max_length )
              break;
            v105 = *explanationList;
            Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectExplanation(v96, v84[v82], 0LL);
            if ( !v105 )
              goto LABEL_84;
            v112 = (System_Int32_array **)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              Master_WarQuestSelectionMaster = sub_B5D684(
                                                 Master_WarQuestSelectionMaster,
                                                 v105->obj.klass->_1.element_class);
              if ( !Master_WarQuestSelectionMaster )
              {
LABEL_85:
                v189 = sub_B5D6BC();
                sub_B5D668(v189, 0LL);
              }
            }
            if ( v82 >= v105->max_length )
              break;
            v113 = (BattleServantConfConponent_o *)((char *)v105 + v85);
            v114 = v112;
            *(Il2CppClass **)((char *)&v105->obj.klass + v85) = (Il2CppClass *)v112;
          }
          else
          {
            Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectTitle(
                                                        (SkillEntity_o *)Master_WarQuestSelectionMaster,
                                                        1,
                                                        0LL);
            if ( !v97 )
              goto LABEL_84;
            v131 = (System_Int32_array **)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              Master_WarQuestSelectionMaster = sub_B5D684(
                                                 Master_WarQuestSelectionMaster,
                                                 v97->obj.klass->_1.element_class);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_85;
            }
            if ( v82 >= v97->max_length )
              break;
            *(Il2CppClass **)((char *)&v97->obj.klass + v85) = (Il2CppClass *)v131;
            sub_B5D560((BattleServantConfConponent_o *)((char *)v97 + v85), v131, v125, v126, v127, v128, v129, v130);
            v132 = *explanationList;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3371/*"COND_TYPE_TITLE"*/,
                                                        0LL);
            if ( !v132 )
              goto LABEL_84;
            v139 = (System_Int32_array **)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              Master_WarQuestSelectionMaster = sub_B5D684(
                                                 Master_WarQuestSelectionMaster,
                                                 v132->obj.klass->_1.element_class);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_85;
            }
            if ( v82 >= v132->max_length )
              break;
            *(Il2CppClass **)((char *)&v132->obj.klass + v85) = (Il2CppClass *)v139;
            sub_B5D560((BattleServantConfConponent_o *)((char *)v132 + v85), v139, v133, v134, v135, v136, v137, v138);
            v140 = *explanationList;
            if ( !*explanationList )
LABEL_84:
              sub_B5D69C(Master_WarQuestSelectionMaster, v79);
            if ( v82 >= v140->max_length )
              break;
            Master_WarQuestSelectionMaster = System_String__op_Inequality(
                                               *(System_String_o **)((char *)&v140->obj.klass + v85),
                                               (System_String_o *)StringLiteral_1/*""*/,
                                               0LL);
            if ( (Master_WarQuestSelectionMaster & 1) != 0 )
            {
              v141 = *explanationList;
              if ( !*explanationList )
                goto LABEL_84;
              if ( v82 >= v141->max_length )
                break;
              v142 = (BattleServantConfConponent_o *)((char *)v141 + v85);
              v143 = (System_Int32_array **)System_String__Concat_44577788(
                                              *(System_String_o **)((char *)&v141->obj.klass + v85),
                                              (System_String_o *)StringLiteral_26/*"\n"*/,
                                              0LL);
              v142->klass = (BattleServantConfConponent_c *)v143;
              sub_B5D560(v142, v143, v144, v145, v146, v147, v148, v149);
            }
            v150 = *explanationList;
            if ( !*explanationList )
              goto LABEL_84;
            if ( v82 >= v150->max_length )
              break;
            v151 = *(System_String_o **)((char *)&v150->obj.klass + v85);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v152 = LocalizationManager__Get((System_String_o *)StringLiteral_3359/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
            v114 = (System_Int32_array **)System_String__Concat_44577788(v151, v152, 0LL);
            v113 = (BattleServantConfConponent_o *)((char *)v150 + v85);
            *(Il2CppClass **)((char *)&v150->obj.klass + v85) = (Il2CppClass *)v114;
          }
          sub_B5D560(v113, v114, v106, v107, v108, v109, v110, v111);
          releaseStateList = v190;
        }
        else
        {
          v115 = *titleList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          if ( !byte_42E6772 )
          {
            sub_B5D5C4(&LocalizationManager_TypeInfo, v79, (_DWORD)v89, v90);
            byte_42E6772 = 1;
          }
          Master_WarQuestSelectionMaster = (__int64)LocalizationManager_TypeInfo;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Master_WarQuestSelectionMaster = (__int64)LocalizationManager_TypeInfo;
          }
          if ( !v115 )
            goto LABEL_84;
          v116 = *(System_Int32_array ***)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 32LL);
          if ( v116 )
          {
            Master_WarQuestSelectionMaster = sub_B5D684(v116, v115->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_85;
          }
          if ( v82 >= v115->max_length )
            break;
          *(Il2CppClass **)((char *)&v115->obj.klass + v85) = (Il2CppClass *)v116;
          sub_B5D560((BattleServantConfConponent_o *)((char *)v115 + v85), v116, v89, v90, v91, v92, v93, v94);
          v123 = *explanationList;
          if ( !*explanationList )
            goto LABEL_84;
          releaseStateList = v190;
          Master_WarQuestSelectionMaster = (__int64)StringLiteral_1/*""*/;
          if ( StringLiteral_1/*""*/ )
          {
            Master_WarQuestSelectionMaster = sub_B5D684(StringLiteral_1/*""*/, v123->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_85;
            v124 = (System_Int32_array **)StringLiteral_1/*""*/;
          }
          else
          {
            v124 = 0LL;
          }
          if ( v82 >= v123->max_length )
            break;
          *(Il2CppClass **)((char *)&v123->obj.klass + v85) = (Il2CppClass *)v124;
          sub_B5D560((BattleServantConfConponent_o *)((char *)v123 + v85), v124, v117, v118, v119, v120, v121, v122);
        }
        LODWORD(v80) = releaseSkillIds->max_length;
        ++v82;
        v85 += 8LL;
        if ( (__int64)v82 >= (int)v80 )
          return;
      }
      v188 = sub_B5D6C8(Master_WarQuestSelectionMaster);
      sub_B5D668(v188, 0LL);
    }
  }
  else
  {
    v153 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
    *idList = v153;
    sub_B5D560((BattleServantConfConponent_o *)idList, (System_Int32_array **)v153, v154, v155, v156, v157, v158, v159);
    v160 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 0LL);
    *titleList = v160;
    sub_B5D560(
      (BattleServantConfConponent_o *)titleList,
      (System_Int32_array **)v160,
      v161,
      v162,
      v163,
      v164,
      v165,
      v166);
    v167 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 0LL);
    *explanationList = v167;
    sub_B5D560(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v167,
      v168,
      v169,
      v170,
      v171,
      v172,
      v173);
    v174 = (System_Boolean_array *)sub_B5D5DC(bool___TypeInfo, 0LL);
    *releaseStateList = v174;
    sub_B5D560(
      (BattleServantConfConponent_o *)releaseStateList,
      (System_Int32_array **)v174,
      v175,
      v176,
      v177,
      v178,
      v179,
      v180);
    v181 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
    *lvList = v181;
    sub_B5D560((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v181, v182, v183, v184, v185, v186, v187);
  }
}


System_String_o *__fastcall BattleServantConfConponent__GetHideStr(
        BattleServantConfConponent_o *this,
        int32_t hideStatus,
        System_String_o *defaultStr,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 *v12; // x8

  if ( (byte_42E6686 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, hideStatus, (_DWORD)defaultStr, method);
    sub_B5D5C4(&StringLiteral_11797/*"SERVANT_ATTRIBUTE_HIDE"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_11798/*"SERVANT_ATTRIBUTE_NONE"*/, v9, v10, v11);
    byte_42E6686 = 1;
  }
  if ( hideStatus == 2 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = &StringLiteral_11798/*"SERVANT_ATTRIBUTE_NONE"*/;
    return LocalizationManager__Get((System_String_o *)*v12, 0LL);
  }
  if ( hideStatus == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = &StringLiteral_11797/*"SERVANT_ATTRIBUTE_HIDE"*/;
    return LocalizationManager__Get((System_String_o *)*v12, 0LL);
  }
  return defaultStr;
}


int32_t __fastcall BattleServantConfConponent__GetPersonality(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *individualityArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  System_Collections_Generic_List_int__o *v38; // x19
  System_Int32_array *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x3
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v46; // x1
  __int64 v47; // x3
  __int64 v48; // x20
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  __int64 v53; // x3
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  int32_t v58; // w21
  __int64 v59; // x0
  __int64 v60; // x1
  double v61; // d0
  __int64 v62; // x8
  unsigned __int64 v63; // x10
  int *v64; // x11
  __int64 v65; // x0
  IndividualityPersonalityMaster_o *Master_WarQuestSelectionMaster; // x20

  if ( (byte_42E6688 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_IndividualityPersonalityMaster___,
      (_DWORD)individualityArray,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&System_Math_TypeInfo, v35, v36, v37);
    byte_42E6688 = 1;
  }
  v38 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v38,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !individualityArray )
    goto LABEL_50;
  klass = individualityArray->klass;
  if ( *(_WORD *)&individualityArray->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v43;
      p_offset += 4;
      if ( v43 >= *(unsigned __int16 *)&individualityArray->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(individualityArray, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v41);
  }
  v48 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          individualityArray,
          *(_QWORD *)(p_method + 8));
  if ( !v48 )
    sub_B5D69C(0LL, v46);
  while ( 1 )
  {
    v49 = *(_QWORD *)v48;
    if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
    {
      v50 = 0LL;
      v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v50;
        v51 += 4;
        if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
          goto LABEL_15;
      }
      v52 = v49 + 16LL * *v51 + 312;
    }
    else
    {
LABEL_15:
      v52 = sub_AF54C0(v48, System_Collections_IEnumerator_TypeInfo, 0LL, v47);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8)) & 1) == 0 )
      break;
    v54 = *(_QWORD *)v48;
    if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
    {
      v55 = 0LL;
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v56 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v55;
        v56 += 4;
        if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
          goto LABEL_22;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_22:
      v57 = sub_AF54C0(v48, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v53);
    }
    v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v48, *(_QWORD *)(v57 + 8));
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v61 = log10((double)v58);
    if ( v61 == INFINITY )
      v61 = -INFINITY;
    if ( (unsigned int)(v58 - 300) <= 0x63 && (int)v61 == 2 && (unsigned int)(v58 - 303) <= 5 && v58 != 307 )
    {
      if ( !v38 )
        sub_B5D69C(v59, v60);
      System_Collections_Generic_List_int___Add(
        v38,
        v58,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v62 = *(_QWORD *)v48;
  if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
  {
    v63 = 0LL;
    v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      ++v63;
      v64 += 4;
      if ( v63 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
        goto LABEL_39;
    }
    v65 = v62 + 16LL * *v64 + 312;
  }
  else
  {
LABEL_39:
    v65 = sub_AF54C0(v48, System_IDisposable_TypeInfo, 0LL, v53);
  }
  v39 = (System_Int32_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v48, *(_QWORD *)(v65 + 8));
  if ( !v38 )
    goto LABEL_50;
  if ( v38->fields._size >= 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (IndividualityPersonalityMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    v39 = System_Collections_Generic_List_int___ToArray(
            v38,
            (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( Master_WarQuestSelectionMaster )
      return IndividualityPersonalityMaster__GetPersonalityValue(Master_WarQuestSelectionMaster, v39, 0LL);
LABEL_50:
    sub_B5D69C(v39, v40);
  }
  return -1;
}


int32_t __fastcall BattleServantConfConponent__GetPolicy(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *individualityArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  System_Collections_Generic_List_int__o *v38; // x19
  System_Int32_array *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x3
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v46; // x1
  __int64 v47; // x3
  __int64 v48; // x20
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  __int64 v53; // x3
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  int32_t v58; // w21
  __int64 v59; // x0
  __int64 v60; // x1
  double v61; // d0
  unsigned int v62; // w8
  __int64 v63; // x8
  unsigned __int64 v64; // x10
  int *v65; // x11
  __int64 v66; // x0
  IndividualityPolicyMaster_o *Master_WarQuestSelectionMaster; // x20

  if ( (byte_42E6687 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_IndividualityPolicyMaster___,
      (_DWORD)individualityArray,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&System_Math_TypeInfo, v35, v36, v37);
    byte_42E6687 = 1;
  }
  v38 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v38,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !individualityArray )
    goto LABEL_50;
  klass = individualityArray->klass;
  if ( *(_WORD *)&individualityArray->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v43;
      p_offset += 4;
      if ( v43 >= *(unsigned __int16 *)&individualityArray->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(individualityArray, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v41);
  }
  v48 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          individualityArray,
          *(_QWORD *)(p_method + 8));
  if ( !v48 )
    sub_B5D69C(0LL, v46);
  while ( 1 )
  {
    v49 = *(_QWORD *)v48;
    if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
    {
      v50 = 0LL;
      v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v50;
        v51 += 4;
        if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
          goto LABEL_15;
      }
      v52 = v49 + 16LL * *v51 + 312;
    }
    else
    {
LABEL_15:
      v52 = sub_AF54C0(v48, System_Collections_IEnumerator_TypeInfo, 0LL, v47);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8)) & 1) == 0 )
      break;
    v54 = *(_QWORD *)v48;
    if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
    {
      v55 = 0LL;
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v56 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v55;
        v56 += 4;
        if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
          goto LABEL_22;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_22:
      v57 = sub_AF54C0(v48, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v53);
    }
    v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v48, *(_QWORD *)(v57 + 8));
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v61 = log10((double)v58);
    v62 = v58 - 300;
    if ( v61 == INFINITY )
      v61 = -INFINITY;
    if ( v62 <= 0x63 && (int)v61 == 2 && v62 <= 7 && ((1 << v62) & 0x87) != 0 )
    {
      if ( !v38 )
        sub_B5D69C(v59, v60);
      System_Collections_Generic_List_int___Add(
        v38,
        v58,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v63 = *(_QWORD *)v48;
  if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
  {
    v64 = 0LL;
    v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
    {
      ++v64;
      v65 += 4;
      if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
        goto LABEL_39;
    }
    v66 = v63 + 16LL * *v65 + 312;
  }
  else
  {
LABEL_39:
    v66 = sub_AF54C0(v48, System_IDisposable_TypeInfo, 0LL, v53);
  }
  v39 = (System_Int32_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v48, *(_QWORD *)(v66 + 8));
  if ( !v38 )
    goto LABEL_50;
  if ( v38->fields._size >= 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (IndividualityPolicyMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    v39 = System_Collections_Generic_List_int___ToArray(
            v38,
            (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( Master_WarQuestSelectionMaster )
      return IndividualityPolicyMaster__GetPolicyValue(Master_WarQuestSelectionMaster, v39, 0LL);
LABEL_50:
    sub_B5D69C(v39, v40);
  }
  return -1;
}


int32_t __fastcall BattleServantConfConponent__GetSpecialPassiveSkillStartIndex(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_List_int__o *skillIdList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  BattleServantConfConponent___c__DisplayClass81_0_o *v51; // x20
  int32_t result; // w0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v54; // x1
  struct BattleServantData_o *bsvtData; // x8
  ServantPassiveSkillMaster_o *v56; // x21
  __int64 v57; // x22
  __int64 v58; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x21
  BattleServantConfConponent___c_c *v60; // x8
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__81_0; // x22
  Il2CppObject *v63; // x23
  struct BattleServantConfConponent___c_StaticFields *v64; // x0
  System_Collections_Generic_IEnumerable_T__o *v65; // x22
  System_Collections_Generic_HashSet_int__o *v66; // x21
  System_Predicate_int__o *v67; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_42E6676 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___, (_DWORD)skillIdList, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_ServantPassiveSkillEntity__int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_ServantPassiveSkillEntity__int___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_ServantPassiveSkillEntity__int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716240, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__FindIndex__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v27, v28, v29);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_System_Predicate_int___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Predicate_int__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_BattleServantConfConponent___c__GetSpecialPassiveSkillStartIndex_b__81_0__, v39, v40, v41);
    sub_B5D5C4(
      &Method_BattleServantConfConponent___c__DisplayClass81_0__GetSpecialPassiveSkillStartIndex_b__1__,
      v42,
      v43,
      v44);
    sub_B5D5C4(&BattleServantConfConponent___c__DisplayClass81_0_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&BattleServantConfConponent___c_TypeInfo, v48, v49, v50);
    byte_42E6676 = 1;
  }
  v51 = (BattleServantConfConponent___c__DisplayClass81_0_o *)sub_B5D694(BattleServantConfConponent___c__DisplayClass81_0_TypeInfo);
  BattleServantConfConponent___c__DisplayClass81_0___ctor(v51, 0LL);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillIdList, 0LL) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_26;
  v56 = (ServantPassiveSkillMaster_o *)Master_WarQuestSelectionMaster;
  v58 = *(_QWORD *)&bsvtData->fields.svtId.fields.currentCryptoKey;
  v57 = *(_QWORD *)&bsvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v68.fields.currentCryptoKey = v58;
  *(_QWORD *)&v68.fields.fakeValue = v57;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                  v68,
                                                                  0LL);
  if ( !v56 )
    goto LABEL_26;
  v59 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantPassiveSkillMaster__EnumerateSpecialSkillsBySvtId(
                                                               v56,
                                                               (int32_t)Master_WarQuestSelectionMaster,
                                                               0LL);
  v60 = BattleServantConfConponent___c_TypeInfo;
  if ( (BYTE3(BattleServantConfConponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
    v60 = BattleServantConfConponent___c_TypeInfo;
  }
  static_fields = v60->static_fields;
  _9__81_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__81_0;
  if ( !_9__81_0 )
  {
    if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    }
    v63 = (Il2CppObject *)static_fields->__9;
    _9__81_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_ServantPassiveSkillEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__81_0,
      v63,
      Method_BattleServantConfConponent___c__GetSpecialPassiveSkillStartIndex_b__81_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_ServantPassiveSkillEntity__int___ctor__);
    v64 = BattleServantConfConponent___c_TypeInfo->static_fields;
    v64->__9__81_0 = (struct System_Func_ServantPassiveSkillEntity__int__o *)_9__81_0;
    sub_B5D560(&v64->__9__81_0);
  }
  v65 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                         v59,
                                                         (System_Func_TSource__TResult__o *)_9__81_0,
                                                         (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_ServantPassiveSkillEntity__int___);
  v66 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_38794568(
    v66,
    v65,
    (const MethodInfo_24FF548 *)Method_System_Collections_Generic_HashSet_int___ctor___68716240);
  if ( !v51
    || (v51->fields.passiveIdHashSet = v66,
        sub_B5D560(&v51->fields),
        v67 = (System_Predicate_int__o *)sub_B5D694(System_Predicate_int__TypeInfo),
        System_Predicate_int____ctor(
          v67,
          (Il2CppObject *)v51,
          Method_BattleServantConfConponent___c__DisplayClass81_0__GetSpecialPassiveSkillStartIndex_b__1__,
          (const MethodInfo_2B91B48 *)Method_System_Predicate_int___ctor__),
        !skillIdList) )
  {
LABEL_26:
    sub_B5D69C(Master_WarQuestSelectionMaster, v54);
  }
  result = System_Collections_Generic_List_int___FindIndex(
             skillIdList,
             (System_Predicate_T__o *)v67,
             (const MethodInfo_3084E80 *)Method_System_Collections_Generic_List_int__FindIndex__);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x1
  UnityEngine_Transform_o *transform; // x20
  int v21; // s1
  int v22; // s0
  int v23; // s2
  UnityEngine_Object_o *commandCard; // x20
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UILabel_o *havenotTdLabel; // x20
  UnityEngine_Object_o *classBoardSkillObj; // x20

  if ( (byte_42E6671 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_2487/*"BATTLE_HASNOT_TD"*/, v15, v16, v17);
    byte_42E6671 = 1;
  }
  this->fields.data = data;
  sub_B5D560(&this->fields.data);
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
  *(UnityEngine_Vector3_o *)(&v21 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
  if ( !transform )
    goto LABEL_34;
  v22 = 0;
  v23 = 0;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v21 - 1), 0LL);
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
                                               (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      sub_B5D69C(gameObject, v19);
    }
    BattleCommandComponent__SetDownloadEventSprite((BattleCommandComponent_o *)gameObject, 0LL);
  }
  havenotTdLabel = this->fields.havenotTdLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2487/*"BATTLE_HASNOT_TD"*/, 0LL);
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
        v19);
      goto LABEL_33;
    }
    goto LABEL_34;
  }
LABEL_33:
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0LL);
}


bool __fastcall BattleServantConfConponent__IsHideAttribute(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ServantLimitMaster_o *IsNotDisplayBattleAttribute; // x0
  const MethodInfo *v12; // x1
  struct BattleServantData_o *bsvtData; // x8
  BattleDeckServantData_o *deckSvt; // x0
  _BOOL4 v15; // w24
  BattleDeckServantData_o *v16; // x0
  _BOOL4 v17; // w25
  BattleDeckServantData_o *v18; // x0
  int32_t HideStateSubAttribute; // w0
  bool v20; // w26
  struct BattleServantData_o *v22; // x8
  ServantLimitMaster_o *v23; // x20
  __int64 v24; // x21
  __int64 v25; // x22
  const MethodInfo *v26; // x2
  int32_t v27; // w21
  struct BattleServantData_o *v28; // x8
  __int64 v29; // x22
  __int64 v30; // x23
  bool v31; // w20
  bool v32; // w21
  bool v33; // w8
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_42E6684 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    byte_42E6684 = 1;
  }
  entity = 0LL;
  IsNotDisplayBattleAttribute = (ServantLimitMaster_o *)ConstantMaster__IsNotDisplayBattleAttribute(0LL);
  if ( ((unsigned __int8)IsNotDisplayBattleAttribute & 1) != 0 )
    return 1;
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_48;
  deckSvt = bsvtData->fields.deckSvt;
  if ( deckSvt )
  {
    IsNotDisplayBattleAttribute = (ServantLimitMaster_o *)BattleDeckServantData__GetHideStatePolicy(deckSvt, 0LL);
    bsvtData = this->fields.bsvtData;
    v15 = (_DWORD)IsNotDisplayBattleAttribute == 3;
    if ( !bsvtData )
      goto LABEL_48;
  }
  else
  {
    v15 = 0;
  }
  v16 = bsvtData->fields.deckSvt;
  if ( v16 )
  {
    IsNotDisplayBattleAttribute = (ServantLimitMaster_o *)BattleDeckServantData__GetHideStatePersonality(v16, 0LL);
    bsvtData = this->fields.bsvtData;
    v17 = (_DWORD)IsNotDisplayBattleAttribute == 3;
    if ( !bsvtData )
      goto LABEL_48;
  }
  else
  {
    v17 = 0;
  }
  v18 = bsvtData->fields.deckSvt;
  if ( v18 )
  {
    HideStateSubAttribute = BattleDeckServantData__GetHideStateSubAttribute(v18, 0LL);
    v20 = HideStateSubAttribute == 3;
    if ( v15 && v17 && HideStateSubAttribute == 3 )
      return 1;
  }
  else
  {
    v20 = 0;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNotDisplayBattleAttribute = (ServantLimitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v22 = this->fields.bsvtData;
  if ( !v22 )
    goto LABEL_48;
  v23 = IsNotDisplayBattleAttribute;
  v25 = *(_QWORD *)&v22->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
  v24 = *(_QWORD *)&v22->fields._dispLimitCount_k__BackingField.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v35.fields.currentCryptoKey = v25;
  *(_QWORD *)&v35.fields.fakeValue = v24;
  IsNotDisplayBattleAttribute = (ServantLimitMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                          v35,
                                                          0LL);
  if ( (int)IsNotDisplayBattleAttribute <= 10 )
  {
    IsNotDisplayBattleAttribute = (ServantLimitMaster_o *)this->fields.bsvtData;
    if ( !IsNotDisplayBattleAttribute )
      goto LABEL_48;
    IsNotDisplayBattleAttribute = (ServantLimitMaster_o *)BattleServantData__getDispLimitCount(
                                                            (BattleServantData_o *)IsNotDisplayBattleAttribute,
                                                            1,
                                                            v26);
    v27 = (int)IsNotDisplayBattleAttribute;
  }
  else
  {
    v27 = 0;
  }
  v28 = this->fields.bsvtData;
  if ( !v28 )
    goto LABEL_48;
  v30 = *(_QWORD *)&v28->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&v28->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v36.fields.currentCryptoKey = v30;
  *(_QWORD *)&v36.fields.fakeValue = v29;
  IsNotDisplayBattleAttribute = (ServantLimitMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                          v36,
                                                          0LL);
  if ( !v23 )
LABEL_48:
    sub_B5D69C(IsNotDisplayBattleAttribute, v12);
  IsNotDisplayBattleAttribute = (ServantLimitMaster_o *)ServantLimitMaster__TryGetEntity(
                                                          v23,
                                                          &entity,
                                                          (int32_t)IsNotDisplayBattleAttribute,
                                                          v27,
                                                          0LL);
  if ( ((unsigned __int8)IsNotDisplayBattleAttribute & 1) == 0 )
  {
    v32 = 1;
    v31 = 1;
    if ( v20 )
      goto LABEL_41;
LABEL_45:
    IsNotDisplayBattleAttribute = (ServantLimitMaster_o *)this->fields.bsvtData;
    if ( !IsNotDisplayBattleAttribute )
      goto LABEL_48;
    v33 = BattleServantData__getAttri((BattleServantData_o *)IsNotDisplayBattleAttribute, v12) == 10;
    return v32 && v31 && v33;
  }
  if ( v15 )
  {
    v31 = 1;
    if ( !v17 )
      goto LABEL_37;
    goto LABEL_44;
  }
  if ( !entity )
    goto LABEL_48;
  v31 = entity->fields.policy == 0;
  if ( v17 )
  {
LABEL_44:
    v32 = 1;
    if ( v20 )
      goto LABEL_41;
    goto LABEL_45;
  }
LABEL_37:
  if ( !entity )
    goto LABEL_48;
  v32 = entity->fields.personality == 0;
  if ( !v20 )
    goto LABEL_45;
LABEL_41:
  v33 = 1;
  return v32 && v31 && v33;
}


bool __fastcall BattleServantConfConponent__IsLastOpenServantAbility(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E667E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2841/*"BattleServantDetailTab"*/, (_DWORD)method, v2, v3);
    byte_42E667E = 1;
  }
  return !UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_2841/*"BattleServantDetailTab"*/, 0LL)
      || !UnityEngine_PlayerPrefs__GetInt_35647620((System_String_o *)StringLiteral_2841/*"BattleServantDetailTab"*/, 0LL)
      || UnityEngine_PlayerPrefs__GetInt_35647620((System_String_o *)StringLiteral_2841/*"BattleServantDetailTab"*/, 0LL) != 1;
}


void __fastcall BattleServantConfConponent__OnClick(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct BattleCommandComponent_array *CommandCardList; // x8
  __int64 v21; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v23; // x23
  UnityEngine_Object_o *v24; // x20
  struct BattleCommandComponent_array *v25; // x8
  BattleServantConfConponent_CloseButtonCallBack_o *callback_close; // x0
  __int64 v27; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x0
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_42E667B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Clear__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__,
      v14,
      v15,
      v16);
    this = (BattleServantConfConponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42E667B = 1;
  }
  memset(&v36, 0, sizeof(v36));
  CommandCardList = v4->fields.CommandCardList;
  if ( !CommandCardList )
    goto LABEL_16;
  v21 = 4LL;
  while ( 1 )
  {
    max_length = CommandCardList->max_length;
    v23 = v21 - 4;
    if ( v21 - 4 >= (int)max_length )
      break;
    if ( v23 >= max_length )
      goto LABEL_29;
    v24 = (UnityEngine_Object_o *)*((_QWORD *)&CommandCardList->obj.klass + v21);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleServantConfConponent_o *)UnityEngine_Object__op_Equality(v24, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v25 = v4->fields.CommandCardList;
      if ( !v25 )
        goto LABEL_16;
      if ( v23 >= v25->max_length )
      {
LABEL_29:
        v35 = sub_B5D6C8(this);
        sub_B5D668(v35, 0LL);
      }
      this = (BattleServantConfConponent_o *)*((_QWORD *)&v25->obj.klass + v21);
      if ( !this )
        goto LABEL_16;
      BattleCommandComponent__ClearCardEffect((BattleCommandComponent_o *)this, 0LL);
    }
    CommandCardList = v4->fields.CommandCardList;
    ++v21;
    if ( !CommandCardList )
      goto LABEL_16;
  }
  callback_close = v4->fields.callback_close;
  if ( callback_close )
    BattleServantConfConponent_CloseButtonCallBack__Invoke(callback_close, 0LL);
  this = (BattleServantConfConponent_o *)v4->fields.equipPossessionSkillInfoComponentList;
  if ( !this )
    goto LABEL_16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__) )
  {
    if ( !v36.fields.current )
      sub_B5D69C(0LL, v27);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v36.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
  this = (BattleServantConfConponent_o *)v4->fields.equipPossessionSkillInfoComponentList;
  if ( !this )
LABEL_16:
    sub_B5D69C(this, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Clear__);
  v4->fields.bsvtData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.bsvtData, 0LL, v29, v30, v31, v32, v33, v34);
}


void __fastcall BattleServantConfConponent__OnClickServantAbility(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_GameObject_o *BattleServantAbilityObj; // x0

  v4 = this;
  if ( (byte_42E667F & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17186/*"btn_bg_on_1"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17181/*"btn_bg_off_1"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17301/*"btn_txt_servant_states_off"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_2841/*"BattleServantDetailTab"*/, v14, v15, v16);
    this = (BattleServantConfConponent_o *)sub_B5D5C4(&StringLiteral_17299/*"btn_txt_servant_property_on"*/, v17, v18, v19);
    byte_42E667F = 1;
  }
  if ( !v4->fields.isOpenAfter )
  {
    if ( BattleServantConfConponent__IsLastOpenServantAbility(this, method) )
      return;
    if ( !v4->fields.isOpenAfter )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
    }
  }
  BattleServantAbilityObj = v4->fields.BattleServantAbilityObj;
  v4->fields.isOpenAfter = 0;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL);
  BattleServantAbilityObj = v4->fields.AbillityTab;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL);
  BattleServantAbilityObj = v4->fields.AbillityBtnBg;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v4->fields.AbillityBtn;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17186/*"btn_bg_on_1"*/, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v4->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17299/*"btn_txt_servant_property_on"*/, 0LL);
  BattleServantAbilityObj = v4->fields.BattleServantStateObj;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL);
  BattleServantAbilityObj = v4->fields.StateTab;
  if ( !BattleServantAbilityObj
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL),
        (BattleServantAbilityObj = v4->fields.StateBtnBg) == 0LL)
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v4->fields.StateBtn) == 0LL)
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17181/*"btn_bg_off_1"*/, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v4->fields.StateName) == 0LL) )
  {
LABEL_21:
    sub_B5D69C(BattleServantAbilityObj, method);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17301/*"btn_txt_servant_states_off"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_2841/*"BattleServantDetailTab"*/, 0, 0LL);
}


void __fastcall BattleServantConfConponent__OnClickServantState(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_GameObject_o *BattleServantAbilityObj; // x0

  v4 = this;
  if ( (byte_42E6680 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17186/*"btn_bg_on_1"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17302/*"btn_txt_servant_states_on"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17298/*"btn_txt_servant_property_off"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17181/*"btn_bg_off_1"*/, v14, v15, v16);
    this = (BattleServantConfConponent_o *)sub_B5D5C4(&StringLiteral_2841/*"BattleServantDetailTab"*/, v17, v18, v19);
    byte_42E6680 = 1;
  }
  if ( !v4->fields.isOpenAfter )
  {
    if ( !BattleServantConfConponent__IsLastOpenServantAbility(this, method) )
      return;
    if ( !v4->fields.isOpenAfter )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
    }
  }
  BattleServantAbilityObj = v4->fields.BattleServantAbilityObj;
  v4->fields.isOpenAfter = 0;
  if ( !BattleServantAbilityObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL);
  BattleServantAbilityObj = v4->fields.AbillityTab;
  if ( !BattleServantAbilityObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL);
  BattleServantAbilityObj = v4->fields.AbillityBtnBg;
  if ( !BattleServantAbilityObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v4->fields.AbillityBtn;
  if ( !BattleServantAbilityObj )
    goto LABEL_22;
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17181/*"btn_bg_off_1"*/, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v4->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_22;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17298/*"btn_txt_servant_property_off"*/, 0LL);
  BattleServantAbilityObj = v4->fields.BattleServantStateObj;
  if ( !BattleServantAbilityObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL);
  BattleServantAbilityObj = v4->fields.StateTab;
  if ( !BattleServantAbilityObj
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL),
        (BattleServantAbilityObj = v4->fields.StateBtnBg) == 0LL)
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v4->fields.StateBtn) == 0LL)
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17186/*"btn_bg_on_1"*/, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v4->fields.StateName) == 0LL) )
  {
LABEL_22:
    sub_B5D69C(BattleServantAbilityObj, method);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17302/*"btn_txt_servant_states_on"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_2841/*"BattleServantDetailTab"*/, 1, 0LL);
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
    sub_B5D69C(0LL, call);
  BattleViewBufflistComponent__setHide(buffListView, 0, 0LL);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  BattleServantConfConponent__ResetScroll(this, v6);
}


void __fastcall BattleServantConfConponent__ResetScroll(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *BattleServantAbilityObj; // x20
  UnityEngine_Object_o *BattleServantStateObj; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *buffListView; // x0
  UnityEngine_Object_o *AbillityScrollView; // x20
  UnityEngine_Object_o *AbillityScrollBarWiget; // x20
  UnityEngine_Object_o *StateScrollView; // x20
  UnityEngine_Object_o *StateScrollBarWiget; // x20

  if ( (byte_42E667C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E667C = 1;
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
      sub_B5D69C(buffListView, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantConfConponent__SetAppendSkillList(
        BattleServantConfConponent_o *this,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  UnityEngine_Object_o *AppendSkillObj; // x21
  const MethodInfo *v34; // x1
  UnityEngine_GameObject_o *AppendSkillTitle; // x0
  UnityEngine_Object_o *AppendSkillListParent; // x21
  UnityEngine_Object_o *AppendSkillInfoPrefab; // x21
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  struct BattleServantData_o *bsvtData; // x8
  __int128 v40; // q1
  int64_t v41; // x0
  struct BattleServantData_o *v42; // x8
  UnityEngine_GameObject_o *v43; // x20
  _BOOL8 IsNpc; // x0
  const MethodInfo *v45; // x3
  ServantAppendPassiveSkillMaster_o *Master_WarQuestSelectionMaster; // x21
  System_Int32_array *v47; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x27
  int32_t v49; // w21
  System_Int32_array *v50; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x22
  unsigned __int64 v52; // x21
  int32_t v53; // w26
  float v54; // s8
  unsigned __int64 max_length; // x9
  int32_t v56; // w23
  System_String_o *v57; // x25
  System_String_o *v58; // x24
  _BOOL4 v59; // w20
  int32_t v60; // w24
  UnityEngine_GameObject_o *v61; // x26
  struct UnityEngine_GameObject_o *v62; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x22
  UnityEngine_Transform_o *v64; // x27
  UnityEngine_Transform_o *transform; // x27
  int v66; // s0
  UnityEngine_Transform_o *v69; // x27
  int v70; // s0
  srcLineSprite_o *Component_srcLineSprite; // x26
  int32_t v75; // w6
  const MethodInfo *v76; // x7
  struct TweenScale_o *mcTweenScaleP; // x8
  __int64 v78; // x0
  System_Int32_array *releaseSkillLvs; // [xsp+0h] [xbp-100h]
  DataMasterBase_WarMaster__WarEntity__int__o *v80; // [xsp+10h] [xbp-F0h]
  System_String_o *explanationMessage; // [xsp+18h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+40h] [xbp-C0h]
  WarEntity_o *entity; // [xsp+68h] [xbp-98h] BYREF
  System_Int32_array *lvList; // [xsp+70h] [xbp-90h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+78h] [xbp-88h] BYREF
  System_String_array *explanationList; // [xsp+80h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+88h] [xbp-78h] BYREF
  System_Int32_array *idList[2]; // [xsp+90h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6677 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___,
      (_DWORD)battleInfoData,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_19934/*"img_txt_extraskill"*/, v30, v31, v32);
    byte_42E6677 = 1;
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
  if ( UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL) && !BattleServantConfConponent__SetAtlas(this, v34) )
    return;
  AppendSkillTitle = (UnityEngine_GameObject_o *)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_104;
  UISprite__set_atlas((UISprite_o *)AppendSkillTitle, this->fields.BattleAssetUIAtlas, 0LL);
  AppendSkillTitle = (UnityEngine_GameObject_o *)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_104;
  UISprite__set_spriteName((UISprite_o *)AppendSkillTitle, (System_String_o *)StringLiteral_19934/*"img_txt_extraskill"*/, 0LL);
  AppendSkillTitle = (UnityEngine_GameObject_o *)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_104;
  AppendSkillTitle = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, void *))AppendSkillTitle->klass[2]._1.typeMetadataHandle)(
                                                   AppendSkillTitle,
                                                   AppendSkillTitle->klass[2]._1.interopData);
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_104;
  v40 = *(_OWORD *)&bsvtData->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&bsvtData->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v83.fields.fakeValue = v40;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v82 = v83;
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v82, 0LL);
  AppendSkillTitle = (UnityEngine_GameObject_o *)BattleInfoData__getUserServantFromID(battleInfoData, v41, 0LL);
  if ( !AppendSkillTitle )
    return;
  v42 = this->fields.bsvtData;
  if ( !v42 )
    goto LABEL_104;
  v43 = AppendSkillTitle;
  IsNpc = Follower__IsNpc(v42->fields.followerType, 0LL);
  if ( IsNpc )
  {
    BattleServantConfConponent__GetAppendSkillInfo(
      (BattleServantConfConponent_o *)IsNpc,
      idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      (System_Int32_array *)v43[20].monitor,
      *(System_Int32_array **)&v43[20].fields.m_CachedPtr,
      (const MethodInfo *)releaseSkillLvs);
  }
  else
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantAppendPassiveSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    AppendSkillTitle = (UnityEngine_GameObject_o *)UserServantEntity__getSvtId((UserServantEntity_o *)v43, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_104;
    ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_26883456(
      Master_WarQuestSelectionMaster,
      idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      (int32_t)AppendSkillTitle,
      (System_Int32_array *)v43[20].monitor,
      *(System_Int32_array **)&v43[20].fields.m_CachedPtr,
      0LL);
  }
  AppendSkillTitle = (UnityEngine_GameObject_o *)this->fields.bsvtData;
  if ( !AppendSkillTitle )
    goto LABEL_104;
  v47 = BattleServantData__FilterDisplayingSkillIdArray((BattleServantData_o *)AppendSkillTitle, idList[0], 1, v45);
  if ( !v47 )
    return;
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)v47;
  if ( !*(_QWORD *)&v47->max_length )
    return;
  AppendSkillTitle = this->fields.AppendSkillObj;
  if ( !AppendSkillTitle )
    goto LABEL_104;
  UnityEngine_GameObject__SetActive(AppendSkillTitle, 1, 0LL);
  AppendSkillTitle = this->fields.AppendSkillListParent;
  if ( !AppendSkillTitle )
    goto LABEL_104;
  v49 = 0;
  while ( 1 )
  {
    AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(AppendSkillTitle, 0LL);
    if ( !AppendSkillTitle )
      goto LABEL_104;
    if ( v49 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AppendSkillTitle, 0LL) )
      break;
    AppendSkillTitle = this->fields.AppendSkillListParent;
    if ( AppendSkillTitle )
    {
      AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(AppendSkillTitle, 0LL);
      if ( AppendSkillTitle )
      {
        AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                         (UnityEngine_Transform_o *)AppendSkillTitle,
                                                         v49,
                                                         0LL);
        if ( AppendSkillTitle )
        {
          AppendSkillTitle = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)AppendSkillTitle, 0LL);
          if ( AppendSkillTitle )
          {
            UnityEngine_GameObject__SetActive(AppendSkillTitle, 0, 0LL);
            AppendSkillTitle = this->fields.AppendSkillListParent;
            ++v49;
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
  AppendSkillTitle = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
  v50 = idList[0];
  entity = 0LL;
  if ( !idList[0] )
LABEL_104:
    sub_B5D69C(AppendSkillTitle, v34);
  v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)AppendSkillTitle;
  v52 = 0LL;
  v53 = 0;
  v54 = 0.0;
  v80 = (DataMasterBase_WarMaster__WarEntity__int__o *)AppendSkillTitle;
  while ( 1 )
  {
    max_length = v50->max_length;
    if ( (__int64)v52 >= (int)max_length )
      break;
    if ( v52 >= max_length )
      goto LABEL_107;
    AppendSkillTitle = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Contains_int_(
                                                     v48,
                                                     v50->m_Items[v52 + 1],
                                                     (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
    if ( ((unsigned __int8)AppendSkillTitle & 1) != 0 )
    {
      if ( !idList[0] )
        goto LABEL_104;
      if ( v52 >= idList[0]->max_length )
        goto LABEL_107;
      if ( !lvList )
        goto LABEL_104;
      if ( v52 >= lvList->max_length )
        goto LABEL_107;
      v56 = idList[0]->m_Items[v52 + 1];
      if ( v56 >= 1 )
      {
        if ( !v51 )
          goto LABEL_104;
        AppendSkillTitle = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                         v51,
                                                         &entity,
                                                         v56,
                                                         (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)AppendSkillTitle & 1) == 0 )
          return;
        if ( !titleList )
          goto LABEL_104;
        if ( v52 >= titleList->max_length )
          goto LABEL_107;
        if ( !explanationList )
          goto LABEL_104;
        if ( v52 >= explanationList->max_length )
          goto LABEL_107;
        if ( !releaseStateList )
          goto LABEL_104;
        if ( v52 >= releaseStateList->max_length )
        {
LABEL_107:
          v78 = sub_B5D6C8(AppendSkillTitle);
          sub_B5D668(v78, 0LL);
        }
        AppendSkillTitle = this->fields.AppendSkillListParent;
        if ( !AppendSkillTitle )
          goto LABEL_104;
        v57 = titleList->m_Items[v52];
        v58 = explanationList->m_Items[v52];
        v59 = releaseStateList->m_Items[v52 + 4];
        AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(AppendSkillTitle, 0LL);
        if ( !AppendSkillTitle )
          goto LABEL_104;
        explanationMessage = v58;
        if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AppendSkillTitle, 0LL) <= v53 )
        {
          v60 = v53;
          v62 = this->fields.AppendSkillInfoPrefab;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v63 = v48;
          AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                           (UnityEngine_UI_Dropdown_DropdownItem_o *)v62,
                                                           (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !AppendSkillTitle )
            goto LABEL_104;
          v61 = AppendSkillTitle;
          UnityEngine_GameObject__SetActive(AppendSkillTitle, 1, 0LL);
          AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v61, 0LL);
          if ( !this->fields.AppendSkillListParent )
            goto LABEL_104;
          v64 = (UnityEngine_Transform_o *)AppendSkillTitle;
          AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                           this->fields.AppendSkillListParent,
                                                           0LL);
          if ( !v64 )
            goto LABEL_104;
          UnityEngine_Transform__set_parent(v64, (UnityEngine_Transform_o *)AppendSkillTitle, 0LL);
          AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v61, 0LL);
          if ( !AppendSkillTitle )
            goto LABEL_104;
          v91.fields.y = -v54;
          v91.fields.x = 0.0;
          v91.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AppendSkillTitle, v91, 0LL);
          transform = UnityEngine_GameObject__get_transform(v61, 0LL);
          *(UnityEngine_Vector3_o *)&v66 = UnityEngine_Vector3__get_one(0LL);
          if ( !transform )
            goto LABEL_104;
          UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v66, 0LL);
          v69 = UnityEngine_GameObject__get_transform(v61, 0LL);
          *(UnityEngine_Quaternion_o *)&v70 = UnityEngine_Quaternion__get_identity(0LL);
          if ( !v69 )
            goto LABEL_104;
          UnityEngine_Transform__set_localRotation(v69, *(UnityEngine_Quaternion_o *)&v70, 0LL);
          v48 = v63;
          v51 = v80;
        }
        else
        {
          AppendSkillTitle = this->fields.AppendSkillListParent;
          if ( !AppendSkillTitle )
            goto LABEL_104;
          AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(AppendSkillTitle, 0LL);
          if ( !AppendSkillTitle )
            goto LABEL_104;
          v60 = v53;
          AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                           (UnityEngine_Transform_o *)AppendSkillTitle,
                                                           v53,
                                                           0LL);
          if ( !AppendSkillTitle )
            goto LABEL_104;
          AppendSkillTitle = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)AppendSkillTitle, 0LL);
          if ( !AppendSkillTitle )
            goto LABEL_104;
          v61 = AppendSkillTitle;
          UnityEngine_GameObject__SetActive(AppendSkillTitle, 1, 0LL);
          AppendSkillTitle = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v61, 0LL);
          if ( !AppendSkillTitle )
            goto LABEL_104;
          v90.fields.y = -v54;
          v90.fields.x = 0.0;
          v90.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AppendSkillTitle, v90, 0LL);
        }
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v61,
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
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
            v60 + 1,
            v56,
            v57,
            explanationMessage,
            v59,
            v75,
            v76);
        }
        else if ( !Component_srcLineSprite )
        {
          goto LABEL_104;
        }
        mcTweenScaleP = Component_srcLineSprite->fields.mcTweenScaleP;
        if ( !mcTweenScaleP )
          goto LABEL_104;
        v54 = v54
            + (float)((float)(HIDWORD(mcTweenScaleP->fields.mTable) - Component_srcLineSprite->fields.miLineW) + 110.0);
        v53 = v60 + 1;
      }
    }
    v50 = idList[0];
    ++v52;
    if ( !idList[0] )
      goto LABEL_104;
  }
  this->fields.AppendSkillOffset = -(float)(v54 + 1.0);
}


bool __fastcall BattleServantConfConponent__SetAtlas(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  AssetData_o *AssetStorage; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20

  if ( (byte_42E6681 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_2808/*"Battle/Common"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_2825/*"BattleAssetUIAtlas"*/, v17, v18, v19);
    byte_42E6681 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2808/*"Battle/Common"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_14;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             AssetStorage,
                                                             (System_String_o *)StringLiteral_2825/*"BattleAssetUIAtlas"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      sub_B5D560(&this->fields.BattleAssetUIAtlas);
      return 1;
    }
LABEL_14:
    sub_B5D69C(AssetStorage, v21);
  }
  return 0;
}


void __fastcall BattleServantConfConponent__SetAttribute(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  long double v4; // q8
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  UnityEngine_Object_o *attributeLabel; // x20
  const MethodInfo *v70; // x1
  __int64 buffListView; // x0
  const MethodInfo *v72; // x1
  bool IsHideAttribute; // w0
  UnityEngine_Object_o *attributeObj; // x20
  UnityEngine_Object_o *AbillityScrollView; // x20
  struct UIScrollView_o *v76; // x8
  UnityEngine_Object_o *npRoot; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int v79; // s0
  UnityEngine_Object_o *v80; // x20
  struct UIScrollView_o *v81; // x8
  UnityEngine_Object_o *v82; // x20
  UnityEngine_GameObject_o *v83; // x0
  int v84; // s0
  struct UIScrollView_o *v85; // x8
  struct UIScrollView_o *v86; // x8
  __int64 v87; // x8
  struct UIScrollView_o *v88; // x8
  __int64 v89; // x8
  struct UIScrollView_o *v90; // x8
  struct UIScrollView_o *v91; // x8
  __int64 v92; // x8
  struct UIScrollView_o *v93; // x8
  __int64 v94; // x8
  UnityEngine_Object_o *BattleAssetUIAtlas; // x20
  struct BattleServantData_o *bsvtData; // x8
  int32_t v97; // w20
  struct BattleServantData_o *v98; // x8
  int32_t v99; // w22
  struct BattleServantData_o *v100; // x8
  ServantLimitMaster_o *v101; // x21
  __int64 v102; // x23
  __int64 v103; // x24
  const MethodInfo *v104; // x2
  struct BattleServantData_o *v105; // x8
  __int64 v106; // x20
  __int64 v107; // x22
  const MethodInfo *v108; // x2
  int32_t v109; // w20
  int32_t v110; // w3
  ServantLimitMaster_o *v111; // x0
  int32_t v112; // w2
  struct BattleServantData_o *v113; // x8
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  struct BattleServantData_o *v115; // x8
  struct ServantLimitAddEntity_o *v116; // x8
  struct BattleServantData_o *v117; // x8
  __int64 v118; // x20
  __int64 v119; // x22
  int32_t policy; // w8
  struct BattleServantData_o *v121; // x8
  BattleDeckServantData_o *deckSvt; // x0
  int32_t v123; // w23
  BattleDeckServantData_o *v124; // x0
  int32_t v125; // w21
  BattleDeckServantData_o *v126; // x0
  _BOOL4 v127; // w9
  _BOOL4 v128; // w10
  int32_t v129; // w20
  int v130; // w27
  int v131; // w24
  bool v132; // w25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v133; // x22
  System_String_o *OverwritePolicy; // x24
  System_String_o *IsNullOrEmpty; // x0
  const MethodInfo *v136; // x3
  System_String_o *v137; // x0
  System_String_o *v138; // x24
  System_String_o *OverwritePersonality; // x23
  System_String_o *v140; // x0
  const MethodInfo *v141; // x3
  System_String_o *v142; // x0
  System_String_o *v143; // x23
  System_String_o *v144; // x0
  Il2CppObject *v145; // x21
  System_String_o *OverwriteSubAttribute; // x22
  System_String_o *v147; // x0
  const MethodInfo *v148; // x3
  System_String_o *v149; // x0
  System_String_o *v150; // x22
  System_String_o *HideStr; // x20
  UILabel_o *v152; // x19
  System_String_o *v153; // x0
  Il2CppObject *v154; // x1
  bool v155; // w0
  System_String_o *v156; // x0
  int32_t Attri; // [xsp+Ch] [xbp-64h] BYREF
  ServantLimitEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  int32_t personality; // [xsp+18h] [xbp-58h] BYREF
  int32_t v160; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16

  if ( (byte_42E6685 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_IndividualityPolicyMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(
      &Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int__GetEntity__,
      v15,
      v16,
      v17);
    sub_B5D5C4(
      &Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int__GetEntity__,
      v18,
      v19,
      v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&string_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_11885/*"SERVANT_PERSONALITY_"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_11799/*"SERVANT_ATTRIBUTE_SPLIT"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_20491/*"line_whiteAlpha_Noblur"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_12200/*"SERVANT_SUB_ATTRIBUTE_"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_11795/*"SERVANT_ATTRIBUTE_FORMAT_ATTRIBUTE"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_11796/*"SERVANT_ATTRIBUTE_FORMAT_SUB_ATTRIBUTE"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_11886/*"SERVANT_POLICY_"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_1/*""*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_11794/*"SERVANT_ATTRIBUTE_FORMAT"*/, v66, v67, v68);
    byte_42E6685 = 1;
  }
  v160 = 0;
  personality = 0;
  entity = 0LL;
  Attri = 0;
  attributeLabel = (UnityEngine_Object_o *)this->fields.attributeLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(attributeLabel, 0LL, 0LL) )
  {
    buffListView = (__int64)this->fields.attributeLabel;
    if ( !buffListView )
      goto LABEL_209;
    UILabel__set_text((UILabel_o *)buffListView, string_TypeInfo->static_fields->Empty, 0LL);
    IsHideAttribute = BattleServantConfConponent__IsHideAttribute(this, v72);
    attributeObj = (UnityEngine_Object_o *)this->fields.attributeObj;
    if ( IsHideAttribute )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(attributeObj, 0LL, 0LL) )
      {
        buffListView = (__int64)this->fields.attributeObj;
        if ( !buffListView )
          goto LABEL_209;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffListView, 0, 0LL);
      }
      AbillityScrollView = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      buffListView = UnityEngine_Object__op_Inequality(AbillityScrollView, 0LL, 0LL);
      if ( (buffListView & 1) == 0 )
        goto LABEL_60;
      v76 = this->fields.AbillityScrollView;
      if ( !v76 )
        goto LABEL_209;
      buffListView = *(_QWORD *)&v76->fields.mPlane.fields.m_Normal.fields.x;
      if ( !buffListView )
        goto LABEL_209;
      if ( UIPanel__get_height((UIPanel_o *)buffListView, 0LL) > 430.0 )
        goto LABEL_60;
      if ( !this->fields.isEquip )
        goto LABEL_49;
      npRoot = (UnityEngine_Object_o *)this->fields.npRoot;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(npRoot, 0LL, 0LL) )
      {
        buffListView = (__int64)this->fields.AbillityScrollView;
        if ( !buffListView )
          goto LABEL_209;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffListView, 0LL);
        v79 = 1110966272;
      }
      else
      {
LABEL_49:
        buffListView = (__int64)this->fields.AbillityScrollView;
        if ( !buffListView )
          goto LABEL_209;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffListView, 0LL);
        v79 = -1034158080;
      }
      GameObjectExtensions__SetLocalPositionY(gameObject, *(float *)&v79, 0LL);
      v85 = this->fields.AbillityScrollView;
      if ( v85 )
      {
        buffListView = *(_QWORD *)&v85->fields.mPlane.fields.m_Normal.fields.x;
        if ( buffListView )
        {
          (*(void (__fastcall **)(__int64, _QWORD, float, float, float, float))(*(_QWORD *)buffListView + 600LL))(
            buffListView,
            *(_QWORD *)(*(_QWORD *)buffListView + 608LL),
            0.0,
            -127.0,
            670.0,
            460.0);
          GameObjectExtensions__SetLocalPositionY(this->fields.abillityScrollBarObject, -227.0, 0LL);
          v86 = this->fields.AbillityScrollView;
          if ( v86 )
          {
            v87 = *(_QWORD *)&v86->fields.showScrollBars;
            if ( v87 )
            {
              buffListView = *(_QWORD *)(v87 + 40);
              if ( buffListView )
              {
                UIWidget__set_height((UIWidget_o *)buffListView, 448, 0LL);
                v88 = this->fields.AbillityScrollView;
                if ( v88 )
                {
                  v89 = *(_QWORD *)&v88->fields.showScrollBars;
                  if ( v89 )
                  {
                    buffListView = *(_QWORD *)(v89 + 48);
                    if ( buffListView )
                    {
                      UIWidget__set_height((UIWidget_o *)buffListView, 460, 0LL);
LABEL_60:
                      buffListView = (__int64)this->fields.buffListView;
                      if ( buffListView )
                      {
                        BattleViewBufflistComponent__UpdateBuffListScrollView(
                          (BattleViewBufflistComponent_o *)buffListView,
                          1,
                          0LL);
                        buffListView = (__int64)this->fields.attributeBaseSprite;
                        if ( buffListView )
                        {
                          buffListView = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)buffListView,
                                                    0LL);
                          if ( buffListView )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffListView, 0, 0LL);
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
LABEL_209:
      sub_B5D69C(buffListView, v70);
    }
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(attributeObj, 0LL, 0LL) )
    {
      buffListView = (__int64)this->fields.attributeObj;
      if ( !buffListView )
        goto LABEL_209;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffListView, 1, 0LL);
    }
    v80 = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    buffListView = UnityEngine_Object__op_Inequality(v80, 0LL, 0LL);
    if ( (buffListView & 1) != 0 )
    {
      v81 = this->fields.AbillityScrollView;
      if ( !v81 )
        goto LABEL_209;
      buffListView = *(_QWORD *)&v81->fields.mPlane.fields.m_Normal.fields.x;
      if ( !buffListView )
        goto LABEL_209;
      LODWORD(v4) = 1138163712;
      if ( UIPanel__get_height((UIPanel_o *)buffListView, 0LL) > 430.0 )
      {
        if ( !this->fields.isEquip )
          goto LABEL_64;
        v82 = (UnityEngine_Object_o *)this->fields.npRoot;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(v82, 0LL, 0LL) )
        {
          buffListView = (__int64)this->fields.AbillityScrollView;
          if ( !buffListView )
            goto LABEL_209;
          v83 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffListView, 0LL);
          v84 = 1110966272;
        }
        else
        {
LABEL_64:
          buffListView = (__int64)this->fields.AbillityScrollView;
          if ( !buffListView )
            goto LABEL_209;
          v83 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffListView, 0LL);
          v84 = -1034158080;
        }
        GameObjectExtensions__SetLocalPositionY(v83, *(float *)&v84, 0LL);
        v90 = this->fields.AbillityScrollView;
        if ( !v90 )
          goto LABEL_209;
        buffListView = *(_QWORD *)&v90->fields.mPlane.fields.m_Normal.fields.x;
        if ( !buffListView )
          goto LABEL_209;
        (*(void (__fastcall **)(__int64, _QWORD, float, float, float, long double))(*(_QWORD *)buffListView + 600LL))(
          buffListView,
          *(_QWORD *)(*(_QWORD *)buffListView + 608LL),
          0.0,
          -127.0,
          670.0,
          v4);
        GameObjectExtensions__SetLocalPositionY(this->fields.abillityScrollBarObject, -238.0, 0LL);
        v91 = this->fields.AbillityScrollView;
        if ( !v91 )
          goto LABEL_209;
        v92 = *(_QWORD *)&v91->fields.showScrollBars;
        if ( !v92 )
          goto LABEL_209;
        buffListView = *(_QWORD *)(v92 + 40);
        if ( !buffListView )
          goto LABEL_209;
        UIWidget__set_height((UIWidget_o *)buffListView, 430, 0LL);
        v93 = this->fields.AbillityScrollView;
        if ( !v93 )
          goto LABEL_209;
        v94 = *(_QWORD *)&v93->fields.showScrollBars;
        if ( !v94 )
          goto LABEL_209;
        buffListView = *(_QWORD *)(v94 + 48);
        if ( !buffListView )
          goto LABEL_209;
        UIWidget__set_height((UIWidget_o *)buffListView, 430, 0LL);
      }
    }
    buffListView = (__int64)this->fields.buffListView;
    if ( !buffListView )
      goto LABEL_209;
    BattleViewBufflistComponent__UpdateBuffListScrollView((BattleViewBufflistComponent_o *)buffListView, 0, 0LL);
    BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL)
      || BattleServantConfConponent__SetAtlas(this, v70) )
    {
      buffListView = (__int64)this->fields.attributeBaseSprite;
      if ( !buffListView )
        goto LABEL_209;
      buffListView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffListView, 0LL);
      if ( !buffListView )
        goto LABEL_209;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffListView, 1, 0LL);
      buffListView = (__int64)this->fields.attributeBaseSprite;
      if ( !buffListView )
        goto LABEL_209;
      UISprite__set_atlas((UISprite_o *)buffListView, this->fields.BattleAssetUIAtlas, 0LL);
      buffListView = (__int64)this->fields.attributeBaseSprite;
      if ( !buffListView )
        goto LABEL_209;
      UISprite__set_spriteName((UISprite_o *)buffListView, (System_String_o *)StringLiteral_20491/*"line_whiteAlpha_Noblur"*/, 0LL);
      buffListView = (__int64)this->fields.attributeBaseSprite;
      if ( !buffListView )
        goto LABEL_209;
      buffListView = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)buffListView + 952LL))(
                       buffListView,
                       1LL,
                       *(_QWORD *)(*(_QWORD *)buffListView + 960LL));
      bsvtData = this->fields.bsvtData;
      if ( !bsvtData )
        goto LABEL_209;
      buffListView = (__int64)bsvtData->fields.deckSvt;
      if ( buffListView )
      {
        buffListView = BattleDeckServantData__GetChangePolicy((BattleDeckServantData_o *)buffListView, 0LL);
        v97 = buffListView;
        v160 = buffListView;
        if ( (buffListView & 0x80000000) != 0 )
          goto LABEL_97;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        buffListView = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
        if ( !buffListView )
          goto LABEL_209;
        buffListView = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)buffListView,
                                  v97,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int__GetEntity__);
        if ( !buffListView )
          goto LABEL_209;
        v97 = *(_DWORD *)(buffListView + 20);
      }
      else
      {
        v97 = -1;
      }
      v160 = v97;
LABEL_97:
      v98 = this->fields.bsvtData;
      if ( !v98 )
        goto LABEL_209;
      buffListView = (__int64)v98->fields.deckSvt;
      if ( buffListView )
      {
        buffListView = BattleDeckServantData__GetChangePersonality((BattleDeckServantData_o *)buffListView, 0LL);
        v99 = buffListView;
        personality = buffListView;
        if ( (buffListView & 0x80000000) != 0 )
          goto LABEL_108;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        buffListView = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
        if ( !buffListView )
          goto LABEL_209;
        buffListView = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)buffListView,
                                  v99,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int__GetEntity__);
        if ( !buffListView )
          goto LABEL_209;
        v99 = *(_DWORD *)(buffListView + 20);
      }
      else
      {
        v99 = -1;
      }
      personality = v99;
LABEL_108:
      if ( ((v99 | v97) & 0x80000000) != 0 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        buffListView = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitMaster___);
        v100 = this->fields.bsvtData;
        if ( !v100 )
          goto LABEL_209;
        v101 = (ServantLimitMaster_o *)buffListView;
        v103 = *(_QWORD *)&v100->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
        v102 = *(_QWORD *)&v100->fields._dispLimitCount_k__BackingField.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v161.fields.currentCryptoKey = v103;
        *(_QWORD *)&v161.fields.fakeValue = v102;
        buffListView = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v161, 0LL);
        if ( (int)buffListView >= 11 )
        {
          if ( (v97 & 0x80000000) != 0 )
          {
            v113 = this->fields.bsvtData;
            if ( !v113 )
              goto LABEL_209;
            svtlimitaddent = v113->fields.svtlimitaddent;
            if ( !svtlimitaddent )
              goto LABEL_209;
            buffListView = BattleServantConfConponent__GetPolicy(
                             (BattleServantConfConponent_o *)buffListView,
                             (System_Collections_Generic_IEnumerable_int__o *)svtlimitaddent->fields.individuality,
                             v104);
            v160 = buffListView;
          }
          if ( (v99 & 0x80000000) != 0 )
          {
            v115 = this->fields.bsvtData;
            if ( !v115 )
              goto LABEL_209;
            v116 = v115->fields.svtlimitaddent;
            if ( !v116 )
              goto LABEL_209;
            buffListView = BattleServantConfConponent__GetPersonality(
                             (BattleServantConfConponent_o *)buffListView,
                             (System_Collections_Generic_IEnumerable_int__o *)v116->fields.individuality,
                             v104);
            personality = buffListView;
          }
          v117 = this->fields.bsvtData;
          if ( !v117 )
            goto LABEL_209;
          v119 = *(_QWORD *)&v117->fields.svtId.fields.currentCryptoKey;
          v118 = *(_QWORD *)&v117->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v163.fields.currentCryptoKey = v119;
          *(_QWORD *)&v163.fields.fakeValue = v118;
          buffListView = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v163, 0LL);
          if ( !v101 )
            goto LABEL_209;
          v112 = buffListView;
          v111 = v101;
          v110 = 0;
        }
        else
        {
          v105 = this->fields.bsvtData;
          if ( !v105 )
            goto LABEL_209;
          v107 = *(_QWORD *)&v105->fields.svtId.fields.currentCryptoKey;
          v106 = *(_QWORD *)&v105->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v162.fields.currentCryptoKey = v107;
          *(_QWORD *)&v162.fields.fakeValue = v106;
          buffListView = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v162, 0LL);
          if ( !this->fields.bsvtData )
            goto LABEL_209;
          v109 = buffListView;
          buffListView = BattleServantData__getDispLimitCount(this->fields.bsvtData, 1, v108);
          if ( !v101 )
            goto LABEL_209;
          v110 = buffListView;
          v111 = v101;
          v112 = v109;
        }
        buffListView = ServantLimitMaster__TryGetEntity(v111, &entity, v112, v110, 0LL);
        policy = v160;
        if ( entity )
        {
          if ( (v160 & 0x80000000) != 0 )
          {
            policy = entity->fields.policy;
            v160 = policy;
          }
          if ( (personality & 0x80000000) != 0 )
            personality = entity->fields.personality;
        }
        if ( (policy & 0x80000000) != 0 )
          v160 = 0;
        if ( (personality & 0x80000000) != 0 )
          personality = 0;
      }
      v121 = this->fields.bsvtData;
      if ( !v121 )
        goto LABEL_209;
      deckSvt = v121->fields.deckSvt;
      if ( deckSvt )
      {
        buffListView = BattleDeckServantData__GetHideStatePolicy(deckSvt, 0LL);
        v121 = this->fields.bsvtData;
        if ( !v121 )
          goto LABEL_209;
        v123 = buffListView;
      }
      else
      {
        v123 = -1;
      }
      v124 = v121->fields.deckSvt;
      if ( v124 )
      {
        buffListView = BattleDeckServantData__GetHideStatePersonality(v124, 0LL);
        v121 = this->fields.bsvtData;
        if ( !v121 )
          goto LABEL_209;
        v125 = buffListView;
      }
      else
      {
        v125 = -1;
      }
      v126 = v121->fields.deckSvt;
      if ( v126 )
      {
        buffListView = BattleDeckServantData__GetHideStateSubAttribute(v126, 0LL);
        v121 = this->fields.bsvtData;
        v127 = personality != 0;
        v128 = v125 != 3;
        if ( !v121 )
          goto LABEL_209;
        v129 = buffListView;
      }
      else
      {
        v129 = -1;
        v127 = personality != 0;
        v128 = v125 != 3;
      }
      v130 = v128 && v127;
      v131 = v160;
      v132 = BattleServantData__getAttri(v121, v70) != 10;
      v133 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v133,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
      if ( v123 != 3 && v131 )
      {
        buffListView = (__int64)this->fields.bsvtData;
        if ( !buffListView )
          goto LABEL_209;
        OverwritePolicy = BattleServantData__GetOverwritePolicy((BattleServantData_o *)buffListView, v70);
        IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(OverwritePolicy, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          v137 = System_Int32__ToString((int32_t)&v160, 0LL);
          v138 = System_String__Concat_44577788((System_String_o *)StringLiteral_11886/*"SERVANT_POLICY_"*/, v137, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          IsNullOrEmpty = LocalizationManager__Get(v138, 0LL);
          OverwritePolicy = IsNullOrEmpty;
        }
        buffListView = (__int64)BattleServantConfConponent__GetHideStr(
                                  (BattleServantConfConponent_o *)IsNullOrEmpty,
                                  v123,
                                  OverwritePolicy,
                                  v136);
        if ( !v133 )
          goto LABEL_209;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v133,
          (EventMissionProgressRequest_Argument_ProgressData_o *)buffListView,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      }
      if ( v130 )
      {
        buffListView = (__int64)this->fields.bsvtData;
        if ( !buffListView )
          goto LABEL_209;
        OverwritePersonality = BattleServantData__GetOverwritePersonality((BattleServantData_o *)buffListView, v70);
        v140 = (System_String_o *)System_String__IsNullOrEmpty(OverwritePersonality, 0LL);
        if ( ((unsigned __int8)v140 & 1) != 0 )
        {
          v142 = System_Int32__ToString((int32_t)&personality, 0LL);
          v143 = System_String__Concat_44577788((System_String_o *)StringLiteral_11885/*"SERVANT_PERSONALITY_"*/, v142, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v140 = LocalizationManager__Get(v143, 0LL);
          OverwritePersonality = v140;
        }
        buffListView = (__int64)BattleServantConfConponent__GetHideStr(
                                  (BattleServantConfConponent_o *)v140,
                                  v125,
                                  OverwritePersonality,
                                  v141);
        if ( !v133 )
          goto LABEL_209;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v133,
          (EventMissionProgressRequest_Argument_ProgressData_o *)buffListView,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v144 = LocalizationManager__Get((System_String_o *)StringLiteral_11799/*"SERVANT_ATTRIBUTE_SPLIT"*/, 0LL);
      v145 = (Il2CppObject *)System_String__Join_44633232(
                               v144,
                               (System_Collections_Generic_IEnumerable_string__o *)v133,
                               0LL);
      if ( v129 != 3 && v132 )
      {
        buffListView = (__int64)this->fields.bsvtData;
        if ( !buffListView )
          goto LABEL_209;
        OverwriteSubAttribute = BattleServantData__GetOverwriteSubAttribute((BattleServantData_o *)buffListView, v70);
        v147 = (System_String_o *)System_String__IsNullOrEmpty(OverwriteSubAttribute, 0LL);
        if ( ((unsigned __int8)v147 & 1) != 0 )
        {
          buffListView = (__int64)this->fields.bsvtData;
          if ( !buffListView )
            goto LABEL_209;
          Attri = BattleServantData__getAttri((BattleServantData_o *)buffListView, v70);
          v149 = System_Int32__ToString((int32_t)&Attri, 0LL);
          v150 = System_String__Concat_44577788((System_String_o *)StringLiteral_12200/*"SERVANT_SUB_ATTRIBUTE_"*/, v149, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v147 = LocalizationManager__Get(v150, 0LL);
          OverwriteSubAttribute = v147;
        }
        HideStr = BattleServantConfConponent__GetHideStr(
                    (BattleServantConfConponent_o *)v147,
                    v129,
                    OverwriteSubAttribute,
                    v148);
      }
      else
      {
        HideStr = (System_String_o *)StringLiteral_1/*""*/;
      }
      if ( System_String__IsNullOrEmpty((System_String_o *)v145, 0LL) )
      {
        v152 = this->fields.attributeLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v153 = LocalizationManager__Get((System_String_o *)StringLiteral_11796/*"SERVANT_ATTRIBUTE_FORMAT_SUB_ATTRIBUTE"*/, 0LL);
        v154 = (Il2CppObject *)HideStr;
      }
      else
      {
        v155 = System_String__IsNullOrEmpty(HideStr, 0LL);
        v152 = this->fields.attributeLabel;
        if ( !v155 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v156 = LocalizationManager__Get((System_String_o *)StringLiteral_11794/*"SERVANT_ATTRIBUTE_FORMAT"*/, 0LL);
          buffListView = (__int64)System_String__Format_44573324(v156, v145, (Il2CppObject *)HideStr, 0LL);
          if ( !v152 )
            goto LABEL_209;
          goto LABEL_203;
        }
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v153 = LocalizationManager__Get((System_String_o *)StringLiteral_11795/*"SERVANT_ATTRIBUTE_FORMAT_ATTRIBUTE"*/, 0LL);
        v154 = v145;
      }
      buffListView = (__int64)System_String__Format(v153, v154, 0LL);
      if ( !v152 )
        goto LABEL_209;
LABEL_203:
      UILabel__set_text(v152, (System_String_o *)buffListView, 0LL);
    }
  }
}


void __fastcall BattleServantConfConponent__SetClassBoardSkillList(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *classBoardSkillObj; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  BattleServantConfWindowPassiveSkillListComponent_o *v11; // x0
  struct BattleServantData_o *bsvtData; // x8
  UnityEngine_Object_o *BattleAssetUIAtlas; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  if ( (byte_42E6683 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_20730/*"menu_txt_class_score"*/, v5, v6, v7);
    byte_42E6683 = 1;
  }
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0LL, 0LL) )
  {
    v11 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
    if ( !v11 )
      goto LABEL_21;
    BattleServantConfWindowPassiveSkillListComponent__SetActive(v11, 0, v10);
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
      v11 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
      if ( v11 )
      {
        ((void (__fastcall *)(BattleServantConfWindowPassiveSkillListComponent_o *, struct UIAtlas_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._5_SetSkillTitle.method)(
          v11,
          this->fields.BattleAssetUIAtlas,
          StringLiteral_20730/*"menu_txt_class_score"*/,
          v11->klass->vtable._6_SetSkillInfoObject.methodPtr);
        v11 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
        if ( v11 )
        {
          BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
            (BattleServantClassBoardSkillEffectListComponent_o *)v11,
            this->fields.bsvtData,
            v14);
          v11 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
          if ( v11 )
          {
            BattleServantConfWindowPassiveSkillListComponent__SetActive(v11, 1, v15);
            return;
          }
        }
      }
LABEL_21:
      sub_B5D69C(v11, v9);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantConfConponent__SetClassSkillList(
        BattleServantConfConponent_o *this,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  UnityEngine_Object_o *ClassSkillObj; // x21
  const MethodInfo *v46; // x1
  UnityEngine_GameObject_o *bsvtData; // x0
  UnityEngine_Object_o *ClassSkillListParent; // x21
  UnityEngine_Object_o *ClassSkillInfoPrefab; // x21
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  struct BattleServantData_o *v51; // x8
  __int128 v52; // q1
  int64_t v53; // x0
  BattleUserServantData_o *UserServantFromID; // x0
  const MethodInfo *v55; // x3
  BattleUserServantData_o *v56; // x21
  System_Collections_Generic_IEnumerable_T__o *v57; // x22
  System_Collections_Generic_List_int__o *v58; // x20
  BattleServantData_o *v59; // x22
  const MethodInfo *v60; // x3
  System_Collections_ICollection_o *v61; // x21
  const MethodInfo *v62; // x2
  int32_t v63; // w21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x28
  __int64 size; // x8
  SkillLvMaster_o *v66; // x25
  int32_t v67; // w22
  float v68; // s8
  __int64 v69; // x21
  int32_t v70; // w24
  System_String_o *v71; // x25
  System_String_o *v72; // x26
  UnityEngine_GameObject_o *v73; // x27
  struct UnityEngine_GameObject_o *v74; // x27
  DataMasterBase_WarMaster__WarEntity__int__o *v75; // x20
  UnityEngine_Transform_o *v76; // x28
  UnityEngine_Transform_o *transform; // x28
  int v78; // s0
  UnityEngine_Transform_o *v81; // x28
  int v82; // s0
  srcLineSprite_o *Component_srcLineSprite; // x27
  int32_t v87; // w6
  const MethodInfo *v88; // x7
  struct TweenScale_o *mcTweenScaleP; // x8
  __int64 v90; // x9
  System_Collections_Generic_List_int__o *v91; // [xsp+0h] [xbp-C0h]
  SkillLvMaster_o *v92; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+30h] [xbp-90h]
  SkillLvEntity_o *v95; // [xsp+50h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6675 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, (_DWORD)battleInfoData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__InsertRange__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v33, v34, v35);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_19921/*"img_txt_classskill"*/, v42, v43, v44);
    byte_42E6675 = 1;
  }
  v95 = 0LL;
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
        if ( !BattleServantData__IsHideClassSkillNpcFollower((BattleServantData_o *)bsvtData, v46) )
        {
          this->fields.ClassSkillOffset = 0.0;
          BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL)
            || BattleServantConfConponent__SetAtlas(this, v46) )
          {
            bsvtData = (UnityEngine_GameObject_o *)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_100;
            UISprite__set_atlas((UISprite_o *)bsvtData, this->fields.BattleAssetUIAtlas, 0LL);
            bsvtData = (UnityEngine_GameObject_o *)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_100;
            UISprite__set_spriteName((UISprite_o *)bsvtData, (System_String_o *)StringLiteral_19921/*"img_txt_classskill"*/, 0LL);
            bsvtData = (UnityEngine_GameObject_o *)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_100;
            bsvtData = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, void *))bsvtData->klass[2]._1.typeMetadataHandle)(
                                                     bsvtData,
                                                     bsvtData->klass[2]._1.interopData);
            v51 = this->fields.bsvtData;
            if ( !v51 )
              goto LABEL_100;
            v52 = *(_OWORD *)&v51->fields.userSvtId.fields.fakeValue;
            *(_OWORD *)&v94.fields.currentCryptoKey = *(_OWORD *)&v51->fields.userSvtId.fields.currentCryptoKey;
            *(_OWORD *)&v94.fields.fakeValue = v52;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v93 = v94;
            v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v93, 0LL);
            UserServantFromID = BattleInfoData__getUserServantFromID(battleInfoData, v53, 0LL);
            if ( !UserServantFromID )
              return;
            v56 = UserServantFromID;
            bsvtData = (UnityEngine_GameObject_o *)this->fields.bsvtData;
            if ( !bsvtData )
              goto LABEL_100;
            v57 = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__FilterDisplayingSkillIdArray(
                                                                   (BattleServantData_o *)bsvtData,
                                                                   v56->fields.classPassive,
                                                                   1,
                                                                   v55);
            v58 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor_50870440(
              v58,
              v57,
              (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
            v59 = this->fields.bsvtData;
            bsvtData = (UnityEngine_GameObject_o *)BattleUserServantData__getAddPassiveSkill(v56, 0LL);
            if ( !v59 )
              goto LABEL_100;
            v61 = (System_Collections_ICollection_o *)BattleServantData__FilterDisplayingSkillIdArray(
                                                        v59,
                                                        (System_Int32_array *)bsvtData,
                                                        0,
                                                        v60);
            bsvtData = (UnityEngine_GameObject_o *)BasicHelper__IsNullOrEmpty(v61, 0LL);
            if ( ((unsigned __int8)bsvtData & 1) != 0 )
            {
              if ( !v58 )
                goto LABEL_100;
            }
            else
            {
              bsvtData = (UnityEngine_GameObject_o *)BattleServantConfConponent__GetSpecialPassiveSkillStartIndex(
                                                       this,
                                                       v58,
                                                       v62);
              if ( !v58 )
                goto LABEL_100;
              System_Collections_Generic_List_int___InsertRange(
                v58,
                (int32_t)bsvtData,
                (System_Collections_Generic_IEnumerable_T__o *)v61,
                (const MethodInfo_3085874 *)Method_System_Collections_Generic_List_int__InsertRange__);
            }
            if ( v58->fields._size >= 1 )
            {
              bsvtData = this->fields.ClassSkillObj;
              if ( bsvtData )
              {
                UnityEngine_GameObject__SetActive(bsvtData, 1, 0LL);
                bsvtData = this->fields.ClassSkillListParent;
                if ( bsvtData )
                {
                  v63 = 0;
                  while ( 1 )
                  {
                    bsvtData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(bsvtData, 0LL);
                    if ( !bsvtData )
                      goto LABEL_100;
                    if ( v63 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0LL) )
                      break;
                    bsvtData = this->fields.ClassSkillListParent;
                    if ( bsvtData )
                    {
                      bsvtData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(bsvtData, 0LL);
                      if ( bsvtData )
                      {
                        bsvtData = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                                 (UnityEngine_Transform_o *)bsvtData,
                                                                 v63,
                                                                 0LL);
                        if ( bsvtData )
                        {
                          bsvtData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bsvtData, 0LL);
                          if ( bsvtData )
                          {
                            UnityEngine_GameObject__SetActive(bsvtData, 0, 0LL);
                            bsvtData = this->fields.ClassSkillListParent;
                            ++v63;
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
                  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
                  entity = 0LL;
                  bsvtData = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
                  v95 = 0LL;
                  LODWORD(size) = v58->fields._size;
                  if ( (int)size >= 1 )
                  {
                    v66 = (SkillLvMaster_o *)bsvtData;
                    v67 = 0;
                    v68 = 0.0;
                    v69 = 8LL;
                    v91 = v58;
                    v92 = (SkillLvMaster_o *)bsvtData;
                    while ( 1 )
                    {
                      if ( v69 - 8 >= (unsigned __int64)(unsigned int)size )
                        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                      v70 = *((_DWORD *)&v58->fields._items->obj.klass + v69);
                      if ( v70 >= 1 )
                      {
                        if ( !Master_WarQuestSelectionMaster )
                          goto LABEL_100;
                        bsvtData = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                 Master_WarQuestSelectionMaster,
                                                                 &entity,
                                                                 v70,
                                                                 (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                        if ( ((unsigned __int8)bsvtData & 1) == 0 )
                          return;
                        if ( !v66 )
                          goto LABEL_100;
                        if ( !SkillLvMaster__TryGetEntity(v66, &v95, v70, 1, 0LL) )
                          return;
                        bsvtData = (UnityEngine_GameObject_o *)entity;
                        if ( !entity )
                          goto LABEL_100;
                        bsvtData = (UnityEngine_GameObject_o *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                        if ( !v95 )
                          goto LABEL_100;
                        v71 = (System_String_o *)bsvtData;
                        bsvtData = (UnityEngine_GameObject_o *)SkillLvEntity__getDetail_26810736(v95, 1, 0, 0LL);
                        if ( !this->fields.ClassSkillListParent )
                          goto LABEL_100;
                        v72 = (System_String_o *)bsvtData;
                        bsvtData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                 this->fields.ClassSkillListParent,
                                                                 0LL);
                        if ( !bsvtData )
                          goto LABEL_100;
                        if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0LL) <= v67 )
                        {
                          v74 = this->fields.ClassSkillInfoPrefab;
                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          }
                          v75 = Master_WarQuestSelectionMaster;
                          bsvtData = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)v74,
                                                                   (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                          if ( !bsvtData )
                            goto LABEL_100;
                          v73 = bsvtData;
                          UnityEngine_GameObject__SetActive(bsvtData, 1, 0LL);
                          bsvtData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v73, 0LL);
                          if ( !this->fields.ClassSkillListParent )
                            goto LABEL_100;
                          v76 = (UnityEngine_Transform_o *)bsvtData;
                          bsvtData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                   this->fields.ClassSkillListParent,
                                                                   0LL);
                          if ( !v76 )
                            goto LABEL_100;
                          UnityEngine_Transform__set_parent(v76, (UnityEngine_Transform_o *)bsvtData, 0LL);
                          bsvtData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v73, 0LL);
                          if ( !bsvtData )
                            goto LABEL_100;
                          v98.fields.y = -v68;
                          v98.fields.x = 0.0;
                          v98.fields.z = 0.0;
                          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v98, 0LL);
                          transform = UnityEngine_GameObject__get_transform(v73, 0LL);
                          *(UnityEngine_Vector3_o *)&v78 = UnityEngine_Vector3__get_one(0LL);
                          if ( !transform )
                            goto LABEL_100;
                          UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v78, 0LL);
                          v81 = UnityEngine_GameObject__get_transform(v73, 0LL);
                          *(UnityEngine_Quaternion_o *)&v82 = UnityEngine_Quaternion__get_identity(0LL);
                          if ( !v81 )
                            goto LABEL_100;
                          UnityEngine_Transform__set_localRotation(v81, *(UnityEngine_Quaternion_o *)&v82, 0LL);
                          Master_WarQuestSelectionMaster = v75;
                          v58 = v91;
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
                                                                   v67,
                                                                   0LL);
                          if ( !bsvtData )
                            goto LABEL_100;
                          bsvtData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bsvtData, 0LL);
                          if ( !bsvtData )
                            goto LABEL_100;
                          v73 = bsvtData;
                          UnityEngine_GameObject__SetActive(bsvtData, 1, 0LL);
                          bsvtData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v73, 0LL);
                          if ( !bsvtData )
                            goto LABEL_100;
                          v97.fields.y = -v68;
                          v97.fields.x = 0.0;
                          v97.fields.z = 0.0;
                          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v97, 0LL);
                        }
                        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v73,
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
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
                            v69 - 7,
                            v70,
                            v71,
                            v72,
                            1,
                            v87,
                            v88);
                        }
                        else if ( !Component_srcLineSprite )
                        {
                          goto LABEL_100;
                        }
                        mcTweenScaleP = Component_srcLineSprite->fields.mcTweenScaleP;
                        if ( !mcTweenScaleP )
                          goto LABEL_100;
                        v66 = v92;
                        ++v67;
                        v68 = v68
                            + (float)((float)(HIDWORD(mcTweenScaleP->fields.mTable)
                                            - Component_srcLineSprite->fields.miLineW)
                                    + 110.0);
                      }
                      size = v58->fields._size;
                      v90 = v69 - 7;
                      ++v69;
                      if ( v90 >= size )
                        goto LABEL_98;
                    }
                  }
                  v68 = 0.0;
LABEL_98:
                  this->fields.ClassSkillOffset = -(float)(v68 + 1.0);
                  return;
                }
              }
LABEL_100:
              sub_B5D69C(bsvtData, v46);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleServantData_o *bsvtData; // x0
  System_Int32_array *CommandCodeIdsEX; // x0
  __int64 v10; // x1
  struct BattleCommandComponent_array *CommandCardList; // x8
  System_Int32_array *v12; // x20
  unsigned __int64 v13; // x21
  int32_t *v14; // x23
  unsigned __int64 max_length; // x9
  BattleCommandComponent_o *v16; // x22
  const MethodInfo *v17; // x2
  struct BattleCommandData_o *data; // x8
  __int64 v19; // x0
  UIWidget_o *component; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E6679 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_TryGetComponent_UIWidget___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E6679 = 1;
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
      sub_B5D69C(CommandCodeIdsEX, v10);
    v12 = CommandCodeIdsEX;
    v13 = 0LL;
    v14 = &CommandCodeIdsEX->m_Items[1];
    while ( 1 )
    {
      max_length = CommandCardList->max_length;
      if ( (__int64)v13 >= (int)max_length )
        break;
      if ( v13 >= max_length )
        goto LABEL_26;
      v16 = CommandCardList->m_Items[v13];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, 0LL, 0LL);
      if ( ((unsigned __int8)CommandCodeIdsEX & 1) == 0 )
      {
        if ( !v16 )
          goto LABEL_24;
        BattleCommandComponent__Initialize(v16, 0LL);
        v16->fields.isCodeTextureView = 1;
        BattleCommandComponent__setData_18880188(v16, this->fields.bsvtData, v13, 0LL);
        CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Component__TryGetComponent_UIWidget_(
                                                   (UnityEngine_Component_o *)this,
                                                   &component,
                                                   (const MethodInfo_1ADE84C *)Method_UnityEngine_Component_TryGetComponent_UIWidget___);
        if ( ((unsigned __int8)CommandCodeIdsEX & 1) != 0 )
        {
          if ( !component )
            goto LABEL_24;
          BattleCommandComponent__setDepth(v16, component->fields.mDepth + 1, 0LL);
        }
        BattleCommandComponent__SetDownloadEventSprite(v16, 0LL);
        if ( !v12 )
          goto LABEL_24;
        if ( v13 >= v12->max_length
          || (BattleCommandComponent__SetCommandCodeView_18885764(v16, v14[v13], 0LL), v13 >= v12->max_length)
          || (BattleCommandComponent__SetLockInfo(v16, v14[v13] == -1, 0LL),
              BattleServantConfConponent__SetCommandCardTypeChangeBuff(this, v16, v17),
              BattleCommandComponent__HidePowerUpValueLabelActive(v16, this->fields.isCommandCardUnderIcon, 0LL),
              BattleCommandComponent__ResetCardBuffIconAlphaAnim(v16, 0LL),
              BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(v16, 0LL),
              v13 >= v12->max_length) )
        {
LABEL_26:
          v19 = sub_B5D6C8(CommandCodeIdsEX);
          sub_B5D668(v19, 0LL);
        }
        data = v16->fields.data;
        if ( !data )
          goto LABEL_24;
        data->fields.commandCodeId = v14[v13];
        BattleCommandComponent__UpdateCommandCardEffect(v16, 0LL);
        BattleCommandComponent__ChangeCardEffectMaskForInside(v16, 0LL);
      }
      CommandCardList = this->fields.CommandCardList;
      ++v13;
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
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  UnityEngine_Object_o *CommandCodeListParent; // x20
  UnityEngine_Object_o *CommandCodeInfoPrefab; // x20
  const MethodInfo *v46; // x1
  UnityEngine_GameObject_o *transform; // x0
  int32_t v48; // w20
  BattleServantConfConponent___c_c *v49; // x8
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x9
  System_Predicate_int__o *_9__85_0; // x21
  Il2CppObject *v52; // x22
  struct BattleServantConfConponent___c_StaticFields *v53; // x0
  int v54; // w21
  System_Int32_array *v55; // x20
  __int64 v56; // x8
  int32_t v57; // w22
  unsigned __int64 v58; // x27
  float v59; // s8
  int32_t v60; // w23
  System_Int32_array *v61; // x8
  unsigned __int64 v62; // x20
  unsigned __int64 max_length; // x9
  UnityEngine_GameObject_o *v64; // x24
  struct UnityEngine_GameObject_o *v65; // x24
  UnityEngine_Transform_o *v66; // x25
  UnityEngine_Transform_o *v67; // x25
  int v68; // s0
  UnityEngine_Transform_o *v71; // x25
  int v72; // s0
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UILabel_o *NoCommandCodeLabel; // x19
  __int64 v78; // x0
  System_Int32_array *array; // [xsp+0h] [xbp-80h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-78h]
  System_String_array *explanationList; // [xsp+10h] [xbp-70h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E667A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_FindIndex_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Predicate_int___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Predicate_int__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__85_0__, v35, v36, v37);
    sub_B5D5C4(&BattleServantConfConponent___c_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_2456/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/, v41, v42, v43);
    byte_42E667A = 1;
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
  v48 = 0;
  while ( 1 )
  {
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_91;
    if ( v48 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) )
      break;
    transform = this->fields.CommandCodeListParent;
    if ( transform )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( transform )
      {
        transform = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                  (UnityEngine_Transform_o *)transform,
                                                  v48,
                                                  0LL);
        if ( transform )
        {
          transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          if ( transform )
          {
            UnityEngine_GameObject__SetActive(transform, 0, 0LL);
            transform = this->fields.CommandCodeListParent;
            ++v48;
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
  array = BattleServantData__GetCommandCodeIds((BattleServantData_o *)transform, v46);
  v49 = BattleServantConfConponent___c_TypeInfo;
  if ( (BYTE3(BattleServantConfConponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
    v49 = BattleServantConfConponent___c_TypeInfo;
  }
  static_fields = v49->static_fields;
  _9__85_0 = static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    }
    v52 = (Il2CppObject *)static_fields->__9;
    _9__85_0 = (System_Predicate_int__o *)sub_B5D694(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__85_0,
      v52,
      Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__85_0__,
      (const MethodInfo_2B91B48 *)Method_System_Predicate_int___ctor__);
    v53 = BattleServantConfConponent___c_TypeInfo->static_fields;
    v53->__9__85_0 = _9__85_0;
    sub_B5D560(&v53->__9__85_0);
  }
  transform = (UnityEngine_GameObject_o *)System_Array__FindIndex_int_(
                                            array,
                                            (System_Predicate_T__o *)_9__85_0,
                                            (const MethodInfo_1FC0954 *)Method_System_Array_FindIndex_int___);
  if ( !this->fields.NoCommandCodeLabel
    || (v54 = (int)transform,
        (transform = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.NoCommandCodeLabel,
                       0LL)) == 0LL) )
  {
LABEL_91:
    sub_B5D69C(transform, v46);
  }
  if ( v54 == -1 )
  {
    UnityEngine_GameObject__SetActive(transform, 1, 0LL);
    NoCommandCodeLabel = this->fields.NoCommandCodeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2456/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/, 0LL);
    if ( NoCommandCodeLabel )
    {
      UILabel__set_text(NoCommandCodeLabel, (System_String_o *)transform, 0LL);
      return;
    }
    goto LABEL_91;
  }
  UnityEngine_GameObject__SetActive(transform, 0, 0LL);
  transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_91;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)transform,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_91;
  transform = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)transform,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  v55 = array;
  if ( !array )
    goto LABEL_91;
  v56 = *(_QWORD *)&array->max_length;
  if ( (int)v56 >= 1 )
  {
    v57 = 0;
    v58 = 0LL;
    v59 = 0.0;
    do
    {
      if ( v58 >= (unsigned int)v56 )
      {
LABEL_92:
        v78 = sub_B5D6C8(transform);
        sub_B5D668(v78, 0LL);
      }
      v60 = v55->m_Items[v58 + 1];
      if ( v60 >= 1 )
      {
        transform = (UnityEngine_GameObject_o *)MasterData_WarQuestSelectionMaster;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_91;
        transform = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  MasterData_WarQuestSelectionMaster,
                                                  v60,
                                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( transform )
        {
          CommandCodeEntity__GetSkillInfo((CommandCodeEntity_o *)transform, &idList, &titleList, &explanationList, 0LL);
          v61 = idList;
          if ( !idList )
            goto LABEL_91;
          v62 = 0LL;
          while ( 1 )
          {
            max_length = v61->max_length;
            if ( (__int64)v62 >= (int)max_length )
              break;
            if ( v62 >= max_length )
              goto LABEL_92;
            if ( v61->m_Items[v62 + 1] >= 1 )
            {
              transform = this->fields.CommandCodeListParent;
              if ( !transform )
                goto LABEL_91;
              transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
              if ( !transform )
                goto LABEL_91;
              if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) <= v57 )
              {
                v65 = this->fields.CommandCodeInfoPrefab;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v65,
                                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                if ( !transform )
                  goto LABEL_91;
                v64 = transform;
                UnityEngine_GameObject__SetActive(transform, 1, 0LL);
                transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v64, 0LL);
                if ( !this->fields.CommandCodeListParent )
                  goto LABEL_91;
                v66 = (UnityEngine_Transform_o *)transform;
                transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                          this->fields.CommandCodeListParent,
                                                          0LL);
                if ( !v66 )
                  goto LABEL_91;
                UnityEngine_Transform__set_parent(v66, (UnityEngine_Transform_o *)transform, 0LL);
                transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v64, 0LL);
                if ( !transform )
                  goto LABEL_91;
                v84.fields.x = 0.0;
                v84.fields.z = 0.0;
                v84.fields.y = v59;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v84, 0LL);
                v67 = UnityEngine_GameObject__get_transform(v64, 0LL);
                *(UnityEngine_Vector3_o *)&v68 = UnityEngine_Vector3__get_one(0LL);
                if ( !v67 )
                  goto LABEL_91;
                UnityEngine_Transform__set_localScale(v67, *(UnityEngine_Vector3_o *)&v68, 0LL);
                v71 = UnityEngine_GameObject__get_transform(v64, 0LL);
                *(UnityEngine_Quaternion_o *)&v72 = UnityEngine_Quaternion__get_identity(0LL);
                if ( !v71 )
                  goto LABEL_91;
                UnityEngine_Transform__set_localRotation(v71, *(UnityEngine_Quaternion_o *)&v72, 0LL);
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
                                                          v57,
                                                          0LL);
                if ( !transform )
                  goto LABEL_91;
                transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
                if ( !transform )
                  goto LABEL_91;
                v64 = transform;
                UnityEngine_GameObject__SetActive(transform, 1, 0LL);
              }
              Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v64,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___);
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
                if ( v62 >= idList->max_length )
                  goto LABEL_92;
                if ( !titleList )
                  goto LABEL_91;
                if ( v62 >= titleList->max_length )
                  goto LABEL_92;
                if ( !explanationList )
                  goto LABEL_91;
                if ( v62 >= explanationList->max_length )
                  goto LABEL_92;
                if ( !Component_srcLineSprite )
                  goto LABEL_91;
                CommandCodeSkillInfo__Set(
                  (CommandCodeSkillInfo_o *)Component_srcLineSprite,
                  v60,
                  idList->m_Items[v62 + 1],
                  titleList->m_Items[v62],
                  explanationList->m_Items[v62],
                  v62 == 0,
                  0LL);
              }
              v61 = idList;
              ++v57;
              v59 = v59 + flt_32A0760[v62 == 0];
            }
            ++v62;
            if ( !v61 )
              goto LABEL_91;
          }
          v55 = array;
        }
      }
      LODWORD(v56) = v55->max_length;
      ++v58;
    }
    while ( (__int64)v58 < (int)v56 );
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantConfConponent__StartOpenTab(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E667D & 1) == 0 )
  {
    sub_B5D5C4(&BattleServantConfConponent__StartOpenTab_d__92_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E667D = 1;
  }
  v5 = sub_B5D694(BattleServantConfConponent__StartOpenTab_d__92_TypeInfo);
  BattleServantConfConponent__StartOpenTab_d__92___ctor((BattleServantConfConponent__StartOpenTab_d__92_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_String_o *__fastcall BattleServantConfConponent__get_closeBtnPath(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x19
  bool v14; // w0
  __int64 *v15; // x8

  if ( (byte_42E6682 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17694/*"close"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_14683/*"Top/close"*/, v8, v9, v10);
    byte_42E6682 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B5D69C(0LL, v12);
  v13 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_14683/*"Top/close"*/, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
  v15 = &StringLiteral_17694/*"close"*/;
  if ( v14 )
    v15 = &StringLiteral_14683/*"Top/close"*/;
  return (System_String_o *)*v15;
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
  sub_B5D560(
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
  BattleInfoData_o *battle_info; // x24
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  int v29; // w1
  char v30; // w2
  __int64 v31; // x3
  int v32; // w1
  char v33; // w2
  __int64 v34; // x3
  int v35; // w1
  char v36; // w2
  __int64 v37; // x3
  int v38; // w1
  char v39; // w2
  __int64 v40; // x3
  int v41; // w1
  char v42; // w2
  __int64 v43; // x3
  int v44; // w1
  char v45; // w2
  __int64 v46; // x3
  BattleServantData_o **p_bsvtData; // x21
  UnityEngine_Object_o *data; // x24
  unsigned __int64 bsvtData; // x0
  unsigned __int64 npcSvtClassId; // x1
  struct BattleData_o *v51; // x8
  UnityEngine_Object_o *shortNameLabel; // x25
  UILabel_o *v53; // x25
  UnityEngine_Object_o *atklabel; // x25
  struct BattleServantData_o *v55; // x8
  UILabel_o *v56; // x25
  Il2CppObject *v57; // x0
  struct BattleServantData_o *v58; // x8
  BattleViewBufflistComponent_o *buffListView; // x25
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x2
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // x1
  const MethodInfo *v65; // x2
  int32_t v66; // w23
  UnityEngine_Object_o *equipObj; // x24
  UnityEngine_GameObject_o *v68; // x24
  float LocalPositionY; // s0
  int32_t *p_adjustHeight; // x26
  UnityEngine_Object_o *npRoot; // x24
  TreasureDvcLvEntity_o *v72; // x23
  UIWidget_o *npdetail; // x24
  UILabel_o *v74; // x24
  System_String_o *DetalShort_29262732; // x0
  UILabel_o *maxNp; // x24
  Il2CppObject *v77; // x0
  struct UILabel_o *v78; // x8
  UILabel_o *nplevel; // x23
  System_String_o *v80; // x1
  UnityEngine_Object_o *v81; // x23
  bool IsNpDetailActive; // w23
  UITexture_o *facetex; // x23
  const MethodInfo *v84; // x2
  int32_t v85; // w24
  int32_t v86; // w25
  int32_t CommandDispLimitCount; // w26
  UnityEngine_Object_o *havenotTdLabel; // x22
  bool v89; // w1
  System_String_o **v90; // x8
  UnityEngine_Object_o *unknownNp; // x24
  UILabel_o *v92; // x24
  UnityEngine_Object_o *commandCard; // x23
  BattleCommandData_o *v94; // x23
  struct ServantTreasureDvcEntity_o *SvtTDvc; // x8
  const MethodInfo *v96; // x2
  UnityEngine_Object_o *npSpeedChange; // x22
  UnityEngine_Object_o *classIcon; // x21
  struct ServantEntity_o *svtdata; // x8
  int32_t IconSpriteScaledWidth; // w0
  UnityEngine_Object_o *v101; // x21
  int32_t v102; // w20
  UnityEngine_Object_o *Component_WebViewObject; // x20
  const MethodInfo *v104; // x1
  int v105; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t atk; // [xsp+8h] [xbp-58h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-54h] BYREF

  battle_info = battleInfoData;
  if ( (byte_42E6672 & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandData_TypeInfo, (_DWORD)inbsvtData, isShowBuffIcon, battleInfoData);
    sub_B5D5C4(&BattleServantConfConponent_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIAnchor___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v17, v18, v19);
    sub_B5D5C4(&int_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_9482/*"NP_UNKNOWN"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_1/*""*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_9084/*"Max {0}%"*/, v44, v45, v46);
    byte_42E6672 = 1;
  }
  lv = 0;
  this->fields.bsvtData = inbsvtData;
  p_bsvtData = &this->fields.bsvtData;
  sub_B5D560(&this->fields.bsvtData);
  if ( this->fields.bsvtData )
  {
    if ( !battle_info )
    {
      data = (UnityEngine_Object_o *)this->fields.data;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      bsvtData = UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
      battle_info = 0LL;
      if ( (bsvtData & 1) != 0 )
      {
        v51 = this->fields.data;
        if ( !v51 )
          goto LABEL_171;
        battle_info = v51->fields.battle_info;
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
      v53 = this->fields.shortNameLabel;
      bsvtData = (unsigned __int64)BattleServantData__getServantShortName(
                                     (BattleServantData_o *)bsvtData,
                                     (const MethodInfo *)npcSvtClassId);
      if ( !v53 )
        goto LABEL_171;
      UILabel__set_text(v53, (System_String_o *)bsvtData, 0LL);
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
      v55 = this->fields.bsvtData;
      if ( !v55 )
        goto LABEL_171;
      v56 = this->fields.atklabel;
      atk = v55->fields.atk;
      v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &atk);
      bsvtData = (unsigned __int64)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v57, 0LL);
      if ( !v56 )
        goto LABEL_171;
      UILabel__set_text(v56, (System_String_o *)bsvtData, 0LL);
    }
    bsvtData = (unsigned __int64)this->fields.buffListView;
    if ( bsvtData )
    {
      BattleViewBufflistComponent__setClassIcon((BattleViewBufflistComponent_o *)bsvtData, this->fields.bsvtData, 0LL);
      v58 = this->fields.bsvtData;
      if ( v58 )
      {
        bsvtData = (unsigned __int64)v58->fields.buffData;
        if ( bsvtData )
        {
          buffListView = this->fields.buffListView;
          bsvtData = (unsigned __int64)BattleBuffData__getShowServantConf((BattleBuffData_o *)bsvtData, 0LL);
          if ( buffListView )
          {
            BattleViewBufflistComponent__setBuffList(buffListView, (BattleBuffData_ShowBuffData_array *)bsvtData, 0LL);
            BattleServantConfConponent__setEquipList(this, v60);
            BattleServantConfConponent__SetClassSkillList(this, battle_info, v61);
            BattleServantConfConponent__SetAppendSkillList(this, battle_info, v62);
            if ( !isNpc )
              BattleServantConfConponent__SetClassBoardSkillList(this, v63);
            BattleServantConfConponent__SetCommandCard(this, v63);
            BattleServantConfConponent__SetCommandCodeSkillList(this, v64);
            bsvtData = (unsigned __int64)this->fields.bsvtData;
            if ( bsvtData )
            {
              bsvtData = BattleServantData__getTreasureDvcId((BattleServantData_o *)bsvtData, 1, v65);
              if ( *p_bsvtData )
              {
                v66 = bsvtData;
                lv = (*p_bsvtData)->fields.treasuredvcLevel;
                equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(equipObj, 0LL, 0LL) )
                {
                  v68 = this->fields.equipObj;
                  LocalPositionY = GameObjectExtensions__GetLocalPositionY(v68, 0LL);
                  p_adjustHeight = &this->fields.adjustHeight;
                  GameObjectExtensions__SetLocalPositionY(v68, LocalPositionY - (float)this->fields.adjustHeight, 0LL);
                }
                else
                {
                  p_adjustHeight = &this->fields.adjustHeight;
                }
                this->fields.adjustHeight = 0;
                npRoot = (UnityEngine_Object_o *)this->fields.npRoot;
                if ( v66 < 1 )
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
                  v85 = bsvtData;
                  bsvtData = BattleServantData__getDispLimitCount(*p_bsvtData, 1, v84);
                  if ( !*p_bsvtData )
                    goto LABEL_171;
                  v86 = bsvtData;
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
                                           v85,
                                           v86,
                                           CommandDispLimitCount,
                                           0LL);
                  sub_B5D560(&this->fields.facetex);
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
                  v89 = 1;
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
                bsvtData = (unsigned __int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !bsvtData )
                  goto LABEL_171;
                bsvtData = (unsigned __int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)bsvtData,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                if ( !bsvtData )
                  goto LABEL_171;
                bsvtData = (unsigned __int64)TreasureDvcLvMaster__GetEntity(
                                               (TreasureDvcLvMaster_o *)bsvtData,
                                               v66,
                                               lv,
                                               0LL);
                if ( !this->fields.maxNp )
                  goto LABEL_171;
                v72 = (TreasureDvcLvEntity_o *)bsvtData;
                UILabel__set_text(this->fields.maxNp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                if ( v72 )
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
                  v74 = this->fields.npdetail;
                  DetalShort_29262732 = TreasureDvcLvEntity__getDetalShort_29262732(v72, lv, 0LL);
                  WrapControlText__textBBCodeAdjust(
                    v74,
                    DetalShort_29262732,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT,
                    0LL);
                  maxNp = this->fields.maxNp;
                  v105 = 100 * v72->fields.gaugeCount;
                  v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105);
                  bsvtData = (unsigned __int64)System_String__Format((System_String_o *)StringLiteral_9084/*"Max {0}%"*/, v77, 0LL);
                  if ( !maxNp )
                    goto LABEL_171;
                  UILabel__set_text(maxNp, (System_String_o *)bsvtData, 0LL);
                  v78 = this->fields.npdetail;
                  if ( !v78 )
                    goto LABEL_171;
                  if ( BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT < v78->fields.mHeight )
                  {
                    if ( (BYTE3(BattleServantConfConponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
                      v78 = this->fields.npdetail;
                      if ( !v78 )
                        goto LABEL_171;
                    }
                    *p_adjustHeight = BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT
                                    - v78->fields.mHeight;
                  }
                }
                nplevel = this->fields.nplevel;
                bsvtData = (unsigned __int64)System_Int32__ToString((int32_t)&lv, 0LL);
                if ( !nplevel )
                  goto LABEL_171;
                if ( bsvtData )
                  v80 = (System_String_o *)bsvtData;
                else
                  v80 = (System_String_o *)StringLiteral_1/*""*/;
                UILabel__set_text(nplevel, v80, 0LL);
                v81 = (UnityEngine_Object_o *)this->fields.data;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v81, 0LL, 0LL) )
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
                                  v90 = (System_String_o **)(bsvtData + 408);
                                }
                                else
                                {
                                  if ( !bsvtData )
                                    goto LABEL_171;
                                  v90 = (System_String_o **)&StringLiteral_1/*""*/;
                                }
                                UILabel__set_text((UILabel_o *)bsvtData, *v90, 0LL);
                                unknownNp = (UnityEngine_Object_o *)this->fields.unknownNp;
                                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                }
                                bsvtData = UnityEngine_Object__op_Inequality(unknownNp, 0LL, 0LL);
                                if ( (bsvtData & 1) != 0 )
                                {
                                  v92 = this->fields.unknownNp;
                                  if ( IsNpDetailActive )
                                  {
                                    npcSvtClassId = (unsigned __int64)StringLiteral_1/*""*/;
                                    if ( !v92 )
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
                                                                   (System_String_o *)StringLiteral_9482/*"NP_UNKNOWN"*/,
                                                                   0LL);
                                    npcSvtClassId = bsvtData;
                                    if ( !v92 )
                                      goto LABEL_171;
                                  }
                                  UILabel__set_text(v92, (System_String_o *)npcSvtClassId, 0LL);
                                }
                                commandCard = (UnityEngine_Object_o *)this->fields.commandCard;
                                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                }
                                if ( UnityEngine_Object__op_Inequality(commandCard, 0LL, 0LL) )
                                {
                                  v94 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
                                  BattleCommandData___ctor(v94, 0LL);
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  SvtTDvc = (*p_bsvtData)->fields._SvtTDvc;
                                  if ( !SvtTDvc )
                                    goto LABEL_171;
                                  if ( !v94 )
                                    goto LABEL_171;
                                  v94->fields._type = SvtTDvc->fields.cardId;
                                  bsvtData = (unsigned __int64)*p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v94->fields.svtlimit = BattleServantData__getCommandDispLimitCount(
                                                           (BattleServantData_o *)bsvtData,
                                                           (const MethodInfo *)npcSvtClassId);
                                  bsvtData = (unsigned __int64)*p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  bsvtData = BattleServantData__getDispLimitCount(
                                               (BattleServantData_o *)bsvtData,
                                               1,
                                               v96);
                                  v94->fields._loadsvtLimit = bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v94->fields.uniqueId = (*p_bsvtData)->fields.uniqueId;
                                  bsvtData = (unsigned __int64)*p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v94->fields.svtId = BattleServantData__getSvtId(
                                                        (BattleServantData_o *)bsvtData,
                                                        (const MethodInfo *)npcSvtClassId);
                                  bsvtData = (unsigned __int64)*p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  bsvtData = BattleServantData__GetImageSvtId(
                                               (BattleServantData_o *)bsvtData,
                                               (const MethodInfo *)npcSvtClassId);
                                  v94->fields.imageSvtId = bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_171;
                                  v94->fields.treasureDvc = (*p_bsvtData)->fields.treasuredvcId;
                                  bsvtData = (unsigned __int64)this->fields.commandCard;
                                  if ( !bsvtData )
                                    goto LABEL_171;
                                  BattleCommandComponent__setData(
                                    (BattleCommandComponent_o *)bsvtData,
                                    v94,
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
                                v89 = 0;
LABEL_138:
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, v89, 0LL);
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
                                  BattleServantConfConponent__ChangeLayout(this, v104);
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
                                    v101 = (UnityEngine_Object_o *)this->fields.shortNameLabel;
                                    v102 = IconSpriteScaledWidth;
                                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                    }
                                    if ( UnityEngine_Object__op_Inequality(v101, 0LL, 0LL) )
                                    {
                                      bsvtData = (unsigned __int64)this->fields.shortNameLabel;
                                      if ( !bsvtData )
                                        goto LABEL_171;
                                      if ( *(_DWORD *)(bsvtData + 160) + v102 >= 270 )
                                        CommonFunction__ScalingLabelWidth((UILabel_o *)bsvtData, 270 - v102, 0LL);
                                    }
                                    bsvtData = (unsigned __int64)this->fields.classIcon;
                                    if ( bsvtData )
                                    {
                                      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                                          (UnityEngine_Component_o *)bsvtData,
                                                                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIAnchor___);
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
    sub_B5D69C(bsvtData, npcSvtClassId);
  }
}


void __fastcall BattleServantConfConponent__setEquipList(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *baseEquipSkillInfoPrefab; // x20
  UnityEngine_Object_o *equipSkillInfoRoot; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  __int64 BattleSkillIdList; // x0
  __int64 v27; // x1
  struct BattleServantData_o *bsvtData; // x8
  struct BattleUserServantData_array *equipList; // x24
  __int64 v30; // x8
  SkillLvMaster_o *v31; // x19
  unsigned __int64 v32; // x27
  Il2CppClass **v33; // x21
  __int64 *v34; // x21
  __int64 v35; // t1
  __int64 v36; // x22
  __int64 v37; // x23
  unsigned __int64 v38; // x21
  float v39; // s8
  int32_t v40; // w25
  int32_t v41; // w26
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // x24
  SkillLvMaster_o *v43; // x20
  EquipPossessionSkillInfoComponent_o *v44; // x27
  BattleServantConfConponent_o *v45; // x19
  System_String_o *v46; // x28
  float v47; // s0
  __int64 v48; // x0
  struct BattleUserServantData_array *v49; // [xsp+0h] [xbp-90h]
  unsigned __int64 v50; // [xsp+8h] [xbp-88h]
  __int64 v51; // [xsp+18h] [xbp-78h]
  int32_t index; // [xsp+24h] [xbp-6Ch]
  SkillLvEntity_o *v53; // [xsp+28h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_42E6673 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E6673 = 1;
  }
  entity = 0LL;
  v53 = 0LL;
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
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
        BattleSkillIdList = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
        bsvtData = this->fields.bsvtData;
        this->fields.isEquip = 0;
        if ( !bsvtData )
          goto LABEL_48;
        equipList = bsvtData->fields.equipList;
        if ( !equipList )
          goto LABEL_48;
        v30 = *(_QWORD *)&equipList->max_length;
        if ( (int)v30 >= 1 )
        {
          v31 = (SkillLvMaster_o *)BattleSkillIdList;
          v32 = 0LL;
          v49 = equipList;
          do
          {
            if ( v32 >= (unsigned int)v30 )
            {
LABEL_49:
              v48 = sub_B5D6C8(BattleSkillIdList);
              sub_B5D668(v48, 0LL);
            }
            v33 = &equipList->obj.klass + v32;
            v35 = (__int64)v33[4];
            v34 = (__int64 *)(v33 + 4);
            BattleSkillIdList = v35;
            if ( v35 )
            {
              BattleSkillIdList = (__int64)BattleUserServantData__getBattleSkillIdList(
                                             (BattleUserServantData_o *)BattleSkillIdList,
                                             0LL);
              if ( v32 >= equipList->max_length )
                goto LABEL_49;
              v36 = BattleSkillIdList;
              BattleSkillIdList = *v34;
              if ( !*v34 )
                goto LABEL_48;
              BattleSkillIdList = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)BattleSkillIdList + 408LL))(
                                    BattleSkillIdList,
                                    *(_QWORD *)(*(_QWORD *)BattleSkillIdList + 416LL));
              if ( !v36 )
                goto LABEL_48;
              if ( *(int *)(v36 + 24) >= 1 )
              {
                v37 = BattleSkillIdList;
                v38 = 0LL;
                v51 = BattleSkillIdList + 32;
                v39 = 0.0;
                index = 0;
                v50 = v32;
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
                  if ( v38 >= *(unsigned int *)(v36 + 24) )
                    goto LABEL_49;
                  if ( !v37 )
                    goto LABEL_48;
                  if ( v38 >= *(unsigned int *)(v37 + 24) )
                    goto LABEL_49;
                  v40 = *(_DWORD *)(v36 + 32 + 4 * v38);
                  v41 = *(_DWORD *)(v51 + 4 * v38);
                  entity = 0LL;
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_48;
                  BattleSkillIdList = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        Master_WarQuestSelectionMaster,
                                        &entity,
                                        v40,
                                        (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                  if ( (BattleSkillIdList & 1) != 0 )
                  {
                    v53 = 0LL;
                    if ( !v31 )
                      goto LABEL_48;
                    BattleSkillIdList = SkillLvMaster__TryGetEntity(v31, &v53, v40, v41, 0LL);
                    if ( (BattleSkillIdList & 1) != 0 )
                    {
                      v42 = Master_WarQuestSelectionMaster;
                      v43 = v31;
                      BattleSkillIdList = (__int64)EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
                                                     this->fields.baseEquipSkillInfoPrefab,
                                                     this->fields.equipSkillInfoRoot,
                                                     index,
                                                     v39,
                                                     0LL);
                      if ( !this->fields.equipPossessionSkillInfoComponentList )
                        goto LABEL_48;
                      v44 = (EquipPossessionSkillInfoComponent_o *)BattleSkillIdList;
                      v45 = this;
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.equipPossessionSkillInfoComponentList,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)BattleSkillIdList,
                        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__);
                      BattleSkillIdList = (__int64)entity;
                      if ( !entity )
                        goto LABEL_48;
                      BattleSkillIdList = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                      if ( !v53 )
                        goto LABEL_48;
                      v46 = (System_String_o *)BattleSkillIdList;
                      BattleSkillIdList = (__int64)SkillLvEntity__getDetail_26810736(v53, v41, 0, 0LL);
                      if ( !v44 )
                        goto LABEL_48;
                      v47 = EquipPossessionSkillInfoComponent__SetSkill(
                              v44,
                              v40,
                              v46,
                              (System_String_o *)BattleSkillIdList,
                              0LL);
                      v45->fields.isEquip = 1;
                      this = v45;
                      v31 = v43;
                      Master_WarQuestSelectionMaster = v42;
                      equipList = v49;
                      v32 = v50;
                      v39 = v39 + v47;
                      ++index;
                    }
                  }
                  ++v38;
                }
                while ( (__int64)v38 < *(int *)(v36 + 24) );
              }
            }
            LODWORD(v30) = equipList->max_length;
            ++v32;
          }
          while ( (__int64)v32 < (int)v30 );
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
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__);
            return;
          }
LABEL_48:
          sub_B5D69C(BattleSkillIdList, v27);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall BattleServantConfConponent_CloseButtonCallBack__BeginInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, &v5, callback, object);
}


void __fastcall BattleServantConfConponent_CloseButtonCallBack__EndInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v10; // x3
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
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  BattleServantConfConponent_CloseButtonCallBack_o *v30; // [xsp+8h] [xbp-38h] BYREF

  v30 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v30;
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
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v18->fields.extra_arg, method, v2);
      if ( (sub_B5D5F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B5D5EC(v20);
      v23 = sub_B5D9F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AF54C0(v19, v26, v27, v24);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B5D674(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
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
            v14 = v11 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AF54C0(v19, class_0, v8, v10);
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
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent__StartOpenTab_d__92_o *v4; // x19
  int32_t _1__state; // w8
  struct BattleServantConfConponent_o *_4__this; // x20
  UnityEngine_Object_o *BattleServantAbilityObj; // x21
  bool v8; // w21
  Il2CppObject **p__2__current; // x19

  v4 = this;
  if ( (byte_42E60E5 & 1) == 0 )
  {
    this = (BattleServantConfConponent__StartOpenTab_d__92_o *)sub_B5D5C4(
                                                                 &UnityEngine_Object_TypeInfo,
                                                                 (_DWORD)method,
                                                                 v2,
                                                                 v3);
    byte_42E60E5 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
LABEL_18:
      sub_B5D69C(this, method);
    if ( BattleServantConfConponent__IsLastOpenServantAbility(_4__this, 0LL) )
      BattleServantConfConponent__OnClickServantAbility(_4__this, 0LL);
    else
      BattleServantConfConponent__OnClickServantState(_4__this, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
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
  this = (BattleServantConfConponent__StartOpenTab_d__92_o *)_4__this->fields.BattleServantAbilityObj;
  v8 = 1;
  _4__this->fields.isOpenAfter = 1;
  if ( !this )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v4->fields.__2__current = 0LL;
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
  return v8;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleServantConfConponent__StartOpenTab_d__92_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E60E3 & 1) == 0 )
  {
    sub_B5D5C4(&BattleServantConfConponent___c_TypeInfo, v1, v2, v3);
    byte_42E60E3 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleServantConfConponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleServantConfConponent___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  System_Collections_Generic_HashSet_int__o *passiveIdHashSet; // x0

  if ( (byte_42E60E4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Contains__, x, (_DWORD)method, v3);
    byte_42E60E4 = 1;
  }
  passiveIdHashSet = this->fields.passiveIdHashSet;
  if ( !passiveIdHashSet )
    sub_B5D69C(0LL, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           passiveIdHashSet,
           x,
           (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__);
}