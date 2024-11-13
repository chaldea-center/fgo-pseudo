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
  __int64 v2; // x2
  __int64 v4; // x0
  __int64 v5; // x1
  struct SetResolutionOptionControl_o *setResolutionOptionCtr; // x21
  struct GameOptionContentBase_array *v7; // x20
  il2cpp_array_size_t *p_max_length; // x22
  struct SetSmoothnessControl_o *setSmoothnessCtr; // x21
  struct SetVolumeControl_o *setVolCtr; // x21
  struct SetScenarioTextSpeedControl_o *setScenarioTextSpeedCtr; // x21
  struct SetScenarioControl_o *setScenarioCtr; // x21
  struct SetSpoilerProtectionControl_o *setSpoilerProtectionCtr; // x21
  struct SetSwitchOptionControl_o *setSwitchCtr; // x21
  struct SetSwitch2OptionControl_o *setSwitch2Ctr; // x21
  struct SetPreBattleFormationControl_o *setPreBattleFormationCtr; // x21
  struct SetAdvantageClassAutoOptionControl_o *setAdvantageClassAutoCtr; // x21
  struct SetAutoSelectPartyOptionControl_o *setAutoSelectPartyCtr; // x21
  struct SetAutoOpenAutoOrganizationDialogOptionControl_o *setAutoOpenAutoOrganizationDialogCtr; // x21
  struct SetTDPlaySpeedControl_o *setTDPlaySpeedCtr; // x21
  struct SetRandomLimitCountOptionControl_o *setRandomLimitCountCtr; // x21
  struct SetRandomLimitCountResetOptionControl_o *setRandomLimitCountResetCtr; // x21
  struct SetSvtRandOptionControl_o *setSvtRandCtr; // x21
  struct SetMessageDispOptionControl_o *setMessageDispCtr; // x21
  struct SetNoticeOptionControl_o *setNoticeCtr; // x21
  struct SetPlayOpeningMovieOptionControl_o *setPlayOpeningMovieCtr; // x21
  struct FullDownloadControl_o *fullDlCtr; // x21
  struct SetBlacklistOptionControl_o *setBlackListCtr; // x21
  struct GameOptionContentBase_array **p_contentsArray; // x19
  __int64 v30; // x0

  if ( (byte_4B1161D & 1) == 0 )
  {
    sub_1BCA7E0(&GameOptionContentBase___TypeInfo, method, v2);
    byte_4B1161D = 1;
  }
  if ( !this->fields.contentsArray )
  {
    v4 = sub_1BCA888(GameOptionContentBase___TypeInfo, 21LL);
    if ( !v4 )
      sub_1BCAA3C(0LL, v5);
    setResolutionOptionCtr = this->fields.setResolutionOptionCtr;
    v7 = (struct GameOptionContentBase_array *)v4;
    if ( !setResolutionOptionCtr
      || (v4 = sub_1BCA91C(this->fields.setResolutionOptionCtr, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
    {
      p_max_length = &v7->max_length;
      if ( !v7->max_length )
        goto LABEL_69;
      v7->m_Items[0] = (GameOptionContentBase_o *)setResolutionOptionCtr;
      v4 = sub_1BCA784(v7->m_Items, setResolutionOptionCtr);
      setSmoothnessCtr = this->fields.setSmoothnessCtr;
      if ( !setSmoothnessCtr || (v4 = sub_1BCA91C(this->fields.setSmoothnessCtr, v7->obj.klass->_1.element_class)) != 0 )
      {
        if ( *p_max_length <= 1 )
          goto LABEL_69;
        v7->m_Items[1] = (GameOptionContentBase_o *)setSmoothnessCtr;
        v4 = sub_1BCA784(&v7->m_Items[1], setSmoothnessCtr);
        setVolCtr = this->fields.setVolCtr;
        if ( !setVolCtr || (v4 = sub_1BCA91C(this->fields.setVolCtr, v7->obj.klass->_1.element_class)) != 0 )
        {
          if ( *p_max_length <= 2 )
            goto LABEL_69;
          v7->m_Items[2] = (GameOptionContentBase_o *)setVolCtr;
          v4 = sub_1BCA784(&v7->m_Items[2], setVolCtr);
          setScenarioTextSpeedCtr = this->fields.setScenarioTextSpeedCtr;
          if ( !setScenarioTextSpeedCtr
            || (v4 = sub_1BCA91C(this->fields.setScenarioTextSpeedCtr, v7->obj.klass->_1.element_class)) != 0 )
          {
            if ( *p_max_length <= 3 )
              goto LABEL_69;
            v7->m_Items[3] = (GameOptionContentBase_o *)setScenarioTextSpeedCtr;
            v4 = sub_1BCA784(&v7->m_Items[3], setScenarioTextSpeedCtr);
            setScenarioCtr = this->fields.setScenarioCtr;
            if ( !setScenarioCtr
              || (v4 = sub_1BCA91C(this->fields.setScenarioCtr, v7->obj.klass->_1.element_class)) != 0 )
            {
              if ( *p_max_length <= 4 )
                goto LABEL_69;
              v7->m_Items[4] = (GameOptionContentBase_o *)setScenarioCtr;
              v4 = sub_1BCA784(&v7->m_Items[4], setScenarioCtr);
              setSpoilerProtectionCtr = this->fields.setSpoilerProtectionCtr;
              if ( !setSpoilerProtectionCtr
                || (v4 = sub_1BCA91C(this->fields.setSpoilerProtectionCtr, v7->obj.klass->_1.element_class)) != 0 )
              {
                if ( *p_max_length <= 5 )
                  goto LABEL_69;
                v7->m_Items[5] = (GameOptionContentBase_o *)setSpoilerProtectionCtr;
                v4 = sub_1BCA784(&v7->m_Items[5], setSpoilerProtectionCtr);
                setSwitchCtr = this->fields.setSwitchCtr;
                if ( !setSwitchCtr
                  || (v4 = sub_1BCA91C(this->fields.setSwitchCtr, v7->obj.klass->_1.element_class)) != 0 )
                {
                  if ( *p_max_length <= 6 )
                    goto LABEL_69;
                  v7->m_Items[6] = (GameOptionContentBase_o *)setSwitchCtr;
                  v4 = sub_1BCA784(&v7->m_Items[6], setSwitchCtr);
                  setSwitch2Ctr = this->fields.setSwitch2Ctr;
                  if ( !setSwitch2Ctr
                    || (v4 = sub_1BCA91C(this->fields.setSwitch2Ctr, v7->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( *p_max_length <= 7 )
                      goto LABEL_69;
                    v7->m_Items[7] = (GameOptionContentBase_o *)setSwitch2Ctr;
                    v4 = sub_1BCA784(&v7->m_Items[7], setSwitch2Ctr);
                    setPreBattleFormationCtr = this->fields.setPreBattleFormationCtr;
                    if ( !setPreBattleFormationCtr
                      || (v4 = sub_1BCA91C(this->fields.setPreBattleFormationCtr, v7->obj.klass->_1.element_class)) != 0 )
                    {
                      if ( *p_max_length <= 8 )
                        goto LABEL_69;
                      v7->m_Items[8] = (GameOptionContentBase_o *)setPreBattleFormationCtr;
                      v4 = sub_1BCA784(&v7->m_Items[8], setPreBattleFormationCtr);
                      setAdvantageClassAutoCtr = this->fields.setAdvantageClassAutoCtr;
                      if ( !setAdvantageClassAutoCtr
                        || (v4 = sub_1BCA91C(this->fields.setAdvantageClassAutoCtr, v7->obj.klass->_1.element_class)) != 0 )
                      {
                        if ( *p_max_length <= 9 )
                          goto LABEL_69;
                        v7->m_Items[9] = (GameOptionContentBase_o *)setAdvantageClassAutoCtr;
                        v4 = sub_1BCA784(&v7->m_Items[9], setAdvantageClassAutoCtr);
                        setAutoSelectPartyCtr = this->fields.setAutoSelectPartyCtr;
                        if ( !setAutoSelectPartyCtr
                          || (v4 = sub_1BCA91C(this->fields.setAutoSelectPartyCtr, v7->obj.klass->_1.element_class)) != 0 )
                        {
                          if ( *p_max_length <= 0xA )
                            goto LABEL_69;
                          v7->m_Items[10] = (GameOptionContentBase_o *)setAutoSelectPartyCtr;
                          v4 = sub_1BCA784(&v7->m_Items[10], setAutoSelectPartyCtr);
                          setAutoOpenAutoOrganizationDialogCtr = this->fields.setAutoOpenAutoOrganizationDialogCtr;
                          if ( !setAutoOpenAutoOrganizationDialogCtr
                            || (v4 = sub_1BCA91C(
                                       this->fields.setAutoOpenAutoOrganizationDialogCtr,
                                       v7->obj.klass->_1.element_class)) != 0 )
                          {
                            if ( *p_max_length <= 0xB )
                              goto LABEL_69;
                            v7->m_Items[11] = (GameOptionContentBase_o *)setAutoOpenAutoOrganizationDialogCtr;
                            v4 = sub_1BCA784(&v7->m_Items[11], setAutoOpenAutoOrganizationDialogCtr);
                            setTDPlaySpeedCtr = this->fields.setTDPlaySpeedCtr;
                            if ( !setTDPlaySpeedCtr
                              || (v4 = sub_1BCA91C(this->fields.setTDPlaySpeedCtr, v7->obj.klass->_1.element_class)) != 0 )
                            {
                              if ( *p_max_length <= 0xC )
                                goto LABEL_69;
                              v7->m_Items[12] = (GameOptionContentBase_o *)setTDPlaySpeedCtr;
                              v4 = sub_1BCA784(&v7->m_Items[12], setTDPlaySpeedCtr);
                              setRandomLimitCountCtr = this->fields.setRandomLimitCountCtr;
                              if ( !setRandomLimitCountCtr
                                || (v4 = sub_1BCA91C(
                                           this->fields.setRandomLimitCountCtr,
                                           v7->obj.klass->_1.element_class)) != 0 )
                              {
                                if ( *p_max_length <= 0xD )
                                  goto LABEL_69;
                                v7->m_Items[13] = (GameOptionContentBase_o *)setRandomLimitCountCtr;
                                v4 = sub_1BCA784(&v7->m_Items[13], setRandomLimitCountCtr);
                                setRandomLimitCountResetCtr = this->fields.setRandomLimitCountResetCtr;
                                if ( !setRandomLimitCountResetCtr
                                  || (v4 = sub_1BCA91C(
                                             this->fields.setRandomLimitCountResetCtr,
                                             v7->obj.klass->_1.element_class)) != 0 )
                                {
                                  if ( *p_max_length <= 0xE )
                                    goto LABEL_69;
                                  v7->m_Items[14] = (GameOptionContentBase_o *)setRandomLimitCountResetCtr;
                                  v4 = sub_1BCA784(&v7->m_Items[14], setRandomLimitCountResetCtr);
                                  setSvtRandCtr = this->fields.setSvtRandCtr;
                                  if ( !setSvtRandCtr
                                    || (v4 = sub_1BCA91C(this->fields.setSvtRandCtr, v7->obj.klass->_1.element_class)) != 0 )
                                  {
                                    if ( *p_max_length <= 0xF )
                                      goto LABEL_69;
                                    v7->m_Items[15] = (GameOptionContentBase_o *)setSvtRandCtr;
                                    v4 = sub_1BCA784(&v7->m_Items[15], setSvtRandCtr);
                                    setMessageDispCtr = this->fields.setMessageDispCtr;
                                    if ( !setMessageDispCtr
                                      || (v4 = sub_1BCA91C(
                                                 this->fields.setMessageDispCtr,
                                                 v7->obj.klass->_1.element_class)) != 0 )
                                    {
                                      if ( *p_max_length <= 0x10 )
                                        goto LABEL_69;
                                      v7->m_Items[16] = (GameOptionContentBase_o *)setMessageDispCtr;
                                      v4 = sub_1BCA784(&v7->m_Items[16], setMessageDispCtr);
                                      setNoticeCtr = this->fields.setNoticeCtr;
                                      if ( !setNoticeCtr
                                        || (v4 = sub_1BCA91C(this->fields.setNoticeCtr, v7->obj.klass->_1.element_class)) != 0 )
                                      {
                                        if ( *p_max_length <= 0x11 )
                                          goto LABEL_69;
                                        v7->m_Items[17] = (GameOptionContentBase_o *)setNoticeCtr;
                                        v4 = sub_1BCA784(&v7->m_Items[17], setNoticeCtr);
                                        setPlayOpeningMovieCtr = this->fields.setPlayOpeningMovieCtr;
                                        if ( !setPlayOpeningMovieCtr
                                          || (v4 = sub_1BCA91C(
                                                     this->fields.setPlayOpeningMovieCtr,
                                                     v7->obj.klass->_1.element_class)) != 0 )
                                        {
                                          if ( *p_max_length <= 0x12 )
                                            goto LABEL_69;
                                          v7->m_Items[18] = (GameOptionContentBase_o *)setPlayOpeningMovieCtr;
                                          v4 = sub_1BCA784(&v7->m_Items[18], setPlayOpeningMovieCtr);
                                          fullDlCtr = this->fields.fullDlCtr;
                                          if ( !fullDlCtr
                                            || (v4 = sub_1BCA91C(
                                                       this->fields.fullDlCtr,
                                                       v7->obj.klass->_1.element_class)) != 0 )
                                          {
                                            if ( *p_max_length <= 0x13 )
                                              goto LABEL_69;
                                            v7->m_Items[19] = (GameOptionContentBase_o *)fullDlCtr;
                                            v4 = sub_1BCA784(&v7->m_Items[19], fullDlCtr);
                                            setBlackListCtr = this->fields.setBlackListCtr;
                                            if ( !setBlackListCtr
                                              || (v4 = sub_1BCA91C(
                                                         this->fields.setBlackListCtr,
                                                         v7->obj.klass->_1.element_class)) != 0 )
                                            {
                                              if ( *p_max_length > 0x14 )
                                              {
                                                v7->m_Items[20] = (GameOptionContentBase_o *)setBlackListCtr;
                                                p_contentsArray = &this->fields.contentsArray;
                                                sub_1BCA784(&v7->m_Items[20], setBlackListCtr);
                                                *p_contentsArray = v7;
                                                sub_1BCA784(p_contentsArray, v7);
                                                return;
                                              }
LABEL_69:
                                              sub_1BCAA44(v4, v5);
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
    }
    v30 = sub_1BCAA60();
    sub_1BCA908(v30, 0LL);
  }
}


void __fastcall SetGameOptionComponent__InitGameOption(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  struct GameOptionContentBase_array *contentsArray; // x22
  int max_length; // w8
  unsigned int v8; // w23
  float v9; // s8
  GameOptionContentBase_o *v10; // x20
  char v11; // w21
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  UnityEngine_Object_o *collider; // x20
  UnityEngine_BoxCollider_o *v15; // x20
  float v16; // s8
  UnityEngine_BoxCollider_o *v17; // x20
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1161E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1161E = 1;
  }
  SetGameOptionComponent__CreateContentsArrayIfNotYet(this, method);
  contentsArray = this->fields.contentsArray;
  if ( !contentsArray )
    goto LABEL_21;
  max_length = contentsArray->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    v9 = 160.0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1BCAA44(gameObject, v5);
      v10 = contentsArray->m_Items[v8];
      if ( !v10 )
        break;
      v11 = ((__int64 (__fastcall *)(GameOptionContentBase_o *, void *))v10->klass->vtable._6_IsAvailable.method)(
              v10,
              v10->klass[1]._1.image);
      GameOptionContentBase__Show(v10, v11 & 1, v12);
      if ( (v11 & 1) != 0 )
      {
        ((void (__fastcall *)(GameOptionContentBase_o *, Il2CppMethodPointer))v10->klass->vtable._4_Init.method)(
          v10,
          v10->klass->vtable._5_Reflection.methodPtr);
        GameOptionContentBase__SetPosY(v10, v9, v13);
        v9 = v9 - (float)v10->fields.contentHeight;
      }
      max_length = contentsArray->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_13;
    }
LABEL_21:
    sub_1BCAA3C(gameObject, v5);
  }
  v9 = 160.0;
LABEL_13:
  collider = (UnityEngine_Object_o *)this->fields.collider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(collider, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v15 = this->fields.collider;
    if ( !v15 )
      goto LABEL_21;
    v16 = 160.0 - v9;
    LODWORD(v18.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0LL);
    v18.fields.z = 0.0;
    v18.fields.y = v16;
    UnityEngine_BoxCollider__set_size(v15, v18, 0LL);
    v17 = this->fields.collider;
    if ( !v17 )
      goto LABEL_21;
    LODWORD(v19.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_center(this->fields.collider, 0LL);
    v19.fields.y = (float)(v16 * -0.5) + 160.0;
    v19.fields.z = 0.0;
    UnityEngine_BoxCollider__set_center(v17, v19, 0LL);
  }
  this->fields._optionSceneType_k__BackingField = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetGameOptionComponent__SetMaskEnabled(
        SetGameOptionComponent_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *optionMask; // x0

  optionMask = this->fields.optionMask;
  if ( !optionMask )
    sub_1BCAA3C(0LL, isEnabled);
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
  __int64 v2; // x2
  UnityEngine_GameObject_o *hidePos; // x0
  UnityEngine_GameObject_o *optionObj; // x20
  __int64 v6; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1161F & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    byte_4B1161F = 1;
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
    sub_1BCAA3C(hidePos, method);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *, float, float))hidePos->klass[1]._1.parent)(
    hidePos,
    0LL,
    hidePos->klass[1]._1.generic_class,
    0.0,
    0.0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6);
  AtlasManager__ReleaseMyRoomAtlas(0LL);
}


void __fastcall SetGameOptionComponent__reflectionGameOption(
        SetGameOptionComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  SetGameOptionComponent___c_c *v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o *contentsArray; // x20
  System_Func_object__bool__o *_9__40_0; // x21
  Il2CppObject *v25; // x22
  struct SetGameOptionComponent___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  SetGameOptionComponent___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_T__o *v32; // x20
  System_Action_object__o *_9__40_1; // x21
  Il2CppObject *v34; // x22
  struct SetGameOptionComponent___c_StaticFields *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x1

  if ( (byte_4B11620 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_GameOptionContentBase__TypeInfo, callback, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_GameOptionContentBase___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_GameOptionContentBase___, v8, v9);
    sub_1BCA7E0(&System_Func_GameOptionContentBase__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&OptionManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&SoundManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SetGameOptionComponent___c__reflectionGameOption_b__40_0__, v16, v17);
    sub_1BCA7E0(&Method_SetGameOptionComponent___c__reflectionGameOption_b__40_1__, v18, v19);
    sub_1BCA7E0(&SetGameOptionComponent___c_TypeInfo, v20, v21);
    byte_4B11620 = 1;
  }
  v22 = SetGameOptionComponent___c_TypeInfo;
  contentsArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.contentsArray;
  if ( !SetGameOptionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetGameOptionComponent___c_TypeInfo, callback);
    v22 = SetGameOptionComponent___c_TypeInfo;
  }
  _9__40_0 = (System_Func_object__bool__o *)v22->static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22, callback);
      v22 = SetGameOptionComponent___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__40_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_GameOptionContentBase__bool__TypeInfo,
                                                callback,
                                                method,
                                                v3);
    System_Func_object__bool____ctor(
      _9__40_0,
      v25,
      Method_SetGameOptionComponent___c__reflectionGameOption_b__40_0__,
      0LL);
    static_fields = SetGameOptionComponent___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Func_GameOptionContentBase__bool__o *)_9__40_0;
    sub_1BCA784(&static_fields->__9__40_0, _9__40_0);
  }
  v27 = System_Linq_Enumerable__Where_object_(
          contentsArray,
          (System_Func_TSource__bool__o *)_9__40_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_GameOptionContentBase___);
  v31 = SetGameOptionComponent___c_TypeInfo;
  v32 = (System_Collections_Generic_IEnumerable_T__o *)v27;
  if ( !SetGameOptionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetGameOptionComponent___c_TypeInfo, v28);
    v31 = SetGameOptionComponent___c_TypeInfo;
  }
  _9__40_1 = (System_Action_object__o *)v31->static_fields->__9__40_1;
  if ( !_9__40_1 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31, v28);
      v31 = SetGameOptionComponent___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__40_1 = (System_Action_object__o *)sub_1BCAA2C(System_Action_GameOptionContentBase__TypeInfo, v28, v29, v30);
    System_Action_object____ctor(_9__40_1, v34, Method_SetGameOptionComponent___c__reflectionGameOption_b__40_1__, 0LL);
    v35 = SetGameOptionComponent___c_TypeInfo->static_fields;
    v35->__9__40_1 = (struct System_Action_GameOptionContentBase__o *)_9__40_1;
    sub_1BCA784(&v35->__9__40_1, _9__40_1);
  }
  BasicHelper__ForEach_object_(
    v32,
    (System_Action_T__o *)_9__40_1,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_GameOptionContentBase___);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v36);
  SoundManager__stopSe(0.0, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v37);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UISprite_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20
  __int64 v14; // x1

  if ( (byte_4B1161C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SetGameOptionComponent__showGameOption_b__36_0__, v6, v7);
    byte_4B1161C = 1;
  }
  bgTxtSprite = this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0LL),
        bgTxtSprite = (struct UISprite_o *)BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject) )
  {
    sub_1BCAA3C(bgTxtSprite, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SetGameOptionComponent__showGameOption_b__36_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14);
  AtlasManager__LoadMyRoomAtlas(v13, 1, 0LL);
}


void __fastcall SetGameOptionComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B11621 & 1) == 0 )
  {
    sub_1BCA7E0(&SetGameOptionComponent___c_TypeInfo, v1, v2);
    byte_4B11621 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SetGameOptionComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SetGameOptionComponent___c_TypeInfo->static_fields->__9 = (struct SetGameOptionComponent___c_o *)v4;
  sub_1BCA784(SetGameOptionComponent___c_TypeInfo->static_fields, v4);
}


void __fastcall SetGameOptionComponent___c___ctor(SetGameOptionComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SetGameOptionComponent___c___reflectionGameOption_b__40_0(
        SetGameOptionComponent___c_o *this,
        GameOptionContentBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return ((__int64 (__fastcall *)(GameOptionContentBase_o *, void *))x->klass->vtable._6_IsAvailable.method)(
           x,
           x->klass[1]._1.image);
}


void __fastcall SetGameOptionComponent___c___reflectionGameOption_b__40_1(
        SetGameOptionComponent___c_o *this,
        GameOptionContentBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  ((void (__fastcall *)(GameOptionContentBase_o *, Il2CppMethodPointer))x->klass->vtable._5_Reflection.method)(
    x,
    x->klass->vtable._6_IsAvailable.methodPtr);
}