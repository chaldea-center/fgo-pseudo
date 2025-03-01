void __fastcall BattlePerformancePlayer___ctor(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Int32_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct UnityEngine_Vector3_array *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C00900 & 1) == 0 )
  {
    sub_1C2E12C(&int___TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Vector3___TypeInfo, v3);
    byte_4C00900 = 1;
  }
  v4 = (struct System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 3LL);
  this->fields.list_ID = v4;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.list_ID, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct UnityEngine_Vector3_array *)sub_1C2E1D4(UnityEngine_Vector3___TypeInfo, 3LL);
  this->fields.list_pos = v11;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.list_pos, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  this->fields.isPlayCommandSpellEffectStartAnim = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformancePlayer__CloseSkillConfComp(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4C008E8 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_5595/*"END_PROC"*/, method);
    byte_4C008E8 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm
    || (PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5595/*"END_PROC"*/, 0LL),
        (myfsm = this->fields.otherFsm) == 0LL) )
  {
    sub_1C2E388(myfsm, method);
  }
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5595/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__Initialize(
        BattlePerformancePlayer_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattlePerformance_o **p_perf; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
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
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct BattleServantParamComponent_array *v43; // x8
  __int64 v44; // x8
  int64_t v45; // x1
  struct BattleServantParamComponent_array *v46; // x8

  this->fields.perf = inperf;
  p_perf = &this->fields.perf;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.perf,
    (int64_t)inperf,
    (int64_t)indata,
    (int32_t)inlogic,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)indata, v12, v13, v14, v15, v16, v17);
  this->fields.logic = inlogic;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.logic, (int64_t)inlogic, v18, v19, v20, v21, v22, v23);
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
                    v45 = (int64_t)*p_perf;
                    *(_QWORD *)(v44 + 280) = *p_perf;
                    sub_1C2E0D0((PartyOrganizationUtility_o *)(v44 + 280), v45, v37, v38, v39, v40, v41, v42);
                    v46 = this->fields.list_param;
                    if ( v46 )
                    {
                      if ( v30 >= v46->max_length )
LABEL_26:
                        sub_1C2E390(gameObject, v25);
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
    sub_1C2E388(gameObject, v25);
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
    sub_1C2E388(0LL, method);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4C008EE & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattlePerformancePlayer_SkillSelectedAddFunc__, skillInfo);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    sub_1C2E12C(&BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo, v6);
    byte_4C008EE = 1;
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
    sub_1C2E388(perf, skillInfo);
  if ( BattleSkillSelectAddFuncConfComponent__SetPreOpenInfo(SkillSelectAddFuncConfWindow, skillInfo, 0LL) )
  {
    v9 = (BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *)sub_1C2E378(BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo);
    BattleSkillSelectAddFuncConfComponent_SelectCallBack___ctor(
      v9,
      (Il2CppObject *)this,
      Method_BattlePerformancePlayer_SkillSelectedAddFunc__,
      0LL);
    SkillSelectAddFuncConfWindow->fields.selectCallBack = v9;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&SkillSelectAddFuncConfWindow->fields.selectCallBack,
      (int64_t)v9,
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
  BattlePerformancePlayer_o *v6; // x19
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *SkillSelectAddFuncConfWindow; // x20
  bool isOpenOtherWindow; // [xsp+Ch] [xbp-24h] BYREF

  v6 = this;
  if ( (byte_4C008EF & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, skillInfo);
    this = (BattlePerformancePlayer_o *)sub_1C2E12C(&StringLiteral_3434/*"CANCEL"*/, v7);
    byte_4C008EF = 1;
  }
  isOpenOtherWindow = 0;
  if ( selIndex == -1 )
  {
    this = (BattlePerformancePlayer_o *)v6->fields.myfsm;
    if ( !this )
      goto LABEL_16;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3434/*"CANCEL"*/, 0LL);
  }
  else
  {
    if ( !skillInfo )
      goto LABEL_16;
    BattleSkillInfoData__UpdateSelectAddIndex(skillInfo, selIndex, 0LL);
    BattlePerformancePlayer__WantUseSkill(v6, skillInfo, &isOpenOtherWindow, v8);
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
        sub_1C2E388(this, skillInfo);
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
  _DWORD *monitor; // x8

  v4 = this;
  if ( (byte_4C008FF & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, servantData);
    byte_4C008FF = 1;
  }
  if ( servantData )
  {
    list_param = v4->fields.list_param;
    if ( !list_param )
LABEL_18:
      sub_1C2E388(this, servantData);
    v6 = *(_QWORD *)&list_param->max_length;
    if ( (int)v6 >= 1 )
    {
      v7 = 0LL;
      do
      {
        if ( v7 >= (unsigned int)v6 )
          sub_1C2E390(this, servantData);
        v8 = (UnityEngine_Object_o *)list_param->m_Items[v7];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattlePerformancePlayer_o *)UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v8 )
            goto LABEL_18;
          monitor = v8[11].monitor;
          if ( monitor )
          {
            if ( monitor[6] == servantData->fields.uniqueId )
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__UseSkill(
        BattlePerformancePlayer_o *this,
        bool playSe,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  struct BattleLogic_UseSkillObject_o *useSkillObject; // x1
  BattlePerformance_o *logicSkill; // x0
  __int64 v21; // x1
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x20
  struct BattleLogic_o *logic; // x8
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x3
  UnityEngine_Object_o *SkillSelectAddFuncConfWindow; // x20
  System_String_o *v28; // x20
  CommonUI_o *v29; // x21
  BattlePerformancePlayer___c_c *v30; // x8
  System_String_o *v31; // x22
  System_Action_o *_9__39_0; // x23
  Il2CppObject *v33; // x24
  struct BattlePerformancePlayer___c_StaticFields *static_fields; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  bool isOpenOtherWindow; // [xsp+34h] [xbp-4Ch] BYREF
  System_String_o *text; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4C008EC & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, playSe);
    sub_1C2E12C(&Method_BattlePerformancePlayer_UseSkill__, v10);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v11);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1C2E12C(&Method_BattlePerformancePlayer___c__UseSkill_b__39_0__, v13);
    sub_1C2E12C(&BattlePerformancePlayer___c_TypeInfo, v14);
    sub_1C2E12C(&StringLiteral_3434/*"CANCEL"*/, v15);
    sub_1C2E12C(&StringLiteral_1/*""*/, v16);
    byte_4C008EC = 1;
  }
  isOpenOtherWindow = 0;
  if ( playSe )
  {
    v17 = Method_BattlePerformancePlayer_UseSkill__;
    if ( (*((_BYTE *)Method_BattlePerformancePlayer_UseSkill__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1C2E144(Method_BattlePerformancePlayer_UseSkill__);
    v18 = (System_Reflection_MethodBase_o *)sub_1C2E110(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 8, 0, 0LL);
  }
  useSkillObject = this->fields.useSkillObject;
  this->fields.actSkillObject = useSkillObject;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.actSkillObject,
    (int64_t)useSkillObject,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    if ( !BattlePerformancePlayer__OpenSkillSelectAddFuncConfWindow(this, skillInfo, v25) )
    {
      BattlePerformancePlayer__WantUseSkill(this, skillInfo, &isOpenOtherWindow, v26);
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
              LOBYTE(logicSkill->fields.itemintoTr) = 0;
              return;
            }
          }
LABEL_31:
          sub_1C2E388(logicSkill, v21);
        }
      }
    }
  }
  else
  {
    logicSkill = (BattlePerformance_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = text;
    v29 = (CommonUI_o *)logicSkill;
    v30 = BattlePerformancePlayer___c_TypeInfo;
    if ( !BattlePerformancePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformancePlayer___c_TypeInfo);
      v30 = BattlePerformancePlayer___c_TypeInfo;
    }
    v31 = (System_String_o *)StringLiteral_1/*""*/;
    _9__39_0 = v30->static_fields->__9__39_0;
    if ( !_9__39_0 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = BattlePerformancePlayer___c_TypeInfo;
      }
      v33 = (Il2CppObject *)v30->static_fields->__9;
      _9__39_0 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(_9__39_0, v33, Method_BattlePerformancePlayer___c__UseSkill_b__39_0__, 0LL);
      static_fields = BattlePerformancePlayer___c_TypeInfo->static_fields;
      static_fields->__9__39_0 = _9__39_0;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&static_fields->__9__39_0,
        (int64_t)_9__39_0,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
    }
    if ( !v29 )
      goto LABEL_31;
    CommonUI__OpenNotificationDialog(v29, v31, v28, _9__39_0, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0.0, 0LL);
    logicSkill = (BattlePerformance_o *)this->fields.myfsm;
    if ( !logicSkill )
      goto LABEL_31;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)logicSkill, (System_String_o *)StringLiteral_3434/*"CANCEL"*/, 0LL);
  }
}


void __fastcall BattlePerformancePlayer__WantUseSkill(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool *isOpenOtherWindow,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Int32_array *ValidTargetTypeArray; // x22
  System_Func_int__bool__o *v12; // x23
  const MethodInfo *v13; // x1
  System_Func_int__bool__o *v14; // x23
  int32_t v15; // w0
  const MethodInfo *v16; // x2
  bool v17; // w8

  v6 = this;
  if ( (byte_4C008ED & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_Any_int____77760784, skillInfo);
    sub_1C2E12C(&System_Func_int__bool__TypeInfo, v7);
    sub_1C2E12C(&Method_Target_isChoose__, v8);
    sub_1C2E12C(&Method_Target_isCommandType__, v9);
    this = (BattlePerformancePlayer_o *)sub_1C2E12C(&StringLiteral_5595/*"END_PROC"*/, v10);
    byte_4C008ED = 1;
  }
  if ( !skillInfo )
    goto LABEL_13;
  ValidTargetTypeArray = BattleSkillInfoData__get_ValidTargetTypeArray(skillInfo, 0LL);
  v12 = (System_Func_int__bool__o *)sub_1C2E378(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v12, 0LL, Method_Target_isCommandType__, 0LL);
  if ( !BasicHelper__Any_int__50053052(
          ValidTargetTypeArray,
          (System_Func_T__bool__o *)v12,
          (const MethodInfo_2FBBFBC *)Method_BasicHelper_Any_int____77760784) )
  {
    v14 = (System_Func_int__bool__o *)sub_1C2E378(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(v14, 0LL, Method_Target_isChoose__, 0LL);
    if ( BasicHelper__Any_int__50053052(
           ValidTargetTypeArray,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_2FBBFBC *)Method_BasicHelper_Any_int____77760784) )
    {
      v15 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
              skillInfo,
              skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      BattlePerformancePlayer__openSelectSvtWindow(v6, v15, v16);
      goto LABEL_8;
    }
    this = (BattlePerformancePlayer_o *)v6->fields.logic;
    if ( this )
    {
      BattleLogic__wantUseSkill((BattleLogic_o *)this, skillInfo, skillInfo->fields.svtUniqueId, -1, 0LL);
      this = (BattlePerformancePlayer_o *)v6->fields.myfsm;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5595/*"END_PROC"*/, 0LL);
        v17 = 0;
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_1C2E388(this, skillInfo);
  }
  BattlePerformancePlayer__openSelectCommandTypeWindow(v6, v13);
LABEL_8:
  v17 = 1;
LABEL_12:
  *isOpenOtherWindow = v17;
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct BattleData_o *data; // x8
  struct BattleLogic_UseSkillObject_o *v20; // x1
  struct BattleLogic_UseSkillObject_o **p_useSkillObject; // x19

  if ( (byte_4C008E5 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_9805/*"OK"*/, method);
    sub_1C2E12C(&StringLiteral_3434/*"CANCEL"*/, v3);
    sub_1C2E12C(&StringLiteral_5595/*"END_PROC"*/, v4);
    sub_1C2E12C(&StringLiteral_12401/*"SKIP"*/, v5);
    byte_4C008E5 = 1;
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
                        p_useSkillObject = &this->fields.useSkillObject;
                        sub_1C2E0D0(
                          (PartyOrganizationUtility_o *)p_useSkillObject,
                          (int64_t)v20,
                          v13,
                          v14,
                          v15,
                          v16,
                          v17,
                          v18);
                        perf = (BattleWindowComponent_o *)*(p_useSkillObject - 14);
                        if ( perf )
                        {
                          v7 = &StringLiteral_12401/*"SKIP"*/;
                          goto LABEL_9;
                        }
                      }
                      else
                      {
                        perf = (BattleWindowComponent_o *)this->fields.myfsm;
                        if ( perf )
                        {
                          v7 = &StringLiteral_9805/*"OK"*/;
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
                      v7 = &StringLiteral_5595/*"END_PROC"*/;
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
      sub_1C2E388(perf, method);
    }
  }
  perf = (BattleWindowComponent_o *)this->fields.myfsm;
  if ( !perf )
    goto LABEL_29;
  v7 = &StringLiteral_3434/*"CANCEL"*/;
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
  if ( (byte_4C008FA & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_5595/*"END_PROC"*/, method);
    this = (BattlePerformancePlayer_o *)sub_1C2E12C(&StringLiteral_13784/*"TUTORIAL_SKILL"*/, v3);
    byte_4C008FA = 1;
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
          v6 = &StringLiteral_5595/*"END_PROC"*/;
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
          v6 = &StringLiteral_13784/*"TUTORIAL_SKILL"*/;
          goto LABEL_8;
        }
LABEL_15:
        sub_1C2E388(this, method);
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
    sub_1C2E388(0LL, endCall);
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

  v4 = this;
  if ( (byte_4C008D8 & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_4C008D8 = 1;
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
        skillConfWindow = (BattleServantData_o *)this[1].fields.skillConfWindow;
        if ( !skillConfWindow
          || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
              BattleServantData__delParamObject(skillConfWindow, gameObject, 0LL),
              (v7 = v4->fields.list_param) != 0LL) )
        {
          if ( v7->max_length <= index )
            goto LABEL_20;
          this = (BattlePerformancePlayer_o *)v7->m_Items[index];
          if ( this )
          {
            this = (BattlePerformancePlayer_o *)(*(__int64 (__fastcall **)(BattlePerformancePlayer_o *, _QWORD, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
                                                  this,
                                                  0LL,
                                                  this->klass[1]._1.element_class);
            list_ID = v4->fields.list_ID;
            if ( list_ID )
            {
              if ( list_ID->max_length > index )
              {
                list_ID->m_Items[index + 1] = -1;
                return;
              }
LABEL_20:
              sub_1C2E390(this, *(_QWORD *)&index);
            }
          }
        }
      }
    }
LABEL_19:
    sub_1C2E388(this, *(_QWORD *)&index);
  }
}


void __fastcall BattlePerformancePlayer__endSkill(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4C008F3 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_5598/*"END_SKILL"*/, method);
    byte_4C008F3 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1C2E388(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5598/*"END_SKILL"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__initSvtConfWindow(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *confwindowComp; // x0
  struct BattleServantConfConponent_o *v5; // x20
  BattleServantConfConponent_CloseButtonCallBack_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4C008F7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattlePerformancePlayer_onClickConfClose__, method);
    sub_1C2E12C(&BattleServantConfConponent_CloseButtonCallBack_TypeInfo, v3);
    byte_4C008F7 = 1;
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
        v6 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_1C2E378(BattleServantConfConponent_CloseButtonCallBack_TypeInfo),
        BattleServantConfConponent_CloseButtonCallBack___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattlePerformancePlayer_onClickConfClose__,
          0LL),
        !v5) )
  {
LABEL_8:
    sub_1C2E388(confwindowComp, method);
  }
  v5->fields.callback_close = v6;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v5->fields.callback_close, (int64_t)v6, v7, v8, v9, v10, v11, v12);
}


bool __fastcall BattlePerformancePlayer__isOpenSvtConf(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *confwindowComp; // x0

  confwindowComp = (BattleWindowComponent_o *)this->fields.confwindowComp;
  if ( !confwindowComp )
    sub_1C2E388(0LL, method);
  return BattleWindowComponent__isOpen(confwindowComp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformancePlayer__modeComPlayerStatus(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattlePerformancePlayer_o *v2; // x19
  __int64 v3; // x1
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

  v2 = this;
  if ( (byte_4C008E3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    this = (BattlePerformancePlayer_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    byte_4C008E3 = 1;
  }
  list_param = v2->fields.list_param;
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
                                            (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( this )
      {
        v24.fields.r = 1.0;
        v24.fields.g = 1.0;
        v24.fields.b = 1.0;
        v24.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v24, 0LL);
        v9 = v2->fields.list_param;
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
            list_pos = v2->fields.list_pos;
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
                v11 = v2->fields.list_param;
                if ( v11 )
                {
                  if ( v8 >= v11->max_length )
LABEL_38:
                    sub_1C2E390(this, method);
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
    goto LABEL_36;
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
        (v17 = v2->fields.list_param) == 0LL) )
  {
LABEL_36:
    sub_1C2E388(this, method);
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
      v22 = v2->fields.list_param;
      if ( !v22 )
        goto LABEL_36;
      if ( v20 >= v22->max_length )
        goto LABEL_38;
      this = (BattlePerformancePlayer_o *)*((_QWORD *)&v22->obj.klass + v18);
      if ( !this )
        goto LABEL_36;
      BattleServantParamComponent__setCloseMode((BattleServantParamComponent_o *)this, 0LL);
    }
    v17 = v2->fields.list_param;
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

  if ( (byte_4C008DB & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C008DB = 1;
  }
  BattlePerformancePlayer__updateView(this, method);
  list_param = this->fields.list_param;
  if ( !list_param )
LABEL_15:
    sub_1C2E388(v3, v4);
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
        sub_1C2E390(v3, v4);
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

  if ( (byte_4C008DE & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_3575/*"CLICK_CLOSE"*/, method);
    byte_4C008DE = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1C2E388(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_3575/*"CLICK_CLOSE"*/, 0LL);
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

  if ( (byte_4C008DC & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_3611/*"CLICK_SVTWINDOW"*/, *(_QWORD *)&uniqueID);
    sub_1C2E12C(&StringLiteral_3575/*"CLICK_CLOSE"*/, v5);
    byte_4C008DC = 1;
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
      v7 = &StringLiteral_3611/*"CLICK_SVTWINDOW"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_1C2E388(confwindowComp, *(_QWORD *)&uniqueID);
  }
  confwindowComp = (BattleServantConfConponent_o *)this->fields.myfsm;
  if ( !confwindowComp )
    goto LABEL_10;
  v7 = &StringLiteral_3575/*"CLICK_CLOSE"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confwindowComp, (System_String_o *)*v7, 0LL);
}


void __fastcall BattlePerformancePlayer__onClickSkillCancel(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4C008EB & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_3434/*"CANCEL"*/, method);
    byte_4C008EB = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1C2E388(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_3434/*"CANCEL"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__onClickSkillIcon(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLong,
        const MethodInfo *method)
{
  bool v6; // w22
  __int64 v7; // x1
  BattleLogic_UseSkillObject_o *v8; // x20
  const MethodInfo *v9; // x1
  BattleData_o *data; // x0
  struct BattleData_o *v11; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct BattleLogic_UseSkillObject_o **p_tmp_useSkill; // x19

  v6 = isLong;
  if ( (byte_4C008E4 & 1) == 0 )
  {
    sub_1C2E12C(&BattleLogic_UseSkillObject_TypeInfo, skillInfo);
    sub_1C2E12C(&StringLiteral_3606/*"CLICK_SKILLICON"*/, v7);
    byte_4C008E4 = 1;
  }
  v8 = (BattleLogic_UseSkillObject_o *)sub_1C2E378(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v8, skillInfo, 0LL);
  data = this->fields.data;
  this->fields.isLongTap = v6;
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
        sub_1C2E0D0((PartyOrganizationUtility_o *)p_tmp_useSkill, (int64_t)v8, v14, v15, v16, v17, v18, v19);
        data = (BattleData_o *)*(p_tmp_useSkill - 13);
        if ( data )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_3606/*"CLICK_SKILLICON"*/, 0LL);
          return;
        }
LABEL_20:
        sub_1C2E388(data, v9);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  PlayMakerFSM_o *v15; // x0

  if ( (byte_4C008EA & 1) == 0 )
  {
    sub_1C2E12C(&BattleLogic_UseSkillObject_TypeInfo, skillInfo);
    sub_1C2E12C(&StringLiteral_9805/*"OK"*/, v5);
    byte_4C008EA = 1;
  }
  v6 = (BattleLogic_UseSkillObject_o *)sub_1C2E378(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v6, skillInfo, 0LL);
  this->fields.useSkillObject = v6;
  p_useSkillObject = &this->fields.useSkillObject;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_useSkillObject, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  v15 = (PlayMakerFSM_o *)*(p_useSkillObject - 14);
  if ( !v15 )
    sub_1C2E388(0LL, v14);
  PlayMakerFSM__SendEvent(v15, (System_String_o *)StringLiteral_9805/*"OK"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__onCloseConfComplete(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *confwindowComp; // x0
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v5; // x21
  int max_length; // w9

  if ( (byte_4C008E0 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_5595/*"END_PROC"*/, method);
    byte_4C008E0 = 1;
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
      sub_1C2E390(confwindowComp, method);
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
    sub_1C2E388(confwindowComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confwindowComp, (System_String_o *)StringLiteral_5595/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__onOpenConfComplete(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4C008F9 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_5595/*"END_PROC"*/, method);
    byte_4C008F9 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1C2E388(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5595/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__openSelectCommandTypeWindow(
        BattlePerformancePlayer_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *perf; // x0
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x8
  struct BattleSkillInfoData_o *skillInfo; // x8
  struct BattleLogic_UseSkillObject_o *v7; // x8
  BattleServantData_o *v8; // x20
  const MethodInfo *v9; // x2
  struct BattlePerformance_o *v10; // x8
  SelectTdCommandController_o *v11; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x9
  struct BattleSelectCommandTypeWindow_o *SelectCommandWindow; // x0
  struct BattleSelectCommandTypeWindow_o **p_selectCommandTypeWindow; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct BattleSelectCommandTypeWindow_o *selectCommandTypeWindow; // x23
  BattleSelectCommandTypeWindow_SelectServantCallBack_o *v22; // x24
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4C008F4 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattlePerformancePlayer_selectedCommandType__, method);
    sub_1C2E12C(&BattleSelectCommandTypeWindow_SelectServantCallBack_TypeInfo, v3);
    byte_4C008F4 = 1;
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
  v7 = this->fields.tmp_useSkill;
  if ( !v7 )
    goto LABEL_20;
  v8 = (BattleServantData_o *)perf;
  perf = (BattlePerformance_o *)SelectTdCommandController__MakeController(
                                  (BattleServantData_o *)perf,
                                  v7->fields.skillInfo,
                                  0LL);
  v10 = this->fields.perf;
  if ( !v10 )
    goto LABEL_20;
  v11 = (SelectTdCommandController_o *)perf;
  if ( !perf )
    goto LABEL_20;
  m_CancellationTokenSource = perf->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_20;
  perf = (BattlePerformance_o *)v10->fields.statusPerf;
  if ( !perf )
    goto LABEL_20;
  SelectCommandWindow = BattlePerformanceStatus__GetSelectCommandWindow(
                          (BattlePerformanceStatus_o *)perf,
                          (int32_t)m_CancellationTokenSource->fields._kernelEvent,
                          v9);
  this->fields.selectCommandTypeWindow = SelectCommandWindow;
  p_selectCommandTypeWindow = &this->fields.selectCommandTypeWindow;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.selectCommandTypeWindow,
    (int64_t)SelectCommandWindow,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  selectCommandTypeWindow = this->fields.selectCommandTypeWindow;
  v22 = (BattleSelectCommandTypeWindow_SelectServantCallBack_o *)sub_1C2E378(BattleSelectCommandTypeWindow_SelectServantCallBack_TypeInfo);
  BattleSelectCommandTypeWindow_SelectServantCallBack___ctor(
    v22,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_selectedCommandType__,
    0LL);
  if ( !selectCommandTypeWindow
    || (selectCommandTypeWindow->fields.selectCallBack = v22,
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&selectCommandTypeWindow->fields.selectCallBack,
          (int64_t)v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28),
        (perf = (BattlePerformance_o *)*p_selectCommandTypeWindow) == 0LL)
    || (BattleSelectCommandTypeWindow__Setup((BattleSelectCommandTypeWindow_o *)perf, v8, v11, 0LL),
        (perf = (BattlePerformance_o *)*p_selectCommandTypeWindow) == 0LL) )
  {
LABEL_20:
    sub_1C2E388(perf, method);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x2
  bool v16; // w1
  struct BattleSelectServantWindow_o *v17; // x22
  BattleSelectServantWindow_SelectServantCallBack_o *v18; // x23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  BattleSelectServantWindow_o *v25; // x22
  struct BattleData_o *data; // x8

  if ( (byte_4C008F0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattlePerformancePlayer_selectedSvt__, *(_QWORD *)&skillId);
    sub_1C2E12C(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo, v5);
    byte_4C008F0 = 1;
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
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.selectSvtWindow,
    (int64_t)SelectSvtWindow,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  perf = (BattlePerformance_o *)this->fields.data;
  if ( !perf )
    goto LABEL_22;
  if ( BattleData__isTutorialSelectsvtCancel((BattleData_o *)perf, 0LL) )
  {
    BattlePerformancePlayer__procTurorial(this, 3, v15);
    perf = (BattlePerformance_o *)this->fields.selectSvtWindow;
    if ( !perf )
      goto LABEL_22;
    v16 = 0;
  }
  else
  {
    perf = (BattlePerformance_o *)*p_selectSvtWindow;
    if ( !*p_selectSvtWindow )
      goto LABEL_22;
    v16 = 1;
  }
  BattleSelectServantWindow__setUseClose((BattleSelectServantWindow_o *)perf, v16, 0LL);
  v17 = this->fields.selectSvtWindow;
  v18 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_1C2E378(BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_selectedSvt__,
    0LL);
  if ( !v17 )
    goto LABEL_22;
  v17->fields.selectCallBack = v18;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v17->fields.selectCallBack, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  perf = (BattlePerformance_o *)this->fields.data;
  if ( !perf )
    goto LABEL_22;
  v25 = this->fields.selectSvtWindow;
  perf = (BattlePerformance_o *)BattleData__getFieldPlayerServantList((BattleData_o *)perf, 0LL);
  if ( !v25 )
    goto LABEL_22;
  BattleSelectServantWindow__SetServantData(v25, (BattleServantData_array *)perf, skillId, -1, 0LL, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  if ( data->fields.tutorialId == 2 )
  {
    perf = (BattlePerformance_o *)*p_selectSvtWindow;
    if ( !*p_selectSvtWindow )
      goto LABEL_22;
    BattleSelectServantWindow__SetServantRootTutorialPosition((BattleSelectServantWindow_o *)perf, 0LL);
  }
  perf = (BattlePerformance_o *)*p_selectSvtWindow;
  if ( !*p_selectSvtWindow )
LABEL_22:
    sub_1C2E388(perf, *(_QWORD *)&skillId);
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

  if ( (byte_4C008F8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattlePerformancePlayer_onOpenConfComplete__, method);
    sub_1C2E12C(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_4C008F8 = 1;
  }
  confwindowComp = this->fields.confwindowComp;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C2E378(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_onOpenConfComplete__,
    0LL);
  if ( !confwindowComp )
    sub_1C2E388(v7, v8);
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

  list_ID = this->fields.list_ID;
  if ( !list_ID )
LABEL_11:
    sub_1C2E388(this, *(_QWORD *)&uniqueID);
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
        sub_1C2E390(this, *(_QWORD *)&uniqueID);
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

  if ( (byte_4C008E1 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_5595/*"END_PROC"*/, method);
    byte_4C008E1 = 1;
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
    sub_1C2E388(buffConfWindow, v5);
  }
  PlayMakerFSM__SendEvent(buffConfWindow, (System_String_o *)StringLiteral_5595/*"END_PROC"*/, 0LL);
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
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v10; // x22
  int max_length; // w9
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  BattleWindowComponent_EndCall_o *v14; // x20

  v4 = this;
  if ( (byte_4C008DF & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattlePerformancePlayer_onCloseConfComplete__, flg);
    sub_1C2E12C(&Method_BattlePerformancePlayer_procCloseConf__, v5);
    this = (BattlePerformancePlayer_o *)sub_1C2E12C(&BattleWindowComponent_EndCall_TypeInfo, v6);
    byte_4C008DF = 1;
  }
  if ( flg )
  {
    v7 = Method_BattlePerformancePlayer_procCloseConf__;
    if ( (*((_BYTE *)Method_BattlePerformancePlayer_procCloseConf__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C2E144(Method_BattlePerformancePlayer_procCloseConf__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C2E110(v7, v7[4]);
    OverwriteAssetSoundName__PlayCommonSe(v8, 12, 0, 0LL);
  }
  list_param = v4->fields.list_param;
  if ( !list_param )
    goto LABEL_13;
  v10 = 0LL;
  while ( 1 )
  {
    max_length = list_param->max_length;
    if ( (int)v10 >= max_length )
      break;
    if ( (unsigned int)v10 >= max_length )
      sub_1C2E390(this, flg);
    this = (BattlePerformancePlayer_o *)list_param->m_Items[v10];
    if ( this )
    {
      BattleServantParamComponent__playEndShowServant((BattleServantParamComponent_o *)this, 0LL);
      list_param = v4->fields.list_param;
      ++v10;
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
        v14 = (BattleWindowComponent_EndCall_o *)sub_1C2E378(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v14,
          (Il2CppObject *)v4,
          Method_BattlePerformancePlayer_onCloseConfComplete__,
          0LL),
        (this = (BattlePerformancePlayer_o *)v4->fields.confwindowComp) == 0LL) )
  {
LABEL_13:
    sub_1C2E388(this, flg);
  }
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)this, v14, 0LL);
}


void __fastcall BattlePerformancePlayer__procCloseSkillConf(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  BattlePerformance_o *perf; // x0
  __int64 v10; // x1

  if ( (byte_4C008E7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattlePerformancePlayer_CloseSkillConfComp__, method);
    sub_1C2E12C(&Method_BattlePerformancePlayer_procCloseSkillConf__, v3);
    sub_1C2E12C(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_4C008E7 = 1;
  }
  v5 = Method_BattlePerformancePlayer_procCloseSkillConf__;
  if ( (*((_BYTE *)Method_BattlePerformancePlayer_procCloseSkillConf__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C2E144(Method_BattlePerformancePlayer_procCloseSkillConf__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C2E110(v5, v5[4]);
  OverwriteAssetSoundName__PlayCommonSe(v6, 10, 0, 0LL);
  skillConfWindow = this->fields.skillConfWindow;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1C2E378(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_CloseSkillConfComp__,
    0LL);
  if ( !skillConfWindow
    || (((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))skillConfWindow->klass->vtable._12_Close.method)(
          skillConfWindow,
          v8,
          skillConfWindow->klass->vtable._13_CompClose.methodPtr),
        (perf = this->fields.perf) == 0LL) )
  {
    sub_1C2E388(perf, v10);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct BattleSkillConfComponent_o *v16; // x20
  BattleWindowComponent_EndCall_o *v17; // x21

  if ( (byte_4C008E6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattlePerformancePlayer_OpenSkillConfComplete__, cancelFlg);
    sub_1C2E12C(&BattleWindowComponent_EndCall_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_15660/*"WAIT_OTHER_SKILL"*/, v6);
    byte_4C008E6 = 1;
  }
  otherFsm = this->fields.otherFsm;
  if ( !otherFsm )
    goto LABEL_9;
  tmp_useSkill = this->fields.tmp_useSkill;
  PlayMakerFSM__SendEvent(otherFsm, (System_String_o *)StringLiteral_15660/*"WAIT_OTHER_SKILL"*/, 0LL);
  skillConfWindow = this->fields.skillConfWindow;
  otherFsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !skillConfWindow
    || (skillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)otherFsm,
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&skillConfWindow->fields.target,
          (int64_t)otherFsm,
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
        v17 = (BattleWindowComponent_EndCall_o *)sub_1C2E378(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v17,
          (Il2CppObject *)this,
          Method_BattlePerformancePlayer_OpenSkillConfComplete__,
          0LL),
        !v16) )
  {
LABEL_9:
    sub_1C2E388(otherFsm, cancelFlg);
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
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v10; // x21
  int max_length; // w10
  struct System_Int32_array *list_ID; // x9
  struct BattleServantParamComponent_array *v13; // x8
  BattleServantParamComponent_o *v14; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  float v17; // s0
  const MethodInfo *v18; // x1

  if ( (byte_4C008DD & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattlePerformancePlayer_procSelectServant__, method);
    sub_1C2E12C(&StringLiteral_12477/*"START_CLOSE"*/, v3);
    byte_4C008DD = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_33;
  data = (BattleData_o *)BattleData__isTutorial(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_9;
  v5 = this->fields.data;
  if ( !v5 )
    goto LABEL_33;
  if ( v5->fields.tutorialId != 3 || v5->fields.wavecount != 1 || v5->fields.turnCount != 1 )
  {
LABEL_9:
    data = (BattleData_o *)this->fields.otherFsm;
    if ( data )
    {
      tmp_uniqueId = this->fields.tmp_uniqueId;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_12477/*"START_CLOSE"*/, 0LL);
      v7 = Method_BattlePerformancePlayer_procSelectServant__;
      if ( (*((_BYTE *)Method_BattlePerformancePlayer_procSelectServant__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C2E144(Method_BattlePerformancePlayer_procSelectServant__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C2E110(v7, v7[4]);
      OverwriteAssetSoundName__PlayCommonSe(v8, 11, 0, 0LL);
      list_param = this->fields.list_param;
      if ( list_param )
      {
        v10 = 0LL;
        while ( 1 )
        {
          max_length = list_param->max_length;
          if ( (int)v10 >= max_length )
            break;
          list_ID = this->fields.list_ID;
          if ( !list_ID )
            goto LABEL_33;
          if ( (unsigned int)v10 >= list_ID->max_length || (unsigned int)v10 >= max_length )
            goto LABEL_34;
          data = (BattleData_o *)list_param->m_Items[v10];
          if ( !data )
            goto LABEL_33;
          if ( tmp_uniqueId == list_ID->m_Items[v10 + 1] )
          {
            BattleServantParamComponent__playSelectServant((BattleServantParamComponent_o *)data, 0LL);
            v13 = this->fields.list_param;
            if ( !v13 )
              goto LABEL_33;
            if ( (unsigned int)v10 >= v13->max_length )
LABEL_34:
              sub_1C2E390(data, method);
            v14 = v13->m_Items[v10];
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
              0LL);
          }
          else
          {
            BattleServantParamComponent__playCloseSelectServant((BattleServantParamComponent_o *)data, 0LL);
          }
          list_param = this->fields.list_param;
          ++v10;
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
    sub_1C2E388(data, method);
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
  _DWORD *monitor; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x0
  __int64 *v11; // x8
  System_Action_o *v12; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4C008FB & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&param);
    sub_1C2E12C(&Method_BattlePerformancePlayer_tutorialSetSelectSvt__, v5);
    sub_1C2E12C(&Method_BattlePerformancePlayer_tutorialSetSelect__, v6);
    this = (BattlePerformancePlayer_o *)sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4C008FB = 1;
  }
  switch ( param )
  {
    case 3:
      monitor = v4[3].monitor;
      if ( !monitor )
        goto LABEL_14;
      monitor[281] = 5;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      v11 = &Method_BattlePerformancePlayer_tutorialSetSelectSvt__;
      goto LABEL_11;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      v11 = &Method_BattlePerformancePlayer_tutorialSetSelect__;
LABEL_11:
      v12 = v10;
      System_Action___ctor(v10, v4, *v11, 0LL);
      if ( !Instance )
        goto LABEL_14;
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v12, 0LL);
      return;
    case 0:
      this = (BattlePerformancePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( this )
      {
        CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)this, 0LL);
        return;
      }
LABEL_14:
      sub_1C2E388(this, *(_QWORD *)&param);
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
  __int64 v7; // x1
  BattleLogic_o *selectCommandTypeWindow; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  __int64 *v10; // x8

  v5 = uniqueId;
  if ( (byte_4C008F5 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_3434/*"CANCEL"*/, *(_QWORD *)&uniqueId);
    sub_1C2E12C(&StringLiteral_5595/*"END_PROC"*/, v7);
    byte_4C008F5 = 1;
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
            v10 = &StringLiteral_5595/*"END_PROC"*/;
LABEL_14:
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectCommandTypeWindow, (System_String_o *)*v10, 0LL);
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
      v10 = &StringLiteral_3434/*"CANCEL"*/;
      goto LABEL_14;
    }
LABEL_16:
    sub_1C2E388(selectCommandTypeWindow, *(_QWORD *)&uniqueId);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x22
  SkillEntity_o *v20; // x22
  __int64 *v21; // x8
  struct BattleData_o *data; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v24; // x21
  BattlePerformancePlayer___c_c *v25; // x8
  System_Action_o *_9__45_0; // x23
  System_String_o *v27; // x22
  Il2CppObject *v28; // x24
  struct BattlePerformancePlayer___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4C008F1 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&uniqueId);
    sub_1C2E12C(&Method_DataManager_GetMasterData_SkillMaster___, v5);
    sub_1C2E12C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v7);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C2E12C(&Method_BattlePerformancePlayer___c__selectedSvt_b__45_0__, v10);
    sub_1C2E12C(&BattlePerformancePlayer___c_TypeInfo, v11);
    sub_1C2E12C(&StringLiteral_3434/*"CANCEL"*/, v12);
    sub_1C2E12C(&StringLiteral_5595/*"END_PROC"*/, v13);
    sub_1C2E12C(&StringLiteral_1/*""*/, v14);
    sub_1C2E12C(&StringLiteral_2938/*"BATTLE_INVALID_SELECT_TARGET"*/, v15);
    byte_4C008F1 = 1;
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
    selectSvtWindow = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !selectSvtWindow )
      goto LABEL_35;
    selectSvtWindow = DataManager__GetMasterData_object_(
                        (DataManager_o *)selectSvtWindow,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !skillInfo )
      goto LABEL_35;
    v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)selectSvtWindow;
    selectSvtWindow = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                skillInfo,
                                skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v19 )
      goto LABEL_35;
    selectSvtWindow = DataMasterBase_object__object__int___GetEntity(
                        v19,
                        (int32_t)selectSvtWindow,
                        (const MethodInfo_327B180 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_35;
    v20 = (SkillEntity_o *)selectSvtWindow;
    selectSvtWindow = BattleData__getServantData(this->fields.data, uniqueId, 0LL);
    if ( !selectSvtWindow || !v20 )
      goto LABEL_35;
    if ( SkillEntity__checkUseTreasure(v20, *((_DWORD *)selectSvtWindow + 83), 0LL) )
    {
      selectSvtWindow = this->fields.logic;
      if ( selectSvtWindow )
      {
        BattleLogic__wantUseSkill((BattleLogic_o *)selectSvtWindow, skillInfo, uniqueId, -1, 0LL);
        selectSvtWindow = this->fields.myfsm;
        if ( selectSvtWindow )
        {
          v21 = &StringLiteral_5595/*"END_PROC"*/;
LABEL_34:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)*v21, 0LL);
          return;
        }
      }
      goto LABEL_35;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    selectSvtWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2938/*"BATTLE_INVALID_SELECT_TARGET"*/, 0LL);
    v24 = (System_String_o *)selectSvtWindow;
    v25 = BattlePerformancePlayer___c_TypeInfo;
    if ( !BattlePerformancePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformancePlayer___c_TypeInfo);
      v25 = BattlePerformancePlayer___c_TypeInfo;
    }
    _9__45_0 = v25->static_fields->__9__45_0;
    v27 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__45_0 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = BattlePerformancePlayer___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v25->static_fields->__9;
      _9__45_0 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(_9__45_0, v28, Method_BattlePerformancePlayer___c__selectedSvt_b__45_0__, 0LL);
      static_fields = BattlePerformancePlayer___c_TypeInfo->static_fields;
      static_fields->__9__45_0 = _9__45_0;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&static_fields->__9__45_0,
        (int64_t)_9__45_0,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    if ( !Instance )
      goto LABEL_35;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v27, v24, _9__45_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
LABEL_32:
    selectSvtWindow = this->fields.myfsm;
    if ( selectSvtWindow )
    {
      v21 = &StringLiteral_3434/*"CANCEL"*/;
      goto LABEL_34;
    }
LABEL_35:
    sub_1C2E388(selectSvtWindow, *(_QWORD *)&uniqueId);
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
  if ( (byte_4C008D9 & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_4C008D9 = 1;
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
        this = (BattlePerformancePlayer_o *)(*(__int64 (__fastcall **)(BattlePerformancePlayer_o *, BattleServantData_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
                                              this,
                                              svtdata,
                                              this->klass[1]._1.element_class);
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
                    sub_1C2E390(this, *(_QWORD *)&index);
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_1C2E388(this, *(_QWORD *)&index);
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
    sub_1C2E390(this, buffData);
  this = (BattlePerformancePlayer_o *)*((_QWORD *)&v9->obj.klass + v6);
  if ( !this )
LABEL_9:
    sub_1C2E388(this, buffData);
  BattleServantParamComponent__showSideEffect((BattleServantParamComponent_o *)this, buffData, 0LL);
  return v8 < max_length;
}


void __fastcall BattlePerformancePlayer__startCommand(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4C008E2 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_12478/*"START_COM"*/, method);
    byte_4C008E2 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1C2E388(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_12478/*"START_COM"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__startSkill(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4C008F2 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_12498/*"START_SKILL"*/, method);
    byte_4C008F2 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1C2E388(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_12498/*"START_SKILL"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__startTac(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4C008DA & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_12502/*"START_TAC"*/, method);
    byte_4C008DA = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1C2E388(0LL, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_12502/*"START_TAC"*/, 0LL);
}


void __fastcall BattlePerformancePlayer__tutorialSetArrowIcon(
        BattlePerformancePlayer_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  UnityEngine_Vector2_o v4; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v5; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C008FC & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C008FC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v3);
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

  if ( (byte_4C008FD & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C008FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v3);
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

  if ( (byte_4C008FE & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C008FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v3);
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
  if ( (byte_4C008F6 & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C008F6 = 1;
  }
  list_param = v2->fields.list_param;
  if ( !list_param )
LABEL_15:
    sub_1C2E388(this, method);
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
        sub_1C2E390(this, method);
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
  __int64 v5; // x1
  BattleLogic_UseSkillObject_o *v6; // x21
  struct BattleLogic_UseSkillObject_o **p_useSkillObject; // x19
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  PlayMakerFSM_o *v15; // x0

  if ( (byte_4C008E9 & 1) == 0 )
  {
    sub_1C2E12C(&BattleLogic_UseSkillObject_TypeInfo, skillInfo);
    sub_1C2E12C(&StringLiteral_3606/*"CLICK_SKILLICON"*/, v5);
    byte_4C008E9 = 1;
  }
  v6 = (BattleLogic_UseSkillObject_o *)sub_1C2E378(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v6, skillInfo, 0LL);
  this->fields.useSkillObject = v6;
  p_useSkillObject = &this->fields.useSkillObject;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_useSkillObject, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  v15 = (PlayMakerFSM_o *)*(p_useSkillObject - 14);
  if ( !v15 )
    sub_1C2E388(0LL, v14);
  PlayMakerFSM__SendEvent(v15, (System_String_o *)StringLiteral_3606/*"CLICK_SKILLICON"*/, 0LL);
}


void __fastcall BattlePerformancePlayer___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C00901 & 1) == 0 )
  {
    sub_1C2E12C(&BattlePerformancePlayer___c_TypeInfo, v1);
    byte_4C00901 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(BattlePerformancePlayer___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattlePerformancePlayer___c_TypeInfo->static_fields->__9 = (struct BattlePerformancePlayer___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)BattlePerformancePlayer___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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