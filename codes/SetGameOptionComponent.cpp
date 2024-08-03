void __fastcall SetGameOptionComponent___ctor(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetGameOptionComponent__Awake(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SetGameOptionComponent__CreateContentsArrayIfNotYet(
        SetGameOptionComponent_o *this,
        const MethodInfo *method)
{
  struct GameOptionContentBase_array **p_contentsArray; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  struct SetResolutionOptionControl_o *setResolutionOptionCtr; // x22
  struct GameOptionContentBase_array *v7; // x20
  struct SetSmoothnessControl_o *setSmoothnessCtr; // x22
  struct SetVolumeControl_o *setVolCtr; // x22
  struct SetScenarioTextSpeedControl_o *setScenarioTextSpeedCtr; // x22
  struct SetScenarioControl_o *setScenarioCtr; // x22
  struct SetSpoilerProtectionControl_o *setSpoilerProtectionCtr; // x22
  struct SetSwitchOptionControl_o *setSwitchCtr; // x22
  struct SetSwitch2OptionControl_o *setSwitch2Ctr; // x22
  struct SetPreBattleFormationControl_o *setPreBattleFormationCtr; // x22
  struct SetAdvantageClassAutoOptionControl_o *setAdvantageClassAutoCtr; // x22
  struct SetAutoSelectPartyOptionControl_o *setAutoSelectPartyCtr; // x22
  struct SetTDPlaySpeedControl_o *setTDPlaySpeedCtr; // x22
  struct SetRandomLimitCountOptionControl_o *setRandomLimitCountCtr; // x22
  struct SetRandomLimitCountResetOptionControl_o *setRandomLimitCountResetCtr; // x22
  struct SetSvtRandOptionControl_o *setSvtRandCtr; // x22
  struct SetMessageDispOptionControl_o *setMessageDispCtr; // x22
  struct SetNoticeOptionControl_o *setNoticeCtr; // x22
  struct SetPlayOpeningMovieOptionControl_o *setPlayOpeningMovieCtr; // x22
  struct FullDownloadControl_o *fullDlCtr; // x22
  struct SetBlacklistOptionControl_o *setBlackListCtr; // x21
  __int64 v27; // x0

  if ( (byte_49F7A3A & 1) == 0 )
  {
    sub_1B640C8(&GameOptionContentBase___TypeInfo, method);
    byte_49F7A3A = 1;
  }
  p_contentsArray = &this->fields.contentsArray;
  if ( !this->fields.contentsArray )
  {
    v4 = sub_1B64170(GameOptionContentBase___TypeInfo, 20LL);
    if ( !v4 )
      sub_1B64324(0LL);
    setResolutionOptionCtr = this->fields.setResolutionOptionCtr;
    v7 = (struct GameOptionContentBase_array *)v4;
    if ( !setResolutionOptionCtr
      || (v4 = sub_1B64204(this->fields.setResolutionOptionCtr, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
    {
      if ( !v7->max_length )
        goto LABEL_66;
      v7->m_Items[0] = (GameOptionContentBase_o *)setResolutionOptionCtr;
      v4 = sub_1B6406C(v7->m_Items);
      setSmoothnessCtr = this->fields.setSmoothnessCtr;
      if ( !setSmoothnessCtr || (v4 = sub_1B64204(this->fields.setSmoothnessCtr, v7->obj.klass->_1.element_class)) != 0 )
      {
        if ( v7->max_length <= 1 )
          goto LABEL_66;
        v7->m_Items[1] = (GameOptionContentBase_o *)setSmoothnessCtr;
        v4 = sub_1B6406C(&v7->m_Items[1]);
        setVolCtr = this->fields.setVolCtr;
        if ( !setVolCtr || (v4 = sub_1B64204(this->fields.setVolCtr, v7->obj.klass->_1.element_class)) != 0 )
        {
          if ( v7->max_length <= 2 )
            goto LABEL_66;
          v7->m_Items[2] = (GameOptionContentBase_o *)setVolCtr;
          v4 = sub_1B6406C(&v7->m_Items[2]);
          setScenarioTextSpeedCtr = this->fields.setScenarioTextSpeedCtr;
          if ( !setScenarioTextSpeedCtr
            || (v4 = sub_1B64204(this->fields.setScenarioTextSpeedCtr, v7->obj.klass->_1.element_class)) != 0 )
          {
            if ( v7->max_length <= 3 )
              goto LABEL_66;
            v7->m_Items[3] = (GameOptionContentBase_o *)setScenarioTextSpeedCtr;
            v4 = sub_1B6406C(&v7->m_Items[3]);
            setScenarioCtr = this->fields.setScenarioCtr;
            if ( !setScenarioCtr
              || (v4 = sub_1B64204(this->fields.setScenarioCtr, v7->obj.klass->_1.element_class)) != 0 )
            {
              if ( v7->max_length <= 4 )
                goto LABEL_66;
              v7->m_Items[4] = (GameOptionContentBase_o *)setScenarioCtr;
              v4 = sub_1B6406C(&v7->m_Items[4]);
              setSpoilerProtectionCtr = this->fields.setSpoilerProtectionCtr;
              if ( !setSpoilerProtectionCtr
                || (v4 = sub_1B64204(this->fields.setSpoilerProtectionCtr, v7->obj.klass->_1.element_class)) != 0 )
              {
                if ( v7->max_length <= 5 )
                  goto LABEL_66;
                v7->m_Items[5] = (GameOptionContentBase_o *)setSpoilerProtectionCtr;
                v4 = sub_1B6406C(&v7->m_Items[5]);
                setSwitchCtr = this->fields.setSwitchCtr;
                if ( !setSwitchCtr
                  || (v4 = sub_1B64204(this->fields.setSwitchCtr, v7->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v7->max_length <= 6 )
                    goto LABEL_66;
                  v7->m_Items[6] = (GameOptionContentBase_o *)setSwitchCtr;
                  v4 = sub_1B6406C(&v7->m_Items[6]);
                  setSwitch2Ctr = this->fields.setSwitch2Ctr;
                  if ( !setSwitch2Ctr
                    || (v4 = sub_1B64204(this->fields.setSwitch2Ctr, v7->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v7->max_length <= 7 )
                      goto LABEL_66;
                    v7->m_Items[7] = (GameOptionContentBase_o *)setSwitch2Ctr;
                    v4 = sub_1B6406C(&v7->m_Items[7]);
                    setPreBattleFormationCtr = this->fields.setPreBattleFormationCtr;
                    if ( !setPreBattleFormationCtr
                      || (v4 = sub_1B64204(this->fields.setPreBattleFormationCtr, v7->obj.klass->_1.element_class)) != 0 )
                    {
                      if ( v7->max_length <= 8 )
                        goto LABEL_66;
                      v7->m_Items[8] = (GameOptionContentBase_o *)setPreBattleFormationCtr;
                      v4 = sub_1B6406C(&v7->m_Items[8]);
                      setAdvantageClassAutoCtr = this->fields.setAdvantageClassAutoCtr;
                      if ( !setAdvantageClassAutoCtr
                        || (v4 = sub_1B64204(this->fields.setAdvantageClassAutoCtr, v7->obj.klass->_1.element_class)) != 0 )
                      {
                        if ( v7->max_length <= 9 )
                          goto LABEL_66;
                        v7->m_Items[9] = (GameOptionContentBase_o *)setAdvantageClassAutoCtr;
                        v4 = sub_1B6406C(&v7->m_Items[9]);
                        setAutoSelectPartyCtr = this->fields.setAutoSelectPartyCtr;
                        if ( !setAutoSelectPartyCtr
                          || (v4 = sub_1B64204(this->fields.setAutoSelectPartyCtr, v7->obj.klass->_1.element_class)) != 0 )
                        {
                          if ( v7->max_length <= 0xA )
                            goto LABEL_66;
                          v7->m_Items[10] = (GameOptionContentBase_o *)setAutoSelectPartyCtr;
                          v4 = sub_1B6406C(&v7->m_Items[10]);
                          setTDPlaySpeedCtr = this->fields.setTDPlaySpeedCtr;
                          if ( !setTDPlaySpeedCtr
                            || (v4 = sub_1B64204(this->fields.setTDPlaySpeedCtr, v7->obj.klass->_1.element_class)) != 0 )
                          {
                            if ( v7->max_length <= 0xB )
                              goto LABEL_66;
                            v7->m_Items[11] = (GameOptionContentBase_o *)setTDPlaySpeedCtr;
                            v4 = sub_1B6406C(&v7->m_Items[11]);
                            setRandomLimitCountCtr = this->fields.setRandomLimitCountCtr;
                            if ( !setRandomLimitCountCtr
                              || (v4 = sub_1B64204(this->fields.setRandomLimitCountCtr, v7->obj.klass->_1.element_class)) != 0 )
                            {
                              if ( v7->max_length <= 0xC )
                                goto LABEL_66;
                              v7->m_Items[12] = (GameOptionContentBase_o *)setRandomLimitCountCtr;
                              v4 = sub_1B6406C(&v7->m_Items[12]);
                              setRandomLimitCountResetCtr = this->fields.setRandomLimitCountResetCtr;
                              if ( !setRandomLimitCountResetCtr
                                || (v4 = sub_1B64204(
                                           this->fields.setRandomLimitCountResetCtr,
                                           v7->obj.klass->_1.element_class)) != 0 )
                              {
                                if ( v7->max_length <= 0xD )
                                  goto LABEL_66;
                                v7->m_Items[13] = (GameOptionContentBase_o *)setRandomLimitCountResetCtr;
                                v4 = sub_1B6406C(&v7->m_Items[13]);
                                setSvtRandCtr = this->fields.setSvtRandCtr;
                                if ( !setSvtRandCtr
                                  || (v4 = sub_1B64204(this->fields.setSvtRandCtr, v7->obj.klass->_1.element_class)) != 0 )
                                {
                                  if ( v7->max_length <= 0xE )
                                    goto LABEL_66;
                                  v7->m_Items[14] = (GameOptionContentBase_o *)setSvtRandCtr;
                                  v4 = sub_1B6406C(&v7->m_Items[14]);
                                  setMessageDispCtr = this->fields.setMessageDispCtr;
                                  if ( !setMessageDispCtr
                                    || (v4 = sub_1B64204(
                                               this->fields.setMessageDispCtr,
                                               v7->obj.klass->_1.element_class)) != 0 )
                                  {
                                    if ( v7->max_length <= 0xF )
                                      goto LABEL_66;
                                    v7->m_Items[15] = (GameOptionContentBase_o *)setMessageDispCtr;
                                    v4 = sub_1B6406C(&v7->m_Items[15]);
                                    setNoticeCtr = this->fields.setNoticeCtr;
                                    if ( !setNoticeCtr
                                      || (v4 = sub_1B64204(this->fields.setNoticeCtr, v7->obj.klass->_1.element_class)) != 0 )
                                    {
                                      if ( v7->max_length <= 0x10 )
                                        goto LABEL_66;
                                      v7->m_Items[16] = (GameOptionContentBase_o *)setNoticeCtr;
                                      v4 = sub_1B6406C(&v7->m_Items[16]);
                                      setPlayOpeningMovieCtr = this->fields.setPlayOpeningMovieCtr;
                                      if ( !setPlayOpeningMovieCtr
                                        || (v4 = sub_1B64204(
                                                   this->fields.setPlayOpeningMovieCtr,
                                                   v7->obj.klass->_1.element_class)) != 0 )
                                      {
                                        if ( v7->max_length <= 0x11 )
                                          goto LABEL_66;
                                        v7->m_Items[17] = (GameOptionContentBase_o *)setPlayOpeningMovieCtr;
                                        v4 = sub_1B6406C(&v7->m_Items[17]);
                                        fullDlCtr = this->fields.fullDlCtr;
                                        if ( !fullDlCtr
                                          || (v4 = sub_1B64204(this->fields.fullDlCtr, v7->obj.klass->_1.element_class)) != 0 )
                                        {
                                          if ( v7->max_length <= 0x12 )
                                            goto LABEL_66;
                                          v7->m_Items[18] = (GameOptionContentBase_o *)fullDlCtr;
                                          v4 = sub_1B6406C(&v7->m_Items[18]);
                                          setBlackListCtr = this->fields.setBlackListCtr;
                                          if ( !setBlackListCtr
                                            || (v4 = sub_1B64204(setBlackListCtr, v7->obj.klass->_1.element_class)) != 0 )
                                          {
                                            if ( v7->max_length > 0x13 )
                                            {
                                              v7->m_Items[19] = (GameOptionContentBase_o *)setBlackListCtr;
                                              sub_1B6406C(&v7->m_Items[19]);
                                              *p_contentsArray = v7;
                                              sub_1B6406C(p_contentsArray);
                                              return;
                                            }
LABEL_66:
                                            sub_1B6432C(v4, v5);
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
        }
      }
    }
    v27 = sub_1B64348();
    sub_1B641F0(v27, 0LL);
  }
}


void __fastcall SetGameOptionComponent__InitGameOption(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct GameOptionContentBase_array *contentsArray; // x22
  int max_length; // w8
  unsigned int v7; // w23
  float v8; // s8
  GameOptionContentBase_o *v9; // x20
  char v10; // w21
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  UnityEngine_Object_o *collider; // x20
  UnityEngine_BoxCollider_o *v14; // x20
  float v15; // s8
  UnityEngine_BoxCollider_o *v16; // x20
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F7A3B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F7A3B = 1;
  }
  SetGameOptionComponent__CreateContentsArrayIfNotYet(this, method);
  contentsArray = this->fields.contentsArray;
  if ( !contentsArray )
    goto LABEL_21;
  max_length = contentsArray->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = 160.0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1B6432C(gameObject, v4);
      v9 = contentsArray->m_Items[v7];
      if ( !v9 )
        break;
      v10 = ((__int64 (__fastcall *)(GameOptionContentBase_o *, void *))v9->klass->vtable._6_IsAvailable.method)(
              v9,
              v9->klass[1]._1.image);
      GameOptionContentBase__Show(v9, v10 & 1, v11);
      if ( (v10 & 1) != 0 )
      {
        ((void (__fastcall *)(GameOptionContentBase_o *, Il2CppMethodPointer))v9->klass->vtable._4_Init.method)(
          v9,
          v9->klass->vtable._5_Reflection.methodPtr);
        GameOptionContentBase__SetPosY(v9, v8, v12);
        v8 = v8 - (float)v9->fields.contentHeight;
      }
      max_length = contentsArray->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_13;
    }
LABEL_21:
    sub_1B64324(gameObject);
  }
  v8 = 160.0;
LABEL_13:
  collider = (UnityEngine_Object_o *)this->fields.collider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(collider, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v14 = this->fields.collider;
    if ( !v14 )
      goto LABEL_21;
    v15 = 160.0 - v8;
    LODWORD(v17.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0LL);
    v17.fields.z = 0.0;
    v17.fields.y = v15;
    UnityEngine_BoxCollider__set_size(v14, v17, 0LL);
    v16 = this->fields.collider;
    if ( !v16 )
      goto LABEL_21;
    LODWORD(v18.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_center(this->fields.collider, 0LL);
    v18.fields.y = (float)(v15 * -0.5) + 160.0;
    v18.fields.z = 0.0;
    UnityEngine_BoxCollider__set_center(v16, v18, 0LL);
  }
  this->fields._optionSceneType_k__BackingField = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall SetGameOptionComponent__SetMaskEnabled(
        SetGameOptionComponent_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *optionMask; // x0

  optionMask = this->fields.optionMask;
  if ( !optionMask )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(optionMask, isEnabled, 0LL);
}


int32_t __fastcall SetGameOptionComponent__get_optionSceneType(
        SetGameOptionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._optionSceneType_k__BackingField;
}


void __fastcall SetGameOptionComponent__hideGameOption(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *hidePos; // x0
  UnityEngine_GameObject_o *optionObj; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F7A3C & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    byte_49F7A3C = 1;
  }
  hidePos = this->fields.hidePos;
  if ( !hidePos
    || (optionObj = this->fields.optionObj,
        (hidePos = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(hidePos, 0LL)) == 0LL)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)hidePos, 0LL),
        GameObjectExtensions__SetLocalPosition(optionObj, localPosition, 0LL),
        (hidePos = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive(hidePos, 0, 0LL),
        (hidePos = (UnityEngine_GameObject_o *)this->fields.optionScroll) == 0LL) )
  {
    sub_1B64324(hidePos);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *, float, float))hidePos->klass[1]._1.parent)(
    hidePos,
    0LL,
    hidePos->klass[1]._1.generic_class,
    0.0,
    0.0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseMyRoomAtlas(0LL);
}


void __fastcall SetGameOptionComponent__reflectionGameOption(
        SetGameOptionComponent_o *this,
        System_Action_o *callback,
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
  SetGameOptionComponent___c_c *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *contentsArray; // x20
  System_Func_object__bool__o *_9__39_0; // x21
  Il2CppObject *v16; // x22
  struct SetGameOptionComponent___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  SetGameOptionComponent___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_T__o *v22; // x20
  System_Action_object__o *_9__39_1; // x21
  Il2CppObject *v24; // x22
  struct SetGameOptionComponent___c_StaticFields *v25; // x0

  if ( (byte_49F7A3D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_GameOptionContentBase__TypeInfo, callback);
    sub_1B640C8(&Method_BasicHelper_ForEach_GameOptionContentBase___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_GameOptionContentBase___, v6);
    sub_1B640C8(&System_Func_GameOptionContentBase__bool__TypeInfo, v7);
    sub_1B640C8(&OptionManager_TypeInfo, v8);
    sub_1B640C8(&SoundManager_TypeInfo, v9);
    sub_1B640C8(&Method_SetGameOptionComponent___c__reflectionGameOption_b__39_0__, v10);
    sub_1B640C8(&Method_SetGameOptionComponent___c__reflectionGameOption_b__39_1__, v11);
    sub_1B640C8(&SetGameOptionComponent___c_TypeInfo, v12);
    byte_49F7A3D = 1;
  }
  v13 = SetGameOptionComponent___c_TypeInfo;
  contentsArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.contentsArray;
  if ( !SetGameOptionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetGameOptionComponent___c_TypeInfo);
    v13 = SetGameOptionComponent___c_TypeInfo;
  }
  _9__39_0 = (System_Func_object__bool__o *)v13->static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = SetGameOptionComponent___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__39_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                System_Func_GameOptionContentBase__bool__TypeInfo,
                                                callback,
                                                method);
    System_Func_object__bool____ctor(
      _9__39_0,
      v16,
      Method_SetGameOptionComponent___c__reflectionGameOption_b__39_0__,
      0LL);
    static_fields = SetGameOptionComponent___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = (struct System_Func_GameOptionContentBase__bool__o *)_9__39_0;
    sub_1B6406C(&static_fields->__9__39_0);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          contentsArray,
          (System_Func_TSource__bool__o *)_9__39_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_GameOptionContentBase___);
  v21 = SetGameOptionComponent___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_T__o *)v18;
  if ( !SetGameOptionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetGameOptionComponent___c_TypeInfo);
    v21 = SetGameOptionComponent___c_TypeInfo;
  }
  _9__39_1 = (System_Action_object__o *)v21->static_fields->__9__39_1;
  if ( !_9__39_1 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = SetGameOptionComponent___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__39_1 = (System_Action_object__o *)sub_1B64314(System_Action_GameOptionContentBase__TypeInfo, v19, v20);
    System_Action_object____ctor(_9__39_1, v24, Method_SetGameOptionComponent___c__reflectionGameOption_b__39_1__, 0LL);
    v25 = SetGameOptionComponent___c_TypeInfo->static_fields;
    v25->__9__39_1 = (struct System_Action_GameOptionContentBase__o *)_9__39_1;
    sub_1B6406C(&v25->__9__39_1);
  }
  BasicHelper__ForEach_object_(
    v22,
    (System_Action_T__o *)_9__39_1,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_GameOptionContentBase___);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe(0.0, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SaveData(callback, 0LL);
}


void __fastcall SetGameOptionComponent__set_optionSceneType(
        SetGameOptionComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._optionSceneType_k__BackingField = value;
}


void __fastcall SetGameOptionComponent__showGameOption(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UISprite_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49F7A39 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v3);
    sub_1B640C8(&Method_SetGameOptionComponent__showGameOption_b__35_0__, v4);
    byte_49F7A39 = 1;
  }
  bgTxtSprite = this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0LL),
        bgTxtSprite = (struct UISprite_o *)BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject) )
  {
    sub_1B64324(bgTxtSprite);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SetGameOptionComponent__showGameOption_b__35_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadMyRoomAtlas(v9, 1, 0LL);
}


void __fastcall SetGameOptionComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19

  if ( (byte_49F7A3F & 1) == 0 )
  {
    sub_1B640C8(&SetGameOptionComponent___c_TypeInfo, v1);
    byte_49F7A3F = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SetGameOptionComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SetGameOptionComponent___c_TypeInfo->static_fields->__9 = (struct SetGameOptionComponent___c_o *)v3;
  sub_1B6406C(SetGameOptionComponent___c_TypeInfo->static_fields);
}


void __fastcall SetGameOptionComponent___c___ctor(SetGameOptionComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SetGameOptionComponent___c___reflectionGameOption_b__39_0(
        SetGameOptionComponent___c_o *this,
        GameOptionContentBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return ((__int64 (__fastcall *)(GameOptionContentBase_o *, void *))x->klass->vtable._6_IsAvailable.method)(
           x,
           x->klass[1]._1.image);
}


void __fastcall SetGameOptionComponent___c___reflectionGameOption_b__39_1(
        SetGameOptionComponent___c_o *this,
        GameOptionContentBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  ((void (__fastcall *)(GameOptionContentBase_o *, Il2CppMethodPointer))x->klass->vtable._5_Reflection.method)(
    x,
    x->klass->vtable._6_IsAvailable.methodPtr);
}