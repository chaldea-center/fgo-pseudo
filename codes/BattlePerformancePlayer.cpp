void __fastcall BattlePerformancePlayer___ctor(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  struct UnityEngine_Vector3_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5E106 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&UnityEngine_Vector3___TypeInfo);
    byte_4A5E106 = 1;
  }
  v3 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 3LL);
  this->fields.list_ID = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.list_ID, (int32_t)v3, v4, v5);
  v6 = (struct UnityEngine_Vector3_array *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 3LL);
  this->fields.list_pos = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.list_pos, (int32_t)v6, v7, v8);
  this->fields.isPlayCommandSpellEffectStartAnim = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformancePlayer__CloseSkillConfComp(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4A5E0EE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5E0EE = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm
    || (PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL),
        (myfsm = this->fields.otherFsm) == 0LL) )
  {
    sub_1B8880C(myfsm, method);
  }
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__Initialize(
        BattlePerformancePlayer_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  struct BattlePerformance_o **p_perf; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v14; // x1
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v16; // x21
  __int64 v17; // x22
  int max_length; // w9
  il2cpp_array_size_t v19; // w23
  struct UnityEngine_Vector3_array *list_pos; // x24
  int v21; // s0
  int v22; // s1
  int v23; // s2
  _DWORD *v24; // x8
  struct BattleServantParamComponent_array *v25; // x8
  int32_t v26; // w2
  int32_t v27; // w3
  struct BattleServantParamComponent_array *v28; // x8
  __int64 v29; // x8
  struct BattlePerformance_o *v30; // x1
  struct BattleServantParamComponent_array *v31; // x8

  this->fields.perf = inperf;
  p_perf = &this->fields.perf;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.perf,
    (int32_t)inperf,
    (int32_t)indata,
    (int32_t)inlogic);
  this->fields.data = indata;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.data, (int32_t)indata, v9, v10);
  this->fields.logic = inlogic;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.logic, (int32_t)inlogic, v11, v12);
  list_param = this->fields.list_param;
  if ( !list_param )
    goto LABEL_25;
  v16 = 0LL;
  v17 = 4LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    v19 = v17 - 4;
    if ( (int)v17 - 4 >= max_length )
      break;
    if ( v19 >= max_length )
      goto LABEL_26;
    gameObject = (UnityEngine_Component_o *)*((_QWORD *)&list_param->obj.klass + v17);
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
          *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_position(
                                             (UnityEngine_Transform_o *)gameObject,
                                             0LL);
          if ( list_pos )
          {
            if ( v19 >= list_pos->max_length )
              goto LABEL_26;
            v24 = (_DWORD *)((char *)list_pos + v16);
            v24[8] = v21;
            v24[9] = v22;
            v24[10] = v23;
            v25 = this->fields.list_param;
            if ( v25 )
            {
              if ( v19 >= v25->max_length )
                goto LABEL_26;
              gameObject = (UnityEngine_Component_o *)*((_QWORD *)&v25->obj.klass + v17);
              if ( gameObject )
              {
                BattleServantParamComponent__setCloseMode((BattleServantParamComponent_o *)gameObject, 0LL);
                v28 = this->fields.list_param;
                if ( v28 )
                {
                  if ( v19 >= v28->max_length )
                    goto LABEL_26;
                  v29 = *((_QWORD *)&v28->obj.klass + v17);
                  if ( v29 )
                  {
                    v30 = *p_perf;
                    *(_QWORD *)(v29 + 272) = *p_perf;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 272), (int32_t)v30, v26, v27);
                    v31 = this->fields.list_param;
                    if ( v31 )
                    {
                      if ( v19 >= v31->max_length )
LABEL_26:
                        sub_1B88814(gameObject, v14);
                      gameObject = (UnityEngine_Component_o *)*((_QWORD *)&v31->obj.klass + v17);
                      if ( gameObject )
                      {
                        BattleServantParamComponent__ForceDestroyAllEffect(
                          (BattleServantParamComponent_o *)gameObject,
                          0LL);
                        list_param = this->fields.list_param;
                        ++v17;
                        v16 += 12LL;
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
  BattlePerformancePlayer__initSvtConfWindow(this, v14);
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
    sub_1B8880C(gameObject, v14);
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
    sub_1B8880C(0LL, method);
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
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5E0F4 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattlePerformancePlayer_SkillSelectedAddFunc__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo);
    byte_4A5E0F4 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  SkillSelectAddFuncConfWindow = BattlePerformance__get_SkillSelectAddFuncConfWindow(perf, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(
                                  (UnityEngine_Object_o *)SkillSelectAddFuncConfWindow,
                                  0LL,
                                  0LL);
  if ( ((unsigned __int8)perf & 1) != 0 )
    return 0;
  if ( !SkillSelectAddFuncConfWindow )
LABEL_11:
    sub_1B8880C(perf, skillInfo);
  if ( BattleSkillSelectAddFuncConfComponent__SetPreOpenInfo(SkillSelectAddFuncConfWindow, skillInfo, 0LL) )
  {
    v7 = (BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *)sub_1B887FC(BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo);
    BattleSkillSelectAddFuncConfComponent_SelectCallBack___ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattlePerformancePlayer_SkillSelectedAddFunc__,
      0LL);
    SkillSelectAddFuncConfWindow->fields.selectCallBack = v7;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&SkillSelectAddFuncConfWindow->fields.selectCallBack,
      (int32_t)v7,
      v8,
      v9);
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
  if ( (byte_4A5E0F5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (BattlePerformancePlayer_o *)sub_1B885B0(&StringLiteral_3397/*"CANCEL"*/);
    byte_4A5E0F5 = 1;
  }
  isOpenOtherWindow = 0;
  if ( selIndex == -1 )
  {
    this = (BattlePerformancePlayer_o *)v6->fields.myfsm;
    if ( !this )
      goto LABEL_16;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3397/*"CANCEL"*/, 0LL);
  }
  else
  {
    if ( !skillInfo )
      goto LABEL_16;
    BattleSkillInfoData__UpdateSelectAddIndex(skillInfo, selIndex, 0LL);
    BattlePerformancePlayer__WantUseSkill(v6, skillInfo, &isOpenOtherWindow, v7);
    if ( isOpenOtherWindow )
    {
      this = (BattlePerformancePlayer_o *)v6->fields.perf;
      if ( !this )
        goto LABEL_16;
      SkillSelectAddFuncConfWindow = (UnityEngine_Object_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow(
                                                               (BattlePerformance_o *)this,
                                                               0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_16:
        sub_1B8880C(this, skillInfo);
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
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_c *klass; // x8

  v4 = this;
  if ( (byte_4A5E105 & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E105 = 1;
  }
  if ( servantData )
  {
    list_param = v4->fields.list_param;
    if ( !list_param )
LABEL_18:
      sub_1B8880C(this, servantData);
    v6 = *(_QWORD *)&list_param->max_length;
    if ( (int)v6 >= 1 )
    {
      v7 = 0LL;
      do
      {
        if ( v7 >= (unsigned int)v6 )
          sub_1B88814(this, servantData);
        v8 = (UnityEngine_Object_o *)list_param->m_Items[v7];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattlePerformancePlayer_o *)UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v8 )
            goto LABEL_18;
          klass = v8[11].klass;
          if ( klass )
          {
            if ( LODWORD(klass->_1.namespaze) == servantData->fields.uniqueId )
              BattleServantParamComponent__UpdateClassIconEffect((BattleServantParamComponent_o *)v8, servantData, 0LL);
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
  int32_t v3; // w3
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct BattleLogic_UseSkillObject_o *useSkillObject; // x1
  BattlePerformance_o *logicSkill; // x0
  __int64 v10; // x1
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x20
  struct BattleLogic_o *logic; // x8
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *SkillSelectAddFuncConfWindow; // x20
  System_String_o *v17; // x20
  CommonUI_o *v18; // x21
  BattlePerformancePlayer___c_c *v19; // x8
  System_String_o *v20; // x22
  System_Action_o *_9__39_0; // x23
  Il2CppObject *v22; // x24
  struct BattlePerformancePlayer___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  bool isOpenOtherWindow; // [xsp+34h] [xbp-4Ch] BYREF
  System_String_o *text; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4A5E0F2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattlePerformancePlayer_UseSkill__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_BattlePerformancePlayer___c__UseSkill_b__39_0__);
    sub_1B885B0(&BattlePerformancePlayer___c_TypeInfo);
    sub_1B885B0(&StringLiteral_3397/*"CANCEL"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E0F2 = 1;
  }
  isOpenOtherWindow = 0;
  if ( playSe )
  {
    v6 = Method_BattlePerformancePlayer_UseSkill__;
    if ( (*((_BYTE *)Method_BattlePerformancePlayer_UseSkill__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B885C8(Method_BattlePerformancePlayer_UseSkill__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
  }
  useSkillObject = this->fields.useSkillObject;
  this->fields.actSkillObject = useSkillObject;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.actSkillObject,
    (int32_t)useSkillObject,
    (int32_t)method,
    v3);
  actSkillObject = this->fields.actSkillObject;
  if ( !actSkillObject )
    goto LABEL_31;
  skillInfo = actSkillObject->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_31;
  BattleSkillInfoData__UpdateSelectAddIndex(actSkillObject->fields.skillInfo, -1, 0LL);
  text = (System_String_o *)StringLiteral_1/*""*/;
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_31;
  logicSkill = (BattlePerformance_o *)logic->fields.logicSkill;
  if ( !logicSkill )
    goto LABEL_31;
  if ( BattleLogicSkill__checkConditions((BattleLogicSkill_o *)logicSkill, skillInfo, &text, 0LL) )
  {
    if ( !BattlePerformancePlayer__OpenSkillSelectAddFuncConfWindow(this, skillInfo, v14) )
    {
      BattlePerformancePlayer__WantUseSkill(this, skillInfo, &isOpenOtherWindow, v15);
      if ( isOpenOtherWindow )
      {
        logicSkill = this->fields.perf;
        if ( !logicSkill )
          goto LABEL_31;
        SkillSelectAddFuncConfWindow = (UnityEngine_Object_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow(
                                                                 logicSkill,
                                                                 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_31:
          sub_1B8880C(logicSkill, v10);
        }
      }
    }
  }
  else
  {
    logicSkill = (BattlePerformance_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = text;
    v18 = (CommonUI_o *)logicSkill;
    v19 = BattlePerformancePlayer___c_TypeInfo;
    if ( !BattlePerformancePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformancePlayer___c_TypeInfo);
      v19 = BattlePerformancePlayer___c_TypeInfo;
    }
    v20 = (System_String_o *)StringLiteral_1/*""*/;
    _9__39_0 = v19->static_fields->__9__39_0;
    if ( !_9__39_0 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = BattlePerformancePlayer___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v19->static_fields->__9;
      _9__39_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(_9__39_0, v22, Method_BattlePerformancePlayer___c__UseSkill_b__39_0__, 0LL);
      static_fields = BattlePerformancePlayer___c_TypeInfo->static_fields;
      static_fields->__9__39_0 = _9__39_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__39_0, (int32_t)_9__39_0, v24, v25);
    }
    if ( !v18 )
      goto LABEL_31;
    CommonUI__OpenNotificationDialog(v18, v20, v17, _9__39_0, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0.0, 0LL);
    logicSkill = (BattlePerformance_o *)this->fields.myfsm;
    if ( !logicSkill )
      goto LABEL_31;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)logicSkill, (System_String_o *)StringLiteral_3397/*"CANCEL"*/, 0LL);
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
  if ( (byte_4A5E0F3 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_Target_isChoose__);
    sub_1B885B0(&Method_Target_isCommandType__);
    this = (BattlePerformancePlayer_o *)sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5E0F3 = 1;
  }
  if ( !skillInfo )
    goto LABEL_13;
  ValidTargetTypeArray = BattleSkillInfoData__get_ValidTargetTypeArray(skillInfo, 0LL);
  v8 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v8, 0LL, Method_Target_isCommandType__, 0LL);
  if ( !BasicHelper__Any_int__48671312(
          ValidTargetTypeArray,
          (System_Func_T__bool__o *)v8,
          (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816) )
  {
    v10 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(v10, 0LL, Method_Target_isChoose__, 0LL);
    if ( BasicHelper__Any_int__48671312(
           ValidTargetTypeArray,
           (System_Func_T__bool__o *)v10,
           (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816) )
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
        v13 = 0;
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_1B8880C(this, skillInfo);
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
  int32_t v10; // w2
  int32_t v11; // w3
  struct BattleData_o *data; // x8
  struct BattleLogic_UseSkillObject_o *v13; // x1
  struct BattleLogic_UseSkillObject_o **p_useSkillObject; // x19

  if ( (byte_4A5E0EB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9616/*"OK"*/);
    sub_1B885B0(&StringLiteral_3397/*"CANCEL"*/);
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    sub_1B885B0(&StringLiteral_12154/*"SKIP"*/);
    byte_4A5E0EB = 1;
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
                        v13 = this->fields.tmp_useSkill;
                        this->fields.useSkillObject = v13;
                        p_useSkillObject = &this->fields.useSkillObject;
                        sub_1B88554((ServantStatusBattleListViewItem_o *)p_useSkillObject, (int32_t)v13, v10, v11);
                        perf = (BattleWindowComponent_o *)*(p_useSkillObject - 14);
                        if ( perf )
                        {
                          v4 = &StringLiteral_12154/*"SKIP"*/;
                          goto LABEL_9;
                        }
                      }
                      else
                      {
                        perf = (BattleWindowComponent_o *)this->fields.myfsm;
                        if ( perf )
                        {
                          v4 = &StringLiteral_9616/*"OK"*/;
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
                      v4 = &StringLiteral_5489/*"END_PROC"*/;
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
      sub_1B8880C(perf, method);
    }
  }
  perf = (BattleWindowComponent_o *)this->fields.myfsm;
  if ( !perf )
    goto LABEL_29;
  v4 = &StringLiteral_3397/*"CANCEL"*/;
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
  if ( (byte_4A5E100 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    this = (BattlePerformancePlayer_o *)sub_1B885B0(&StringLiteral_13518/*"TUTORIAL_SKILL"*/);
    byte_4A5E100 = 1;
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
          v5 = &StringLiteral_5489/*"END_PROC"*/;
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
          v5 = &StringLiteral_13518/*"TUTORIAL_SKILL"*/;
          goto LABEL_8;
        }
LABEL_15:
        sub_1B8880C(this, method);
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
    sub_1B8880C(0LL, endCall);
  BattleServantConfConponent__Close(confwindowComp, endCall, method);
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
  BattleServantData_o *confwindowComp; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Int32_array *list_ID; // x8

  v4 = this;
  if ( (byte_4A5E0DE & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E0DE = 1;
  }
  list_param = v4->fields.list_param;
  if ( !list_param )
    goto LABEL_19;
  if ( list_param->max_length <= index )
    goto LABEL_20;
  v6 = (UnityEngine_Object_o *)list_param->m_Items[index];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformancePlayer_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v4->fields.list_param;
    if ( v7 )
    {
      if ( v7->max_length <= index )
        goto LABEL_20;
      this = (BattlePerformancePlayer_o *)v7->m_Items[index];
      if ( this )
      {
        confwindowComp = (BattleServantData_o *)this[1].fields.confwindowComp;
        if ( !confwindowComp
          || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
              BattleServantData__delParamObject(confwindowComp, gameObject, 0LL),
              (v7 = v4->fields.list_param) != 0LL) )
        {
          if ( v7->max_length <= index )
            goto LABEL_20;
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
LABEL_20:
              sub_1B88814(this, *(_QWORD *)&index);
            }
          }
        }
      }
    }
LABEL_19:
    sub_1B8880C(this, *(_QWORD *)&index);
  }
}


void __fastcall BattlePerformancePlayer__endSkill(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4A5E0F9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5492/*"END_SKILL"*/);
    byte_4A5E0F9 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5492/*"END_SKILL"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__initSvtConfWindow(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleServantConfConponent_o *confwindowComp; // x0
  struct BattleServantConfConponent_o *v5; // x20
  BattleServantConfConponent_CloseButtonCallBack_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5E0FD & 1) == 0 )
  {
    sub_1B885B0(&Method_BattlePerformancePlayer_onClickConfClose__);
    sub_1B885B0(&BattleServantConfConponent_CloseButtonCallBack_TypeInfo);
    byte_4A5E0FD = 1;
  }
  confwindowComp = this->fields.confwindowComp;
  if ( !confwindowComp )
    goto LABEL_8;
  BattleServantConfConponent__Initialize(confwindowComp, this->fields.data, v2);
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
        v6 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_1B887FC(BattleServantConfConponent_CloseButtonCallBack_TypeInfo),
        BattleServantConfConponent_CloseButtonCallBack___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattlePerformancePlayer_onClickConfClose__,
          0LL),
        !v5) )
  {
LABEL_8:
    sub_1B8880C(confwindowComp, method);
  }
  v5->fields.callback_close = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.callback_close, (int32_t)v6, v7, v8);
}


bool __fastcall BattlePerformancePlayer__isOpenSvtConf(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *confwindowComp; // x0

  confwindowComp = (BattleWindowComponent_o *)this->fields.confwindowComp;
  if ( !confwindowComp )
    sub_1B8880C(0LL, method);
  return BattleWindowComponent__isOpen(confwindowComp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__modeComPlayerStatus(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattlePerformancePlayer_o *v3; // x19
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v5; // x22
  __int64 v6; // x24
  int max_length; // w9
  unsigned int v8; // w20
  struct BattleServantParamComponent_array *v9; // x8
  struct UnityEngine_Vector3_array *list_pos; // x8
  struct BattleServantParamComponent_array *v11; // x8
  UnityEngine_Transform_o *transform; // x20
  int v13; // s0
  struct BattleServantParamComponent_array *v17; // x8
  __int64 v18; // x22
  unsigned __int64 v19; // x9
  unsigned __int64 v20; // x23
  UnityEngine_Object_o *v21; // x20
  struct BattleServantParamComponent_array *v22; // x8
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4A5E0E9 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    this = (BattlePerformancePlayer_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E0E9 = 1;
  }
  list_param = v3->fields.list_param;
  if ( !list_param )
    goto LABEL_36;
  v5 = 0LL;
  v6 = 4LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= max_length )
      break;
    if ( v8 >= max_length )
      goto LABEL_38;
    this = (BattlePerformancePlayer_o *)*((_QWORD *)&list_param->obj.klass + v6);
    if ( this )
    {
      this = (BattlePerformancePlayer_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( this )
      {
        v24.fields.r = 1.0;
        v24.fields.g = 1.0;
        v24.fields.b = 1.0;
        v24.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v24, 0LL);
        v9 = v3->fields.list_param;
        if ( v9 )
        {
          if ( v8 >= v9->max_length )
            goto LABEL_38;
          this = (BattlePerformancePlayer_o *)*((_QWORD *)&v9->obj.klass + v6);
          if ( this )
          {
            this = (BattlePerformancePlayer_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
            list_pos = v3->fields.list_pos;
            if ( list_pos )
            {
              if ( v8 >= list_pos->max_length )
                goto LABEL_38;
              if ( this )
              {
                UnityEngine_Transform__set_position(
                  (UnityEngine_Transform_o *)this,
                  *(UnityEngine_Vector3_o *)&list_pos->m_Items[v5].fields.y,
                  0LL);
                v11 = v3->fields.list_param;
                if ( v11 )
                {
                  if ( v8 >= v11->max_length )
LABEL_38:
                    sub_1B88814(this, method);
                  this = (BattlePerformancePlayer_o *)*((_QWORD *)&v11->obj.klass + v6);
                  if ( this )
                  {
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                    v23.fields.x = 0.0;
                    v23.fields.y = 0.0;
                    v23.fields.z = 0.0;
                    *(UnityEngine_Quaternion_o *)&v13 = UnityEngine_Quaternion__Internal_FromEulerRad(v23, 0LL);
                    if ( transform )
                    {
                      UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v13, 0LL);
                      list_param = v3->fields.list_param;
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
    goto LABEL_36;
  }
  this = (BattlePerformancePlayer_o *)v3->fields.confwindowComp;
  if ( !this
    || (BattleServantConfConponent__Close((BattleServantConfConponent_o *)this, 0LL, v2),
        (this = (BattlePerformancePlayer_o *)v3->fields.skillConfWindow) == 0LL)
    || (((void (__fastcall *)(BattlePerformancePlayer_o *, _QWORD, void *))this->klass[1]._1.events)(
          this,
          0LL,
          this->klass[1]._1.properties),
        (this = (BattlePerformancePlayer_o *)v3->fields.perf) == 0LL)
    || (BattlePerformance__CloseSkillSelectAddFuncConfWindow((BattlePerformance_o *)this, 0LL, 0LL),
        (v17 = v3->fields.list_param) == 0LL) )
  {
LABEL_36:
    sub_1B8880C(this, method);
  }
  v18 = 4LL;
  while ( 1 )
  {
    v19 = v17->max_length;
    v20 = v18 - 4;
    if ( v18 - 4 >= (int)v19 )
      break;
    if ( v20 >= v19 )
      goto LABEL_38;
    v21 = (UnityEngine_Object_o *)*((_QWORD *)&v17->obj.klass + v18);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformancePlayer_o *)UnityEngine_Object__op_Equality(v21, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v22 = v3->fields.list_param;
      if ( !v22 )
        goto LABEL_36;
      if ( v20 >= v22->max_length )
        goto LABEL_38;
      this = (BattlePerformancePlayer_o *)*((_QWORD *)&v22->obj.klass + v18);
      if ( !this )
        goto LABEL_36;
      BattleServantParamComponent__setCloseMode((BattleServantParamComponent_o *)this, 0LL);
    }
    v17 = v3->fields.list_param;
    ++v18;
    if ( !v17 )
      goto LABEL_36;
  }
}


void __fastcall BattlePerformancePlayer__modeTacPlayerStatus(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattleServantParamComponent_o *v3; // x0
  __int64 v4; // x1
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v6; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x20
  struct BattleServantParamComponent_array *v10; // x8

  if ( (byte_4A5E0E1 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E0E1 = 1;
  }
  BattlePerformancePlayer__updateView(this, method);
  list_param = this->fields.list_param;
  if ( !list_param )
LABEL_15:
    sub_1B8880C(v3, v4);
  v6 = 4LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    v8 = v6 - 4;
    if ( v6 - 4 >= (int)max_length )
      break;
    if ( v8 >= max_length )
      goto LABEL_17;
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&list_param->obj.klass + v6);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v3 = (BattleServantParamComponent_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
    if ( ((unsigned __int8)v3 & 1) == 0 )
    {
      v10 = this->fields.list_param;
      if ( !v10 )
        goto LABEL_15;
      if ( v8 >= v10->max_length )
LABEL_17:
        sub_1B88814(v3, v4);
      v3 = (BattleServantParamComponent_o *)*((_QWORD *)&v10->obj.klass + v6);
      if ( !v3 )
        goto LABEL_15;
      BattleServantParamComponent__setOpenMode(v3, this->fields.isPlayCommandSpellEffectStartAnim, 0LL);
    }
    list_param = this->fields.list_param;
    ++v6;
    if ( !list_param )
      goto LABEL_15;
  }
  this->fields.isPlayCommandSpellEffectStartAnim = 1;
}


void __fastcall BattlePerformancePlayer__onClickConfClose(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4A5E0E4 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3537/*"CLICK_CLOSE"*/);
    byte_4A5E0E4 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_3537/*"CLICK_CLOSE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__onClickServant(
        BattlePerformancePlayer_o *this,
        int32_t uniqueID,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *v4; // x20
  struct BattleServantConfConponent_o *confwindowComp; // x8
  struct BattleServantData_o *bsvtData; // x8
  __int64 *v7; // x8

  v4 = this;
  if ( (byte_4A5E0E2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3571/*"CLICK_SVTWINDOW"*/);
    this = (BattlePerformancePlayer_o *)sub_1B885B0(&StringLiteral_3537/*"CLICK_CLOSE"*/);
    byte_4A5E0E2 = 1;
  }
  confwindowComp = v4->fields.confwindowComp;
  if ( !confwindowComp )
    goto LABEL_11;
  bsvtData = confwindowComp->fields.bsvtData;
  if ( !bsvtData || bsvtData->fields.uniqueId != uniqueID )
  {
    this = (BattlePerformancePlayer_o *)v4->fields.myfsm;
    v4->fields.tmp_uniqueId = uniqueID;
    if ( this )
    {
      v7 = &StringLiteral_3571/*"CLICK_SVTWINDOW"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_1B8880C(this, *(_QWORD *)&uniqueID);
  }
  this = (BattlePerformancePlayer_o *)v4->fields.myfsm;
  if ( !this )
    goto LABEL_11;
  v7 = &StringLiteral_3537/*"CLICK_CLOSE"*/;
LABEL_10:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v7, 0LL);
}


void __fastcall BattlePerformancePlayer__onClickSkillCancel(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4A5E0F1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3397/*"CANCEL"*/);
    byte_4A5E0F1 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_3397/*"CANCEL"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__onClickSkillIcon(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLong,
        const MethodInfo *method)
{
  bool v6; // w22
  BattleLogic_UseSkillObject_o *v7; // x20
  __int64 v8; // x1
  BattleData_o *data; // x0
  struct BattleData_o *v10; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  int32_t v13; // w2
  int32_t v14; // w3
  struct BattleLogic_UseSkillObject_o **p_tmp_useSkill; // x19

  v6 = isLong;
  if ( (byte_4A5E0EA & 1) == 0 )
  {
    sub_1B885B0(&BattleLogic_UseSkillObject_TypeInfo);
    sub_1B885B0(&StringLiteral_3566/*"CLICK_SKILLICON"*/);
    byte_4A5E0EA = 1;
  }
  v7 = (BattleLogic_UseSkillObject_o *)sub_1B887FC(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v7, skillInfo, 0LL);
  data = this->fields.data;
  this->fields.isLongTap = v6;
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
    if ( BattlePerformanceMaster__isCloseEnemyConf((BattlePerformanceMaster_o *)data, 0LL) )
    {
      data = (BattleData_o *)this->fields.logic;
      if ( !data )
        goto LABEL_20;
      if ( BattleLogic__isTimingUseSkill((BattleLogic_o *)data, 0LL) )
      {
        this->fields.tmp_useSkill = v7;
        p_tmp_useSkill = &this->fields.tmp_useSkill;
        sub_1B88554((ServantStatusBattleListViewItem_o *)p_tmp_useSkill, (int32_t)v7, v13, v14);
        data = (BattleData_o *)*(p_tmp_useSkill - 13);
        if ( data )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_3566/*"CLICK_SKILLICON"*/, 0LL);
          return;
        }
LABEL_20:
        sub_1B8880C(data, v8);
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
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  PlayMakerFSM_o *v10; // x0

  if ( (byte_4A5E0F0 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogic_UseSkillObject_TypeInfo);
    sub_1B885B0(&StringLiteral_9616/*"OK"*/);
    byte_4A5E0F0 = 1;
  }
  v5 = (BattleLogic_UseSkillObject_o *)sub_1B887FC(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v5, skillInfo, 0LL);
  this->fields.useSkillObject = v5;
  p_useSkillObject = &this->fields.useSkillObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_useSkillObject, (int32_t)v5, v7, v8);
  v10 = (PlayMakerFSM_o *)*(p_useSkillObject - 14);
  if ( !v10 )
    sub_1B8880C(0LL, v9);
  PlayMakerFSM__SendEvent(v10, (System_String_o *)StringLiteral_9616/*"OK"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__onCloseConfComplete(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *confwindowComp; // x0
  const MethodInfo *v4; // x5
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v6; // x21
  int max_length; // w9

  if ( (byte_4A5E0E6 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5E0E6 = 1;
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
  BattleServantConfConponent__setConfData((BattleServantConfConponent_o *)confwindowComp, 0LL, 1, 0LL, 0, v4);
  list_param = this->fields.list_param;
  if ( !list_param )
    goto LABEL_12;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1B88814(confwindowComp, method);
    confwindowComp = (UnityEngine_Component_o *)list_param->m_Items[v6];
    if ( confwindowComp )
    {
      BattleServantParamComponent__setTouch((BattleServantParamComponent_o *)confwindowComp, 1, 0LL);
      list_param = this->fields.list_param;
      ++v6;
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
    sub_1B8880C(confwindowComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confwindowComp, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__onOpenConfComplete(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4A5E0FF & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5E0FF = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__openSelectCommandTypeWindow(
        BattlePerformancePlayer_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x8
  struct BattleSkillInfoData_o *skillInfo; // x8
  struct BattleLogic_UseSkillObject_o *v6; // x8
  BattleServantData_o *v7; // x20
  const MethodInfo *v8; // x2
  struct BattlePerformance_o *v9; // x8
  SelectTdCommandController_o *v10; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x9
  struct BattleSelectCommandTypeWindow_o *SelectCommandWindow; // x0
  struct BattleSelectCommandTypeWindow_o **p_selectCommandTypeWindow; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  struct BattleSelectCommandTypeWindow_o *selectCommandTypeWindow; // x23
  BattleSelectCommandTypeWindow_SelectServantCallBack_o *v17; // x24
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A5E0FA & 1) == 0 )
  {
    sub_1B885B0(&Method_BattlePerformancePlayer_selectedCommandType__);
    sub_1B885B0(&BattleSelectCommandTypeWindow_SelectServantCallBack_TypeInfo);
    byte_4A5E0FA = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_20;
  perf = (BattlePerformance_o *)BattlePerformance__getSelectMainSubSvtWindow(perf, 0LL);
  if ( !perf )
    goto LABEL_20;
  ((void (__fastcall *)(BattlePerformance_o *, void *))perf->klass[1]._1.parent)(perf, perf->klass[1]._1.generic_class);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_20;
  perf = (BattlePerformance_o *)BattlePerformance__getSelectSvtWindow(perf, 0LL);
  if ( !perf )
    goto LABEL_20;
  ((void (__fastcall *)(BattlePerformance_o *, void *))perf->klass[1]._1.parent)(perf, perf->klass[1]._1.generic_class);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_20;
  BattlePerformance__SetCloseCommandTypeWindow(perf, 0LL);
  tmp_useSkill = this->fields.tmp_useSkill;
  if ( !tmp_useSkill )
    goto LABEL_20;
  skillInfo = tmp_useSkill->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_20;
  perf = (BattlePerformance_o *)this->fields.data;
  if ( !perf )
    goto LABEL_20;
  perf = (BattlePerformance_o *)BattleData__getServantData((BattleData_o *)perf, skillInfo->fields.svtUniqueId, 0LL);
  v6 = this->fields.tmp_useSkill;
  if ( !v6 )
    goto LABEL_20;
  v7 = (BattleServantData_o *)perf;
  perf = (BattlePerformance_o *)SelectTdCommandController__MakeController(
                                  (BattleServantData_o *)perf,
                                  v6->fields.skillInfo,
                                  0LL);
  v9 = this->fields.perf;
  if ( !v9 )
    goto LABEL_20;
  v10 = (SelectTdCommandController_o *)perf;
  if ( !perf )
    goto LABEL_20;
  m_CancellationTokenSource = perf->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_20;
  perf = (BattlePerformance_o *)v9->fields.statusPerf;
  if ( !perf )
    goto LABEL_20;
  SelectCommandWindow = BattlePerformanceStatus__GetSelectCommandWindow(
                          (BattlePerformanceStatus_o *)perf,
                          (int32_t)m_CancellationTokenSource->fields._kernelEvent,
                          v8);
  this->fields.selectCommandTypeWindow = SelectCommandWindow;
  p_selectCommandTypeWindow = &this->fields.selectCommandTypeWindow;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.selectCommandTypeWindow,
    (int32_t)SelectCommandWindow,
    v14,
    v15);
  selectCommandTypeWindow = this->fields.selectCommandTypeWindow;
  v17 = (BattleSelectCommandTypeWindow_SelectServantCallBack_o *)sub_1B887FC(BattleSelectCommandTypeWindow_SelectServantCallBack_TypeInfo);
  BattleSelectCommandTypeWindow_SelectServantCallBack___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_selectedCommandType__,
    0LL);
  if ( !selectCommandTypeWindow
    || (selectCommandTypeWindow->fields.selectCallBack = v17,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&selectCommandTypeWindow->fields.selectCallBack,
          (int32_t)v17,
          v18,
          v19),
        (perf = (BattlePerformance_o *)*p_selectCommandTypeWindow) == 0LL)
    || (BattleSelectCommandTypeWindow__Setup((BattleSelectCommandTypeWindow_o *)perf, v7, v10, 0LL),
        (perf = (BattlePerformance_o *)*p_selectCommandTypeWindow) == 0LL) )
  {
LABEL_20:
    sub_1B8880C(perf, method);
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
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2
  bool v11; // w1
  struct BattleSelectServantWindow_o *v12; // x22
  BattleSelectServantWindow_SelectServantCallBack_o *v13; // x23
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  int32_t v16; // w3
  BattleSelectServantWindow_o *v17; // x22
  const MethodInfo *v18; // x5
  struct BattleData_o *data; // x8

  if ( (byte_4A5E0F6 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattlePerformancePlayer_selectedSvt__);
    sub_1B885B0(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
    byte_4A5E0F6 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_22;
  perf = (BattlePerformance_o *)BattlePerformance__getSelectMainSubSvtWindow(perf, 0LL);
  if ( !perf )
    goto LABEL_22;
  ((void (__fastcall *)(BattlePerformance_o *, void *))perf->klass[1]._1.parent)(perf, perf->klass[1]._1.generic_class);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_22;
  BattlePerformance__SetCloseCommandTypeWindow(perf, 0LL);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_22;
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0LL);
  this->fields.selectSvtWindow = SelectSvtWindow;
  p_selectSvtWindow = &this->fields.selectSvtWindow;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectSvtWindow, (int32_t)SelectSvtWindow, v8, v9);
  perf = (BattlePerformance_o *)this->fields.data;
  if ( !perf )
    goto LABEL_22;
  if ( BattleData__isTutorialSelectsvtCancel((BattleData_o *)perf, 0LL) )
  {
    BattlePerformancePlayer__procTurorial(this, 3, v10);
    perf = (BattlePerformance_o *)this->fields.selectSvtWindow;
    if ( !perf )
      goto LABEL_22;
    v11 = 0;
  }
  else
  {
    perf = (BattlePerformance_o *)*p_selectSvtWindow;
    if ( !*p_selectSvtWindow )
      goto LABEL_22;
    v11 = 1;
  }
  BattleSelectServantWindow__setUseClose((BattleSelectServantWindow_o *)perf, v11, v10);
  v12 = this->fields.selectSvtWindow;
  v13 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_1B887FC(BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_selectedSvt__,
    v14);
  if ( !v12 )
    goto LABEL_22;
  v12->fields.selectCallBack = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->fields.selectCallBack, (int32_t)v13, v15, v16);
  perf = (BattlePerformance_o *)this->fields.data;
  if ( !perf )
    goto LABEL_22;
  v17 = this->fields.selectSvtWindow;
  perf = (BattlePerformance_o *)BattleData__getFieldPlayerServantList((BattleData_o *)perf, 0LL);
  if ( !v17 )
    goto LABEL_22;
  BattleSelectServantWindow__SetServantData(v17, (BattleServantData_array *)perf, skillId, -1, 0LL, v18);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  if ( data->fields.tutorialId == 2 )
  {
    perf = (BattlePerformance_o *)*p_selectSvtWindow;
    if ( !*p_selectSvtWindow )
      goto LABEL_22;
    BattleSelectServantWindow__SetServantRootTutorialPosition(
      (BattleSelectServantWindow_o *)perf,
      *(const MethodInfo **)&skillId);
  }
  perf = (BattlePerformance_o *)*p_selectSvtWindow;
  if ( !*p_selectSvtWindow )
LABEL_22:
    sub_1B8880C(perf, *(_QWORD *)&skillId);
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
  const MethodInfo *v8; // x2

  if ( (byte_4A5E0FE & 1) == 0 )
  {
    sub_1B885B0(&Method_BattlePerformancePlayer_onOpenConfComplete__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4A5E0FE = 1;
  }
  confwindowComp = this->fields.confwindowComp;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_onOpenConfComplete__,
    0LL);
  if ( !confwindowComp )
    sub_1B8880C(v6, v7);
  BattleServantConfConponent__Open(confwindowComp, v5, v8);
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

  list_ID = this->fields.list_ID;
  if ( !list_ID )
LABEL_11:
    sub_1B8880C(this, *(_QWORD *)&uniqueID);
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
LABEL_13:
        sub_1B88814(this, *(_QWORD *)&uniqueID);
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

  if ( (byte_4A5E0E7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5E0E7 = 1;
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
    sub_1B8880C(buffConfWindow, v5);
  }
  PlayMakerFSM__SendEvent(buffConfWindow, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__procCloseConf(
        BattlePerformancePlayer_o *this,
        bool flg,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *v4; // x19
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v8; // x22
  int max_length; // w9
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  BattleWindowComponent_EndCall_o *v12; // x20
  const MethodInfo *v13; // x2

  v4 = this;
  if ( (byte_4A5E0E5 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattlePerformancePlayer_onCloseConfComplete__);
    sub_1B885B0(&Method_BattlePerformancePlayer_procCloseConf__);
    this = (BattlePerformancePlayer_o *)sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4A5E0E5 = 1;
  }
  if ( flg )
  {
    v5 = Method_BattlePerformancePlayer_procCloseConf__;
    if ( (*((_BYTE *)Method_BattlePerformancePlayer_procCloseConf__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_BattlePerformancePlayer_procCloseConf__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlayCommonSe(v6, 12, 0LL);
  }
  list_param = v4->fields.list_param;
  if ( !list_param )
    goto LABEL_13;
  v8 = 0LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
      sub_1B88814(this, flg);
    this = (BattlePerformancePlayer_o *)list_param->m_Items[v8];
    if ( this )
    {
      BattleServantParamComponent__playEndShowServant((BattleServantParamComponent_o *)this, 0LL);
      list_param = v4->fields.list_param;
      ++v8;
      if ( list_param )
        continue;
    }
    goto LABEL_13;
  }
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_13;
  statusPerf = perf->fields.statusPerf;
  if ( !statusPerf
    || (this = (BattlePerformancePlayer_o *)statusPerf->fields.buffConfWindow) == 0LL
    || (((void (__fastcall *)(BattlePerformancePlayer_o *, _QWORD, void *))this->klass[1]._1.events)(
          this,
          0LL,
          this->klass[1]._1.properties),
        (this = (BattlePerformancePlayer_o *)v4->fields.perf) == 0LL)
    || (BattlePerformance__changeAttackButton((BattlePerformance_o *)this, 1, 0, 1, 0LL),
        v12 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v12,
          (Il2CppObject *)v4,
          Method_BattlePerformancePlayer_onCloseConfComplete__,
          0LL),
        (this = (BattlePerformancePlayer_o *)v4->fields.confwindowComp) == 0LL) )
  {
LABEL_13:
    sub_1B8880C(this, flg);
  }
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)this, v12, v13);
}


void __fastcall BattlePerformancePlayer__procCloseSkillConf(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  BattlePerformance_o *perf; // x0
  __int64 v8; // x1

  if ( (byte_4A5E0ED & 1) == 0 )
  {
    sub_1B885B0(&Method_BattlePerformancePlayer_CloseSkillConfComp__);
    sub_1B885B0(&Method_BattlePerformancePlayer_procCloseSkillConf__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4A5E0ED = 1;
  }
  v3 = Method_BattlePerformancePlayer_procCloseSkillConf__;
  if ( (*((_BYTE *)Method_BattlePerformancePlayer_procCloseSkillConf__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_BattlePerformancePlayer_procCloseSkillConf__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0LL);
  skillConfWindow = this->fields.skillConfWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo);
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
    sub_1B8880C(perf, v8);
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct BattleSkillConfComponent_o *v10; // x20
  BattleWindowComponent_EndCall_o *v11; // x21

  if ( (byte_4A5E0EC & 1) == 0 )
  {
    sub_1B885B0(&Method_BattlePerformancePlayer_OpenSkillConfComplete__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1B885B0(&StringLiteral_15382/*"WAIT_OTHER_SKILL"*/);
    byte_4A5E0EC = 1;
  }
  otherFsm = this->fields.otherFsm;
  if ( !otherFsm )
    goto LABEL_9;
  tmp_useSkill = this->fields.tmp_useSkill;
  PlayMakerFSM__SendEvent(otherFsm, (System_String_o *)StringLiteral_15382/*"WAIT_OTHER_SKILL"*/, 0LL);
  skillConfWindow = this->fields.skillConfWindow;
  otherFsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !skillConfWindow
    || (skillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)otherFsm,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&skillConfWindow->fields.target, (int32_t)otherFsm, v8, v9),
        !tmp_useSkill)
    || (otherFsm = (PlayMakerFSM_o *)this->fields.skillConfWindow) == 0LL
    || (BattleSkillConfComponent__SetSkillConf(
          (BattleSkillConfComponent_o *)otherFsm,
          tmp_useSkill->fields.skillInfo,
          cancelFlg,
          1,
          0LL),
        v10 = this->fields.skillConfWindow,
        v11 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattlePerformancePlayer_OpenSkillConfComplete__,
          0LL),
        !v10) )
  {
LABEL_9:
    sub_1B8880C(otherFsm, cancelFlg);
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v10->klass->vtable._10_Open.method)(
    v10,
    v11,
    v10->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformancePlayer__procSelectServant(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattleData_o *v4; // x8
  int32_t tmp_uniqueId; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v9; // x21
  int max_length; // w10
  struct System_Int32_array *list_ID; // x9
  const MethodInfo *v12; // x5
  struct BattleServantParamComponent_array *v13; // x8
  BattleServantParamComponent_o *v14; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  float v17; // s0
  const MethodInfo *v18; // x1

  if ( (byte_4A5E0E3 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattlePerformancePlayer_procSelectServant__);
    sub_1B885B0(&StringLiteral_12230/*"START_CLOSE"*/);
    byte_4A5E0E3 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_33;
  data = (BattleData_o *)BattleData__isTutorial(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_9;
  v4 = this->fields.data;
  if ( !v4 )
    goto LABEL_33;
  if ( v4->fields.tutorialId != 3 || v4->fields.wavecount != 1 || v4->fields.turnCount != 1 )
  {
LABEL_9:
    data = (BattleData_o *)this->fields.otherFsm;
    if ( data )
    {
      tmp_uniqueId = this->fields.tmp_uniqueId;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_12230/*"START_CLOSE"*/, 0LL);
      v6 = Method_BattlePerformancePlayer_procSelectServant__;
      if ( (*((_BYTE *)Method_BattlePerformancePlayer_procSelectServant__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1B885C8(Method_BattlePerformancePlayer_procSelectServant__);
      v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
      OverwriteAssetSoundName__PlayCommonSe(v7, 11, 0LL);
      list_param = this->fields.list_param;
      if ( list_param )
      {
        v9 = 0LL;
        while ( 1 )
        {
          max_length = list_param->max_length;
          if ( (int)v9 >= max_length )
            break;
          list_ID = this->fields.list_ID;
          if ( !list_ID )
            goto LABEL_33;
          if ( (unsigned int)v9 >= list_ID->max_length || (unsigned int)v9 >= max_length )
            goto LABEL_34;
          data = (BattleData_o *)list_param->m_Items[v9];
          if ( !data )
            goto LABEL_33;
          if ( tmp_uniqueId == list_ID->m_Items[v9 + 1] )
          {
            BattleServantParamComponent__playSelectServant((BattleServantParamComponent_o *)data, 0LL);
            v13 = this->fields.list_param;
            if ( !v13 )
              goto LABEL_33;
            if ( (unsigned int)v9 >= v13->max_length )
LABEL_34:
              sub_1B88814(data, method);
            v14 = v13->m_Items[v9];
            if ( !v14 )
              goto LABEL_33;
            data = (BattleData_o *)this->fields.confwindowComp;
            if ( !data )
              goto LABEL_33;
            BattleServantConfConponent__setConfData(
              (BattleServantConfConponent_o *)data,
              v14->fields.data,
              0,
              0LL,
              0,
              v12);
          }
          else
          {
            BattleServantParamComponent__playCloseSelectServant((BattleServantParamComponent_o *)data, 0LL);
          }
          list_param = this->fields.list_param;
          ++v9;
          if ( !list_param )
            goto LABEL_33;
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
              v17 = ((float (__fastcall *)(BattleData_o *, _QWORD, void *))data->klass[1]._1.typeMetadataHandle)(
                      data,
                      0LL,
                      data->klass[1]._1.interopData);
              BattlePerformancePlayer__openSvtConfWindow(this, v17, v18);
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
LABEL_33:
    sub_1B8880C(data, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__procTurorial(
        BattlePerformancePlayer_o *this,
        int32_t param,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  _DWORD *monitor; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x0
  __int64 *v8; // x8
  System_Action_o *v9; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4A5E101 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattlePerformancePlayer_tutorialSetSelectSvt__);
    sub_1B885B0(&Method_BattlePerformancePlayer_tutorialSetSelect__);
    this = (BattlePerformancePlayer_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E101 = 1;
  }
  switch ( param )
  {
    case 3:
      monitor = v4[3].monitor;
      if ( !monitor )
        goto LABEL_14;
      monitor[273] = 5;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      v8 = &Method_BattlePerformancePlayer_tutorialSetSelectSvt__;
      goto LABEL_11;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      v8 = &Method_BattlePerformancePlayer_tutorialSetSelect__;
LABEL_11:
      v9 = v7;
      System_Action___ctor(v7, v4, *v8, 0LL);
      if ( !Instance )
        goto LABEL_14;
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v9, 0LL);
      return;
    case 0:
      this = (BattlePerformancePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( this )
      {
        CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)this, 0LL);
        return;
      }
LABEL_14:
      sub_1B8880C(this, *(_QWORD *)&param);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__selectedCommandType(
        BattlePerformancePlayer_o *this,
        int32_t uniqueId,
        int32_t changeTdIndex,
        const MethodInfo *method)
{
  int32_t v5; // w20
  BattleLogic_o *selectCommandTypeWindow; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  __int64 *v9; // x8

  v5 = uniqueId;
  if ( (byte_4A5E0FB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3397/*"CANCEL"*/);
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5E0FB = 1;
  }
  selectCommandTypeWindow = (BattleLogic_o *)this->fields.selectCommandTypeWindow;
  if ( !selectCommandTypeWindow )
    goto LABEL_16;
  selectCommandTypeWindow = (BattleLogic_o *)((__int64 (__fastcall *)(BattleLogic_o *, _QWORD, void *, const MethodInfo *))selectCommandTypeWindow->klass[1]._1.events)(
                                               selectCommandTypeWindow,
                                               0LL,
                                               selectCommandTypeWindow->klass[1]._1.properties,
                                               method);
  if ( changeTdIndex )
  {
    actSkillObject = this->fields.actSkillObject;
    if ( actSkillObject )
    {
      *(_QWORD *)&uniqueId = actSkillObject->fields.skillInfo;
      if ( *(_QWORD *)&uniqueId )
      {
        *(_DWORD *)(*(_QWORD *)&uniqueId + 92LL) = changeTdIndex;
        selectCommandTypeWindow = this->fields.logic;
        if ( selectCommandTypeWindow )
        {
          BattleLogic__wantUseSkill(selectCommandTypeWindow, *(BattleSkillInfoData_o **)&uniqueId, v5, -1, 0LL);
          selectCommandTypeWindow = (BattleLogic_o *)this->fields.myfsm;
          if ( selectCommandTypeWindow )
          {
            v9 = &StringLiteral_5489/*"END_PROC"*/;
LABEL_14:
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectCommandTypeWindow, (System_String_o *)*v9, 0LL);
            return;
          }
        }
      }
    }
    goto LABEL_16;
  }
  selectCommandTypeWindow = (BattleLogic_o *)this->fields.perf;
  if ( !selectCommandTypeWindow )
    goto LABEL_16;
  if ( BattlePerformance__IsAllClosePreSkillSelWindows((BattlePerformance_o *)selectCommandTypeWindow, 0LL) )
  {
    selectCommandTypeWindow = (BattleLogic_o *)this->fields.myfsm;
    if ( selectCommandTypeWindow )
    {
      v9 = &StringLiteral_3397/*"CANCEL"*/;
      goto LABEL_14;
    }
LABEL_16:
    sub_1B8880C(selectCommandTypeWindow, *(_QWORD *)&uniqueId);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x22
  SkillEntity_o *v9; // x22
  __int64 *v10; // x8
  struct BattleData_o *data; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v13; // x21
  BattlePerformancePlayer___c_c *v14; // x8
  System_Action_o *_9__45_0; // x23
  System_String_o *v16; // x22
  Il2CppObject *v17; // x24
  struct BattlePerformancePlayer___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A5E0F7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_BattlePerformancePlayer___c__selectedSvt_b__45_0__);
    sub_1B885B0(&BattlePerformancePlayer___c_TypeInfo);
    sub_1B885B0(&StringLiteral_3397/*"CANCEL"*/);
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_2912/*"BATTLE_INVALID_SELECT_TARGET"*/);
    byte_4A5E0F7 = 1;
  }
  selectSvtWindow = this->fields.selectSvtWindow;
  if ( !selectSvtWindow )
    goto LABEL_35;
  selectSvtWindow = (void *)(*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)selectSvtWindow + 504LL))(
                              selectSvtWindow,
                              0LL,
                              *(_QWORD *)(*(_QWORD *)selectSvtWindow + 512LL));
  if ( uniqueId != -1 )
  {
    actSkillObject = this->fields.actSkillObject;
    if ( !actSkillObject )
      goto LABEL_35;
    skillInfo = actSkillObject->fields.skillInfo;
    selectSvtWindow = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !selectSvtWindow )
      goto LABEL_35;
    selectSvtWindow = DataManager__GetMasterData_object_(
                        (DataManager_o *)selectSvtWindow,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !skillInfo )
      goto LABEL_35;
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)selectSvtWindow;
    selectSvtWindow = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                skillInfo,
                                skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v8 )
      goto LABEL_35;
    selectSvtWindow = DataMasterBase_object__object__int___GetEntity(
                        v8,
                        (int32_t)selectSvtWindow,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_35;
    v9 = (SkillEntity_o *)selectSvtWindow;
    selectSvtWindow = BattleData__getServantData(this->fields.data, uniqueId, 0LL);
    if ( !selectSvtWindow || !v9 )
      goto LABEL_35;
    if ( SkillEntity__checkUseTreasure(v9, *((_DWORD *)selectSvtWindow + 81), 0LL) )
    {
      selectSvtWindow = this->fields.logic;
      if ( selectSvtWindow )
      {
        BattleLogic__wantUseSkill((BattleLogic_o *)selectSvtWindow, skillInfo, uniqueId, -1, 0LL);
        selectSvtWindow = this->fields.myfsm;
        if ( selectSvtWindow )
        {
          v10 = &StringLiteral_5489/*"END_PROC"*/;
LABEL_34:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)*v10, 0LL);
          return;
        }
      }
      goto LABEL_35;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    selectSvtWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2912/*"BATTLE_INVALID_SELECT_TARGET"*/, 0LL);
    v13 = (System_String_o *)selectSvtWindow;
    v14 = BattlePerformancePlayer___c_TypeInfo;
    if ( !BattlePerformancePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformancePlayer___c_TypeInfo);
      v14 = BattlePerformancePlayer___c_TypeInfo;
    }
    _9__45_0 = v14->static_fields->__9__45_0;
    v16 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__45_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = BattlePerformancePlayer___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v14->static_fields->__9;
      _9__45_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(_9__45_0, v17, Method_BattlePerformancePlayer___c__selectedSvt_b__45_0__, 0LL);
      static_fields = BattlePerformancePlayer___c_TypeInfo->static_fields;
      static_fields->__9__45_0 = _9__45_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v19, v20);
    }
    if ( !Instance )
      goto LABEL_35;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v16, v13, _9__45_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
LABEL_32:
    selectSvtWindow = this->fields.myfsm;
    if ( selectSvtWindow )
    {
      v10 = &StringLiteral_3397/*"CANCEL"*/;
      goto LABEL_34;
    }
LABEL_35:
    sub_1B8880C(selectSvtWindow, *(_QWORD *)&uniqueId);
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_35;
  if ( data->fields.tutorialId != 2 || data->fields.tutorialState != -1 )
  {
    selectSvtWindow = this->fields.perf;
    if ( !selectSvtWindow )
      goto LABEL_35;
    if ( BattlePerformance__IsAllClosePreSkillSelWindows((BattlePerformance_o *)selectSvtWindow, 0LL) )
      goto LABEL_32;
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

  v6 = this;
  if ( (byte_4A5E0DF & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E0DF = 1;
  }
  list_param = v6->fields.list_param;
  if ( !list_param )
    goto LABEL_22;
  if ( list_param->max_length <= index )
    goto LABEL_23;
  v8 = (UnityEngine_Object_o *)list_param->m_Items[index];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformancePlayer_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v6->fields.list_param;
    if ( v9 )
    {
      if ( v9->max_length <= index )
        goto LABEL_23;
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
            goto LABEL_23;
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
                  goto LABEL_23;
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
LABEL_23:
                    sub_1B88814(this, *(_QWORD *)&index);
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_1B8880C(this, *(_QWORD *)&index);
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
  int max_length; // w22
  int v8; // w23
  struct BattleServantParamComponent_array *v9; // x8

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
      return v8 < max_length;
    if ( v8 >= (unsigned int)max_length )
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
  v9 = v4->fields.list_param;
  if ( !v9 )
    goto LABEL_9;
  if ( v8 >= v9->max_length )
LABEL_15:
    sub_1B88814(this, buffData);
  this = (BattlePerformancePlayer_o *)*((_QWORD *)&v9->obj.klass + v6);
  if ( !this )
LABEL_9:
    sub_1B8880C(this, buffData);
  BattleServantParamComponent__showSideEffect((BattleServantParamComponent_o *)this, buffData, 0LL);
  return v8 < max_length;
}


void __fastcall BattlePerformancePlayer__startCommand(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4A5E0E8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12231/*"START_COM"*/);
    byte_4A5E0E8 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_12231/*"START_COM"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__startSkill(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4A5E0F8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12251/*"START_SKILL"*/);
    byte_4A5E0F8 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_12251/*"START_SKILL"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__startTac(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4A5E0E0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12255/*"START_TAC"*/);
    byte_4A5E0E0 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_12255/*"START_TAC"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__tutorialSetArrowIcon(
        BattlePerformancePlayer_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  UnityEngine_Vector2_o v4; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v5; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4A5E102 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E102 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  v5.fields.m_Width = 90.0;
  v4.fields.x = -378.0;
  v4.fields.y = -151.0;
  v5.fields.m_XMin = -230.0;
  v5.fields.m_YMin = -270.0;
  v5.fields.m_Height = 90.0;
  CommonUI__OpenTutorialArrowMark((CommonUI_o *)Instance, v4, 0.0, v5, 0LL, 0LL);
}


void __fastcall BattlePerformancePlayer__tutorialSetSelect(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  UnityEngine_Vector2_o v4; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v5; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4A5E103 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E103 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  v4.fields.x = 310.0;
  v4.fields.y = -50.0;
  v5.fields.m_XMin = -410.0;
  v5.fields.m_YMin = -104.0;
  v5.fields.m_Width = 820.0;
  v5.fields.m_Height = 280.0;
  CommonUI__OpenTutorialArrowMark((CommonUI_o *)Instance, v4, -90.0, v5, 0LL, 0LL);
}


void __fastcall BattlePerformancePlayer__tutorialSetSelectSvt(
        BattlePerformancePlayer_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  UnityEngine_Vector2_o v4; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v5; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4A5E104 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E104 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  v4.fields.x = -0.0;
  v5.fields.m_XMin = -200.0;
  v5.fields.m_YMin = -175.0;
  v5.fields.m_Width = 400.0;
  v5.fields.m_Height = 350.0;
  v4.fields.y = -0.0;
  CommonUI__OpenTutorialArrowMark((CommonUI_o *)Instance, v4, 0.0, v5, 0LL, 0LL);
}


void __fastcall BattlePerformancePlayer__updateBuff(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformancePlayer__updateView(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattlePerformancePlayer_o *v2; // x19
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v4; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v6; // x23
  UnityEngine_Object_o *v7; // x20
  struct BattleServantParamComponent_array *v8; // x8

  v2 = this;
  if ( (byte_4A5E0FC & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E0FC = 1;
  }
  list_param = v2->fields.list_param;
  if ( !list_param )
LABEL_15:
    sub_1B8880C(this, method);
  v4 = 4LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    v6 = v4 - 4;
    if ( v4 - 4 >= (int)max_length )
      break;
    if ( v6 >= max_length )
      goto LABEL_17;
    v7 = (UnityEngine_Object_o *)*((_QWORD *)&list_param->obj.klass + v4);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformancePlayer_o *)UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v8 = v2->fields.list_param;
      if ( !v8 )
        goto LABEL_15;
      if ( v6 >= v8->max_length )
LABEL_17:
        sub_1B88814(this, method);
      this = (BattlePerformancePlayer_o *)*((_QWORD *)&v8->obj.klass + v4);
      if ( !this )
        goto LABEL_15;
      BattleServantParamComponent__updateView((BattleServantParamComponent_o *)this, 0LL);
    }
    list_param = v2->fields.list_param;
    ++v4;
    if ( !list_param )
      goto LABEL_15;
  }
}


void __fastcall BattlePerformancePlayer__useSkillIcon(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattleLogic_UseSkillObject_o *v5; // x21
  struct BattleLogic_UseSkillObject_o **p_useSkillObject; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  PlayMakerFSM_o *v10; // x0

  if ( (byte_4A5E0EF & 1) == 0 )
  {
    sub_1B885B0(&BattleLogic_UseSkillObject_TypeInfo);
    sub_1B885B0(&StringLiteral_3566/*"CLICK_SKILLICON"*/);
    byte_4A5E0EF = 1;
  }
  v5 = (BattleLogic_UseSkillObject_o *)sub_1B887FC(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v5, skillInfo, 0LL);
  this->fields.useSkillObject = v5;
  p_useSkillObject = &this->fields.useSkillObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_useSkillObject, (int32_t)v5, v7, v8);
  v10 = (PlayMakerFSM_o *)*(p_useSkillObject - 14);
  if ( !v10 )
    sub_1B8880C(0LL, v9);
  PlayMakerFSM__SendEvent(v10, (System_String_o *)StringLiteral_3566/*"CLICK_SKILLICON"*/, 0LL);
}


void __fastcall BattlePerformancePlayer___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E107 & 1) == 0 )
  {
    sub_1B885B0(&BattlePerformancePlayer___c_TypeInfo);
    byte_4A5E107 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattlePerformancePlayer___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattlePerformancePlayer___c_TypeInfo->static_fields->__9 = (struct BattlePerformancePlayer___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BattlePerformancePlayer___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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