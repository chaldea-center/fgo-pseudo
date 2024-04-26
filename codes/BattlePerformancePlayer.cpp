void __fastcall BattlePerformancePlayer___ctor(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct UnityEngine_Vector3_array *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4351D8A & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&UnityEngine_Vector3___TypeInfo);
    byte_4351D8A = 1;
  }
  v3 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 3LL);
  this->fields.list_ID = v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.list_ID, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (struct UnityEngine_Vector3_array *)sub_B706AC(UnityEngine_Vector3___TypeInfo, 3LL);
  this->fields.list_pos = v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.list_pos,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.isPlayCommandSpellEffectStartAnim = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformancePlayer__CloseSkillConfComp(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4351D72 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D72 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm
    || (PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL),
        (myfsm = this->fields.otherFsm) == 0LL) )
  {
    sub_B7076C(myfsm, method);
  }
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inperf,
    (System_String_array **)indata,
    (System_String_array **)inlogic,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)indata,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.logic = inlogic;
  sub_B70630(
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
                    sub_B70630((BattleServantConfConponent_o *)(v44 + 264), v45, v37, v38, v39, v40, v41, v42);
                    v46 = this->fields.list_param;
                    if ( v46 )
                    {
                      if ( v30 >= v46->max_length )
                      {
LABEL_26:
                        v47 = sub_B70798(gameObject);
                        sub_B70738(v47, 0LL);
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
    sub_B7076C(gameObject, v25);
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
    sub_B7076C(0LL, method);
  BattleSkillConfComponent__ToEnableLabelCollider(skillConfWindow, 0LL);
}


bool __fastcall BattlePerformancePlayer__OpenSkillSelectAddFuncConfWindow(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  BattleSkillSelectAddFuncConfComponent_o *SkillSelectAddFuncConfWindow; // x21
  BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4351D78 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformancePlayer_SkillSelectedAddFunc__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo);
    byte_4351D78 = 1;
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
    sub_B7076C(perf, skillInfo);
  if ( BattleSkillSelectAddFuncConfComponent__SetPreOpenInfo(SkillSelectAddFuncConfWindow, skillInfo, 0LL) )
  {
    v7 = (BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *)sub_B70764(BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo);
    BattleSkillSelectAddFuncConfComponent_SelectCallBack___ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattlePerformancePlayer_SkillSelectedAddFunc__,
      0LL);
    SkillSelectAddFuncConfWindow->fields.selectCallBack = v7;
    sub_B70630(
      (BattleServantConfConponent_o *)&SkillSelectAddFuncConfWindow->fields.selectCallBack,
      (System_Int32_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
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
  BattlePerformancePlayer_o *v6; // x19
  const MethodInfo *v7; // x3
  UnityEngine_Object_o *SkillSelectAddFuncConfWindow; // x20
  bool isOpenOtherWindow; // [xsp+Ch] [xbp-24h] BYREF

  v6 = this;
  if ( (byte_4351D79 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (BattlePerformancePlayer_o *)sub_B70694(&StringLiteral_2985/*"CANCEL"*/);
    byte_4351D79 = 1;
  }
  isOpenOtherWindow = 0;
  if ( selIndex == -1 )
  {
    this = (BattlePerformancePlayer_o *)v6->fields.myfsm;
    if ( !this )
      goto LABEL_17;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_2985/*"CANCEL"*/, 0LL);
  }
  else
  {
    if ( !skillInfo )
      goto LABEL_17;
    BattleSkillInfoData__UpdateSelectAddIndex(skillInfo, selIndex, 0LL);
    BattlePerformancePlayer__WantUseSkill(v6, skillInfo, &isOpenOtherWindow, v7);
    if ( isOpenOtherWindow )
    {
      this = (BattlePerformancePlayer_o *)v6->fields.perf;
      if ( !this )
        goto LABEL_17;
      SkillSelectAddFuncConfWindow = (UnityEngine_Object_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow(
                                                               (BattlePerformance_o *)this,
                                                               0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(SkillSelectAddFuncConfWindow, 0LL, 0LL) )
      {
        this = (BattlePerformancePlayer_o *)v6->fields.perf;
        if ( this )
        {
          this = (BattlePerformancePlayer_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow(
                                                (BattlePerformance_o *)this,
                                                0LL);
          if ( this )
          {
            LOBYTE(this->fields.actSkillObject) = 0;
            return;
          }
        }
LABEL_17:
        sub_B7076C(this, skillInfo);
      }
    }
  }
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
  if ( (byte_4351D89 & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351D89 = 1;
  }
  if ( servantData )
  {
    list_param = v4->fields.list_param;
    if ( !list_param )
LABEL_19:
      sub_B7076C(this, servantData);
    v6 = *(_QWORD *)&list_param->max_length;
    if ( (int)v6 >= 1 )
    {
      v7 = 0LL;
      do
      {
        if ( v7 >= (unsigned int)v6 )
        {
          v10 = sub_B70798(this);
          sub_B70738(v10, 0LL);
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
  struct BattleLogic_UseSkillObject_o *useSkillObject; // x1
  BattlePerformance_o *logicSkill; // x0
  __int64 v12; // x1
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x20
  struct BattleLogic_o *logic; // x8
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *SkillSelectAddFuncConfWindow; // x20
  System_String_o *v19; // x20
  CommonUI_o *v20; // x21
  BattlePerformancePlayer___c_c *v21; // x8
  struct BattlePerformancePlayer___c_StaticFields *static_fields; // x9
  System_String_o *v23; // x22
  System_Action_o *_9__39_0; // x23
  Il2CppObject *v25; // x24
  struct BattlePerformancePlayer___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  bool isOpenOtherWindow; // [xsp+3Ch] [xbp-44h] BYREF
  System_String_o *text; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4351D76 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_BattlePerformancePlayer___c__UseSkill_b__39_0__);
    sub_B70694(&BattlePerformancePlayer___c_TypeInfo);
    sub_B70694(&StringLiteral_2985/*"CANCEL"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4351D76 = 1;
  }
  text = 0LL;
  isOpenOtherWindow = 0;
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
  sub_B70630(
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
    goto LABEL_35;
  skillInfo = actSkillObject->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_35;
  BattleSkillInfoData__UpdateSelectAddIndex(actSkillObject->fields.skillInfo, -1, 0LL);
  text = (System_String_o *)StringLiteral_1/*""*/;
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_35;
  logicSkill = (BattlePerformance_o *)logic->fields.logicSkill;
  if ( !logicSkill )
    goto LABEL_35;
  if ( BattleLogicSkill__checkConditions((BattleLogicSkill_o *)logicSkill, skillInfo, &text, 0LL) )
  {
    if ( !BattlePerformancePlayer__OpenSkillSelectAddFuncConfWindow(this, skillInfo, v16) )
    {
      BattlePerformancePlayer__WantUseSkill(this, skillInfo, &isOpenOtherWindow, v17);
      if ( isOpenOtherWindow )
      {
        logicSkill = this->fields.perf;
        if ( !logicSkill )
          goto LABEL_35;
        SkillSelectAddFuncConfWindow = (UnityEngine_Object_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow(
                                                                 logicSkill,
                                                                 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(SkillSelectAddFuncConfWindow, 0LL, 0LL) )
        {
          logicSkill = this->fields.perf;
          if ( logicSkill )
          {
            logicSkill = (BattlePerformance_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow(logicSkill, 0LL);
            if ( logicSkill )
            {
              LOBYTE(logicSkill->fields.uicamera) = 0;
              return;
            }
          }
LABEL_35:
          sub_B7076C(logicSkill, v12);
        }
      }
    }
  }
  else
  {
    logicSkill = (BattlePerformance_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = text;
    v20 = (CommonUI_o *)logicSkill;
    v21 = BattlePerformancePlayer___c_TypeInfo;
    if ( (BYTE3(BattlePerformancePlayer___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformancePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformancePlayer___c_TypeInfo);
      v21 = BattlePerformancePlayer___c_TypeInfo;
    }
    static_fields = v21->static_fields;
    v23 = (System_String_o *)StringLiteral_1/*""*/;
    _9__39_0 = static_fields->__9__39_0;
    if ( !_9__39_0 )
    {
      if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        static_fields = BattlePerformancePlayer___c_TypeInfo->static_fields;
      }
      v25 = (Il2CppObject *)static_fields->__9;
      _9__39_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(_9__39_0, v25, Method_BattlePerformancePlayer___c__UseSkill_b__39_0__, 0LL);
      v26 = BattlePerformancePlayer___c_TypeInfo->static_fields;
      v26->__9__39_0 = _9__39_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v26->__9__39_0,
        (System_Int32_array **)_9__39_0,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
    }
    if ( !v20 )
      goto LABEL_35;
    CommonUI__OpenNotificationDialog(v20, v23, v19, _9__39_0, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
    logicSkill = (BattlePerformance_o *)this->fields.myfsm;
    if ( !logicSkill )
      goto LABEL_35;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)logicSkill, (System_String_o *)StringLiteral_2985/*"CANCEL"*/, 0LL);
  }
}


void __fastcall BattlePerformancePlayer__WantUseSkill(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool *isOpenOtherWindow,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *v6; // x20
  System_Int32_array *ValidTargetTypeArray; // x22
  System_Func_int__bool__o *v8; // x23
  const MethodInfo *v9; // x1
  System_Func_int__bool__o *v10; // x23
  int32_t v11; // w0
  const MethodInfo *v12; // x2
  bool v13; // w8

  v6 = this;
  if ( (byte_4351D77 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_int____69235616);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&Method_Target_isChoose__);
    sub_B70694(&Method_Target_isCommandType__);
    this = (BattlePerformancePlayer_o *)sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D77 = 1;
  }
  if ( !skillInfo )
    goto LABEL_13;
  ValidTargetTypeArray = BattleSkillInfoData__get_ValidTargetTypeArray(skillInfo, 0LL);
  v8 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v8,
    0LL,
    Method_Target_isCommandType__,
    (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
  if ( !BasicHelper__Any_int__29214704(
          ValidTargetTypeArray,
          (System_Func_T__bool__o *)v8,
          (const MethodInfo_1BDC7F0 *)Method_BasicHelper_Any_int____69235616) )
  {
    v10 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v10,
      0LL,
      Method_Target_isChoose__,
      (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
    if ( BasicHelper__Any_int__29214704(
           ValidTargetTypeArray,
           (System_Func_T__bool__o *)v10,
           (const MethodInfo_1BDC7F0 *)Method_BasicHelper_Any_int____69235616) )
    {
      v11 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
              skillInfo,
              skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      BattlePerformancePlayer__openSelectSvtWindow(v6, v11, v12);
      goto LABEL_8;
    }
    this = (BattlePerformancePlayer_o *)v6->fields.logic;
    if ( this )
    {
      BattleLogic__wantUseSkill((BattleLogic_o *)this, skillInfo, skillInfo->fields.svtUniqueId, -1, 0LL);
      this = (BattlePerformancePlayer_o *)v6->fields.myfsm;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
        v13 = 0;
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_B7076C(this, skillInfo);
  }
  BattlePerformancePlayer__openSelectCommandTypeWindow(v6, v9);
LABEL_8:
  v13 = 1;
LABEL_12:
  *isOpenOtherWindow = v13;
}


void __fastcall BattlePerformancePlayer__checkSkipFlg(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *perf; // x0
  __int64 *v4; // x8
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x8
  struct BattleSkillInfoData_o *skillInfo; // x8
  struct BattleLogic_UseSkillObject_o *v7; // x8
  struct BattleSkillInfoData_o *v8; // x8
  struct BattleLogic_UseSkillObject_o *v9; // x8
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct BattleData_o *data; // x8
  struct BattleLogic_UseSkillObject_o *v17; // x1

  if ( (byte_4351D6F & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9858/*"OK"*/);
    sub_B70694(&StringLiteral_2985/*"CANCEL"*/);
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    sub_B70694(&StringLiteral_12425/*"SKIP"*/);
    byte_4351D6F = 1;
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
            v7 = this->fields.tmp_useSkill;
            if ( v7 )
            {
              v8 = v7->fields.skillInfo;
              if ( v8 )
              {
                if ( perf )
                {
                  perf = (BattleWindowComponent_o *)BattleServantData__canUseSkill(
                                                      (BattleServantData_o *)perf,
                                                      v8->fields.index,
                                                      0LL);
                  if ( ((unsigned __int8)perf & 1) == 0 )
                    goto LABEL_25;
                  v9 = this->fields.tmp_useSkill;
                  if ( !v9 )
                    goto LABEL_29;
                  perf = (BattleWindowComponent_o *)v9->fields.skillInfo;
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
                        v17 = this->fields.tmp_useSkill;
                        this->fields.useSkillObject = v17;
                        sub_B70630(
                          (BattleServantConfConponent_o *)&this->fields.useSkillObject,
                          (System_Int32_array **)v17,
                          v10,
                          v11,
                          v12,
                          v13,
                          v14,
                          v15);
                        perf = (BattleWindowComponent_o *)this->fields.myfsm;
                        if ( perf )
                        {
                          v4 = &StringLiteral_12425/*"SKIP"*/;
                          goto LABEL_9;
                        }
                      }
                      else
                      {
                        perf = (BattleWindowComponent_o *)this->fields.myfsm;
                        if ( perf )
                        {
                          v4 = &StringLiteral_9858/*"OK"*/;
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
                      v4 = &StringLiteral_5584/*"END_PROC"*/;
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
      sub_B7076C(perf, method);
    }
  }
  perf = (BattleWindowComponent_o *)this->fields.myfsm;
  if ( !perf )
    goto LABEL_29;
  v4 = &StringLiteral_2985/*"CANCEL"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)*v4, 0LL);
}


void __fastcall BattlePerformancePlayer__checkTutorial(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattlePerformancePlayer_o *v2; // x19
  struct BattleData_o *data; // x8
  int32_t tutorialId; // w9
  __int64 *v5; // x8
  int32_t turnCount; // w9

  v2 = this;
  if ( (byte_4351D84 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    this = (BattlePerformancePlayer_o *)sub_B70694(&StringLiteral_13717/*"TUTORIAL_SKILL"*/);
    byte_4351D84 = 1;
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
          v5 = &StringLiteral_5584/*"END_PROC"*/;
LABEL_8:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0LL);
          return;
        }
        goto LABEL_15;
      }
      if ( data->fields.tutorialState == -1 )
      {
        this = (BattlePerformancePlayer_o *)v2->fields.myfsm;
        if ( this )
        {
          v5 = &StringLiteral_13717/*"TUTORIAL_SKILL"*/;
          goto LABEL_8;
        }
LABEL_15:
        sub_B7076C(this, method);
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
    sub_B7076C(0LL, endCall);
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
  if ( (byte_4351D62 & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351D62 = 1;
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
              v11 = sub_B70798(this);
              sub_B70738(v11, 0LL);
            }
          }
        }
      }
    }
LABEL_20:
    sub_B7076C(this, *(_QWORD *)&index);
  }
}


void __fastcall BattlePerformancePlayer__endSkill(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4351D7D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5587/*"END_SKILL"*/);
    byte_4351D7D = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5587/*"END_SKILL"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__initSvtConfWindow(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *confwindowComp; // x0
  struct BattleServantConfConponent_o *v4; // x20
  BattleServantConfConponent_CloseButtonCallBack_o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4351D81 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformancePlayer_onClickConfClose__);
    sub_B70694(&BattleServantConfConponent_CloseButtonCallBack_TypeInfo);
    byte_4351D81 = 1;
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
        v4 = this->fields.confwindowComp,
        v5 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_B70764(BattleServantConfConponent_CloseButtonCallBack_TypeInfo),
        BattleServantConfConponent_CloseButtonCallBack___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattlePerformancePlayer_onClickConfClose__,
          0LL),
        !v4) )
  {
LABEL_8:
    sub_B7076C(confwindowComp, method);
  }
  v4->fields.callback_close = v5;
  sub_B70630(
    (BattleServantConfConponent_o *)&v4->fields.callback_close,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


bool __fastcall BattlePerformancePlayer__isOpenSvtConf(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *confwindowComp; // x0

  confwindowComp = (BattleWindowComponent_o *)this->fields.confwindowComp;
  if ( !confwindowComp )
    sub_B7076C(0LL, method);
  return BattleWindowComponent__isOpen(confwindowComp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__modeComPlayerStatus(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattlePerformancePlayer_o *v2; // x19
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v4; // x21
  __int64 v5; // x22
  int max_length; // w9
  unsigned int v7; // w24
  WebViewObject_o *Component_WebViewObject; // x20
  int v9; // s0
  struct BattleServantParamComponent_array *v13; // x8
  struct UnityEngine_Vector3_array *list_pos; // x8
  struct BattleServantParamComponent_array *v15; // x8
  UnityEngine_Transform_o *transform; // x20
  int v17; // s0
  struct BattleServantParamComponent_array *v21; // x8
  __int64 v22; // x21
  unsigned __int64 v23; // x9
  unsigned __int64 v24; // x23
  UnityEngine_Object_o *v25; // x20
  struct BattleServantParamComponent_array *v26; // x8
  __int64 v27; // x0

  v2 = this;
  if ( (byte_4351D6D & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    this = (BattlePerformancePlayer_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351D6D = 1;
  }
  list_param = v2->fields.list_param;
  if ( !list_param )
    goto LABEL_37;
  v4 = 0LL;
  v5 = 4LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    v7 = v5 - 4;
    if ( (int)v5 - 4 >= max_length )
      break;
    if ( v7 >= max_length )
      goto LABEL_39;
    this = (BattlePerformancePlayer_o *)*((_QWORD *)&list_param->obj.klass + v5);
    if ( this )
    {
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
      if ( Component_WebViewObject )
      {
        UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v9, 0LL);
        v13 = v2->fields.list_param;
        if ( v13 )
        {
          if ( v7 >= v13->max_length )
            goto LABEL_39;
          this = (BattlePerformancePlayer_o *)*((_QWORD *)&v13->obj.klass + v5);
          if ( this )
          {
            this = (BattlePerformancePlayer_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
            list_pos = v2->fields.list_pos;
            if ( list_pos )
            {
              if ( v7 >= list_pos->max_length )
                goto LABEL_39;
              if ( this )
              {
                UnityEngine_Transform__set_position(
                  (UnityEngine_Transform_o *)this,
                  *(UnityEngine_Vector3_o *)&list_pos->m_Items[v4].fields.y,
                  0LL);
                v15 = v2->fields.list_param;
                if ( v15 )
                {
                  if ( v7 >= v15->max_length )
                  {
LABEL_39:
                    v27 = sub_B70798(this);
                    sub_B70738(v27, 0LL);
                  }
                  this = (BattlePerformancePlayer_o *)*((_QWORD *)&v15->obj.klass + v5);
                  if ( this )
                  {
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                    *(UnityEngine_Quaternion_o *)&v17 = UnityEngine_Quaternion__Euler(0.0, 0.0, 0.0, 0LL);
                    if ( transform )
                    {
                      UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v17, 0LL);
                      list_param = v2->fields.list_param;
                      ++v5;
                      ++v4;
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
        (v21 = v2->fields.list_param) == 0LL) )
  {
LABEL_37:
    sub_B7076C(this, method);
  }
  v22 = 4LL;
  while ( 1 )
  {
    v23 = v21->max_length;
    v24 = v22 - 4;
    if ( v22 - 4 >= (int)v23 )
      break;
    if ( v24 >= v23 )
      goto LABEL_39;
    v25 = (UnityEngine_Object_o *)*((_QWORD *)&v21->obj.klass + v22);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformancePlayer_o *)UnityEngine_Object__op_Equality(v25, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v26 = v2->fields.list_param;
      if ( !v26 )
        goto LABEL_37;
      if ( v24 >= v26->max_length )
        goto LABEL_39;
      this = (BattlePerformancePlayer_o *)*((_QWORD *)&v26->obj.klass + v22);
      if ( !this )
        goto LABEL_37;
      BattleServantParamComponent__setCloseMode((BattleServantParamComponent_o *)this, 0LL);
    }
    v21 = v2->fields.list_param;
    ++v22;
    if ( !v21 )
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

  if ( (byte_4351D65 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351D65 = 1;
  }
  BattlePerformancePlayer__updateView(this, method);
  list_param = this->fields.list_param;
  if ( !list_param )
LABEL_16:
    sub_B7076C(v3, v4);
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
        v11 = sub_B70798(v3);
        sub_B70738(v11, 0LL);
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

  if ( (byte_4351D68 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3120/*"CLICK_CLOSE"*/);
    byte_4351D68 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_3120/*"CLICK_CLOSE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__onClickServant(
        BattlePerformancePlayer_o *this,
        int32_t uniqueID,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *confwindowComp; // x0
  __int64 *v6; // x8

  if ( (byte_4351D66 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3154/*"CLICK_SVTWINDOW"*/);
    sub_B70694(&StringLiteral_3120/*"CLICK_CLOSE"*/);
    byte_4351D66 = 1;
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
      v6 = &StringLiteral_3154/*"CLICK_SVTWINDOW"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_B7076C(confwindowComp, *(_QWORD *)&uniqueID);
  }
  confwindowComp = (BattleServantConfConponent_o *)this->fields.myfsm;
  if ( !confwindowComp )
    goto LABEL_10;
  v6 = &StringLiteral_3120/*"CLICK_CLOSE"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confwindowComp, (System_String_o *)*v6, 0LL);
}


void __fastcall BattlePerformancePlayer__onClickSkillCancel(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4351D75 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_2985/*"CANCEL"*/);
    byte_4351D75 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_2985/*"CANCEL"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__onClickSkillIcon(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLong,
        const MethodInfo *method)
{
  BattleLogic_UseSkillObject_o *v7; // x20
  const MethodInfo *v8; // x1
  BattleData_o *data; // x0
  struct BattleData_o *v10; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct BattleLogic_UseSkillObject_o **p_tmp_useSkill; // x19

  if ( (byte_4351D6E & 1) == 0 )
  {
    sub_B70694(&BattleLogic_UseSkillObject_TypeInfo);
    sub_B70694(&StringLiteral_3149/*"CLICK_SKILLICON"*/);
    byte_4351D6E = 1;
  }
  v7 = (BattleLogic_UseSkillObject_o *)sub_B70764(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v7, skillInfo, 0LL);
  data = this->fields.data;
  this->fields.isLongTap = isLong;
  if ( !data )
    goto LABEL_20;
  data = (BattleData_o *)BattleData__isTutorial(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_16;
  v10 = this->fields.data;
  if ( !v10 )
    goto LABEL_20;
  if ( v10->fields.tutorialId != 2 || v10->fields.turnCount != 2 )
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
    if ( BattlePerformanceMaster__isCloseEnemyConf((BattlePerformanceMaster_o *)data, v8) )
    {
      data = (BattleData_o *)this->fields.logic;
      if ( !data )
        goto LABEL_20;
      if ( BattleLogic__isTimingUseSkill((BattleLogic_o *)data, 0LL) )
      {
        this->fields.tmp_useSkill = v7;
        p_tmp_useSkill = &this->fields.tmp_useSkill;
        sub_B70630(
          (BattleServantConfConponent_o *)p_tmp_useSkill,
          (System_Int32_array **)v7,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        data = (BattleData_o *)*(p_tmp_useSkill - 13);
        if ( data )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_3149/*"CLICK_SKILLICON"*/, 0LL);
          return;
        }
LABEL_20:
        sub_B7076C(data, v8);
      }
    }
  }
}


void __fastcall BattlePerformancePlayer__onClickSkillOK(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattleLogic_UseSkillObject_o *v5; // x21
  struct BattleLogic_UseSkillObject_o **p_useSkillObject; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  PlayMakerFSM_o *v14; // x0

  if ( (byte_4351D74 & 1) == 0 )
  {
    sub_B70694(&BattleLogic_UseSkillObject_TypeInfo);
    sub_B70694(&StringLiteral_9858/*"OK"*/);
    byte_4351D74 = 1;
  }
  v5 = (BattleLogic_UseSkillObject_o *)sub_B70764(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v5, skillInfo, 0LL);
  this->fields.useSkillObject = v5;
  p_useSkillObject = &this->fields.useSkillObject;
  sub_B70630((BattleServantConfConponent_o *)p_useSkillObject, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
  v14 = (PlayMakerFSM_o *)*(p_useSkillObject - 14);
  if ( !v14 )
    sub_B7076C(0LL, v13);
  PlayMakerFSM__SendEvent(v14, (System_String_o *)StringLiteral_9858/*"OK"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__onCloseConfComplete(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *confwindowComp; // x0
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v5; // x20
  int max_length; // w9
  __int64 v7; // x0

  if ( (byte_4351D6A & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D6A = 1;
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
      v7 = sub_B70798(confwindowComp);
      sub_B70738(v7, 0LL);
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
    sub_B7076C(confwindowComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confwindowComp, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__onOpenConfComplete(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4351D83 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D83 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__openSelectCommandTypeWindow(
        BattlePerformancePlayer_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  struct BattleSelectCommandTypeWindow_o *SelectCommandTypeWindow; // x0
  struct BattleSelectCommandTypeWindow_o **p_selectCommandTypeWindow; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct BattleSelectCommandTypeWindow_o *v12; // x21
  BattleSelectCommandTypeWindow_SelectServantCallBack_o *v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x8
  struct BattleSkillInfoData_o *skillInfo; // x8
  BattleSelectCommandTypeWindow_o *v22; // x19

  if ( (byte_4351D7E & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformancePlayer_selectedCommandType__);
    sub_B70694(&BattleSelectCommandTypeWindow_SelectServantCallBack_TypeInfo);
    byte_4351D7E = 1;
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.selectCommandTypeWindow,
    (System_Int32_array **)SelectCommandTypeWindow,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = this->fields.selectCommandTypeWindow;
  v13 = (BattleSelectCommandTypeWindow_SelectServantCallBack_o *)sub_B70764(BattleSelectCommandTypeWindow_SelectServantCallBack_TypeInfo);
  BattleSelectCommandTypeWindow_SelectServantCallBack___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_selectedCommandType__,
    0LL);
  if ( !v12 )
    goto LABEL_15;
  v12->fields.selectCallBack = v13;
  sub_B70630(
    (BattleServantConfConponent_o *)&v12->fields.selectCallBack,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  tmp_useSkill = this->fields.tmp_useSkill;
  if ( !tmp_useSkill
    || (skillInfo = tmp_useSkill->fields.skillInfo) == 0LL
    || (perf = (BattlePerformance_o *)this->fields.data) == 0LL
    || (v22 = this->fields.selectCommandTypeWindow,
        perf = (BattlePerformance_o *)BattleData__getServantData(
                                        (BattleData_o *)perf,
                                        skillInfo->fields.svtUniqueId,
                                        0LL),
        !v22)
    || (BattleSelectCommandTypeWindow__SetServantData(v22, (BattleServantData_o *)perf, 0, 0LL),
        (perf = (BattlePerformance_o *)*p_selectCommandTypeWindow) == 0LL) )
  {
LABEL_15:
    sub_B7076C(perf, method);
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
  BattlePerformance_o *perf; // x0
  struct BattleSelectServantWindow_o *SelectSvtWindow; // x0
  struct BattleSelectServantWindow_o **p_selectSvtWindow; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2
  bool v15; // w1
  struct BattleSelectServantWindow_o *v16; // x22
  BattleSelectServantWindow_SelectServantCallBack_o *v17; // x23
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  BattleSelectServantWindow_o *v24; // x20

  if ( (byte_4351D7A & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformancePlayer_selectedSvt__);
    sub_B70694(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
    byte_4351D7A = 1;
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.selectSvtWindow,
    (System_Int32_array **)SelectSvtWindow,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  perf = (BattlePerformance_o *)this->fields.data;
  if ( !perf )
    goto LABEL_19;
  if ( BattleData__isTutorialSelectsvtCancel((BattleData_o *)perf, 0LL) )
  {
    BattlePerformancePlayer__procTurorial(this, 3, v14);
    perf = (BattlePerformance_o *)this->fields.selectSvtWindow;
    if ( !perf )
      goto LABEL_19;
    v15 = 0;
  }
  else
  {
    perf = (BattlePerformance_o *)*p_selectSvtWindow;
    if ( !*p_selectSvtWindow )
      goto LABEL_19;
    v15 = 1;
  }
  BattleSelectServantWindow__setUseClose((BattleSelectServantWindow_o *)perf, v15, 0LL);
  v16 = this->fields.selectSvtWindow;
  v17 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_B70764(BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_selectedSvt__,
    0LL);
  if ( !v16
    || (v16->fields.selectCallBack = v17,
        sub_B70630(
          (BattleServantConfConponent_o *)&v16->fields.selectCallBack,
          (System_Int32_array **)v17,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        (perf = (BattlePerformance_o *)this->fields.data) == 0LL)
    || (v24 = this->fields.selectSvtWindow,
        perf = (BattlePerformance_o *)BattleData__getFieldPlayerServantList((BattleData_o *)perf, 0LL),
        !v24)
    || (BattleSelectServantWindow__SetServantData(v24, (BattleServantData_array *)perf, skillId, -1, 0LL, 0LL),
        (perf = (BattlePerformance_o *)*p_selectSvtWindow) == 0LL) )
  {
LABEL_19:
    sub_B7076C(perf, *(_QWORD *)&skillId);
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
  BattleServantConfConponent_o *confwindowComp; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4351D82 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformancePlayer_onOpenConfComplete__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4351D82 = 1;
  }
  confwindowComp = this->fields.confwindowComp;
  v5 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_onOpenConfComplete__,
    0LL);
  if ( !confwindowComp )
    sub_B7076C(v6, v7);
  BattleServantConfConponent__Open(confwindowComp, v5, 0LL);
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
    sub_B7076C(this, *(_QWORD *)&uniqueID);
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
        v9 = sub_B70798(this);
        sub_B70738(v9, 0LL);
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

  if ( (byte_4351D6B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D6B = 1;
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
    sub_B7076C(buffConfWindow, v5);
  }
  PlayMakerFSM__SendEvent(buffConfWindow, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__procCloseConf(
        BattlePerformancePlayer_o *this,
        bool flg,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *v4; // x19
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v6; // x20
  int max_length; // w9
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  BattleWindowComponent_EndCall_o *v10; // x20
  __int64 v11; // x0

  v4 = this;
  if ( (byte_4351D69 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformancePlayer_onCloseConfComplete__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    this = (BattlePerformancePlayer_o *)sub_B70694(&SeManager_TypeInfo);
    byte_4351D69 = 1;
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
  v6 = 0LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v11 = sub_B70798(this);
      sub_B70738(v11, 0LL);
    }
    this = (BattlePerformancePlayer_o *)list_param->m_Items[v6];
    if ( this )
    {
      BattleServantParamComponent__playEndShowServant((BattleServantParamComponent_o *)this, 0LL);
      list_param = v4->fields.list_param;
      ++v6;
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
        v10 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v10,
          (Il2CppObject *)v4,
          Method_BattlePerformancePlayer_onCloseConfComplete__,
          0LL),
        (this = (BattlePerformancePlayer_o *)v4->fields.confwindowComp) == 0LL) )
  {
LABEL_14:
    sub_B7076C(this, flg);
  }
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)this, v10, 0LL);
}


void __fastcall BattlePerformancePlayer__procCloseSkillConf(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  BattlePerformance_o *perf; // x0
  __int64 v6; // x1

  if ( (byte_4351D71 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformancePlayer_CloseSkillConfComp__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B70694(&SeManager_TypeInfo);
    byte_4351D71 = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  skillConfWindow = this->fields.skillConfWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_CloseSkillConfComp__,
    0LL);
  if ( !skillConfWindow
    || (((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))skillConfWindow->klass->vtable._12_Close.method)(
          skillConfWindow,
          v4,
          skillConfWindow->klass->vtable._13_CompClose.methodPtr),
        (perf = this->fields.perf) == 0LL) )
  {
    sub_B7076C(perf, v6);
  }
  BattlePerformance__CloseSkillSelectAddFuncConfWindow(perf, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__procOpenSkillConf(
        BattlePerformancePlayer_o *this,
        bool cancelFlg,
        const MethodInfo *method)
{
  PlayMakerFSM_o *otherFsm; // x0
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x22
  struct BattleSkillConfComponent_o *skillConfWindow; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct BattleSkillConfComponent_o *v14; // x20
  BattleWindowComponent_EndCall_o *v15; // x21

  if ( (byte_4351D70 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformancePlayer_OpenSkillConfComplete__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B70694(&StringLiteral_15420/*"WAIT_OTHER_SKILL"*/);
    byte_4351D70 = 1;
  }
  otherFsm = this->fields.otherFsm;
  if ( !otherFsm )
    goto LABEL_9;
  tmp_useSkill = this->fields.tmp_useSkill;
  PlayMakerFSM__SendEvent(otherFsm, (System_String_o *)StringLiteral_15420/*"WAIT_OTHER_SKILL"*/, 0LL);
  skillConfWindow = this->fields.skillConfWindow;
  otherFsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !skillConfWindow
    || (skillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)otherFsm,
        sub_B70630(
          (BattleServantConfConponent_o *)&skillConfWindow->fields.target,
          (System_Int32_array **)otherFsm,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        !tmp_useSkill)
    || (otherFsm = (PlayMakerFSM_o *)this->fields.skillConfWindow) == 0LL
    || (BattleSkillConfComponent__SetSkillConf(
          (BattleSkillConfComponent_o *)otherFsm,
          tmp_useSkill->fields.skillInfo,
          cancelFlg,
          1,
          0LL),
        v14 = this->fields.skillConfWindow,
        v15 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v15,
          (Il2CppObject *)this,
          Method_BattlePerformancePlayer_OpenSkillConfComplete__,
          0LL),
        !v14) )
  {
LABEL_9:
    sub_B7076C(otherFsm, cancelFlg);
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v14->klass->vtable._10_Open.method)(
    v14,
    v15,
    v14->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformancePlayer__procSelectServant(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattleData_o *v4; // x8
  int32_t tmp_uniqueId; // w20
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v7; // x21
  int max_length; // w10
  struct System_Int32_array *list_ID; // x9
  struct BattleServantParamComponent_array *v10; // x8
  BattleServantParamComponent_o *v11; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  float v14; // s0
  const MethodInfo *v15; // x1
  __int64 v16; // x0

  if ( (byte_4351D67 & 1) == 0 )
  {
    sub_B70694(&SeManager_TypeInfo);
    sub_B70694(&StringLiteral_12506/*"START_CLOSE"*/);
    byte_4351D67 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_34;
  data = (BattleData_o *)BattleData__isTutorial(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_9;
  v4 = this->fields.data;
  if ( !v4 )
    goto LABEL_34;
  if ( v4->fields.tutorialId != 3 || v4->fields.wavecount != 1 || v4->fields.turnCount != 1 )
  {
LABEL_9:
    data = (BattleData_o *)this->fields.otherFsm;
    if ( data )
    {
      tmp_uniqueId = this->fields.tmp_uniqueId;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_12506/*"START_CLOSE"*/, 0LL);
      if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      SeManager__PlayCommonSe(11, 0LL);
      list_param = this->fields.list_param;
      if ( list_param )
      {
        v7 = 0LL;
        while ( 1 )
        {
          max_length = list_param->max_length;
          if ( (int)v7 >= max_length )
            break;
          list_ID = this->fields.list_ID;
          if ( !list_ID )
            goto LABEL_34;
          if ( (unsigned int)v7 >= list_ID->max_length || (unsigned int)v7 >= max_length )
            goto LABEL_35;
          data = (BattleData_o *)list_param->m_Items[v7];
          if ( !data )
            goto LABEL_34;
          if ( tmp_uniqueId == list_ID->m_Items[v7 + 1] )
          {
            BattleServantParamComponent__playSelectServant((BattleServantParamComponent_o *)data, 0LL);
            v10 = this->fields.list_param;
            if ( !v10 )
              goto LABEL_34;
            if ( (unsigned int)v7 >= v10->max_length )
            {
LABEL_35:
              v16 = sub_B70798(data);
              sub_B70738(v16, 0LL);
            }
            v11 = v10->m_Items[v7];
            if ( !v11 )
              goto LABEL_34;
            data = (BattleData_o *)this->fields.confwindowComp;
            if ( !data )
              goto LABEL_34;
            BattleServantConfConponent__setConfData(
              (BattleServantConfConponent_o *)data,
              v11->fields.data,
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
          ++v7;
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
              v14 = ((float (__fastcall *)(BattleData_o *, _QWORD, void *))data->klass[1]._1.typeMetadataHandle)(
                      data,
                      0LL,
                      data->klass[1]._1.interopData);
              BattlePerformancePlayer__openSvtConfWindow(this, v14, v15);
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
    sub_B7076C(data, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__procTurorial(
        BattlePerformancePlayer_o *this,
        int32_t param,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  CommonUI_o *Instance; // x20
  System_Action_o *v6; // x0
  __int64 *v7; // x8
  Il2CppClass *klass; // x8
  System_Action_o *v9; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4351D85 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BattlePerformancePlayer_tutorialSetSelectSvt__);
    sub_B70694(&Method_BattlePerformancePlayer_tutorialSetSelect__);
    this = (BattlePerformancePlayer_o *)sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4351D85 = 1;
  }
  switch ( param )
  {
    case 3:
      klass = v4[3].klass;
      if ( !klass )
        goto LABEL_14;
      HIDWORD(klass->vtable[48].method) = 5;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      v7 = &Method_BattlePerformancePlayer_tutorialSetSelectSvt__;
      goto LABEL_11;
    case 2:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      v7 = &Method_BattlePerformancePlayer_tutorialSetSelect__;
LABEL_11:
      v9 = v6;
      System_Action___ctor(v6, v4, *v7, 0LL);
      if ( !Instance )
        goto LABEL_14;
      CommonUI__CloseTutorialArrowMark(Instance, v9, 0LL);
      return;
    case 0:
      this = (BattlePerformancePlayer_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( this )
      {
        CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)this, 0LL);
        return;
      }
LABEL_14:
      sub_B7076C(this, *(_QWORD *)&param);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__selectedCommandType(
        BattlePerformancePlayer_o *this,
        int32_t uniqueId,
        int32_t cmdType,
        const MethodInfo *method)
{
  BattleLogic_o *selectCommandTypeWindow; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  struct BattleSkillInfoData_o *skillInfo; // x8
  struct BattleLogic_UseSkillObject_o *v10; // x8
  __int64 *v11; // x8

  if ( (byte_4351D7F & 1) == 0 )
  {
    sub_B70694(&StringLiteral_2985/*"CANCEL"*/);
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D7F = 1;
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
        v10 = this->fields.actSkillObject;
        if ( v10 )
        {
          selectCommandTypeWindow = this->fields.logic;
          if ( selectCommandTypeWindow )
          {
            BattleLogic__wantUseSkill(selectCommandTypeWindow, v10->fields.skillInfo, uniqueId, -1, 0LL);
            selectCommandTypeWindow = (BattleLogic_o *)this->fields.myfsm;
            if ( selectCommandTypeWindow )
            {
              v11 = &StringLiteral_5584/*"END_PROC"*/;
LABEL_15:
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectCommandTypeWindow, (System_String_o *)*v11, 0LL);
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
      v11 = &StringLiteral_2985/*"CANCEL"*/;
      goto LABEL_15;
    }
LABEL_17:
    sub_B7076C(selectCommandTypeWindow, *(_QWORD *)&uniqueId);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__selectedSvt(
        BattlePerformancePlayer_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  void *selectSvtWindow; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x22
  SkillEntity_o *v9; // x22
  __int64 *v10; // x8
  struct BattleData_o *data; // x8
  CommonUI_o *Instance; // x20
  System_String_o *v13; // x21
  BattlePerformancePlayer___c_c *v14; // x8
  struct BattlePerformancePlayer___c_StaticFields *static_fields; // x9
  System_Action_o *_9__45_0; // x23
  System_String_o *v17; // x22
  Il2CppObject *v18; // x24
  struct BattlePerformancePlayer___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_4351D7B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_BattlePerformancePlayer___c__selectedSvt_b__45_0__);
    sub_B70694(&BattlePerformancePlayer___c_TypeInfo);
    sub_B70694(&StringLiteral_2985/*"CANCEL"*/);
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_2507/*"BATTLE_INVALID_SELECT_TARGET"*/);
    byte_4351D7B = 1;
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
    selectSvtWindow = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !selectSvtWindow )
      goto LABEL_38;
    selectSvtWindow = DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)selectSvtWindow,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !skillInfo )
      goto LABEL_38;
    v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)selectSvtWindow;
    selectSvtWindow = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                skillInfo,
                                skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v8 )
      goto LABEL_38;
    selectSvtWindow = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        v8,
                        (int32_t)selectSvtWindow,
                        (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_38;
    v9 = (SkillEntity_o *)selectSvtWindow;
    selectSvtWindow = BattleData__getServantData(this->fields.data, uniqueId, 0LL);
    if ( !selectSvtWindow || !v9 )
      goto LABEL_38;
    if ( SkillEntity__checkUseTreasure(v9, *((_DWORD *)selectSvtWindow + 77), 0LL) )
    {
      selectSvtWindow = this->fields.logic;
      if ( selectSvtWindow )
      {
        BattleLogic__wantUseSkill((BattleLogic_o *)selectSvtWindow, skillInfo, uniqueId, -1, 0LL);
        selectSvtWindow = this->fields.myfsm;
        if ( selectSvtWindow )
        {
          v10 = &StringLiteral_5584/*"END_PROC"*/;
LABEL_37:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)*v10, 0LL);
          return;
        }
      }
      goto LABEL_38;
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    selectSvtWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2507/*"BATTLE_INVALID_SELECT_TARGET"*/, 0LL);
    v13 = (System_String_o *)selectSvtWindow;
    v14 = BattlePerformancePlayer___c_TypeInfo;
    if ( (BYTE3(BattlePerformancePlayer___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformancePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformancePlayer___c_TypeInfo);
      v14 = BattlePerformancePlayer___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__45_0 = static_fields->__9__45_0;
    v17 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__45_0 )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = BattlePerformancePlayer___c_TypeInfo->static_fields;
      }
      v18 = (Il2CppObject *)static_fields->__9;
      _9__45_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(_9__45_0, v18, Method_BattlePerformancePlayer___c__selectedSvt_b__45_0__, 0LL);
      v19 = BattlePerformancePlayer___c_TypeInfo->static_fields;
      v19->__9__45_0 = _9__45_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v19->__9__45_0,
        (System_Int32_array **)_9__45_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    if ( !Instance )
      goto LABEL_38;
    CommonUI__OpenNotificationDialog(Instance, v17, v13, _9__45_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
LABEL_35:
    selectSvtWindow = this->fields.myfsm;
    if ( selectSvtWindow )
    {
      v10 = &StringLiteral_2985/*"CANCEL"*/;
      goto LABEL_37;
    }
LABEL_38:
    sub_B7076C(selectSvtWindow, *(_QWORD *)&uniqueId);
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
  if ( (byte_4351D63 & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351D63 = 1;
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
                    v14 = sub_B70798(this);
                    sub_B70738(v14, 0LL);
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_23:
    sub_B7076C(this, *(_QWORD *)&index);
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
    v11 = sub_B70798(this);
    sub_B70738(v11, 0LL);
  }
  this = (BattlePerformancePlayer_o *)*((_QWORD *)&v10->obj.klass + v6);
  if ( !this )
LABEL_9:
    sub_B7076C(this, buffData);
  BattleServantParamComponent__showSideEffect((BattleServantParamComponent_o *)this, buffData, 0LL);
  return 1;
}


void __fastcall BattlePerformancePlayer__startCommand(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4351D6C & 1) == 0 )
  {
    sub_B70694(&StringLiteral_12507/*"START_COM"*/);
    byte_4351D6C = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_12507/*"START_COM"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__startSkill(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4351D7C & 1) == 0 )
  {
    sub_B70694(&StringLiteral_12527/*"START_SKILL"*/);
    byte_4351D7C = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_12527/*"START_SKILL"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__startTac(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4351D64 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_12531/*"START_TAC"*/);
    byte_4351D64 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_12531/*"START_TAC"*/, 0LL);
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

  if ( (byte_4351D86 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4351D86 = 1;
  }
  v10.fields.m_Width = 90.0;
  v10.fields.m_XMin = -230.0;
  v10.fields.m_YMin = -270.0;
  v10.fields.m_Height = 90.0;
  *(_QWORD *)&v8.fields.m_XMin = 0LL;
  *(_QWORD *)&v8.fields.m_Width = 0LL;
  UnityEngine_Rect___ctor(v10, v2, v3, v4, v5, (const MethodInfo *)&v8);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v7);
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

  if ( (byte_4351D87 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4351D87 = 1;
  }
  v10.fields.m_XMin = -410.0;
  v10.fields.m_YMin = -104.0;
  v10.fields.m_Width = 820.0;
  v10.fields.m_Height = 280.0;
  *(_QWORD *)&v8.fields.m_XMin = 0LL;
  *(_QWORD *)&v8.fields.m_Width = 0LL;
  UnityEngine_Rect___ctor(v10, v2, v3, v4, v5, (const MethodInfo *)&v8);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v7);
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

  if ( (byte_4351D88 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4351D88 = 1;
  }
  v10.fields.m_XMin = -200.0;
  v10.fields.m_YMin = -175.0;
  v10.fields.m_Width = 400.0;
  v10.fields.m_Height = 350.0;
  *(_QWORD *)&v8.fields.m_XMin = 0LL;
  *(_QWORD *)&v8.fields.m_Width = 0LL;
  UnityEngine_Rect___ctor(v10, v2, v3, v4, v5, (const MethodInfo *)&v8);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v7);
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
  if ( (byte_4351D80 & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351D80 = 1;
  }
  list_param = v2->fields.list_param;
  if ( !list_param )
LABEL_16:
    sub_B7076C(this, method);
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
        v9 = sub_B70798(this);
        sub_B70738(v9, 0LL);
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
  BattleLogic_UseSkillObject_o *v5; // x21
  struct BattleLogic_UseSkillObject_o **p_useSkillObject; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  PlayMakerFSM_o *v14; // x0

  if ( (byte_4351D73 & 1) == 0 )
  {
    sub_B70694(&BattleLogic_UseSkillObject_TypeInfo);
    sub_B70694(&StringLiteral_3149/*"CLICK_SKILLICON"*/);
    byte_4351D73 = 1;
  }
  v5 = (BattleLogic_UseSkillObject_o *)sub_B70764(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v5, skillInfo, 0LL);
  this->fields.useSkillObject = v5;
  p_useSkillObject = &this->fields.useSkillObject;
  sub_B70630((BattleServantConfConponent_o *)p_useSkillObject, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
  v14 = (PlayMakerFSM_o *)*(p_useSkillObject - 14);
  if ( !v14 )
    sub_B7076C(0LL, v13);
  PlayMakerFSM__SendEvent(v14, (System_String_o *)StringLiteral_3149/*"CLICK_SKILLICON"*/, 0LL);
}


void __fastcall BattlePerformancePlayer___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434F802 & 1) == 0 )
  {
    sub_B70694(&BattlePerformancePlayer___c_TypeInfo);
    byte_434F802 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(BattlePerformancePlayer___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattlePerformancePlayer___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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