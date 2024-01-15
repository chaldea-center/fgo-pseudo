void __fastcall BattlePerformancePlayer___ctor(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct System_Int32_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x2
  struct UnityEngine_Vector3_array *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FA8AC & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&UnityEngine_Vector3___TypeInfo, v4);
    byte_40FA8AC = 1;
  }
  v5 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 3LL, v2);
  this->fields.list_ID = v5;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.list_ID, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  v13 = (struct UnityEngine_Vector3_array *)sub_B17014(UnityEngine_Vector3___TypeInfo, 3LL, v12);
  this->fields.list_pos = v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.list_pos,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.isPlayCommandSpellEffectStartAnim = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformancePlayer__CloseSkillConfComp(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0
  PlayMakerFSM_o *otherFsm; // x0

  if ( (byte_40FA894 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, method);
    byte_40FA894 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm
    || (PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5481/*"END_PROC"*/, 0LL),
        (otherFsm = this->fields.otherFsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(otherFsm, (System_String_o *)StringLiteral_5481/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__Initialize(
        BattlePerformancePlayer_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattlePerformance_o **p_perf; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x0
  const MethodInfo *v25; // x1
  System_String_array **v26; // x2
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v28; // x21
  __int64 v29; // x22
  int max_length; // w9
  il2cpp_array_size_t v31; // w23
  UnityEngine_Component_o *v32; // x0
  struct UnityEngine_Vector3_array *list_pos; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  int v36; // s0
  int v37; // s1
  int v38; // s2
  _DWORD *v39; // x8
  struct BattleServantParamComponent_array *v40; // x8
  BattleServantParamComponent_o *v41; // x0
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct BattleServantParamComponent_array *v47; // x8
  __int64 v48; // x8
  System_Int32_array **v49; // x1
  struct BattleServantParamComponent_array *v50; // x8
  BattleServantParamComponent_o *v51; // x0
  BattleSkillConfComponent_o *skillConfWindow; // x0
  struct BattleSkillConfComponent_o *v53; // x0
  struct BattleSkillConfComponent_o *v54; // x0

  this->fields.perf = inperf;
  p_perf = &this->fields.perf;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inperf,
    (System_String_array **)indata,
    (System_String_array **)inlogic,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)indata,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.logic = inlogic;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.logic,
    (System_Int32_array **)inlogic,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  list_param = this->fields.list_param;
  if ( !list_param )
    goto LABEL_25;
  v28 = 0LL;
  v29 = 4LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    v31 = v29 - 4;
    if ( (int)v29 - 4 >= max_length )
      break;
    if ( v31 >= max_length )
      goto LABEL_26;
    v32 = (UnityEngine_Component_o *)*((_QWORD *)&list_param->obj.klass + v29);
    if ( v32 )
    {
      list_pos = this->fields.list_pos;
      gameObject = UnityEngine_Component__get_gameObject(v32, 0LL);
      if ( gameObject )
      {
        transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
        if ( transform )
        {
          *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Transform__get_position(transform, 0LL);
          if ( list_pos )
          {
            if ( v31 >= list_pos->max_length )
              goto LABEL_26;
            v39 = (_DWORD *)((char *)list_pos + v28);
            v39[8] = v36;
            v39[9] = v37;
            v39[10] = v38;
            v40 = this->fields.list_param;
            if ( v40 )
            {
              if ( v31 >= v40->max_length )
                goto LABEL_26;
              v41 = (BattleServantParamComponent_o *)*((_QWORD *)&v40->obj.klass + v29);
              if ( v41 )
              {
                BattleServantParamComponent__setCloseMode(v41, 0LL);
                v47 = this->fields.list_param;
                if ( v47 )
                {
                  if ( v31 >= v47->max_length )
                    goto LABEL_26;
                  v48 = *((_QWORD *)&v47->obj.klass + v29);
                  if ( v48 )
                  {
                    v49 = (System_Int32_array **)*p_perf;
                    *(_QWORD *)(v48 + 264) = *p_perf;
                    sub_B16F98((BattleServantConfConponent_o *)(v48 + 264), v49, v26, v42, v43, v44, v45, v46);
                    v50 = this->fields.list_param;
                    if ( v50 )
                    {
                      if ( v31 >= v50->max_length )
                      {
LABEL_26:
                        sub_B17100(v24, v25, v26);
                        sub_B170A0();
                      }
                      v51 = (BattleServantParamComponent_o *)*((_QWORD *)&v50->obj.klass + v29);
                      if ( v51 )
                      {
                        BattleServantParamComponent__ForceDestroyAllEffect(v51, 0LL);
                        list_param = this->fields.list_param;
                        ++v29;
                        v28 += 12LL;
                        if ( list_param )
                          continue;
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
    goto LABEL_25;
  }
  BattlePerformancePlayer__initSvtConfWindow(this, v25);
  skillConfWindow = this->fields.skillConfWindow;
  if ( !skillConfWindow
    || (BattleSkillConfComponent__setInit(skillConfWindow, this->fields.data, 0LL),
        (v53 = this->fields.skillConfWindow) == 0LL)
    || (((void (__fastcall *)(struct BattleSkillConfComponent_o *, Il2CppMethodPointer))v53->klass->vtable._7_setInitialPos.method)(
          v53,
          v53->klass->vtable._8_setInitialPosIfDefaultIsZero.methodPtr),
        (v54 = this->fields.skillConfWindow) == 0LL) )
  {
LABEL_25:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, Il2CppMethodPointer))v54->klass->vtable._9_setClose.method)(
    v54,
    v54->klass->vtable._10_Open.methodPtr);
}


void __fastcall BattlePerformancePlayer__OpenSkillConfComplete(
        BattlePerformancePlayer_o *this,
        const MethodInfo *method)
{
  BattleSkillConfComponent_o *skillConfWindow; // x0

  skillConfWindow = this->fields.skillConfWindow;
  if ( !skillConfWindow )
    sub_B170D4();
  BattleSkillConfComponent__ToEnableLabelCollider(skillConfWindow, 0LL);
}


bool __fastcall BattlePerformancePlayer__OpenSkillSelectAddFuncConfWindow(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  BattlePerformance_o *perf; // x0
  BattleSkillSelectAddFuncConfComponent_o *SkillSelectAddFuncConfWindow; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FA89A & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformancePlayer_SkillSelectedAddFunc__, skillInfo);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo, v6);
    byte_40FA89A = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_12;
  SkillSelectAddFuncConfWindow = BattlePerformance__get_SkillSelectAddFuncConfWindow(perf, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)SkillSelectAddFuncConfWindow, 0LL, 0LL) )
    return 0;
  if ( !SkillSelectAddFuncConfWindow )
LABEL_12:
    sub_B170D4();
  if ( BattleSkillSelectAddFuncConfComponent__SetPreOpenInfo(SkillSelectAddFuncConfWindow, skillInfo, 0LL) )
  {
    v13 = (BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *)sub_B170CC(
                                                                      BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo,
                                                                      v9,
                                                                      v10,
                                                                      v11,
                                                                      v12);
    BattleSkillSelectAddFuncConfComponent_SelectCallBack___ctor(
      v13,
      (Il2CppObject *)this,
      Method_BattlePerformancePlayer_SkillSelectedAddFunc__,
      0LL);
    SkillSelectAddFuncConfWindow->fields.selectCallBack = v13;
    sub_B16F98(
      (BattleServantConfConponent_o *)&SkillSelectAddFuncConfWindow->fields.selectCallBack,
      (System_Int32_array **)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    ((void (__fastcall *)(BattleSkillSelectAddFuncConfComponent_o *, _QWORD, Il2CppMethodPointer))SkillSelectAddFuncConfWindow->klass->vtable._10_Open.method)(
      SkillSelectAddFuncConfWindow,
      0LL,
      SkillSelectAddFuncConfWindow->klass->vtable._11_CompOpen.methodPtr);
    return 1;
  }
  return 0;
}


void __fastcall BattlePerformancePlayer__SkillSelectedAddFunc(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        int32_t selIndex,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_40FA89B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2912/*"CANCEL"*/, skillInfo);
    byte_40FA89B = 1;
  }
  if ( selIndex != -1 )
  {
    if ( skillInfo )
    {
      BattleSkillInfoData__UpdateSelectAddIndex(skillInfo, selIndex, 0LL);
      BattlePerformancePlayer__WantUseSkill(this, skillInfo, v7);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    goto LABEL_8;
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_2912/*"CANCEL"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__UpdateClassIconEffect(
        BattlePerformancePlayer_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *v4; // x20
  struct BattleServantParamComponent_array *list_param; // x21
  __int64 v6; // x8
  unsigned __int64 v7; // x22
  BattleServantParamComponent_o *v8; // x20
  struct BattleServantData_o *data; // x8

  v4 = this;
  if ( (byte_40FA8AB & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, servantData);
    byte_40FA8AB = 1;
  }
  if ( servantData )
  {
    list_param = v4->fields.list_param;
    if ( !list_param )
LABEL_19:
      sub_B170D4();
    v6 = *(_QWORD *)&list_param->max_length;
    if ( (int)v6 >= 1 )
    {
      v7 = 0LL;
      do
      {
        if ( v7 >= (unsigned int)v6 )
        {
          sub_B17100(this, servantData, method);
          sub_B170A0();
        }
        v8 = list_param->m_Items[v7];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattlePerformancePlayer_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v8, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v8 )
            goto LABEL_19;
          data = v8->fields.data;
          if ( data )
          {
            if ( data->fields.uniqueId == servantData->fields.uniqueId )
              BattleServantParamComponent__UpdateClassIconEffect(v8, servantData, 0LL);
          }
        }
        LODWORD(v6) = list_param->max_length;
        ++v7;
      }
      while ( (__int64)v7 < (int)v6 );
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__UseSkill(
        BattlePerformancePlayer_o *this,
        bool playSe,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct BattleLogic_UseSkillObject_o *useSkillObject; // x1
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x20
  struct BattleLogic_o *logic; // x8
  BattleLogicSkill_o *logicSkill; // x0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  WebViewManager_o *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_String_o *v28; // x20
  CommonUI_o *v29; // x21
  BattlePerformancePlayer___c_c *v30; // x8
  struct BattlePerformancePlayer___c_StaticFields *static_fields; // x9
  System_String_o *v32; // x22
  System_Action_o *_9__39_0; // x23
  Il2CppObject *v34; // x24
  struct BattlePerformancePlayer___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  PlayMakerFSM_o *myfsm; // x0
  System_String_o *text; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_40FA898 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, playSe);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&SoundManager_TypeInfo, v11);
    sub_B16FFC(&Method_BattlePerformancePlayer___c__UseSkill_b__39_0__, v12);
    sub_B16FFC(&BattlePerformancePlayer___c_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_2912/*"CANCEL"*/, v14);
    sub_B16FFC(&StringLiteral_1/*""*/, v15);
    byte_40FA898 = 1;
  }
  text = 0LL;
  if ( playSe )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
  }
  useSkillObject = this->fields.useSkillObject;
  this->fields.actSkillObject = useSkillObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.actSkillObject,
    (System_Int32_array **)useSkillObject,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  actSkillObject = this->fields.actSkillObject;
  if ( !actSkillObject )
    goto LABEL_27;
  skillInfo = actSkillObject->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_27;
  BattleSkillInfoData__UpdateSelectAddIndex(actSkillObject->fields.skillInfo, -1, 0LL);
  text = (System_String_o *)StringLiteral_1/*""*/;
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_27;
  logicSkill = logic->fields.logicSkill;
  if ( !logicSkill )
    goto LABEL_27;
  if ( !BattleLogicSkill__checkConditions(logicSkill, skillInfo, &text, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = text;
    v29 = (CommonUI_o *)Instance;
    v30 = BattlePerformancePlayer___c_TypeInfo;
    if ( (BYTE3(BattlePerformancePlayer___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformancePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformancePlayer___c_TypeInfo);
      v30 = BattlePerformancePlayer___c_TypeInfo;
    }
    static_fields = v30->static_fields;
    v32 = (System_String_o *)StringLiteral_1/*""*/;
    _9__39_0 = static_fields->__9__39_0;
    if ( !_9__39_0 )
    {
      if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        static_fields = BattlePerformancePlayer___c_TypeInfo->static_fields;
      }
      v34 = (Il2CppObject *)static_fields->__9;
      _9__39_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
      System_Action___ctor(_9__39_0, v34, Method_BattlePerformancePlayer___c__UseSkill_b__39_0__, 0LL);
      v35 = BattlePerformancePlayer___c_TypeInfo->static_fields;
      v35->__9__39_0 = _9__39_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v35->__9__39_0,
        (System_Int32_array **)_9__39_0,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    if ( v29 )
    {
      CommonUI__OpenNotificationDialog(v29, v32, v28, _9__39_0, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
      myfsm = this->fields.myfsm;
      if ( myfsm )
      {
        PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_2912/*"CANCEL"*/, 0LL);
        return;
      }
    }
LABEL_27:
    sub_B170D4();
  }
  if ( !BattlePerformancePlayer__OpenSkillSelectAddFuncConfWindow(this, skillInfo, v21) )
    BattlePerformancePlayer__WantUseSkill(this, skillInfo, v22);
}


void __fastcall BattlePerformancePlayer__WantUseSkill(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Int32_array *ValidTargetTypeArray; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Func_int__bool__o *v15; // x22
  const MethodInfo *v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Func_int__bool__o *v20; // x22
  int32_t v21; // w1
  const MethodInfo *v22; // x2
  BattleLogic_o *logic; // x0
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_40FA899 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, skillInfo);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v5);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v6);
    sub_B16FFC(&Method_Target_isChoose__, v7);
    sub_B16FFC(&Method_Target_isCommandType__, v8);
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, v9);
    byte_40FA899 = 1;
  }
  if ( !skillInfo )
    goto LABEL_11;
  ValidTargetTypeArray = BattleSkillInfoData__get_ValidTargetTypeArray(skillInfo, 0LL);
  v15 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v11, v12, v13, v14);
  System_Func_int__bool____ctor(
    v15,
    0LL,
    Method_Target_isCommandType__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  if ( BasicHelper__Any_int__25910576(
         ValidTargetTypeArray,
         (System_Func_T__bool__o *)v15,
         (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656) )
  {
    BattlePerformancePlayer__openSelectCommandTypeWindow(this, v16);
    return;
  }
  v20 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v16, v17, v18, v19);
  System_Func_int__bool____ctor(
    v20,
    0LL,
    Method_Target_isChoose__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  if ( BasicHelper__Any_int__25910576(
         ValidTargetTypeArray,
         (System_Func_T__bool__o *)v20,
         (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656) )
  {
    v21 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
            skillInfo,
            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    BattlePerformancePlayer__openSelectSvtWindow(this, v21, v22);
    return;
  }
  logic = this->fields.logic;
  if ( !logic
    || (BattleLogic__wantUseSkill(logic, skillInfo, skillInfo->fields.svtUniqueId, -1, 0LL),
        (myfsm = this->fields.myfsm) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5481/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__checkSkipFlg(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattlePerformance_o *perf; // x0
  BattleWindowComponent_o *skillConfWindow; // x0
  PlayMakerFSM_o *myfsm; // x0
  __int64 *v9; // x8
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x8
  struct BattleSkillInfoData_o *skillInfo; // x8
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  struct BattleLogic_UseSkillObject_o *v14; // x8
  struct BattleSkillInfoData_o *v15; // x8
  struct BattleLogic_UseSkillObject_o *v16; // x8
  BattleSkillInfoData_o *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct BattleData_o *v24; // x8
  struct BattleLogic_UseSkillObject_o *v25; // x1

  if ( (byte_40FA891 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9714/*"OK"*/, method);
    sub_B16FFC(&StringLiteral_2912/*"CANCEL"*/, v3);
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, v4);
    sub_B16FFC(&StringLiteral_12204/*"SKIP"*/, v5);
    byte_40FA891 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_29;
  if ( !BattlePerformance__isOpenOrOpeningMainWindow(perf, 0LL) )
  {
    skillConfWindow = (BattleWindowComponent_o *)this->fields.skillConfWindow;
    if ( !skillConfWindow )
      goto LABEL_29;
    if ( !BattleWindowComponent__isOpenOrOpening(skillConfWindow, 0LL) )
    {
      tmp_useSkill = this->fields.tmp_useSkill;
      if ( tmp_useSkill )
      {
        skillInfo = tmp_useSkill->fields.skillInfo;
        if ( skillInfo )
        {
          data = this->fields.data;
          if ( data )
          {
            ServantData = BattleData__getServantData(data, skillInfo->fields.svtUniqueId, 0LL);
            v14 = this->fields.tmp_useSkill;
            if ( v14 )
            {
              v15 = v14->fields.skillInfo;
              if ( v15 )
              {
                if ( ServantData )
                {
                  if ( !BattleServantData__canUseSkill(ServantData, v15->fields.index, 0LL) )
                    goto LABEL_25;
                  v16 = this->fields.tmp_useSkill;
                  if ( !v16 )
                    goto LABEL_29;
                  v17 = v16->fields.skillInfo;
                  if ( !v17 )
                    goto LABEL_29;
                  if ( BattleSkillInfoData__isChargeOK(v17, 0LL) )
                  {
                    v24 = this->fields.data;
                    if ( v24 )
                    {
                      if ( v24->fields.systemflg_skipskillconf && !this->fields.isLongTap )
                      {
                        v25 = this->fields.tmp_useSkill;
                        this->fields.useSkillObject = v25;
                        sub_B16F98(
                          (BattleServantConfConponent_o *)&this->fields.useSkillObject,
                          (System_Int32_array **)v25,
                          v18,
                          v19,
                          v20,
                          v21,
                          v22,
                          v23);
                        myfsm = this->fields.myfsm;
                        if ( myfsm )
                        {
                          v9 = &StringLiteral_12204/*"SKIP"*/;
                          goto LABEL_9;
                        }
                      }
                      else
                      {
                        myfsm = this->fields.myfsm;
                        if ( myfsm )
                        {
                          v9 = &StringLiteral_9714/*"OK"*/;
                          goto LABEL_9;
                        }
                      }
                    }
                  }
                  else
                  {
LABEL_25:
                    myfsm = this->fields.myfsm;
                    if ( myfsm )
                    {
                      v9 = &StringLiteral_5481/*"END_PROC"*/;
                      goto LABEL_9;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_29:
      sub_B170D4();
    }
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    goto LABEL_29;
  v9 = &StringLiteral_2912/*"CANCEL"*/;
LABEL_9:
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)*v9, 0LL);
}


void __fastcall BattlePerformancePlayer__checkTutorial(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleData_o *data; // x8
  int32_t tutorialId; // w9
  PlayMakerFSM_o *myfsm; // x0
  __int64 *v7; // x8
  int32_t turnCount; // w9

  if ( (byte_40FA8A6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, method);
    sub_B16FFC(&StringLiteral_13477/*"TUTORIAL_SKILL"*/, v3);
    byte_40FA8A6 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  tutorialId = data->fields.tutorialId;
  if ( tutorialId == 2 )
  {
    turnCount = data->fields.turnCount;
    if ( turnCount != 1 )
    {
      if ( turnCount != 2 )
      {
LABEL_6:
        myfsm = this->fields.myfsm;
        if ( myfsm )
        {
          v7 = &StringLiteral_5481/*"END_PROC"*/;
LABEL_8:
          PlayMakerFSM__SendEvent(myfsm, (System_String_o *)*v7, 0LL);
          return;
        }
        goto LABEL_15;
      }
      if ( data->fields.tutorialState == -1 )
      {
        myfsm = this->fields.myfsm;
        if ( myfsm )
        {
          v7 = &StringLiteral_13477/*"TUTORIAL_SKILL"*/;
          goto LABEL_8;
        }
LABEL_15:
        sub_B170D4();
      }
    }
  }
  else if ( tutorialId != 1 )
  {
    goto LABEL_6;
  }
}


void __fastcall BattlePerformancePlayer__closeSvtConfWindow(
        BattlePerformancePlayer_o *this,
        float alphatime,
        BattleWindowComponent_EndCall_o *endCall,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *confwindowComp; // x0

  confwindowComp = this->fields.confwindowComp;
  if ( !confwindowComp )
    sub_B170D4();
  BattleServantConfConponent__Close(confwindowComp, endCall, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__deleteStatus(
        BattlePerformancePlayer_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *v4; // x20
  struct BattleServantParamComponent_array *list_param; // x8
  UnityEngine_Object_o *v6; // x21
  struct BattleServantParamComponent_array *v7; // x8
  BattleServantData_o *skillConfWindow; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  BattleServantParamComponent_o *v10; // x0
  struct System_Int32_array *list_ID; // x8

  v4 = this;
  if ( (byte_40FA884 & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_40FA884 = 1;
  }
  list_param = v4->fields.list_param;
  if ( !list_param )
    goto LABEL_20;
  if ( list_param->max_length <= index )
    goto LABEL_21;
  v6 = (UnityEngine_Object_o *)list_param->m_Items[index];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattlePerformancePlayer_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v4->fields.list_param;
    if ( v7 )
    {
      if ( v7->max_length <= index )
        goto LABEL_21;
      this = (BattlePerformancePlayer_o *)v7->m_Items[index];
      if ( this )
      {
        skillConfWindow = (BattleServantData_o *)this[1].fields.skillConfWindow;
        if ( !skillConfWindow
          || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
              BattleServantData__delParamObject(skillConfWindow, gameObject, 0LL),
              (v7 = v4->fields.list_param) != 0LL) )
        {
          if ( v7->max_length <= index )
            goto LABEL_21;
          v10 = v7->m_Items[index];
          if ( v10 )
          {
            this = (BattlePerformancePlayer_o *)((__int64 (__fastcall *)(BattleServantParamComponent_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._6_setData.method)(
                                                  v10,
                                                  0LL,
                                                  v10->klass->vtable._7_SetEnemyParamPosition.methodPtr);
            list_ID = v4->fields.list_ID;
            if ( list_ID )
            {
              if ( list_ID->max_length > index )
              {
                list_ID->m_Items[index + 1] = -1;
                return;
              }
LABEL_21:
              sub_B17100(this, *(_QWORD *)&index, method);
              sub_B170A0();
            }
          }
        }
      }
    }
LABEL_20:
    sub_B170D4();
  }
}


void __fastcall BattlePerformancePlayer__endSkill(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_40FA89F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5484/*"END_SKILL"*/, method);
    byte_40FA89F = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5484/*"END_SKILL"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__initSvtConfWindow(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *confwindowComp; // x0
  struct BattleServantConfConponent_o *v5; // x0
  struct BattleServantConfConponent_o *v6; // x0
  struct BattleServantConfConponent_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  BattleServantConfConponent_CloseButtonCallBack_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40FA8A3 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformancePlayer_onClickConfClose__, method);
    sub_B16FFC(&BattleServantConfConponent_CloseButtonCallBack_TypeInfo, v3);
    byte_40FA8A3 = 1;
  }
  confwindowComp = this->fields.confwindowComp;
  if ( !confwindowComp )
    goto LABEL_8;
  BattleServantConfConponent__Initialize(confwindowComp, this->fields.data, 0LL);
  v5 = this->fields.confwindowComp;
  if ( !v5
    || (((void (__fastcall *)(struct BattleServantConfConponent_o *, Il2CppMethodPointer))v5->klass->vtable._7_setInitialPos.method)(
          v5,
          v5->klass->vtable._8_setInitialPosIfDefaultIsZero.methodPtr),
        (v6 = this->fields.confwindowComp) == 0LL)
    || (((void (__fastcall *)(struct BattleServantConfConponent_o *, Il2CppMethodPointer))v6->klass->vtable._9_setClose.method)(
          v6,
          v6->klass->vtable._10_Open.methodPtr),
        v7 = this->fields.confwindowComp,
        v12 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_B170CC(
                                                                    BattleServantConfConponent_CloseButtonCallBack_TypeInfo,
                                                                    v8,
                                                                    v9,
                                                                    v10,
                                                                    v11),
        BattleServantConfConponent_CloseButtonCallBack___ctor(
          v12,
          (Il2CppObject *)this,
          Method_BattlePerformancePlayer_onClickConfClose__,
          0LL),
        !v7) )
  {
LABEL_8:
    sub_B170D4();
  }
  v7->fields.callback_close = v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v7->fields.callback_close,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


bool __fastcall BattlePerformancePlayer__isOpenSvtConf(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *confwindowComp; // x0

  confwindowComp = (BattleWindowComponent_o *)this->fields.confwindowComp;
  if ( !confwindowComp )
    sub_B170D4();
  return BattleWindowComponent__isOpen(confwindowComp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__modeComPlayerStatus(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformancePlayer_o *v3; // x19
  __int64 v4; // x1
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  int max_length; // w9
  unsigned int v9; // w24
  UnityEngine_Component_o *v10; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  int v12; // s0
  struct BattleServantParamComponent_array *v16; // x8
  UnityEngine_Component_o *v17; // x0
  struct UnityEngine_Vector3_array *list_pos; // x8
  struct BattleServantParamComponent_array *v19; // x8
  UnityEngine_Component_o *v20; // x0
  UnityEngine_Transform_o *transform; // x20
  int v22; // s0
  BattleServantConfConponent_o *confwindowComp; // x0
  struct BattleSkillConfComponent_o *skillConfWindow; // x0
  BattlePerformance_o *perf; // x0
  struct BattleServantParamComponent_array *v29; // x8
  __int64 v30; // x21
  unsigned __int64 v31; // x9
  unsigned __int64 v32; // x23
  UnityEngine_Object_o *v33; // x20
  struct BattleServantParamComponent_array *v34; // x8
  BattleServantParamComponent_o *v35; // x0

  v3 = this;
  if ( (byte_40FA88F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    this = (BattlePerformancePlayer_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FA88F = 1;
  }
  list_param = v3->fields.list_param;
  if ( !list_param )
    goto LABEL_37;
  v6 = 0LL;
  v7 = 4LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    v9 = v7 - 4;
    if ( (int)v7 - 4 >= max_length )
      break;
    if ( v9 >= max_length )
      goto LABEL_39;
    v10 = (UnityEngine_Component_o *)*((_QWORD *)&list_param->obj.klass + v7);
    if ( v10 )
    {
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  v10,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
      if ( Component_WebViewObject )
      {
        UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v12, 0LL);
        v16 = v3->fields.list_param;
        if ( v16 )
        {
          if ( v9 >= v16->max_length )
            goto LABEL_39;
          v17 = (UnityEngine_Component_o *)*((_QWORD *)&v16->obj.klass + v7);
          if ( v17 )
          {
            this = (BattlePerformancePlayer_o *)UnityEngine_Component__get_transform(v17, 0LL);
            list_pos = v3->fields.list_pos;
            if ( list_pos )
            {
              if ( v9 >= list_pos->max_length )
                goto LABEL_39;
              if ( this )
              {
                UnityEngine_Transform__set_position(
                  (UnityEngine_Transform_o *)this,
                  *(UnityEngine_Vector3_o *)&list_pos->m_Items[v6].fields.y,
                  0LL);
                v19 = v3->fields.list_param;
                if ( v19 )
                {
                  if ( v9 >= v19->max_length )
                  {
LABEL_39:
                    sub_B17100(this, method, v2);
                    sub_B170A0();
                  }
                  v20 = (UnityEngine_Component_o *)*((_QWORD *)&v19->obj.klass + v7);
                  if ( v20 )
                  {
                    transform = UnityEngine_Component__get_transform(v20, 0LL);
                    *(UnityEngine_Quaternion_o *)&v22 = UnityEngine_Quaternion__Euler(0.0, 0.0, 0.0, 0LL);
                    if ( transform )
                    {
                      UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v22, 0LL);
                      list_param = v3->fields.list_param;
                      ++v7;
                      ++v6;
                      if ( list_param )
                        continue;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_37;
  }
  confwindowComp = v3->fields.confwindowComp;
  if ( !confwindowComp
    || (BattleServantConfConponent__Close(confwindowComp, 0LL, 0LL),
        (skillConfWindow = v3->fields.skillConfWindow) == 0LL)
    || (((void (__fastcall *)(struct BattleSkillConfComponent_o *, _QWORD, Il2CppMethodPointer))skillConfWindow->klass->vtable._12_Close.method)(
          skillConfWindow,
          0LL,
          skillConfWindow->klass->vtable._13_CompClose.methodPtr),
        (perf = v3->fields.perf) == 0LL)
    || (BattlePerformance__CloseSkillSelectAddFuncConfWindow(perf, 0LL, 0LL), (v29 = v3->fields.list_param) == 0LL) )
  {
LABEL_37:
    sub_B170D4();
  }
  v30 = 4LL;
  while ( 1 )
  {
    v31 = v29->max_length;
    v32 = v30 - 4;
    if ( v30 - 4 >= (int)v31 )
      break;
    if ( v32 >= v31 )
      goto LABEL_39;
    v33 = (UnityEngine_Object_o *)*((_QWORD *)&v29->obj.klass + v30);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformancePlayer_o *)UnityEngine_Object__op_Equality(v33, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v34 = v3->fields.list_param;
      if ( !v34 )
        goto LABEL_37;
      if ( v32 >= v34->max_length )
        goto LABEL_39;
      v35 = (BattleServantParamComponent_o *)*((_QWORD *)&v34->obj.klass + v30);
      if ( !v35 )
        goto LABEL_37;
      BattleServantParamComponent__setCloseMode(v35, 0LL);
    }
    v29 = v3->fields.list_param;
    ++v30;
    if ( !v29 )
      goto LABEL_37;
  }
}


void __fastcall BattlePerformancePlayer__modeTacPlayerStatus(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v7; // x21
  unsigned __int64 max_length; // x9
  unsigned __int64 v9; // x23
  UnityEngine_Object_o *v10; // x20
  struct BattleServantParamComponent_array *v11; // x8
  BattleServantParamComponent_o *v12; // x0

  if ( (byte_40FA887 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA887 = 1;
  }
  BattlePerformancePlayer__updateView(this, method);
  list_param = this->fields.list_param;
  if ( !list_param )
LABEL_16:
    sub_B170D4();
  v7 = 4LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    v9 = v7 - 4;
    if ( v7 - 4 >= (int)max_length )
      break;
    if ( v9 >= max_length )
      goto LABEL_18;
    v10 = (UnityEngine_Object_o *)*((_QWORD *)&list_param->obj.klass + v7);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v3 = UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
    if ( !v3 )
    {
      v11 = this->fields.list_param;
      if ( !v11 )
        goto LABEL_16;
      if ( v9 >= v11->max_length )
      {
LABEL_18:
        sub_B17100(v3, v4, v5);
        sub_B170A0();
      }
      v12 = (BattleServantParamComponent_o *)*((_QWORD *)&v11->obj.klass + v7);
      if ( !v12 )
        goto LABEL_16;
      BattleServantParamComponent__setOpenMode(v12, this->fields.isPlayCommandSpellEffectStartAnim, 0LL);
    }
    list_param = this->fields.list_param;
    ++v7;
    if ( !list_param )
      goto LABEL_16;
  }
  this->fields.isPlayCommandSpellEffectStartAnim = 1;
}


void __fastcall BattlePerformancePlayer__onClickConfClose(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_40FA88A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3043/*"CLICK_CLOSE"*/, method);
    byte_40FA88A = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_3043/*"CLICK_CLOSE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__onClickServant(
        BattlePerformancePlayer_o *this,
        int32_t uniqueID,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleServantConfConponent_o *confwindowComp; // x0
  PlayMakerFSM_o *myfsm; // x0
  __int64 *v8; // x8

  if ( (byte_40FA888 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3072/*"CLICK_SVTWINDOW"*/, *(_QWORD *)&uniqueID);
    sub_B16FFC(&StringLiteral_3043/*"CLICK_CLOSE"*/, v5);
    byte_40FA888 = 1;
  }
  confwindowComp = this->fields.confwindowComp;
  if ( !confwindowComp )
    goto LABEL_10;
  if ( !BattleServantConfConponent__isTargetSvt(confwindowComp, uniqueID, 0LL) )
  {
    myfsm = this->fields.myfsm;
    this->fields.tmp_uniqueId = uniqueID;
    if ( myfsm )
    {
      v8 = &StringLiteral_3072/*"CLICK_SVTWINDOW"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_B170D4();
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    goto LABEL_10;
  v8 = &StringLiteral_3043/*"CLICK_CLOSE"*/;
LABEL_9:
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)*v8, 0LL);
}


void __fastcall BattlePerformancePlayer__onClickSkillCancel(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_40FA897 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2912/*"CANCEL"*/, method);
    byte_40FA897 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_2912/*"CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__onClickSkillIcon(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLong,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  BattleLogic_UseSkillObject_o *v9; // x20
  BattleData_o *data; // x0
  const MethodInfo *v11; // x1
  struct BattleData_o *v12; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  BattlePerformanceMaster_o *masterPerf; // x0
  BattleLogic_o *logic; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct BattleLogic_UseSkillObject_o **p_tmp_useSkill; // x19
  PlayMakerFSM_o *v24; // x0

  if ( (byte_40FA890 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogic_UseSkillObject_TypeInfo, skillInfo);
    sub_B16FFC(&StringLiteral_3067/*"CLICK_SKILLICON"*/, v8);
    byte_40FA890 = 1;
  }
  v9 = (BattleLogic_UseSkillObject_o *)sub_B170CC(BattleLogic_UseSkillObject_TypeInfo, skillInfo, isLong, method, v4);
  BattleLogic_UseSkillObject___ctor(v9, skillInfo, 0LL);
  data = this->fields.data;
  this->fields.isLongTap = isLong;
  if ( !data )
    goto LABEL_20;
  if ( !BattleData__isTutorial(data, 0LL) )
    goto LABEL_16;
  v12 = this->fields.data;
  if ( !v12 )
    goto LABEL_20;
  if ( v12->fields.tutorialId != 2 || v12->fields.turnCount != 2 )
    goto LABEL_16;
  if ( !skillInfo )
    goto LABEL_20;
  if ( skillInfo->fields.type == 11 && skillInfo->fields.index == 1 )
  {
LABEL_16:
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_20;
    statusPerf = perf->fields.statusPerf;
    if ( !statusPerf )
      goto LABEL_20;
    masterPerf = statusPerf->fields.masterPerf;
    if ( !masterPerf )
      goto LABEL_20;
    if ( BattlePerformanceMaster__isCloseEnemyConf(masterPerf, v11) )
    {
      logic = this->fields.logic;
      if ( !logic )
        goto LABEL_20;
      if ( BattleLogic__isTimingUseSkill(logic, 0LL) )
      {
        this->fields.tmp_useSkill = v9;
        p_tmp_useSkill = &this->fields.tmp_useSkill;
        sub_B16F98(
          (BattleServantConfConponent_o *)p_tmp_useSkill,
          (System_Int32_array **)v9,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
        v24 = (PlayMakerFSM_o *)*(p_tmp_useSkill - 13);
        if ( v24 )
        {
          PlayMakerFSM__SendEvent(v24, (System_String_o *)StringLiteral_3067/*"CLICK_SKILLICON"*/, 0LL);
          return;
        }
LABEL_20:
        sub_B170D4();
      }
    }
  }
}


void __fastcall BattlePerformancePlayer__onClickSkillOK(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  BattleLogic_UseSkillObject_o *v8; // x21
  struct BattleLogic_UseSkillObject_o **p_useSkillObject; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  PlayMakerFSM_o *v16; // x0

  if ( (byte_40FA896 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogic_UseSkillObject_TypeInfo, skillInfo);
    sub_B16FFC(&StringLiteral_9714/*"OK"*/, v7);
    byte_40FA896 = 1;
  }
  v8 = (BattleLogic_UseSkillObject_o *)sub_B170CC(BattleLogic_UseSkillObject_TypeInfo, skillInfo, method, v3, v4);
  BattleLogic_UseSkillObject___ctor(v8, skillInfo, 0LL);
  this->fields.useSkillObject = v8;
  p_useSkillObject = &this->fields.useSkillObject;
  sub_B16F98((BattleServantConfConponent_o *)p_useSkillObject, (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
  v16 = (PlayMakerFSM_o *)*(p_useSkillObject - 14);
  if ( !v16 )
    sub_B170D4();
  PlayMakerFSM__SendEvent(v16, (System_String_o *)StringLiteral_9714/*"OK"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__onCloseConfComplete(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *confwindowComp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  BattleServantConfConponent_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v10; // x20
  int max_length; // w9
  BattleServantParamComponent_o *v12; // x0
  BattlePerformance_o *perf; // x0
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_40FA88C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, method);
    byte_40FA88C = 1;
  }
  confwindowComp = (UnityEngine_Component_o *)this->fields.confwindowComp;
  if ( !confwindowComp )
    goto LABEL_12;
  gameObject = UnityEngine_Component__get_gameObject(confwindowComp, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v5 = this->fields.confwindowComp;
  if ( !v5 )
    goto LABEL_12;
  BattleServantConfConponent__setConfData(v5, 0LL, 1, 0LL, 0, 0LL);
  list_param = this->fields.list_param;
  if ( !list_param )
    goto LABEL_12;
  v10 = 0LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    if ( (int)v10 >= max_length )
      break;
    if ( (unsigned int)v10 >= max_length )
    {
      sub_B17100(v6, v7, v8);
      sub_B170A0();
    }
    v12 = list_param->m_Items[v10];
    if ( v12 )
    {
      BattleServantParamComponent__setTouch(v12, 1, 0LL);
      list_param = this->fields.list_param;
      ++v10;
      if ( list_param )
        continue;
    }
    goto LABEL_12;
  }
  perf = this->fields.perf;
  if ( !perf || (BattlePerformance__changeAttackButton(perf, 1, 1, 1, 0LL), (myfsm = this->fields.myfsm) == 0LL) )
LABEL_12:
    sub_B170D4();
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5481/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__onOpenConfComplete(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_40FA8A5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, method);
    byte_40FA8A5 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5481/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__openSelectCommandTypeWindow(
        BattlePerformancePlayer_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *perf; // x0
  BattleSelectMainSubServantWindow_o *SelectMainSubSvtWindow; // x0
  BattlePerformance_o *v6; // x0
  BattleSelectServantWindow_o *SelectSvtWindow; // x0
  BattlePerformance_o *v8; // x0
  struct BattleSelectCommandTypeWindow_o *SelectCommandTypeWindow; // x0
  struct BattleSelectCommandTypeWindow_o **p_selectCommandTypeWindow; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct BattleSelectCommandTypeWindow_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  BattleSelectCommandTypeWindow_SelectServantCallBack_o *v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x8
  struct BattleSkillInfoData_o *skillInfo; // x8
  BattleData_o *data; // x0
  BattleSelectCommandTypeWindow_o *v32; // x19
  BattleServantData_o *ServantData; // x0

  if ( (byte_40FA8A0 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformancePlayer_selectedCommandType__, method);
    sub_B16FFC(&BattleSelectCommandTypeWindow_SelectServantCallBack_TypeInfo, v3);
    byte_40FA8A0 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_15;
  SelectMainSubSvtWindow = BattlePerformance__getSelectMainSubSvtWindow(perf, 0LL);
  if ( !SelectMainSubSvtWindow )
    goto LABEL_15;
  ((void (__fastcall *)(BattleSelectMainSubServantWindow_o *, Il2CppMethodPointer))SelectMainSubSvtWindow->klass->vtable._9_setClose.method)(
    SelectMainSubSvtWindow,
    SelectMainSubSvtWindow->klass->vtable._10_Open.methodPtr);
  v6 = this->fields.perf;
  if ( !v6 )
    goto LABEL_15;
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(v6, 0LL);
  if ( !SelectSvtWindow )
    goto LABEL_15;
  ((void (__fastcall *)(BattleSelectServantWindow_o *, Il2CppMethodPointer))SelectSvtWindow->klass->vtable._9_setClose.method)(
    SelectSvtWindow,
    SelectSvtWindow->klass->vtable._10_Open.methodPtr);
  v8 = this->fields.perf;
  if ( !v8 )
    goto LABEL_15;
  SelectCommandTypeWindow = BattlePerformance__getSelectCommandTypeWindow(v8, 0LL);
  this->fields.selectCommandTypeWindow = SelectCommandTypeWindow;
  p_selectCommandTypeWindow = &this->fields.selectCommandTypeWindow;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectCommandTypeWindow,
    (System_Int32_array **)SelectCommandTypeWindow,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = this->fields.selectCommandTypeWindow;
  v22 = (BattleSelectCommandTypeWindow_SelectServantCallBack_o *)sub_B170CC(
                                                                   BattleSelectCommandTypeWindow_SelectServantCallBack_TypeInfo,
                                                                   v18,
                                                                   v19,
                                                                   v20,
                                                                   v21);
  BattleSelectCommandTypeWindow_SelectServantCallBack___ctor(
    v22,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_selectedCommandType__,
    0LL);
  if ( !v17 )
    goto LABEL_15;
  v17->fields.selectCallBack = v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v17->fields.selectCallBack,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  tmp_useSkill = this->fields.tmp_useSkill;
  if ( !tmp_useSkill
    || (skillInfo = tmp_useSkill->fields.skillInfo) == 0LL
    || (data = this->fields.data) == 0LL
    || (v32 = this->fields.selectCommandTypeWindow,
        ServantData = BattleData__getServantData(data, skillInfo->fields.svtUniqueId, 0LL),
        !v32)
    || (BattleSelectCommandTypeWindow__SetServantData(v32, ServantData, 0, 0LL), !*p_selectCommandTypeWindow) )
  {
LABEL_15:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleSelectCommandTypeWindow_o *, _QWORD, Il2CppMethodPointer))(*p_selectCommandTypeWindow)->klass->vtable._10_Open.method)(
    *p_selectCommandTypeWindow,
    0LL,
    (*p_selectCommandTypeWindow)->klass->vtable._11_CompOpen.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__openSelectSvtWindow(
        BattlePerformancePlayer_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattlePerformance_o *perf; // x0
  BattleSelectMainSubServantWindow_o *SelectMainSubSvtWindow; // x0
  BattlePerformance_o *v8; // x0
  BattleSelectCommandTypeWindow_o *SelectCommandTypeWindow; // x0
  BattlePerformance_o *v10; // x0
  struct BattleSelectServantWindow_o *SelectSvtWindow; // x0
  struct BattleSelectServantWindow_o **p_selectSvtWindow; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleData_o *data; // x0
  const MethodInfo *v20; // x2
  BattleSelectServantWindow_o *v21; // x0
  bool v22; // w1
  struct BattleSelectServantWindow_o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  BattleSelectServantWindow_SelectServantCallBack_o *v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  BattleData_o *v35; // x0
  BattleSelectServantWindow_o *v36; // x20
  BattleServantData_array *FieldPlayerServantList; // x0

  if ( (byte_40FA89C & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformancePlayer_selectedSvt__, *(_QWORD *)&skillId);
    sub_B16FFC(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo, v5);
    byte_40FA89C = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_19;
  SelectMainSubSvtWindow = BattlePerformance__getSelectMainSubSvtWindow(perf, 0LL);
  if ( !SelectMainSubSvtWindow )
    goto LABEL_19;
  ((void (__fastcall *)(BattleSelectMainSubServantWindow_o *, Il2CppMethodPointer))SelectMainSubSvtWindow->klass->vtable._9_setClose.method)(
    SelectMainSubSvtWindow,
    SelectMainSubSvtWindow->klass->vtable._10_Open.methodPtr);
  v8 = this->fields.perf;
  if ( !v8 )
    goto LABEL_19;
  SelectCommandTypeWindow = BattlePerformance__getSelectCommandTypeWindow(v8, 0LL);
  if ( !SelectCommandTypeWindow )
    goto LABEL_19;
  ((void (__fastcall *)(BattleSelectCommandTypeWindow_o *, Il2CppMethodPointer))SelectCommandTypeWindow->klass->vtable._9_setClose.method)(
    SelectCommandTypeWindow,
    SelectCommandTypeWindow->klass->vtable._10_Open.methodPtr);
  v10 = this->fields.perf;
  if ( !v10 )
    goto LABEL_19;
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(v10, 0LL);
  this->fields.selectSvtWindow = SelectSvtWindow;
  p_selectSvtWindow = &this->fields.selectSvtWindow;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectSvtWindow,
    (System_Int32_array **)SelectSvtWindow,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  data = this->fields.data;
  if ( !data )
    goto LABEL_19;
  if ( BattleData__isTutorialSelectsvtCancel(data, 0LL) )
  {
    BattlePerformancePlayer__procTurorial(this, 3, v20);
    v21 = this->fields.selectSvtWindow;
    if ( !v21 )
      goto LABEL_19;
    v22 = 0;
  }
  else
  {
    v21 = *p_selectSvtWindow;
    if ( !*p_selectSvtWindow )
      goto LABEL_19;
    v22 = 1;
  }
  BattleSelectServantWindow__setUseClose(v21, v22, 0LL);
  v23 = this->fields.selectSvtWindow;
  v28 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_B170CC(
                                                               BattleSelectServantWindow_SelectServantCallBack_TypeInfo,
                                                               v24,
                                                               v25,
                                                               v26,
                                                               v27);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v28,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_selectedSvt__,
    0LL);
  if ( !v23
    || (v23->fields.selectCallBack = v28,
        sub_B16F98(
          (BattleServantConfConponent_o *)&v23->fields.selectCallBack,
          (System_Int32_array **)v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34),
        (v35 = this->fields.data) == 0LL)
    || (v36 = this->fields.selectSvtWindow,
        FieldPlayerServantList = BattleData__getFieldPlayerServantList(v35, 0LL),
        !v36)
    || (BattleSelectServantWindow__SetServantData(v36, FieldPlayerServantList, skillId, -1, 0LL, 0LL),
        !*p_selectSvtWindow) )
  {
LABEL_19:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleSelectServantWindow_o *, _QWORD, Il2CppMethodPointer))(*p_selectSvtWindow)->klass->vtable._10_Open.method)(
    *p_selectSvtWindow,
    0LL,
    (*p_selectSvtWindow)->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformancePlayer__openSvtConfWindow(
        BattlePerformancePlayer_o *this,
        float alphatime,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v7; // x1
  BattleServantConfConponent_o *confwindowComp; // x20
  BattleWindowComponent_EndCall_o *v9; // x21

  if ( (byte_40FA8A4 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformancePlayer_onOpenConfComplete__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v7);
    byte_40FA8A4 = 1;
  }
  confwindowComp = this->fields.confwindowComp;
  v9 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, method, v3, v4, v5);
  BattleWindowComponent_EndCall___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_onOpenConfComplete__,
    0LL);
  if ( !confwindowComp )
    sub_B170D4();
  BattleServantConfConponent__Open(confwindowComp, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__playAttackEffect(
        BattlePerformancePlayer_o *this,
        int32_t uniqueID,
        const MethodInfo *method)
{
  struct System_Int32_array *list_ID; // x8
  unsigned __int64 v6; // x21
  unsigned __int64 max_length; // x9
  struct BattleServantParamComponent_array *list_param; // x8
  BattleServantParamComponent_o *v9; // x0

  list_ID = this->fields.list_ID;
  if ( !list_ID )
LABEL_11:
    sub_B170D4();
  v6 = 0LL;
  while ( 1 )
  {
    max_length = list_ID->max_length;
    if ( (__int64)v6 >= (int)max_length )
      break;
    if ( v6 >= max_length )
      goto LABEL_13;
    if ( list_ID->m_Items[v6 + 1] == uniqueID )
    {
      list_param = this->fields.list_param;
      if ( !list_param )
        goto LABEL_11;
      if ( v6 >= list_param->max_length )
      {
LABEL_13:
        sub_B17100(this, *(_QWORD *)&uniqueID, method);
        sub_B170A0();
      }
      v9 = list_param->m_Items[v6];
      if ( !v9 )
        goto LABEL_11;
      BattleServantParamComponent__playAttackEffect(v9, 0LL);
      list_ID = this->fields.list_ID;
    }
    ++v6;
    if ( !list_ID )
      goto LABEL_11;
  }
}


void __fastcall BattlePerformancePlayer__procCloseAll(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattleBuffConfWindowComponent_o *buffConfWindow; // x0
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_40FA88D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, method);
    byte_40FA88D = 1;
  }
  BattlePerformancePlayer__procCloseConf(this, 0, v2);
  perf = this->fields.perf;
  if ( !perf
    || (statusPerf = perf->fields.statusPerf) == 0LL
    || (buffConfWindow = statusPerf->fields.buffConfWindow) == 0LL
    || (((void (__fastcall *)(struct BattleBuffConfWindowComponent_o *, _QWORD, Il2CppMethodPointer))buffConfWindow->klass->vtable._12_Close.method)(
          buffConfWindow,
          0LL,
          buffConfWindow->klass->vtable._13_CompClose.methodPtr),
        (myfsm = this->fields.myfsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5481/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__procCloseConf(
        BattlePerformancePlayer_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppClass *klass; // x8
  __int64 v8; // x20
  int namespaze; // w9
  BattleServantParamComponent_o *v10; // x0
  _QWORD *monitor; // x8
  __int64 v12; // x8
  __int64 v13; // x0
  BattlePerformance_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  BattleWindowComponent_EndCall_o *v19; // x20
  BattleServantConfConponent_o *v20; // x0

  v4 = (Il2CppObject *)this;
  if ( (byte_40FA88B & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformancePlayer_onCloseConfComplete__, flg);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v5);
    this = (BattlePerformancePlayer_o *)sub_B16FFC(&SeManager_TypeInfo, v6);
    byte_40FA88B = 1;
  }
  if ( flg )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(12, 0LL);
  }
  klass = v4[4].klass;
  if ( !klass )
    goto LABEL_14;
  v8 = 0LL;
  while ( 1 )
  {
    namespaze = (int)klass->_1.namespaze;
    if ( (int)v8 >= namespaze )
      break;
    if ( (unsigned int)v8 >= namespaze )
    {
      sub_B17100(this, flg, method);
      sub_B170A0();
    }
    v10 = (BattleServantParamComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + v8);
    if ( v10 )
    {
      BattleServantParamComponent__playEndShowServant(v10, 0LL);
      klass = v4[4].klass;
      ++v8;
      if ( klass )
        continue;
    }
    goto LABEL_14;
  }
  monitor = v4[2].monitor;
  if ( !monitor )
    goto LABEL_14;
  v12 = monitor[28];
  if ( !v12
    || (v13 = *(_QWORD *)(v12 + 88)) == 0
    || ((*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v13 + 504LL))(
          v13,
          0LL,
          *(_QWORD *)(*(_QWORD *)v13 + 512LL)),
        (v14 = (BattlePerformance_o *)v4[2].monitor) == 0LL)
    || (BattlePerformance__changeAttackButton(v14, 1, 0, 1, 0LL),
        v19 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v15, v16, v17, v18),
        BattleWindowComponent_EndCall___ctor(v19, v4, Method_BattlePerformancePlayer_onCloseConfComplete__, 0LL),
        (v20 = (BattleServantConfConponent_o *)v4[5].klass) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  BattleServantConfConponent__Close(v20, v19, 0LL);
}


void __fastcall BattlePerformancePlayer__procCloseSkillConf(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  BattleWindowComponent_EndCall_o *v10; // x21
  BattlePerformance_o *perf; // x0

  if ( (byte_40FA893 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformancePlayer_CloseSkillConfComp__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&SeManager_TypeInfo, v4);
    byte_40FA893 = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  skillConfWindow = this->fields.skillConfWindow;
  v10 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v6, v7, v8, v9);
  BattleWindowComponent_EndCall___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_CloseSkillConfComp__,
    0LL);
  if ( !skillConfWindow
    || (((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))skillConfWindow->klass->vtable._12_Close.method)(
          skillConfWindow,
          v10,
          skillConfWindow->klass->vtable._13_CompClose.methodPtr),
        (perf = this->fields.perf) == 0LL) )
  {
    sub_B170D4();
  }
  BattlePerformance__CloseSkillSelectAddFuncConfWindow(perf, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__procOpenSkillConf(
        BattlePerformancePlayer_o *this,
        bool cancelFlg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  PlayMakerFSM_o *otherFsm; // x0
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x22
  struct BattleSkillConfComponent_o *skillConfWindow; // x21
  System_Int32_array **gameObject; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BattleSkillConfComponent_o *v17; // x0
  struct BattleSkillConfComponent_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  BattleWindowComponent_EndCall_o *v23; // x21

  if ( (byte_40FA892 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformancePlayer_OpenSkillConfComplete__, cancelFlg);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_15170/*"WAIT_OTHER_SKILL"*/, v6);
    byte_40FA892 = 1;
  }
  otherFsm = this->fields.otherFsm;
  if ( !otherFsm )
    goto LABEL_9;
  tmp_useSkill = this->fields.tmp_useSkill;
  PlayMakerFSM__SendEvent(otherFsm, (System_String_o *)StringLiteral_15170/*"WAIT_OTHER_SKILL"*/, 0LL);
  skillConfWindow = this->fields.skillConfWindow;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !skillConfWindow
    || (skillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)gameObject,
        sub_B16F98(
          (BattleServantConfConponent_o *)&skillConfWindow->fields.target,
          gameObject,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        !tmp_useSkill)
    || (v17 = this->fields.skillConfWindow) == 0LL
    || (BattleSkillConfComponent__SetSkillConf(v17, tmp_useSkill->fields.skillInfo, cancelFlg, 1, 0LL),
        v18 = this->fields.skillConfWindow,
        v23 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v19, v20, v21, v22),
        BattleWindowComponent_EndCall___ctor(
          v23,
          (Il2CppObject *)this,
          Method_BattlePerformancePlayer_OpenSkillConfComplete__,
          0LL),
        !v18) )
  {
LABEL_9:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v18->klass->vtable._10_Open.method)(
    v18,
    v23,
    v18->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformancePlayer__procSelectServant(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *data; // x0
  struct BattleData_o *v5; // x8
  PlayMakerFSM_o *otherFsm; // x0
  int32_t tmp_uniqueId; // w20
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v12; // x21
  int max_length; // w10
  struct System_Int32_array *list_ID; // x9
  BattleServantParamComponent_o *v15; // x0
  struct BattleServantParamComponent_array *v16; // x8
  BattleServantParamComponent_o *v17; // x8
  BattleServantConfConponent_o *confwindowComp; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattleBuffConfWindowComponent_o *buffConfWindow; // x0
  float v22; // s0
  const MethodInfo *v23; // x1
  BattlePerformance_o *v24; // x0

  if ( (byte_40FA889 & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_12285/*"START_CLOSE"*/, v3);
    byte_40FA889 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_34;
  if ( !BattleData__isTutorial(data, 0LL) )
    goto LABEL_9;
  v5 = this->fields.data;
  if ( !v5 )
    goto LABEL_34;
  if ( v5->fields.tutorialId != 3 || v5->fields.wavecount != 1 || v5->fields.turnCount != 1 )
  {
LABEL_9:
    otherFsm = this->fields.otherFsm;
    if ( otherFsm )
    {
      tmp_uniqueId = this->fields.tmp_uniqueId;
      PlayMakerFSM__SendEvent(otherFsm, (System_String_o *)StringLiteral_12285/*"START_CLOSE"*/, 0LL);
      if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      SeManager__PlayCommonSe(11, 0LL);
      list_param = this->fields.list_param;
      if ( list_param )
      {
        v12 = 0LL;
        while ( 1 )
        {
          max_length = list_param->max_length;
          if ( (int)v12 >= max_length )
            break;
          list_ID = this->fields.list_ID;
          if ( !list_ID )
            goto LABEL_34;
          if ( (unsigned int)v12 >= list_ID->max_length || (unsigned int)v12 >= max_length )
            goto LABEL_35;
          v15 = list_param->m_Items[v12];
          if ( !v15 )
            goto LABEL_34;
          if ( tmp_uniqueId == list_ID->m_Items[v12 + 1] )
          {
            BattleServantParamComponent__playSelectServant(v15, 0LL);
            v16 = this->fields.list_param;
            if ( !v16 )
              goto LABEL_34;
            if ( (unsigned int)v12 >= v16->max_length )
            {
LABEL_35:
              sub_B17100(v8, v9, v10);
              sub_B170A0();
            }
            v17 = v16->m_Items[v12];
            if ( !v17 )
              goto LABEL_34;
            confwindowComp = this->fields.confwindowComp;
            if ( !confwindowComp )
              goto LABEL_34;
            BattleServantConfConponent__setConfData(confwindowComp, v17->fields.data, 0, 0LL, 0, 0LL);
          }
          else
          {
            BattleServantParamComponent__playCloseSelectServant(v15, 0LL);
          }
          list_param = this->fields.list_param;
          ++v12;
          if ( !list_param )
            goto LABEL_34;
        }
        perf = this->fields.perf;
        if ( perf )
        {
          statusPerf = perf->fields.statusPerf;
          if ( statusPerf )
          {
            buffConfWindow = statusPerf->fields.buffConfWindow;
            if ( buffConfWindow )
            {
              v22 = ((float (__fastcall *)(struct BattleBuffConfWindowComponent_o *, _QWORD, Il2CppMethodPointer))buffConfWindow->klass->vtable._12_Close.method)(
                      buffConfWindow,
                      0LL,
                      buffConfWindow->klass->vtable._13_CompClose.methodPtr);
              BattlePerformancePlayer__openSvtConfWindow(this, v22, v23);
              v24 = this->fields.perf;
              if ( v24 )
              {
                BattlePerformance__changeAttackButton(v24, 0, 0, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_34:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__procTurorial(
        BattlePerformancePlayer_o *this,
        int32_t param,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *v8; // x0
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x0
  __int64 *v15; // x8
  struct BattleData_o *data; // x8
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_o *v21; // x21

  if ( (byte_40FA8A7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&param);
    sub_B16FFC(&Method_BattlePerformancePlayer_tutorialSetSelectSvt__, v5);
    sub_B16FFC(&Method_BattlePerformancePlayer_tutorialSetSelect__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_40FA8A7 = 1;
  }
  switch ( param )
  {
    case 3:
      data = this->fields.data;
      if ( !data )
        goto LABEL_14;
      data->fields.tutorialState = 5;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
      v15 = &Method_BattlePerformancePlayer_tutorialSetSelectSvt__;
      goto LABEL_11;
    case 2:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
      v15 = &Method_BattlePerformancePlayer_tutorialSetSelect__;
LABEL_11:
      v21 = v14;
      System_Action___ctor(v14, (Il2CppObject *)this, *v15, 0LL);
      if ( !Instance )
        goto LABEL_14;
      CommonUI__CloseTutorialArrowMark(Instance, v21, 0LL);
      return;
    case 0:
      v8 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v8 )
      {
        CommonUI__CloseTutorialNotificationDialogArrow(v8, 0LL);
        return;
      }
LABEL_14:
      sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__selectedCommandType(
        BattlePerformancePlayer_o *this,
        int32_t uniqueId,
        int32_t cmdType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct BattleSelectCommandTypeWindow_o *selectCommandTypeWindow; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  struct BattleSkillInfoData_o *skillInfo; // x8
  struct BattleLogic_UseSkillObject_o *v11; // x8
  BattleLogic_o *logic; // x0
  PlayMakerFSM_o *myfsm; // x0
  __int64 *v14; // x8
  BattlePerformance_o *perf; // x0

  if ( (byte_40FA8A1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2912/*"CANCEL"*/, *(_QWORD *)&uniqueId);
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, v7);
    byte_40FA8A1 = 1;
  }
  selectCommandTypeWindow = this->fields.selectCommandTypeWindow;
  if ( !selectCommandTypeWindow )
    goto LABEL_17;
  ((void (__fastcall *)(struct BattleSelectCommandTypeWindow_o *, _QWORD, Il2CppMethodPointer, const MethodInfo *))selectCommandTypeWindow->klass->vtable._12_Close.method)(
    selectCommandTypeWindow,
    0LL,
    selectCommandTypeWindow->klass->vtable._13_CompClose.methodPtr,
    method);
  if ( cmdType )
  {
    actSkillObject = this->fields.actSkillObject;
    if ( actSkillObject )
    {
      skillInfo = actSkillObject->fields.skillInfo;
      if ( skillInfo )
      {
        skillInfo->fields.changeTDCommandType = cmdType;
        v11 = this->fields.actSkillObject;
        if ( v11 )
        {
          logic = this->fields.logic;
          if ( logic )
          {
            BattleLogic__wantUseSkill(logic, v11->fields.skillInfo, uniqueId, -1, 0LL);
            myfsm = this->fields.myfsm;
            if ( myfsm )
            {
              v14 = &StringLiteral_5481/*"END_PROC"*/;
LABEL_15:
              PlayMakerFSM__SendEvent(myfsm, (System_String_o *)*v14, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_17;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_17;
  if ( BattlePerformance__IsAllClosePreSkillSelWindows(perf, 0LL) )
  {
    myfsm = this->fields.myfsm;
    if ( myfsm )
    {
      v14 = &StringLiteral_2912/*"CANCEL"*/;
      goto LABEL_15;
    }
LABEL_17:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__selectedSvt(
        BattlePerformancePlayer_o *this,
        int32_t uniqueId,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct BattleSelectServantWindow_o *selectSvtWindow; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x22
  int32_t v22; // w0
  WarEntity_o *Entity; // x0
  SkillEntity_o *v24; // x22
  BattleServantData_o *ServantData; // x0
  BattleLogic_o *logic; // x0
  PlayMakerFSM_o *myfsm; // x0
  __int64 *v28; // x8
  struct BattleData_o *data; // x8
  BattlePerformance_o *perf; // x0
  CommonUI_o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_String_o *v36; // x21
  BattlePerformancePlayer___c_c *v37; // x8
  struct BattlePerformancePlayer___c_StaticFields *static_fields; // x9
  System_Action_o *_9__45_0; // x23
  System_String_o *v40; // x22
  Il2CppObject *v41; // x24
  struct BattlePerformancePlayer___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_40FA89D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&uniqueId);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&Method_BattlePerformancePlayer___c__selectedSvt_b__45_0__, v10);
    sub_B16FFC(&BattlePerformancePlayer___c_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_2912/*"CANCEL"*/, v12);
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, v13);
    sub_B16FFC(&StringLiteral_1/*""*/, v14);
    sub_B16FFC(&StringLiteral_2438/*"BATTLE_INVALID_SELECT_TARGET"*/, v15);
    byte_40FA89D = 1;
  }
  selectSvtWindow = this->fields.selectSvtWindow;
  if ( !selectSvtWindow )
    goto LABEL_38;
  ((void (__fastcall *)(struct BattleSelectServantWindow_o *, _QWORD, Il2CppMethodPointer))selectSvtWindow->klass->vtable._12_Close.method)(
    selectSvtWindow,
    0LL,
    selectSvtWindow->klass->vtable._13_CompClose.methodPtr);
  if ( uniqueId != -1 )
  {
    actSkillObject = this->fields.actSkillObject;
    if ( !actSkillObject )
      goto LABEL_38;
    skillInfo = actSkillObject->fields.skillInfo;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !skillInfo )
      goto LABEL_38;
    v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v22 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
            skillInfo,
            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v21 )
      goto LABEL_38;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v21,
               v22,
               (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_38;
    v24 = (SkillEntity_o *)Entity;
    ServantData = BattleData__getServantData(this->fields.data, uniqueId, 0LL);
    if ( !ServantData || !v24 )
      goto LABEL_38;
    if ( SkillEntity__checkUseTreasure(v24, ServantData->fields.followerType, 0LL) )
    {
      logic = this->fields.logic;
      if ( logic )
      {
        BattleLogic__wantUseSkill(logic, skillInfo, uniqueId, -1, 0LL);
        myfsm = this->fields.myfsm;
        if ( myfsm )
        {
          v28 = &StringLiteral_5481/*"END_PROC"*/;
LABEL_37:
          PlayMakerFSM__SendEvent(myfsm, (System_String_o *)*v28, 0LL);
          return;
        }
      }
      goto LABEL_38;
    }
    v31 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_2438/*"BATTLE_INVALID_SELECT_TARGET"*/, 0LL);
    v37 = BattlePerformancePlayer___c_TypeInfo;
    if ( (BYTE3(BattlePerformancePlayer___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformancePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformancePlayer___c_TypeInfo);
      v37 = BattlePerformancePlayer___c_TypeInfo;
    }
    static_fields = v37->static_fields;
    _9__45_0 = static_fields->__9__45_0;
    v40 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__45_0 )
    {
      if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        static_fields = BattlePerformancePlayer___c_TypeInfo->static_fields;
      }
      v41 = (Il2CppObject *)static_fields->__9;
      _9__45_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v32, v33, v34, v35);
      System_Action___ctor(_9__45_0, v41, Method_BattlePerformancePlayer___c__selectedSvt_b__45_0__, 0LL);
      v42 = BattlePerformancePlayer___c_TypeInfo->static_fields;
      v42->__9__45_0 = _9__45_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v42->__9__45_0,
        (System_Int32_array **)_9__45_0,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
    }
    if ( !v31 )
      goto LABEL_38;
    CommonUI__OpenNotificationDialog(v31, v40, v36, _9__45_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
LABEL_35:
    myfsm = this->fields.myfsm;
    if ( myfsm )
    {
      v28 = &StringLiteral_2912/*"CANCEL"*/;
      goto LABEL_37;
    }
LABEL_38:
    sub_B170D4();
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_38;
  if ( data->fields.tutorialId != 2 || data->fields.tutorialState != -1 )
  {
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_38;
    if ( BattlePerformance__IsAllClosePreSkillSelWindows(perf, 0LL) )
      goto LABEL_35;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__setParam(
        BattlePerformancePlayer_o *this,
        int32_t index,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *v6; // x21
  struct BattleServantParamComponent_array *list_param; // x8
  UnityEngine_Object_o *v8; // x22
  struct BattleServantParamComponent_array *v9; // x8
  BattleServantParamComponent_o *v10; // x0
  struct BattleServantParamComponent_array *v11; // x8
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleServantParamComponent_array *v14; // x8
  BattleServantParamComponent_o *v15; // x8
  struct System_Int32_array *list_ID; // x8

  v6 = this;
  if ( (byte_40FA885 & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_40FA885 = 1;
  }
  list_param = v6->fields.list_param;
  if ( !list_param )
    goto LABEL_23;
  if ( list_param->max_length <= index )
    goto LABEL_24;
  v8 = (UnityEngine_Object_o *)list_param->m_Items[index];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattlePerformancePlayer_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v6->fields.list_param;
    if ( v9 )
    {
      if ( v9->max_length <= index )
        goto LABEL_24;
      v10 = v9->m_Items[index];
      if ( v10 )
      {
        this = (BattlePerformancePlayer_o *)((__int64 (__fastcall *)(BattleServantParamComponent_o *, BattleServantData_o *, Il2CppMethodPointer))v10->klass->vtable._6_setData.method)(
                                              v10,
                                              svtdata,
                                              v10->klass->vtable._7_SetEnemyParamPosition.methodPtr);
        v11 = v6->fields.list_param;
        if ( v11 )
        {
          if ( v11->max_length <= index )
            goto LABEL_24;
          v12 = (UnityEngine_Component_o *)v11->m_Items[index];
          if ( v12 )
          {
            gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
            if ( svtdata )
            {
              BattleServantData__addParamObject(svtdata, gameObject, 0LL);
              v14 = v6->fields.list_param;
              if ( v14 )
              {
                if ( v14->max_length <= index )
                  goto LABEL_24;
                v15 = v14->m_Items[index];
                if ( v15 )
                {
                  v15->fields.index = index;
                  list_ID = v6->fields.list_ID;
                  if ( list_ID )
                  {
                    if ( list_ID->max_length > index )
                    {
                      list_ID->m_Items[index + 1] = svtdata->fields.uniqueId;
                      return;
                    }
LABEL_24:
                    sub_B17100(this, *(_QWORD *)&index, svtdata);
                    sub_B170A0();
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_23:
    sub_B170D4();
  }
}


bool __fastcall BattlePerformancePlayer__showSideEffect(
        BattlePerformancePlayer_o *this,
        BattleActionData_BuffData_o *buffData,
        const MethodInfo *method)
{
  struct BattleServantParamComponent_array *list_param; // x8
  BattlePerformancePlayer_o *v4; // x20
  __int64 v6; // x21
  int max_length; // w9
  unsigned int v8; // w22
  BattleServantParamComponent_o *v9; // x0
  struct BattleServantParamComponent_array *v11; // x8
  BattleServantParamComponent_o *v12; // x0

  list_param = this->fields.list_param;
  if ( !list_param )
    goto LABEL_9;
  v4 = this;
  v6 = 4LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= max_length )
      return 0;
    if ( v8 >= max_length )
      goto LABEL_15;
    if ( !buffData )
      goto LABEL_9;
    v9 = (BattleServantParamComponent_o *)*((_QWORD *)&list_param->obj.klass + v6);
    if ( !v9 )
      goto LABEL_9;
    this = (BattlePerformancePlayer_o *)BattleServantParamComponent__checkId(v9, buffData->fields.targetId, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    list_param = v4->fields.list_param;
    ++v6;
    if ( !list_param )
      goto LABEL_9;
  }
  v11 = v4->fields.list_param;
  if ( !v11 )
    goto LABEL_9;
  if ( v8 >= v11->max_length )
  {
LABEL_15:
    sub_B17100(this, buffData, method);
    sub_B170A0();
  }
  v12 = (BattleServantParamComponent_o *)*((_QWORD *)&v11->obj.klass + v6);
  if ( !v12 )
LABEL_9:
    sub_B170D4();
  BattleServantParamComponent__showSideEffect(v12, buffData, 0LL);
  return 1;
}


void __fastcall BattlePerformancePlayer__startCommand(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_40FA88E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12286/*"START_COM"*/, method);
    byte_40FA88E = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_12286/*"START_COM"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__startSkill(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_40FA89E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12303/*"START_SKILL"*/, method);
    byte_40FA89E = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_12303/*"START_SKILL"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__startTac(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_40FA886 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12307/*"START_TAC"*/, method);
    byte_40FA886 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_12307/*"START_TAC"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__tutorialSetArrowIcon(
        BattlePerformancePlayer_o *this,
        const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  CommonUI_o *Instance; // x0
  UnityEngine_Rect_o v7; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Vector2_o v8; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FA8A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FA8A8 = 1;
  }
  v9.fields.m_Width = 90.0;
  v9.fields.m_XMin = -230.0;
  v9.fields.m_YMin = -270.0;
  v9.fields.m_Height = 90.0;
  *(_QWORD *)&v7.fields.m_XMin = 0LL;
  *(_QWORD *)&v7.fields.m_Width = 0LL;
  UnityEngine_Rect___ctor(v9, v2, v3, v4, v5, (const MethodInfo *)&v7);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  v8.fields.x = -378.0;
  v8.fields.y = -151.0;
  CommonUI__OpenTutorialArrowMark(Instance, v8, 0.0, v7, 0LL, 0LL);
}


void __fastcall BattlePerformancePlayer__tutorialSetSelect(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  CommonUI_o *Instance; // x0
  UnityEngine_Rect_o v7; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Vector2_o v8; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FA8A9 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FA8A9 = 1;
  }
  v9.fields.m_XMin = -410.0;
  v9.fields.m_YMin = -104.0;
  v9.fields.m_Width = 820.0;
  v9.fields.m_Height = 280.0;
  *(_QWORD *)&v7.fields.m_XMin = 0LL;
  *(_QWORD *)&v7.fields.m_Width = 0LL;
  UnityEngine_Rect___ctor(v9, v2, v3, v4, v5, (const MethodInfo *)&v7);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  v8.fields.x = 310.0;
  v8.fields.y = -50.0;
  CommonUI__OpenTutorialArrowMark(Instance, v8, -90.0, v7, 0LL, 0LL);
}


void __fastcall BattlePerformancePlayer__tutorialSetSelectSvt(
        BattlePerformancePlayer_o *this,
        const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  CommonUI_o *Instance; // x0
  UnityEngine_Rect_o v7; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Vector2_o v8; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FA8AA & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FA8AA = 1;
  }
  v9.fields.m_XMin = -200.0;
  v9.fields.m_YMin = -175.0;
  v9.fields.m_Width = 400.0;
  v9.fields.m_Height = 350.0;
  *(_QWORD *)&v7.fields.m_XMin = 0LL;
  *(_QWORD *)&v7.fields.m_Width = 0LL;
  UnityEngine_Rect___ctor(v9, v2, v3, v4, v5, (const MethodInfo *)&v7);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  v8.fields.x = -0.0;
  v8.fields.y = -0.0;
  CommonUI__OpenTutorialArrowMark(Instance, v8, 0.0, v7, 0LL, 0LL);
}


void __fastcall BattlePerformancePlayer__updateBuff(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformancePlayer__updateView(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformancePlayer_o *v3; // x19
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v5; // x21
  unsigned __int64 max_length; // x9
  unsigned __int64 v7; // x23
  UnityEngine_Object_o *v8; // x20
  struct BattleServantParamComponent_array *v9; // x8
  BattleServantParamComponent_o *v10; // x0

  v3 = this;
  if ( (byte_40FA8A2 & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA8A2 = 1;
  }
  list_param = v3->fields.list_param;
  if ( !list_param )
LABEL_16:
    sub_B170D4();
  v5 = 4LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    v7 = v5 - 4;
    if ( v5 - 4 >= (int)max_length )
      break;
    if ( v7 >= max_length )
      goto LABEL_18;
    v8 = (UnityEngine_Object_o *)*((_QWORD *)&list_param->obj.klass + v5);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformancePlayer_o *)UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v9 = v3->fields.list_param;
      if ( !v9 )
        goto LABEL_16;
      if ( v7 >= v9->max_length )
      {
LABEL_18:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v10 = (BattleServantParamComponent_o *)*((_QWORD *)&v9->obj.klass + v5);
      if ( !v10 )
        goto LABEL_16;
      BattleServantParamComponent__updateView(v10, 0LL);
    }
    list_param = v3->fields.list_param;
    ++v5;
    if ( !list_param )
      goto LABEL_16;
  }
}


void __fastcall BattlePerformancePlayer__useSkillIcon(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  BattleLogic_UseSkillObject_o *v8; // x21
  struct BattleLogic_UseSkillObject_o **p_useSkillObject; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  PlayMakerFSM_o *v16; // x0

  if ( (byte_40FA895 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogic_UseSkillObject_TypeInfo, skillInfo);
    sub_B16FFC(&StringLiteral_3067/*"CLICK_SKILLICON"*/, v7);
    byte_40FA895 = 1;
  }
  v8 = (BattleLogic_UseSkillObject_o *)sub_B170CC(BattleLogic_UseSkillObject_TypeInfo, skillInfo, method, v3, v4);
  BattleLogic_UseSkillObject___ctor(v8, skillInfo, 0LL);
  this->fields.useSkillObject = v8;
  p_useSkillObject = &this->fields.useSkillObject;
  sub_B16F98((BattleServantConfConponent_o *)p_useSkillObject, (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
  v16 = (PlayMakerFSM_o *)*(p_useSkillObject - 14);
  if ( !v16 )
    sub_B170D4();
  PlayMakerFSM__SendEvent(v16, (System_String_o *)StringLiteral_3067/*"CLICK_SKILLICON"*/, 0LL);
}


void __fastcall BattlePerformancePlayer___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattlePerformancePlayer___c_StaticFields *static_fields; // x0

  if ( (byte_40F717F & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformancePlayer___c_TypeInfo, v1);
    byte_40F717F = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattlePerformancePlayer___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattlePerformancePlayer___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattlePerformancePlayer___c_o *)v5;
  sub_B16F98(static_fields, v5);
}


void __fastcall BattlePerformancePlayer___c___ctor(BattlePerformancePlayer___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformancePlayer___c___UseSkill_b__39_0(
        BattlePerformancePlayer___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformancePlayer___c___selectedSvt_b__45_0(
        BattlePerformancePlayer___c_o *this,
        const MethodInfo *method)
{
  ;
}