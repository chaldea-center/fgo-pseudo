void __fastcall BattlePerformancePlayer___ctor(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Int32_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct UnityEngine_Vector3_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4188518 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&UnityEngine_Vector3___TypeInfo, v3);
    byte_4188518 = 1;
  }
  v4 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 3LL);
  this->fields.list_ID = v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.list_ID, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct UnityEngine_Vector3_array *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 3LL);
  this->fields.list_pos = v11;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.list_pos,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.isPlayCommandSpellEffectStartAnim = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformancePlayer__CloseSkillConfComp(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4188500 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, method);
    byte_4188500 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm
    || (PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL),
        (myfsm = this->fields.otherFsm) == 0LL) )
  {
    sub_B2C434(myfsm, method);
  }
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
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
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v25; // x1
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v27; // x21
  __int64 v28; // x22
  int max_length; // w9
  il2cpp_array_size_t v30; // w23
  struct UnityEngine_Vector3_array *list_pos; // x24
  int v32; // s0
  int v33; // s1
  int v34; // s2
  _DWORD *v35; // x8
  struct BattleServantParamComponent_array *v36; // x8
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct BattleServantParamComponent_array *v43; // x8
  __int64 v44; // x8
  System_Int32_array **v45; // x1
  struct BattleServantParamComponent_array *v46; // x8
  __int64 v47; // x0

  this->fields.perf = inperf;
  p_perf = &this->fields.perf;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inperf,
    (System_String_array **)indata,
    (System_String_array **)inlogic,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)indata,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.logic = inlogic;
  sub_B2C2F8(
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
  v27 = 0LL;
  v28 = 4LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    v30 = v28 - 4;
    if ( (int)v28 - 4 >= max_length )
      break;
    if ( v30 >= max_length )
      goto LABEL_26;
    gameObject = (UnityEngine_Component_o *)*((_QWORD *)&list_param->obj.klass + v28);
    if ( gameObject )
    {
      list_pos = this->fields.list_pos;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)gameObject,
                                                  0LL);
        if ( gameObject )
        {
          *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Transform__get_position(
                                             (UnityEngine_Transform_o *)gameObject,
                                             0LL);
          if ( list_pos )
          {
            if ( v30 >= list_pos->max_length )
              goto LABEL_26;
            v35 = (_DWORD *)((char *)list_pos + v27);
            v35[8] = v32;
            v35[9] = v33;
            v35[10] = v34;
            v36 = this->fields.list_param;
            if ( v36 )
            {
              if ( v30 >= v36->max_length )
                goto LABEL_26;
              gameObject = (UnityEngine_Component_o *)*((_QWORD *)&v36->obj.klass + v28);
              if ( gameObject )
              {
                BattleServantParamComponent__setCloseMode((BattleServantParamComponent_o *)gameObject, 0LL);
                v43 = this->fields.list_param;
                if ( v43 )
                {
                  if ( v30 >= v43->max_length )
                    goto LABEL_26;
                  v44 = *((_QWORD *)&v43->obj.klass + v28);
                  if ( v44 )
                  {
                    v45 = (System_Int32_array **)*p_perf;
                    *(_QWORD *)(v44 + 264) = *p_perf;
                    sub_B2C2F8((BattleServantConfConponent_o *)(v44 + 264), v45, v37, v38, v39, v40, v41, v42);
                    v46 = this->fields.list_param;
                    if ( v46 )
                    {
                      if ( v30 >= v46->max_length )
                      {
LABEL_26:
                        v47 = sub_B2C460(gameObject);
                        sub_B2C400(v47, 0LL);
                      }
                      gameObject = (UnityEngine_Component_o *)*((_QWORD *)&v46->obj.klass + v28);
                      if ( gameObject )
                      {
                        BattleServantParamComponent__ForceDestroyAllEffect(
                          (BattleServantParamComponent_o *)gameObject,
                          0LL);
                        list_param = this->fields.list_param;
                        ++v28;
                        v27 += 12LL;
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
  gameObject = (UnityEngine_Component_o *)this->fields.skillConfWindow;
  if ( !gameObject
    || (BattleSkillConfComponent__setInit((BattleSkillConfComponent_o *)gameObject, this->fields.data, 0LL),
        (gameObject = (UnityEngine_Component_o *)this->fields.skillConfWindow) == 0LL)
    || ((*(void (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&gameObject->klass[1]._1.this_arg.bits)(
          gameObject,
          gameObject->klass[1]._1.element_class),
        (gameObject = (UnityEngine_Component_o *)this->fields.skillConfWindow) == 0LL) )
  {
LABEL_25:
    sub_B2C434(gameObject, v25);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[1]._1.parent)(
    gameObject,
    gameObject->klass[1]._1.generic_class);
}


void __fastcall BattlePerformancePlayer__OpenSkillConfComplete(
        BattlePerformancePlayer_o *this,
        const MethodInfo *method)
{
  BattleSkillConfComponent_o *skillConfWindow; // x0

  skillConfWindow = this->fields.skillConfWindow;
  if ( !skillConfWindow )
    sub_B2C434(0LL, method);
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
  BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4188506 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformancePlayer_SkillSelectedAddFunc__, skillInfo);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo, v6);
    byte_4188506 = 1;
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
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(
                                  (UnityEngine_Object_o *)SkillSelectAddFuncConfWindow,
                                  0LL,
                                  0LL);
  if ( ((unsigned __int8)perf & 1) != 0 )
    return 0;
  if ( !SkillSelectAddFuncConfWindow )
LABEL_12:
    sub_B2C434(perf, skillInfo);
  if ( BattleSkillSelectAddFuncConfComponent__SetPreOpenInfo(SkillSelectAddFuncConfWindow, skillInfo, 0LL) )
  {
    v9 = (BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *)sub_B2C42C(BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo);
    BattleSkillSelectAddFuncConfComponent_SelectCallBack___ctor(
      v9,
      (Il2CppObject *)this,
      Method_BattlePerformancePlayer_SkillSelectedAddFunc__,
      0LL);
    SkillSelectAddFuncConfWindow->fields.selectCallBack = v9;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&SkillSelectAddFuncConfWindow->fields.selectCallBack,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
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
  BattlePerformancePlayer_o *v6; // x20
  const MethodInfo *v7; // x2

  v6 = this;
  if ( (byte_4188507 & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_B2C35C(&StringLiteral_2920/*"CANCEL"*/, skillInfo);
    byte_4188507 = 1;
  }
  if ( selIndex != -1 )
  {
    if ( skillInfo )
    {
      BattleSkillInfoData__UpdateSelectAddIndex(skillInfo, selIndex, 0LL);
      BattlePerformancePlayer__WantUseSkill(v6, skillInfo, v7);
      return;
    }
LABEL_8:
    sub_B2C434(this, skillInfo);
  }
  this = (BattlePerformancePlayer_o *)v6->fields.myfsm;
  if ( !this )
    goto LABEL_8;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_2920/*"CANCEL"*/, 0LL);
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
  __int64 v10; // x0

  v4 = this;
  if ( (byte_4188517 & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, servantData);
    byte_4188517 = 1;
  }
  if ( servantData )
  {
    list_param = v4->fields.list_param;
    if ( !list_param )
LABEL_19:
      sub_B2C434(this, servantData);
    v6 = *(_QWORD *)&list_param->max_length;
    if ( (int)v6 >= 1 )
    {
      v7 = 0LL;
      do
      {
        if ( v7 >= (unsigned int)v6 )
        {
          v10 = sub_B2C460(this);
          sub_B2C400(v10, 0LL);
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
  PlayMakerFSM_o *logicSkill; // x0
  __int64 v18; // x1
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x20
  struct BattleLogic_o *logic; // x8
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  System_String_o *v24; // x20
  CommonUI_o *v25; // x21
  BattlePerformancePlayer___c_c *v26; // x8
  struct BattlePerformancePlayer___c_StaticFields *static_fields; // x9
  System_String_o *v28; // x22
  System_Action_o *_9__39_0; // x23
  Il2CppObject *v30; // x24
  struct BattlePerformancePlayer___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_o *text; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_4188504 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, playSe);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B2C35C(&SoundManager_TypeInfo, v11);
    sub_B2C35C(&Method_BattlePerformancePlayer___c__UseSkill_b__39_0__, v12);
    sub_B2C35C(&BattlePerformancePlayer___c_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_2920/*"CANCEL"*/, v14);
    sub_B2C35C(&StringLiteral_1/*""*/, v15);
    byte_4188504 = 1;
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
  sub_B2C2F8(
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
  logicSkill = (PlayMakerFSM_o *)logic->fields.logicSkill;
  if ( !logicSkill )
    goto LABEL_27;
  if ( !BattleLogicSkill__checkConditions((BattleLogicSkill_o *)logicSkill, skillInfo, &text, 0LL) )
  {
    logicSkill = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = text;
    v25 = (CommonUI_o *)logicSkill;
    v26 = BattlePerformancePlayer___c_TypeInfo;
    if ( (BYTE3(BattlePerformancePlayer___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformancePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformancePlayer___c_TypeInfo);
      v26 = BattlePerformancePlayer___c_TypeInfo;
    }
    static_fields = v26->static_fields;
    v28 = (System_String_o *)StringLiteral_1/*""*/;
    _9__39_0 = static_fields->__9__39_0;
    if ( !_9__39_0 )
    {
      if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        static_fields = BattlePerformancePlayer___c_TypeInfo->static_fields;
      }
      v30 = (Il2CppObject *)static_fields->__9;
      _9__39_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(_9__39_0, v30, Method_BattlePerformancePlayer___c__UseSkill_b__39_0__, 0LL);
      v31 = BattlePerformancePlayer___c_TypeInfo->static_fields;
      v31->__9__39_0 = _9__39_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v31->__9__39_0,
        (System_Int32_array **)_9__39_0,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    if ( v25 )
    {
      CommonUI__OpenNotificationDialog(v25, v28, v24, _9__39_0, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
      logicSkill = this->fields.myfsm;
      if ( logicSkill )
      {
        PlayMakerFSM__SendEvent(logicSkill, (System_String_o *)StringLiteral_2920/*"CANCEL"*/, 0LL);
        return;
      }
    }
LABEL_27:
    sub_B2C434(logicSkill, v18);
  }
  if ( !BattlePerformancePlayer__OpenSkillSelectAddFuncConfWindow(this, skillInfo, v22) )
    BattlePerformancePlayer__WantUseSkill(this, skillInfo, v23);
}


void __fastcall BattlePerformancePlayer__WantUseSkill(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Int32_array *ValidTargetTypeArray; // x21
  System_Func_int__bool__o *v11; // x22
  const MethodInfo *v12; // x1
  System_Func_int__bool__o *v13; // x22
  int32_t v14; // w1
  const MethodInfo *v15; // x2

  v4 = this;
  if ( (byte_4188505 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, skillInfo);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v5);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v6);
    sub_B2C35C(&Method_Target_isChoose__, v7);
    sub_B2C35C(&Method_Target_isCommandType__, v8);
    this = (BattlePerformancePlayer_o *)sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, v9);
    byte_4188505 = 1;
  }
  if ( !skillInfo )
    goto LABEL_11;
  ValidTargetTypeArray = BattleSkillInfoData__get_ValidTargetTypeArray(skillInfo, 0LL);
  v11 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v11,
    0LL,
    Method_Target_isCommandType__,
    (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
  if ( BasicHelper__Any_int__24273940(
         ValidTargetTypeArray,
         (System_Func_T__bool__o *)v11,
         (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496) )
  {
    BattlePerformancePlayer__openSelectCommandTypeWindow(v4, v12);
    return;
  }
  v13 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v13,
    0LL,
    Method_Target_isChoose__,
    (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
  if ( BasicHelper__Any_int__24273940(
         ValidTargetTypeArray,
         (System_Func_T__bool__o *)v13,
         (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496) )
  {
    v14 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
            skillInfo,
            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    BattlePerformancePlayer__openSelectSvtWindow(v4, v14, v15);
    return;
  }
  this = (BattlePerformancePlayer_o *)v4->fields.logic;
  if ( !this
    || (BattleLogic__wantUseSkill((BattleLogic_o *)this, skillInfo, skillInfo->fields.svtUniqueId, -1, 0LL),
        (this = (BattlePerformancePlayer_o *)v4->fields.myfsm) == 0LL) )
  {
LABEL_11:
    sub_B2C434(this, skillInfo);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__checkSkipFlg(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleWindowComponent_o *perf; // x0
  __int64 *v7; // x8
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x8
  struct BattleSkillInfoData_o *skillInfo; // x8
  struct BattleLogic_UseSkillObject_o *v10; // x8
  struct BattleSkillInfoData_o *v11; // x8
  struct BattleLogic_UseSkillObject_o *v12; // x8
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct BattleData_o *data; // x8
  struct BattleLogic_UseSkillObject_o *v20; // x1

  if ( (byte_41884FD & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9744/*"OK"*/, method);
    sub_B2C35C(&StringLiteral_2920/*"CANCEL"*/, v3);
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, v4);
    sub_B2C35C(&StringLiteral_12257/*"SKIP"*/, v5);
    byte_41884FD = 1;
  }
  perf = (BattleWindowComponent_o *)this->fields.perf;
  if ( !perf )
    goto LABEL_29;
  if ( !BattlePerformance__isOpenOrOpeningMainWindow((BattlePerformance_o *)perf, 0LL) )
  {
    perf = (BattleWindowComponent_o *)this->fields.skillConfWindow;
    if ( !perf )
      goto LABEL_29;
    perf = (BattleWindowComponent_o *)BattleWindowComponent__isOpenOrOpening(perf, 0LL);
    if ( ((unsigned __int8)perf & 1) == 0 )
    {
      tmp_useSkill = this->fields.tmp_useSkill;
      if ( tmp_useSkill )
      {
        skillInfo = tmp_useSkill->fields.skillInfo;
        if ( skillInfo )
        {
          perf = (BattleWindowComponent_o *)this->fields.data;
          if ( perf )
          {
            perf = (BattleWindowComponent_o *)BattleData__getServantData(
                                                (BattleData_o *)perf,
                                                skillInfo->fields.svtUniqueId,
                                                0LL);
            v10 = this->fields.tmp_useSkill;
            if ( v10 )
            {
              v11 = v10->fields.skillInfo;
              if ( v11 )
              {
                if ( perf )
                {
                  perf = (BattleWindowComponent_o *)BattleServantData__canUseSkill(
                                                      (BattleServantData_o *)perf,
                                                      v11->fields.index,
                                                      0LL);
                  if ( ((unsigned __int8)perf & 1) == 0 )
                    goto LABEL_25;
                  v12 = this->fields.tmp_useSkill;
                  if ( !v12 )
                    goto LABEL_29;
                  perf = (BattleWindowComponent_o *)v12->fields.skillInfo;
                  if ( !perf )
                    goto LABEL_29;
                  perf = (BattleWindowComponent_o *)BattleSkillInfoData__isChargeOK((BattleSkillInfoData_o *)perf, 0LL);
                  if ( ((unsigned __int8)perf & 1) != 0 )
                  {
                    data = this->fields.data;
                    if ( data )
                    {
                      if ( data->fields.systemflg_skipskillconf && !this->fields.isLongTap )
                      {
                        v20 = this->fields.tmp_useSkill;
                        this->fields.useSkillObject = v20;
                        sub_B2C2F8(
                          (BattleServantConfConponent_o *)&this->fields.useSkillObject,
                          (System_Int32_array **)v20,
                          v13,
                          v14,
                          v15,
                          v16,
                          v17,
                          v18);
                        perf = (BattleWindowComponent_o *)this->fields.myfsm;
                        if ( perf )
                        {
                          v7 = &StringLiteral_12257/*"SKIP"*/;
                          goto LABEL_9;
                        }
                      }
                      else
                      {
                        perf = (BattleWindowComponent_o *)this->fields.myfsm;
                        if ( perf )
                        {
                          v7 = &StringLiteral_9744/*"OK"*/;
                          goto LABEL_9;
                        }
                      }
                    }
                  }
                  else
                  {
LABEL_25:
                    perf = (BattleWindowComponent_o *)this->fields.myfsm;
                    if ( perf )
                    {
                      v7 = &StringLiteral_5496/*"END_PROC"*/;
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
      sub_B2C434(perf, method);
    }
  }
  perf = (BattleWindowComponent_o *)this->fields.myfsm;
  if ( !perf )
    goto LABEL_29;
  v7 = &StringLiteral_2920/*"CANCEL"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)*v7, 0LL);
}


void __fastcall BattlePerformancePlayer__checkTutorial(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattlePerformancePlayer_o *v2; // x19
  __int64 v3; // x1
  struct BattleData_o *data; // x8
  int32_t tutorialId; // w9
  __int64 *v6; // x8
  int32_t turnCount; // w9

  v2 = this;
  if ( (byte_4188512 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, method);
    this = (BattlePerformancePlayer_o *)sub_B2C35C(&StringLiteral_13533/*"TUTORIAL_SKILL"*/, v3);
    byte_4188512 = 1;
  }
  data = v2->fields.data;
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
        this = (BattlePerformancePlayer_o *)v2->fields.myfsm;
        if ( this )
        {
          v6 = &StringLiteral_5496/*"END_PROC"*/;
LABEL_8:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v6, 0LL);
          return;
        }
        goto LABEL_15;
      }
      if ( data->fields.tutorialState == -1 )
      {
        this = (BattlePerformancePlayer_o *)v2->fields.myfsm;
        if ( this )
        {
          v6 = &StringLiteral_13533/*"TUTORIAL_SKILL"*/;
          goto LABEL_8;
        }
LABEL_15:
        sub_B2C434(this, method);
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
    sub_B2C434(0LL, endCall);
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
  struct System_Int32_array *list_ID; // x8
  __int64 v11; // x0

  v4 = this;
  if ( (byte_41884F0 & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_41884F0 = 1;
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
          this = (BattlePerformancePlayer_o *)v7->m_Items[index];
          if ( this )
          {
            this = (BattlePerformancePlayer_o *)(*(__int64 (__fastcall **)(BattlePerformancePlayer_o *, _QWORD, void *))&this->klass[1]._1.byval_arg.bits)(
                                                  this,
                                                  0LL,
                                                  this->klass[1]._1.this_arg.data);
            list_ID = v4->fields.list_ID;
            if ( list_ID )
            {
              if ( list_ID->max_length > index )
              {
                list_ID->m_Items[index + 1] = -1;
                return;
              }
LABEL_21:
              v11 = sub_B2C460(this);
              sub_B2C400(v11, 0LL);
            }
          }
        }
      }
    }
LABEL_20:
    sub_B2C434(this, *(_QWORD *)&index);
  }
}


void __fastcall BattlePerformancePlayer__endSkill(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_418850B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5499/*"END_SKILL"*/, method);
    byte_418850B = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5499/*"END_SKILL"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__initSvtConfWindow(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *confwindowComp; // x0
  struct BattleServantConfConponent_o *v5; // x20
  BattleServantConfConponent_CloseButtonCallBack_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_418850F & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformancePlayer_onClickConfClose__, method);
    sub_B2C35C(&BattleServantConfConponent_CloseButtonCallBack_TypeInfo, v3);
    byte_418850F = 1;
  }
  confwindowComp = this->fields.confwindowComp;
  if ( !confwindowComp )
    goto LABEL_8;
  BattleServantConfConponent__Initialize(confwindowComp, this->fields.data, 0LL);
  confwindowComp = this->fields.confwindowComp;
  if ( !confwindowComp
    || (((void (__fastcall *)(BattleServantConfConponent_o *, Il2CppMethodPointer))confwindowComp->klass->vtable._7_setInitialPos.method)(
          confwindowComp,
          confwindowComp->klass->vtable._8_setInitialPosIfDefaultIsZero.methodPtr),
        (confwindowComp = this->fields.confwindowComp) == 0LL)
    || (((void (__fastcall *)(BattleServantConfConponent_o *, Il2CppMethodPointer))confwindowComp->klass->vtable._9_setClose.method)(
          confwindowComp,
          confwindowComp->klass->vtable._10_Open.methodPtr),
        v5 = this->fields.confwindowComp,
        v6 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_B2C42C(BattleServantConfConponent_CloseButtonCallBack_TypeInfo),
        BattleServantConfConponent_CloseButtonCallBack___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattlePerformancePlayer_onClickConfClose__,
          0LL),
        !v5) )
  {
LABEL_8:
    sub_B2C434(confwindowComp, method);
  }
  v5->fields.callback_close = v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v5->fields.callback_close,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


bool __fastcall BattlePerformancePlayer__isOpenSvtConf(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *confwindowComp; // x0

  confwindowComp = (BattleWindowComponent_o *)this->fields.confwindowComp;
  if ( !confwindowComp )
    sub_B2C434(0LL, method);
  return BattleWindowComponent__isOpen(confwindowComp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__modeComPlayerStatus(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattlePerformancePlayer_o *v2; // x19
  __int64 v3; // x1
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v5; // x21
  __int64 v6; // x22
  int max_length; // w9
  unsigned int v8; // w24
  WebViewObject_o *Component_WebViewObject; // x20
  int v10; // s0
  struct BattleServantParamComponent_array *v14; // x8
  struct UnityEngine_Vector3_array *list_pos; // x8
  struct BattleServantParamComponent_array *v16; // x8
  UnityEngine_Transform_o *transform; // x20
  int v18; // s0
  struct BattleServantParamComponent_array *v22; // x8
  __int64 v23; // x21
  unsigned __int64 v24; // x9
  unsigned __int64 v25; // x23
  UnityEngine_Object_o *v26; // x20
  struct BattleServantParamComponent_array *v27; // x8
  __int64 v28; // x0

  v2 = this;
  if ( (byte_41884FB & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    this = (BattlePerformancePlayer_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41884FB = 1;
  }
  list_param = v2->fields.list_param;
  if ( !list_param )
    goto LABEL_37;
  v5 = 0LL;
  v6 = 4LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= max_length )
      break;
    if ( v8 >= max_length )
      goto LABEL_39;
    this = (BattlePerformancePlayer_o *)*((_QWORD *)&list_param->obj.klass + v6);
    if ( this )
    {
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_white(0LL);
      if ( Component_WebViewObject )
      {
        UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v10, 0LL);
        v14 = v2->fields.list_param;
        if ( v14 )
        {
          if ( v8 >= v14->max_length )
            goto LABEL_39;
          this = (BattlePerformancePlayer_o *)*((_QWORD *)&v14->obj.klass + v6);
          if ( this )
          {
            this = (BattlePerformancePlayer_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
            list_pos = v2->fields.list_pos;
            if ( list_pos )
            {
              if ( v8 >= list_pos->max_length )
                goto LABEL_39;
              if ( this )
              {
                UnityEngine_Transform__set_position(
                  (UnityEngine_Transform_o *)this,
                  *(UnityEngine_Vector3_o *)&list_pos->m_Items[v5].fields.y,
                  0LL);
                v16 = v2->fields.list_param;
                if ( v16 )
                {
                  if ( v8 >= v16->max_length )
                  {
LABEL_39:
                    v28 = sub_B2C460(this);
                    sub_B2C400(v28, 0LL);
                  }
                  this = (BattlePerformancePlayer_o *)*((_QWORD *)&v16->obj.klass + v6);
                  if ( this )
                  {
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                    *(UnityEngine_Quaternion_o *)&v18 = UnityEngine_Quaternion__Euler(0.0, 0.0, 0.0, 0LL);
                    if ( transform )
                    {
                      UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v18, 0LL);
                      list_param = v2->fields.list_param;
                      ++v6;
                      ++v5;
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
  this = (BattlePerformancePlayer_o *)v2->fields.confwindowComp;
  if ( !this
    || (BattleServantConfConponent__Close((BattleServantConfConponent_o *)this, 0LL, 0LL),
        (this = (BattlePerformancePlayer_o *)v2->fields.skillConfWindow) == 0LL)
    || (((void (__fastcall *)(BattlePerformancePlayer_o *, _QWORD, void *))this->klass[1]._1.events)(
          this,
          0LL,
          this->klass[1]._1.properties),
        (this = (BattlePerformancePlayer_o *)v2->fields.perf) == 0LL)
    || (BattlePerformance__CloseSkillSelectAddFuncConfWindow((BattlePerformance_o *)this, 0LL, 0LL),
        (v22 = v2->fields.list_param) == 0LL) )
  {
LABEL_37:
    sub_B2C434(this, method);
  }
  v23 = 4LL;
  while ( 1 )
  {
    v24 = v22->max_length;
    v25 = v23 - 4;
    if ( v23 - 4 >= (int)v24 )
      break;
    if ( v25 >= v24 )
      goto LABEL_39;
    v26 = (UnityEngine_Object_o *)*((_QWORD *)&v22->obj.klass + v23);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformancePlayer_o *)UnityEngine_Object__op_Equality(v26, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v27 = v2->fields.list_param;
      if ( !v27 )
        goto LABEL_37;
      if ( v25 >= v27->max_length )
        goto LABEL_39;
      this = (BattlePerformancePlayer_o *)*((_QWORD *)&v27->obj.klass + v23);
      if ( !this )
        goto LABEL_37;
      BattleServantParamComponent__setCloseMode((BattleServantParamComponent_o *)this, 0LL);
    }
    v22 = v2->fields.list_param;
    ++v23;
    if ( !v22 )
      goto LABEL_37;
  }
}


void __fastcall BattlePerformancePlayer__modeTacPlayerStatus(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattleServantParamComponent_o *v3; // x0
  __int64 v4; // x1
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v6; // x21
  unsigned __int64 max_length; // x9
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x20
  struct BattleServantParamComponent_array *v10; // x8
  __int64 v11; // x0

  if ( (byte_41884F3 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41884F3 = 1;
  }
  BattlePerformancePlayer__updateView(this, method);
  list_param = this->fields.list_param;
  if ( !list_param )
LABEL_16:
    sub_B2C434(v3, v4);
  v6 = 4LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    v8 = v6 - 4;
    if ( v6 - 4 >= (int)max_length )
      break;
    if ( v8 >= max_length )
      goto LABEL_18;
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&list_param->obj.klass + v6);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v3 = (BattleServantParamComponent_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
    if ( ((unsigned __int8)v3 & 1) == 0 )
    {
      v10 = this->fields.list_param;
      if ( !v10 )
        goto LABEL_16;
      if ( v8 >= v10->max_length )
      {
LABEL_18:
        v11 = sub_B2C460(v3);
        sub_B2C400(v11, 0LL);
      }
      v3 = (BattleServantParamComponent_o *)*((_QWORD *)&v10->obj.klass + v6);
      if ( !v3 )
        goto LABEL_16;
      BattleServantParamComponent__setOpenMode(v3, this->fields.isPlayCommandSpellEffectStartAnim, 0LL);
    }
    list_param = this->fields.list_param;
    ++v6;
    if ( !list_param )
      goto LABEL_16;
  }
  this->fields.isPlayCommandSpellEffectStartAnim = 1;
}


void __fastcall BattlePerformancePlayer__onClickConfClose(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_41884F6 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3052/*"CLICK_CLOSE"*/, method);
    byte_41884F6 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_3052/*"CLICK_CLOSE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__onClickServant(
        BattlePerformancePlayer_o *this,
        int32_t uniqueID,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleServantConfConponent_o *confwindowComp; // x0
  __int64 *v7; // x8

  if ( (byte_41884F4 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3081/*"CLICK_SVTWINDOW"*/, *(_QWORD *)&uniqueID);
    sub_B2C35C(&StringLiteral_3052/*"CLICK_CLOSE"*/, v5);
    byte_41884F4 = 1;
  }
  confwindowComp = this->fields.confwindowComp;
  if ( !confwindowComp )
    goto LABEL_10;
  if ( !BattleServantConfConponent__isTargetSvt(confwindowComp, uniqueID, 0LL) )
  {
    confwindowComp = (BattleServantConfConponent_o *)this->fields.myfsm;
    this->fields.tmp_uniqueId = uniqueID;
    if ( confwindowComp )
    {
      v7 = &StringLiteral_3081/*"CLICK_SVTWINDOW"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_B2C434(confwindowComp, *(_QWORD *)&uniqueID);
  }
  confwindowComp = (BattleServantConfConponent_o *)this->fields.myfsm;
  if ( !confwindowComp )
    goto LABEL_10;
  v7 = &StringLiteral_3052/*"CLICK_CLOSE"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confwindowComp, (System_String_o *)*v7, 0LL);
}


void __fastcall BattlePerformancePlayer__onClickSkillCancel(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4188503 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2920/*"CANCEL"*/, method);
    byte_4188503 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_2920/*"CANCEL"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__onClickSkillIcon(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLong,
        const MethodInfo *method)
{
  __int64 v7; // x1
  BattleLogic_UseSkillObject_o *v8; // x20
  const MethodInfo *v9; // x1
  BattleData_o *data; // x0
  struct BattleData_o *v11; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct BattleLogic_UseSkillObject_o **p_tmp_useSkill; // x19

  if ( (byte_41884FC & 1) == 0 )
  {
    sub_B2C35C(&BattleLogic_UseSkillObject_TypeInfo, skillInfo);
    sub_B2C35C(&StringLiteral_3076/*"CLICK_SKILLICON"*/, v7);
    byte_41884FC = 1;
  }
  v8 = (BattleLogic_UseSkillObject_o *)sub_B2C42C(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v8, skillInfo, 0LL);
  data = this->fields.data;
  this->fields.isLongTap = isLong;
  if ( !data )
    goto LABEL_20;
  data = (BattleData_o *)BattleData__isTutorial(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_16;
  v11 = this->fields.data;
  if ( !v11 )
    goto LABEL_20;
  if ( v11->fields.tutorialId != 2 || v11->fields.turnCount != 2 )
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
    data = (BattleData_o *)statusPerf->fields.masterPerf;
    if ( !data )
      goto LABEL_20;
    if ( BattlePerformanceMaster__isCloseEnemyConf((BattlePerformanceMaster_o *)data, v9) )
    {
      data = (BattleData_o *)this->fields.logic;
      if ( !data )
        goto LABEL_20;
      if ( BattleLogic__isTimingUseSkill((BattleLogic_o *)data, 0LL) )
      {
        this->fields.tmp_useSkill = v8;
        p_tmp_useSkill = &this->fields.tmp_useSkill;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)p_tmp_useSkill,
          (System_Int32_array **)v8,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        data = (BattleData_o *)*(p_tmp_useSkill - 13);
        if ( data )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_3076/*"CLICK_SKILLICON"*/, 0LL);
          return;
        }
LABEL_20:
        sub_B2C434(data, v9);
      }
    }
  }
}


void __fastcall BattlePerformancePlayer__onClickSkillOK(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleLogic_UseSkillObject_o *v6; // x21
  struct BattleLogic_UseSkillObject_o **p_useSkillObject; // x19
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  PlayMakerFSM_o *v15; // x0

  if ( (byte_4188502 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogic_UseSkillObject_TypeInfo, skillInfo);
    sub_B2C35C(&StringLiteral_9744/*"OK"*/, v5);
    byte_4188502 = 1;
  }
  v6 = (BattleLogic_UseSkillObject_o *)sub_B2C42C(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v6, skillInfo, 0LL);
  this->fields.useSkillObject = v6;
  p_useSkillObject = &this->fields.useSkillObject;
  sub_B2C2F8((BattleServantConfConponent_o *)p_useSkillObject, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
  v15 = (PlayMakerFSM_o *)*(p_useSkillObject - 14);
  if ( !v15 )
    sub_B2C434(0LL, v14);
  PlayMakerFSM__SendEvent(v15, (System_String_o *)StringLiteral_9744/*"OK"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__onCloseConfComplete(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *confwindowComp; // x0
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v5; // x20
  int max_length; // w9
  __int64 v7; // x0

  if ( (byte_41884F8 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, method);
    byte_41884F8 = 1;
  }
  confwindowComp = (UnityEngine_Component_o *)this->fields.confwindowComp;
  if ( !confwindowComp )
    goto LABEL_12;
  confwindowComp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(confwindowComp, 0LL);
  if ( !confwindowComp )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confwindowComp, 0, 0LL);
  confwindowComp = (UnityEngine_Component_o *)this->fields.confwindowComp;
  if ( !confwindowComp )
    goto LABEL_12;
  BattleServantConfConponent__setConfData((BattleServantConfConponent_o *)confwindowComp, 0LL, 1, 0LL, 0, 0LL);
  list_param = this->fields.list_param;
  if ( !list_param )
    goto LABEL_12;
  v5 = 0LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v7 = sub_B2C460(confwindowComp);
      sub_B2C400(v7, 0LL);
    }
    confwindowComp = (UnityEngine_Component_o *)list_param->m_Items[v5];
    if ( confwindowComp )
    {
      BattleServantParamComponent__setTouch((BattleServantParamComponent_o *)confwindowComp, 1, 0LL);
      list_param = this->fields.list_param;
      ++v5;
      if ( list_param )
        continue;
    }
    goto LABEL_12;
  }
  confwindowComp = (UnityEngine_Component_o *)this->fields.perf;
  if ( !confwindowComp
    || (BattlePerformance__changeAttackButton((BattlePerformance_o *)confwindowComp, 1, 1, 1, 0LL),
        (confwindowComp = (UnityEngine_Component_o *)this->fields.myfsm) == 0LL) )
  {
LABEL_12:
    sub_B2C434(confwindowComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confwindowComp, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__onOpenConfComplete(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4188511 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, method);
    byte_4188511 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__openSelectCommandTypeWindow(
        BattlePerformancePlayer_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *perf; // x0
  struct BattleSelectCommandTypeWindow_o *SelectCommandTypeWindow; // x0
  struct BattleSelectCommandTypeWindow_o **p_selectCommandTypeWindow; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct BattleSelectCommandTypeWindow_o *v13; // x21
  BattleSelectCommandTypeWindow_SelectServantCallBack_o *v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x8
  struct BattleSkillInfoData_o *skillInfo; // x8
  BattleSelectCommandTypeWindow_o *v23; // x19

  if ( (byte_418850C & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformancePlayer_selectedCommandType__, method);
    sub_B2C35C(&BattleSelectCommandTypeWindow_SelectServantCallBack_TypeInfo, v3);
    byte_418850C = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_15;
  perf = (BattlePerformance_o *)BattlePerformance__getSelectMainSubSvtWindow(perf, 0LL);
  if ( !perf )
    goto LABEL_15;
  ((void (__fastcall *)(BattlePerformance_o *, void *))perf->klass[1]._1.parent)(perf, perf->klass[1]._1.generic_class);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_15;
  perf = (BattlePerformance_o *)BattlePerformance__getSelectSvtWindow(perf, 0LL);
  if ( !perf )
    goto LABEL_15;
  ((void (__fastcall *)(BattlePerformance_o *, void *))perf->klass[1]._1.parent)(perf, perf->klass[1]._1.generic_class);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_15;
  SelectCommandTypeWindow = BattlePerformance__getSelectCommandTypeWindow(perf, 0LL);
  this->fields.selectCommandTypeWindow = SelectCommandTypeWindow;
  p_selectCommandTypeWindow = &this->fields.selectCommandTypeWindow;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.selectCommandTypeWindow,
    (System_Int32_array **)SelectCommandTypeWindow,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = this->fields.selectCommandTypeWindow;
  v14 = (BattleSelectCommandTypeWindow_SelectServantCallBack_o *)sub_B2C42C(BattleSelectCommandTypeWindow_SelectServantCallBack_TypeInfo);
  BattleSelectCommandTypeWindow_SelectServantCallBack___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_selectedCommandType__,
    0LL);
  if ( !v13 )
    goto LABEL_15;
  v13->fields.selectCallBack = v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v13->fields.selectCallBack,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  tmp_useSkill = this->fields.tmp_useSkill;
  if ( !tmp_useSkill
    || (skillInfo = tmp_useSkill->fields.skillInfo) == 0LL
    || (perf = (BattlePerformance_o *)this->fields.data) == 0LL
    || (v23 = this->fields.selectCommandTypeWindow,
        perf = (BattlePerformance_o *)BattleData__getServantData(
                                        (BattleData_o *)perf,
                                        skillInfo->fields.svtUniqueId,
                                        0LL),
        !v23)
    || (BattleSelectCommandTypeWindow__SetServantData(v23, (BattleServantData_o *)perf, 0, 0LL),
        (perf = (BattlePerformance_o *)*p_selectCommandTypeWindow) == 0LL) )
  {
LABEL_15:
    sub_B2C434(perf, method);
  }
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.typeMetadataHandle)(
    perf,
    0LL,
    perf->klass[1]._1.interopData);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__openSelectSvtWindow(
        BattlePerformancePlayer_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattlePerformance_o *perf; // x0
  struct BattleSelectServantWindow_o *SelectSvtWindow; // x0
  struct BattleSelectServantWindow_o **p_selectSvtWindow; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2
  bool v16; // w1
  struct BattleSelectServantWindow_o *v17; // x22
  BattleSelectServantWindow_SelectServantCallBack_o *v18; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BattleSelectServantWindow_o *v25; // x20

  if ( (byte_4188508 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformancePlayer_selectedSvt__, *(_QWORD *)&skillId);
    sub_B2C35C(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo, v5);
    byte_4188508 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_19;
  perf = (BattlePerformance_o *)BattlePerformance__getSelectMainSubSvtWindow(perf, 0LL);
  if ( !perf )
    goto LABEL_19;
  ((void (__fastcall *)(BattlePerformance_o *, void *))perf->klass[1]._1.parent)(perf, perf->klass[1]._1.generic_class);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_19;
  perf = (BattlePerformance_o *)BattlePerformance__getSelectCommandTypeWindow(perf, 0LL);
  if ( !perf )
    goto LABEL_19;
  ((void (__fastcall *)(BattlePerformance_o *, void *))perf->klass[1]._1.parent)(perf, perf->klass[1]._1.generic_class);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_19;
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0LL);
  this->fields.selectSvtWindow = SelectSvtWindow;
  p_selectSvtWindow = &this->fields.selectSvtWindow;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.selectSvtWindow,
    (System_Int32_array **)SelectSvtWindow,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  perf = (BattlePerformance_o *)this->fields.data;
  if ( !perf )
    goto LABEL_19;
  if ( BattleData__isTutorialSelectsvtCancel((BattleData_o *)perf, 0LL) )
  {
    BattlePerformancePlayer__procTurorial(this, 3, v15);
    perf = (BattlePerformance_o *)this->fields.selectSvtWindow;
    if ( !perf )
      goto LABEL_19;
    v16 = 0;
  }
  else
  {
    perf = (BattlePerformance_o *)*p_selectSvtWindow;
    if ( !*p_selectSvtWindow )
      goto LABEL_19;
    v16 = 1;
  }
  BattleSelectServantWindow__setUseClose((BattleSelectServantWindow_o *)perf, v16, 0LL);
  v17 = this->fields.selectSvtWindow;
  v18 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_B2C42C(BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_selectedSvt__,
    0LL);
  if ( !v17
    || (v17->fields.selectCallBack = v18,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v17->fields.selectCallBack,
          (System_Int32_array **)v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        (perf = (BattlePerformance_o *)this->fields.data) == 0LL)
    || (v25 = this->fields.selectSvtWindow,
        perf = (BattlePerformance_o *)BattleData__getFieldPlayerServantList((BattleData_o *)perf, 0LL),
        !v25)
    || (BattleSelectServantWindow__SetServantData(v25, (BattleServantData_array *)perf, skillId, -1, 0LL, 0LL),
        (perf = (BattlePerformance_o *)*p_selectSvtWindow) == 0LL) )
  {
LABEL_19:
    sub_B2C434(perf, *(_QWORD *)&skillId);
  }
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.typeMetadataHandle)(
    perf,
    0LL,
    perf->klass[1]._1.interopData);
}


void __fastcall BattlePerformancePlayer__openSvtConfWindow(
        BattlePerformancePlayer_o *this,
        float alphatime,
        const MethodInfo *method)
{
  __int64 v4; // x1
  BattleServantConfConponent_o *confwindowComp; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4188510 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformancePlayer_onOpenConfComplete__, method);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_4188510 = 1;
  }
  confwindowComp = this->fields.confwindowComp;
  v6 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_onOpenConfComplete__,
    0LL);
  if ( !confwindowComp )
    sub_B2C434(v7, v8);
  BattleServantConfConponent__Open(confwindowComp, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__playAttackEffect(
        BattlePerformancePlayer_o *this,
        int32_t uniqueID,
        const MethodInfo *method)
{
  struct System_Int32_array *list_ID; // x8
  BattlePerformancePlayer_o *v4; // x19
  unsigned __int64 v6; // x21
  unsigned __int64 max_length; // x9
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v9; // x0

  list_ID = this->fields.list_ID;
  if ( !list_ID )
LABEL_11:
    sub_B2C434(this, *(_QWORD *)&uniqueID);
  v4 = this;
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
      list_param = v4->fields.list_param;
      if ( !list_param )
        goto LABEL_11;
      if ( v6 >= list_param->max_length )
      {
LABEL_13:
        v9 = sub_B2C460(this);
        sub_B2C400(v9, 0LL);
      }
      this = (BattlePerformancePlayer_o *)list_param->m_Items[v6];
      if ( !this )
        goto LABEL_11;
      BattleServantParamComponent__playAttackEffect((BattleServantParamComponent_o *)this, 0LL);
      list_ID = v4->fields.list_ID;
    }
    ++v6;
    if ( !list_ID )
      goto LABEL_11;
  }
}


void __fastcall BattlePerformancePlayer__procCloseAll(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PlayMakerFSM_o *buffConfWindow; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8

  if ( (byte_41884F9 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, method);
    byte_41884F9 = 1;
  }
  BattlePerformancePlayer__procCloseConf(this, 0, v2);
  perf = this->fields.perf;
  if ( !perf
    || (statusPerf = perf->fields.statusPerf) == 0LL
    || (buffConfWindow = (PlayMakerFSM_o *)statusPerf->fields.buffConfWindow) == 0LL
    || (((void (__fastcall *)(PlayMakerFSM_o *, _QWORD, void *))buffConfWindow->klass[1]._1.typeMetadataHandle)(
          buffConfWindow,
          0LL,
          buffConfWindow->klass[1]._1.interopData),
        (buffConfWindow = this->fields.myfsm) == 0LL) )
  {
    sub_B2C434(buffConfWindow, v5);
  }
  PlayMakerFSM__SendEvent(buffConfWindow, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__procCloseConf(
        BattlePerformancePlayer_o *this,
        bool flg,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v8; // x20
  int max_length; // w9
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  BattleWindowComponent_EndCall_o *v12; // x20
  __int64 v13; // x0

  v4 = this;
  if ( (byte_41884F7 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformancePlayer_onCloseConfComplete__, flg);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v5);
    this = (BattlePerformancePlayer_o *)sub_B2C35C(&SeManager_TypeInfo, v6);
    byte_41884F7 = 1;
  }
  if ( flg )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(12, 0LL);
  }
  list_param = v4->fields.list_param;
  if ( !list_param )
    goto LABEL_14;
  v8 = 0LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
    {
      v13 = sub_B2C460(this);
      sub_B2C400(v13, 0LL);
    }
    this = (BattlePerformancePlayer_o *)list_param->m_Items[v8];
    if ( this )
    {
      BattleServantParamComponent__playEndShowServant((BattleServantParamComponent_o *)this, 0LL);
      list_param = v4->fields.list_param;
      ++v8;
      if ( list_param )
        continue;
    }
    goto LABEL_14;
  }
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_14;
  statusPerf = perf->fields.statusPerf;
  if ( !statusPerf
    || (this = (BattlePerformancePlayer_o *)statusPerf->fields.buffConfWindow) == 0LL
    || (((void (__fastcall *)(BattlePerformancePlayer_o *, _QWORD, void *))this->klass[1]._1.events)(
          this,
          0LL,
          this->klass[1]._1.properties),
        (this = (BattlePerformancePlayer_o *)v4->fields.perf) == 0LL)
    || (BattlePerformance__changeAttackButton((BattlePerformance_o *)this, 1, 0, 1, 0LL),
        v12 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v12,
          (Il2CppObject *)v4,
          Method_BattlePerformancePlayer_onCloseConfComplete__,
          0LL),
        (this = (BattlePerformancePlayer_o *)v4->fields.confwindowComp) == 0LL) )
  {
LABEL_14:
    sub_B2C434(this, flg);
  }
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)this, v12, 0LL);
}


void __fastcall BattlePerformancePlayer__procCloseSkillConf(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  BattlePerformance_o *perf; // x0
  __int64 v8; // x1

  if ( (byte_41884FF & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformancePlayer_CloseSkillConfComp__, method);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B2C35C(&SeManager_TypeInfo, v4);
    byte_41884FF = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  skillConfWindow = this->fields.skillConfWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_CloseSkillConfComp__,
    0LL);
  if ( !skillConfWindow
    || (((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))skillConfWindow->klass->vtable._12_Close.method)(
          skillConfWindow,
          v6,
          skillConfWindow->klass->vtable._13_CompClose.methodPtr),
        (perf = this->fields.perf) == 0LL) )
  {
    sub_B2C434(perf, v8);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct BattleSkillConfComponent_o *v16; // x20
  BattleWindowComponent_EndCall_o *v17; // x21

  if ( (byte_41884FE & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformancePlayer_OpenSkillConfComplete__, cancelFlg);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_15230/*"WAIT_OTHER_SKILL"*/, v6);
    byte_41884FE = 1;
  }
  otherFsm = this->fields.otherFsm;
  if ( !otherFsm )
    goto LABEL_9;
  tmp_useSkill = this->fields.tmp_useSkill;
  PlayMakerFSM__SendEvent(otherFsm, (System_String_o *)StringLiteral_15230/*"WAIT_OTHER_SKILL"*/, 0LL);
  skillConfWindow = this->fields.skillConfWindow;
  otherFsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !skillConfWindow
    || (skillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)otherFsm,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&skillConfWindow->fields.target,
          (System_Int32_array **)otherFsm,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        !tmp_useSkill)
    || (otherFsm = (PlayMakerFSM_o *)this->fields.skillConfWindow) == 0LL
    || (BattleSkillConfComponent__SetSkillConf(
          (BattleSkillConfComponent_o *)otherFsm,
          tmp_useSkill->fields.skillInfo,
          cancelFlg,
          1,
          0LL),
        v16 = this->fields.skillConfWindow,
        v17 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v17,
          (Il2CppObject *)this,
          Method_BattlePerformancePlayer_OpenSkillConfComplete__,
          0LL),
        !v16) )
  {
LABEL_9:
    sub_B2C434(otherFsm, cancelFlg);
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v16->klass->vtable._10_Open.method)(
    v16,
    v17,
    v16->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformancePlayer__procSelectServant(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *data; // x0
  struct BattleData_o *v5; // x8
  int32_t tmp_uniqueId; // w20
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v8; // x21
  int max_length; // w10
  struct System_Int32_array *list_ID; // x9
  struct BattleServantParamComponent_array *v11; // x8
  BattleServantParamComponent_o *v12; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  float v15; // s0
  const MethodInfo *v16; // x1
  __int64 v17; // x0

  if ( (byte_41884F5 & 1) == 0 )
  {
    sub_B2C35C(&SeManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_12338/*"START_CLOSE"*/, v3);
    byte_41884F5 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_34;
  data = (BattleData_o *)BattleData__isTutorial(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_9;
  v5 = this->fields.data;
  if ( !v5 )
    goto LABEL_34;
  if ( v5->fields.tutorialId != 3 || v5->fields.wavecount != 1 || v5->fields.turnCount != 1 )
  {
LABEL_9:
    data = (BattleData_o *)this->fields.otherFsm;
    if ( data )
    {
      tmp_uniqueId = this->fields.tmp_uniqueId;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_12338/*"START_CLOSE"*/, 0LL);
      if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      SeManager__PlayCommonSe(11, 0LL);
      list_param = this->fields.list_param;
      if ( list_param )
      {
        v8 = 0LL;
        while ( 1 )
        {
          max_length = list_param->max_length;
          if ( (int)v8 >= max_length )
            break;
          list_ID = this->fields.list_ID;
          if ( !list_ID )
            goto LABEL_34;
          if ( (unsigned int)v8 >= list_ID->max_length || (unsigned int)v8 >= max_length )
            goto LABEL_35;
          data = (BattleData_o *)list_param->m_Items[v8];
          if ( !data )
            goto LABEL_34;
          if ( tmp_uniqueId == list_ID->m_Items[v8 + 1] )
          {
            BattleServantParamComponent__playSelectServant((BattleServantParamComponent_o *)data, 0LL);
            v11 = this->fields.list_param;
            if ( !v11 )
              goto LABEL_34;
            if ( (unsigned int)v8 >= v11->max_length )
            {
LABEL_35:
              v17 = sub_B2C460(data);
              sub_B2C400(v17, 0LL);
            }
            v12 = v11->m_Items[v8];
            if ( !v12 )
              goto LABEL_34;
            data = (BattleData_o *)this->fields.confwindowComp;
            if ( !data )
              goto LABEL_34;
            BattleServantConfConponent__setConfData(
              (BattleServantConfConponent_o *)data,
              v12->fields.data,
              0,
              0LL,
              0,
              0LL);
          }
          else
          {
            BattleServantParamComponent__playCloseSelectServant((BattleServantParamComponent_o *)data, 0LL);
          }
          list_param = this->fields.list_param;
          ++v8;
          if ( !list_param )
            goto LABEL_34;
        }
        perf = this->fields.perf;
        if ( perf )
        {
          statusPerf = perf->fields.statusPerf;
          if ( statusPerf )
          {
            data = (BattleData_o *)statusPerf->fields.buffConfWindow;
            if ( data )
            {
              v15 = ((float (__fastcall *)(BattleData_o *, _QWORD, void *))data->klass[1]._1.typeMetadataHandle)(
                      data,
                      0LL,
                      data->klass[1]._1.interopData);
              BattlePerformancePlayer__openSvtConfWindow(this, v15, v16);
              data = (BattleData_o *)this->fields.perf;
              if ( data )
              {
                BattlePerformance__changeAttackButton((BattlePerformance_o *)data, 0, 0, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_34:
    sub_B2C434(data, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__procTurorial(
        BattlePerformancePlayer_o *this,
        int32_t param,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v9; // x0
  __int64 *v10; // x8
  Il2CppClass *klass; // x8
  System_Action_o *v12; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4188513 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&param);
    sub_B2C35C(&Method_BattlePerformancePlayer_tutorialSetSelectSvt__, v5);
    sub_B2C35C(&Method_BattlePerformancePlayer_tutorialSetSelect__, v6);
    this = (BattlePerformancePlayer_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4188513 = 1;
  }
  switch ( param )
  {
    case 3:
      klass = v4[3].klass;
      if ( !klass )
        goto LABEL_14;
      HIDWORD(klass->vtable[44].method) = 5;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      v10 = &Method_BattlePerformancePlayer_tutorialSetSelectSvt__;
      goto LABEL_11;
    case 2:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      v10 = &Method_BattlePerformancePlayer_tutorialSetSelect__;
LABEL_11:
      v12 = v9;
      System_Action___ctor(v9, v4, *v10, 0LL);
      if ( !Instance )
        goto LABEL_14;
      CommonUI__CloseTutorialArrowMark(Instance, v12, 0LL);
      return;
    case 0:
      this = (BattlePerformancePlayer_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( this )
      {
        CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)this, 0LL);
        return;
      }
LABEL_14:
      sub_B2C434(this, *(_QWORD *)&param);
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
  BattleLogic_o *selectCommandTypeWindow; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  struct BattleSkillInfoData_o *skillInfo; // x8
  struct BattleLogic_UseSkillObject_o *v11; // x8
  __int64 *v12; // x8

  if ( (byte_418850D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2920/*"CANCEL"*/, *(_QWORD *)&uniqueId);
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, v7);
    byte_418850D = 1;
  }
  selectCommandTypeWindow = (BattleLogic_o *)this->fields.selectCommandTypeWindow;
  if ( !selectCommandTypeWindow )
    goto LABEL_17;
  selectCommandTypeWindow = (BattleLogic_o *)((__int64 (__fastcall *)(BattleLogic_o *, _QWORD, void *, const MethodInfo *))selectCommandTypeWindow->klass[1]._1.events)(
                                               selectCommandTypeWindow,
                                               0LL,
                                               selectCommandTypeWindow->klass[1]._1.properties,
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
          selectCommandTypeWindow = this->fields.logic;
          if ( selectCommandTypeWindow )
          {
            BattleLogic__wantUseSkill(selectCommandTypeWindow, v11->fields.skillInfo, uniqueId, -1, 0LL);
            selectCommandTypeWindow = (BattleLogic_o *)this->fields.myfsm;
            if ( selectCommandTypeWindow )
            {
              v12 = &StringLiteral_5496/*"END_PROC"*/;
LABEL_15:
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectCommandTypeWindow, (System_String_o *)*v12, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_17;
  }
  selectCommandTypeWindow = (BattleLogic_o *)this->fields.perf;
  if ( !selectCommandTypeWindow )
    goto LABEL_17;
  if ( BattlePerformance__IsAllClosePreSkillSelWindows((BattlePerformance_o *)selectCommandTypeWindow, 0LL) )
  {
    selectCommandTypeWindow = (BattleLogic_o *)this->fields.myfsm;
    if ( selectCommandTypeWindow )
    {
      v12 = &StringLiteral_2920/*"CANCEL"*/;
      goto LABEL_15;
    }
LABEL_17:
    sub_B2C434(selectCommandTypeWindow, *(_QWORD *)&uniqueId);
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
  void *selectSvtWindow; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x22
  SkillEntity_o *v20; // x22
  __int64 *v21; // x8
  struct BattleData_o *data; // x8
  CommonUI_o *Instance; // x20
  System_String_o *v24; // x21
  BattlePerformancePlayer___c_c *v25; // x8
  struct BattlePerformancePlayer___c_StaticFields *static_fields; // x9
  System_Action_o *_9__45_0; // x23
  System_String_o *v28; // x22
  Il2CppObject *v29; // x24
  struct BattlePerformancePlayer___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_4188509 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&uniqueId);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B2C35C(&Method_BattlePerformancePlayer___c__selectedSvt_b__45_0__, v10);
    sub_B2C35C(&BattlePerformancePlayer___c_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_2920/*"CANCEL"*/, v12);
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    sub_B2C35C(&StringLiteral_2447/*"BATTLE_INVALID_SELECT_TARGET"*/, v15);
    byte_4188509 = 1;
  }
  selectSvtWindow = this->fields.selectSvtWindow;
  if ( !selectSvtWindow )
    goto LABEL_38;
  selectSvtWindow = (void *)(*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)selectSvtWindow + 504LL))(
                              selectSvtWindow,
                              0LL,
                              *(_QWORD *)(*(_QWORD *)selectSvtWindow + 512LL));
  if ( uniqueId != -1 )
  {
    actSkillObject = this->fields.actSkillObject;
    if ( !actSkillObject )
      goto LABEL_38;
    skillInfo = actSkillObject->fields.skillInfo;
    selectSvtWindow = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !selectSvtWindow )
      goto LABEL_38;
    selectSvtWindow = DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)selectSvtWindow,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !skillInfo )
      goto LABEL_38;
    v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)selectSvtWindow;
    selectSvtWindow = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                skillInfo,
                                skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v19 )
      goto LABEL_38;
    selectSvtWindow = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        v19,
                        (int32_t)selectSvtWindow,
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_38;
    v20 = (SkillEntity_o *)selectSvtWindow;
    selectSvtWindow = BattleData__getServantData(this->fields.data, uniqueId, 0LL);
    if ( !selectSvtWindow || !v20 )
      goto LABEL_38;
    if ( SkillEntity__checkUseTreasure(v20, *((_DWORD *)selectSvtWindow + 77), 0LL) )
    {
      selectSvtWindow = this->fields.logic;
      if ( selectSvtWindow )
      {
        BattleLogic__wantUseSkill((BattleLogic_o *)selectSvtWindow, skillInfo, uniqueId, -1, 0LL);
        selectSvtWindow = this->fields.myfsm;
        if ( selectSvtWindow )
        {
          v21 = &StringLiteral_5496/*"END_PROC"*/;
LABEL_37:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)*v21, 0LL);
          return;
        }
      }
      goto LABEL_38;
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    selectSvtWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2447/*"BATTLE_INVALID_SELECT_TARGET"*/, 0LL);
    v24 = (System_String_o *)selectSvtWindow;
    v25 = BattlePerformancePlayer___c_TypeInfo;
    if ( (BYTE3(BattlePerformancePlayer___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformancePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformancePlayer___c_TypeInfo);
      v25 = BattlePerformancePlayer___c_TypeInfo;
    }
    static_fields = v25->static_fields;
    _9__45_0 = static_fields->__9__45_0;
    v28 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__45_0 )
    {
      if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        static_fields = BattlePerformancePlayer___c_TypeInfo->static_fields;
      }
      v29 = (Il2CppObject *)static_fields->__9;
      _9__45_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(_9__45_0, v29, Method_BattlePerformancePlayer___c__selectedSvt_b__45_0__, 0LL);
      v30 = BattlePerformancePlayer___c_TypeInfo->static_fields;
      v30->__9__45_0 = _9__45_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v30->__9__45_0,
        (System_Int32_array **)_9__45_0,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    if ( !Instance )
      goto LABEL_38;
    CommonUI__OpenNotificationDialog(Instance, v28, v24, _9__45_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
LABEL_35:
    selectSvtWindow = this->fields.myfsm;
    if ( selectSvtWindow )
    {
      v21 = &StringLiteral_2920/*"CANCEL"*/;
      goto LABEL_37;
    }
LABEL_38:
    sub_B2C434(selectSvtWindow, *(_QWORD *)&uniqueId);
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_38;
  if ( data->fields.tutorialId != 2 || data->fields.tutorialState != -1 )
  {
    selectSvtWindow = this->fields.perf;
    if ( !selectSvtWindow )
      goto LABEL_38;
    if ( BattlePerformance__IsAllClosePreSkillSelWindows((BattlePerformance_o *)selectSvtWindow, 0LL) )
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
  struct BattleServantParamComponent_array *v10; // x8
  struct BattleServantParamComponent_array *v11; // x8
  BattleServantParamComponent_o *v12; // x8
  struct System_Int32_array *list_ID; // x8
  __int64 v14; // x0

  v6 = this;
  if ( (byte_41884F1 & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_41884F1 = 1;
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
      this = (BattlePerformancePlayer_o *)v9->m_Items[index];
      if ( this )
      {
        this = (BattlePerformancePlayer_o *)(*(__int64 (__fastcall **)(BattlePerformancePlayer_o *, BattleServantData_o *, void *))&this->klass[1]._1.byval_arg.bits)(
                                              this,
                                              svtdata,
                                              this->klass[1]._1.this_arg.data);
        v10 = v6->fields.list_param;
        if ( v10 )
        {
          if ( v10->max_length <= index )
            goto LABEL_24;
          this = (BattlePerformancePlayer_o *)v10->m_Items[index];
          if ( this )
          {
            this = (BattlePerformancePlayer_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
            if ( svtdata )
            {
              BattleServantData__addParamObject(svtdata, (UnityEngine_GameObject_o *)this, 0LL);
              v11 = v6->fields.list_param;
              if ( v11 )
              {
                if ( v11->max_length <= index )
                  goto LABEL_24;
                v12 = v11->m_Items[index];
                if ( v12 )
                {
                  v12->fields.index = index;
                  list_ID = v6->fields.list_ID;
                  if ( list_ID )
                  {
                    if ( list_ID->max_length > index )
                    {
                      list_ID->m_Items[index + 1] = svtdata->fields.uniqueId;
                      return;
                    }
LABEL_24:
                    v14 = sub_B2C460(this);
                    sub_B2C400(v14, 0LL);
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_23:
    sub_B2C434(this, *(_QWORD *)&index);
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
  struct BattleServantParamComponent_array *v10; // x8
  __int64 v11; // x0

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
    this = (BattlePerformancePlayer_o *)*((_QWORD *)&list_param->obj.klass + v6);
    if ( !this )
      goto LABEL_9;
    this = (BattlePerformancePlayer_o *)BattleServantParamComponent__checkId(
                                          (BattleServantParamComponent_o *)this,
                                          buffData->fields.targetId,
                                          0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    list_param = v4->fields.list_param;
    ++v6;
    if ( !list_param )
      goto LABEL_9;
  }
  v10 = v4->fields.list_param;
  if ( !v10 )
    goto LABEL_9;
  if ( v8 >= v10->max_length )
  {
LABEL_15:
    v11 = sub_B2C460(this);
    sub_B2C400(v11, 0LL);
  }
  this = (BattlePerformancePlayer_o *)*((_QWORD *)&v10->obj.klass + v6);
  if ( !this )
LABEL_9:
    sub_B2C434(this, buffData);
  BattleServantParamComponent__showSideEffect((BattleServantParamComponent_o *)this, buffData, 0LL);
  return 1;
}


void __fastcall BattlePerformancePlayer__startCommand(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_41884FA & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12339/*"START_COM"*/, method);
    byte_41884FA = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_12339/*"START_COM"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__startSkill(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_418850A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12358/*"START_SKILL"*/, method);
    byte_418850A = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_12358/*"START_SKILL"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__startTac(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_41884F2 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12362/*"START_TAC"*/, method);
    byte_41884F2 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_12362/*"START_TAC"*/, 0LL);
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
  __int64 v7; // x1
  UnityEngine_Rect_o v8; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Vector2_o v9; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4188514 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4188514 = 1;
  }
  v10.fields.m_Width = 90.0;
  v10.fields.m_XMin = -230.0;
  v10.fields.m_YMin = -270.0;
  v10.fields.m_Height = 90.0;
  *(_QWORD *)&v8.fields.m_XMin = 0LL;
  *(_QWORD *)&v8.fields.m_Width = 0LL;
  UnityEngine_Rect___ctor(v10, v2, v3, v4, v5, (const MethodInfo *)&v8);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
  v9.fields.x = -378.0;
  v9.fields.y = -151.0;
  CommonUI__OpenTutorialArrowMark(Instance, v9, 0.0, v8, 0LL, 0LL);
}


void __fastcall BattlePerformancePlayer__tutorialSetSelect(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  UnityEngine_Rect_o v8; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Vector2_o v9; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4188515 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4188515 = 1;
  }
  v10.fields.m_XMin = -410.0;
  v10.fields.m_YMin = -104.0;
  v10.fields.m_Width = 820.0;
  v10.fields.m_Height = 280.0;
  *(_QWORD *)&v8.fields.m_XMin = 0LL;
  *(_QWORD *)&v8.fields.m_Width = 0LL;
  UnityEngine_Rect___ctor(v10, v2, v3, v4, v5, (const MethodInfo *)&v8);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
  v9.fields.x = 310.0;
  v9.fields.y = -50.0;
  CommonUI__OpenTutorialArrowMark(Instance, v9, -90.0, v8, 0LL, 0LL);
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
  __int64 v7; // x1
  UnityEngine_Rect_o v8; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Vector2_o v9; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4188516 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4188516 = 1;
  }
  v10.fields.m_XMin = -200.0;
  v10.fields.m_YMin = -175.0;
  v10.fields.m_Width = 400.0;
  v10.fields.m_Height = 350.0;
  *(_QWORD *)&v8.fields.m_XMin = 0LL;
  *(_QWORD *)&v8.fields.m_Width = 0LL;
  UnityEngine_Rect___ctor(v10, v2, v3, v4, v5, (const MethodInfo *)&v8);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
  v9.fields.x = -0.0;
  v9.fields.y = -0.0;
  CommonUI__OpenTutorialArrowMark(Instance, v9, 0.0, v8, 0LL, 0LL);
}


void __fastcall BattlePerformancePlayer__updateBuff(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformancePlayer__updateView(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattlePerformancePlayer_o *v2; // x19
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v4; // x21
  unsigned __int64 max_length; // x9
  unsigned __int64 v6; // x23
  UnityEngine_Object_o *v7; // x20
  struct BattleServantParamComponent_array *v8; // x8
  __int64 v9; // x0

  v2 = this;
  if ( (byte_418850E & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418850E = 1;
  }
  list_param = v2->fields.list_param;
  if ( !list_param )
LABEL_16:
    sub_B2C434(this, method);
  v4 = 4LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    v6 = v4 - 4;
    if ( v4 - 4 >= (int)max_length )
      break;
    if ( v6 >= max_length )
      goto LABEL_18;
    v7 = (UnityEngine_Object_o *)*((_QWORD *)&list_param->obj.klass + v4);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformancePlayer_o *)UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v8 = v2->fields.list_param;
      if ( !v8 )
        goto LABEL_16;
      if ( v6 >= v8->max_length )
      {
LABEL_18:
        v9 = sub_B2C460(this);
        sub_B2C400(v9, 0LL);
      }
      this = (BattlePerformancePlayer_o *)*((_QWORD *)&v8->obj.klass + v4);
      if ( !this )
        goto LABEL_16;
      BattleServantParamComponent__updateView((BattleServantParamComponent_o *)this, 0LL);
    }
    list_param = v2->fields.list_param;
    ++v4;
    if ( !list_param )
      goto LABEL_16;
  }
}


void __fastcall BattlePerformancePlayer__useSkillIcon(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleLogic_UseSkillObject_o *v6; // x21
  struct BattleLogic_UseSkillObject_o **p_useSkillObject; // x19
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  PlayMakerFSM_o *v15; // x0

  if ( (byte_4188501 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogic_UseSkillObject_TypeInfo, skillInfo);
    sub_B2C35C(&StringLiteral_3076/*"CLICK_SKILLICON"*/, v5);
    byte_4188501 = 1;
  }
  v6 = (BattleLogic_UseSkillObject_o *)sub_B2C42C(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v6, skillInfo, 0LL);
  this->fields.useSkillObject = v6;
  p_useSkillObject = &this->fields.useSkillObject;
  sub_B2C2F8((BattleServantConfConponent_o *)p_useSkillObject, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
  v15 = (PlayMakerFSM_o *)*(p_useSkillObject - 14);
  if ( !v15 )
    sub_B2C434(0LL, v14);
  PlayMakerFSM__SendEvent(v15, (System_String_o *)StringLiteral_3076/*"CLICK_SKILLICON"*/, 0LL);
}


void __fastcall BattlePerformancePlayer___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct BattlePerformancePlayer___c_StaticFields *static_fields; // x0

  if ( (byte_4185088 & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformancePlayer___c_TypeInfo, v1);
    byte_4185088 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattlePerformancePlayer___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BattlePerformancePlayer___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattlePerformancePlayer___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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