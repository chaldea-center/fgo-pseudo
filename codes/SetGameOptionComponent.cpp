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
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  struct SetResolutionOptionControl_o *setResolutionOptionCtr; // x21
  __int64 v8; // x20
  _DWORD *v9; // x22
  const MethodInfo *v10; // x3
  struct SetSmoothnessControl_o *setSmoothnessCtr; // x21
  const MethodInfo *v12; // x3
  struct SetVolumeControl_o *setVolCtr; // x21
  const MethodInfo *v14; // x3
  struct SetScenarioTextSpeedControl_o *setScenarioTextSpeedCtr; // x21
  const MethodInfo *v16; // x3
  struct SetScenarioControl_o *setScenarioCtr; // x21
  const MethodInfo *v18; // x3
  struct SetSpoilerProtectionControl_o *setSpoilerProtectionCtr; // x21
  const MethodInfo *v20; // x3
  struct SetSwitchOptionControl_o *setSwitchCtr; // x21
  const MethodInfo *v22; // x3
  struct SetSwitch2OptionControl_o *setSwitch2Ctr; // x21
  const MethodInfo *v24; // x3
  struct SetPreBattleFormationControl_o *setPreBattleFormationCtr; // x21
  const MethodInfo *v26; // x3
  struct SetAdvantageClassAutoOptionControl_o *setAdvantageClassAutoCtr; // x21
  const MethodInfo *v28; // x3
  struct SetAutoSelectPartyOptionControl_o *setAutoSelectPartyCtr; // x21
  const MethodInfo *v30; // x3
  struct SetAutoOpenAutoOrganizationDialogOptionControl_o *setAutoOpenAutoOrganizationDialogCtr; // x21
  const MethodInfo *v32; // x3
  struct SetTDPlaySpeedControl_o *setTDPlaySpeedCtr; // x21
  const MethodInfo *v34; // x3
  struct SetRandomLimitCountOptionControl_o *setRandomLimitCountCtr; // x21
  const MethodInfo *v36; // x3
  struct SetRandomLimitCountResetOptionControl_o *setRandomLimitCountResetCtr; // x21
  const MethodInfo *v38; // x3
  struct SetSvtRandOptionControl_o *setSvtRandCtr; // x21
  const MethodInfo *v40; // x3
  struct SetMessageDispOptionControl_o *setMessageDispCtr; // x21
  const MethodInfo *v42; // x3
  struct SetNoticeOptionControl_o *setNoticeCtr; // x21
  const MethodInfo *v44; // x3
  struct SetPlayOpeningMovieOptionControl_o *setPlayOpeningMovieCtr; // x21
  const MethodInfo *v46; // x3
  struct FullDownloadControl_o *fullDlCtr; // x21
  const MethodInfo *v48; // x3
  struct SetBlacklistOptionControl_o *setBlackListCtr; // x21
  CGThumbnailListItem_o *p_contentsArray; // x19
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  __int64 v53; // x0

  if ( (byte_4B3FBB8 & 1) == 0 )
  {
    sub_1BDB878(&GameOptionContentBase___TypeInfo, method);
    byte_4B3FBB8 = 1;
  }
  if ( !this->fields.contentsArray )
  {
    v3 = sub_1BDB920(GameOptionContentBase___TypeInfo, 21LL);
    if ( !v3 )
      sub_1BDBAD4(0LL, v4);
    setResolutionOptionCtr = this->fields.setResolutionOptionCtr;
    v8 = v3;
    if ( !setResolutionOptionCtr
      || (v3 = sub_1BDB9B4(this->fields.setResolutionOptionCtr, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
    {
      v9 = (_DWORD *)(v8 + 24);
      if ( !*(_DWORD *)(v8 + 24) )
        goto LABEL_69;
      *(_QWORD *)(v8 + 32) = setResolutionOptionCtr;
      sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 32), (int32_t)setResolutionOptionCtr, v5, v6);
      setSmoothnessCtr = this->fields.setSmoothnessCtr;
      if ( !setSmoothnessCtr
        || (v3 = sub_1BDB9B4(this->fields.setSmoothnessCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
      {
        if ( *v9 <= 1u )
          goto LABEL_69;
        *(_QWORD *)(v8 + 40) = setSmoothnessCtr;
        sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 40), (int32_t)setSmoothnessCtr, v5, v10);
        setVolCtr = this->fields.setVolCtr;
        if ( !setVolCtr || (v3 = sub_1BDB9B4(this->fields.setVolCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
        {
          if ( *v9 <= 2u )
            goto LABEL_69;
          *(_QWORD *)(v8 + 48) = setVolCtr;
          sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 48), (int32_t)setVolCtr, v5, v12);
          setScenarioTextSpeedCtr = this->fields.setScenarioTextSpeedCtr;
          if ( !setScenarioTextSpeedCtr
            || (v3 = sub_1BDB9B4(this->fields.setScenarioTextSpeedCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
          {
            if ( *v9 <= 3u )
              goto LABEL_69;
            *(_QWORD *)(v8 + 56) = setScenarioTextSpeedCtr;
            sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 56), (int32_t)setScenarioTextSpeedCtr, v5, v14);
            setScenarioCtr = this->fields.setScenarioCtr;
            if ( !setScenarioCtr
              || (v3 = sub_1BDB9B4(this->fields.setScenarioCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
            {
              if ( *v9 <= 4u )
                goto LABEL_69;
              *(_QWORD *)(v8 + 64) = setScenarioCtr;
              sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 64), (int32_t)setScenarioCtr, v5, v16);
              setSpoilerProtectionCtr = this->fields.setSpoilerProtectionCtr;
              if ( !setSpoilerProtectionCtr
                || (v3 = sub_1BDB9B4(this->fields.setSpoilerProtectionCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
              {
                if ( *v9 <= 5u )
                  goto LABEL_69;
                *(_QWORD *)(v8 + 72) = setSpoilerProtectionCtr;
                sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 72), (int32_t)setSpoilerProtectionCtr, v5, v18);
                setSwitchCtr = this->fields.setSwitchCtr;
                if ( !setSwitchCtr
                  || (v3 = sub_1BDB9B4(this->fields.setSwitchCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                {
                  if ( *v9 <= 6u )
                    goto LABEL_69;
                  *(_QWORD *)(v8 + 80) = setSwitchCtr;
                  sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 80), (int32_t)setSwitchCtr, v5, v20);
                  setSwitch2Ctr = this->fields.setSwitch2Ctr;
                  if ( !setSwitch2Ctr
                    || (v3 = sub_1BDB9B4(this->fields.setSwitch2Ctr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                  {
                    if ( *v9 <= 7u )
                      goto LABEL_69;
                    *(_QWORD *)(v8 + 88) = setSwitch2Ctr;
                    sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 88), (int32_t)setSwitch2Ctr, v5, v22);
                    setPreBattleFormationCtr = this->fields.setPreBattleFormationCtr;
                    if ( !setPreBattleFormationCtr
                      || (v3 = sub_1BDB9B4(this->fields.setPreBattleFormationCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                    {
                      if ( *v9 <= 8u )
                        goto LABEL_69;
                      *(_QWORD *)(v8 + 96) = setPreBattleFormationCtr;
                      sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 96), (int32_t)setPreBattleFormationCtr, v5, v24);
                      setAdvantageClassAutoCtr = this->fields.setAdvantageClassAutoCtr;
                      if ( !setAdvantageClassAutoCtr
                        || (v3 = sub_1BDB9B4(this->fields.setAdvantageClassAutoCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                      {
                        if ( *v9 <= 9u )
                          goto LABEL_69;
                        *(_QWORD *)(v8 + 104) = setAdvantageClassAutoCtr;
                        sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 104), (int32_t)setAdvantageClassAutoCtr, v5, v26);
                        setAutoSelectPartyCtr = this->fields.setAutoSelectPartyCtr;
                        if ( !setAutoSelectPartyCtr
                          || (v3 = sub_1BDB9B4(this->fields.setAutoSelectPartyCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                        {
                          if ( *v9 <= 0xAu )
                            goto LABEL_69;
                          *(_QWORD *)(v8 + 112) = setAutoSelectPartyCtr;
                          sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 112), (int32_t)setAutoSelectPartyCtr, v5, v28);
                          setAutoOpenAutoOrganizationDialogCtr = this->fields.setAutoOpenAutoOrganizationDialogCtr;
                          if ( !setAutoOpenAutoOrganizationDialogCtr
                            || (v3 = sub_1BDB9B4(
                                       this->fields.setAutoOpenAutoOrganizationDialogCtr,
                                       *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                          {
                            if ( *v9 <= 0xBu )
                              goto LABEL_69;
                            *(_QWORD *)(v8 + 120) = setAutoOpenAutoOrganizationDialogCtr;
                            sub_1BDB81C(
                              (CGThumbnailListItem_o *)(v8 + 120),
                              (int32_t)setAutoOpenAutoOrganizationDialogCtr,
                              v5,
                              v30);
                            setTDPlaySpeedCtr = this->fields.setTDPlaySpeedCtr;
                            if ( !setTDPlaySpeedCtr
                              || (v3 = sub_1BDB9B4(this->fields.setTDPlaySpeedCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                            {
                              if ( *v9 <= 0xCu )
                                goto LABEL_69;
                              *(_QWORD *)(v8 + 128) = setTDPlaySpeedCtr;
                              sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 128), (int32_t)setTDPlaySpeedCtr, v5, v32);
                              setRandomLimitCountCtr = this->fields.setRandomLimitCountCtr;
                              if ( !setRandomLimitCountCtr
                                || (v3 = sub_1BDB9B4(
                                           this->fields.setRandomLimitCountCtr,
                                           *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                              {
                                if ( *v9 <= 0xDu )
                                  goto LABEL_69;
                                *(_QWORD *)(v8 + 136) = setRandomLimitCountCtr;
                                sub_1BDB81C(
                                  (CGThumbnailListItem_o *)(v8 + 136),
                                  (int32_t)setRandomLimitCountCtr,
                                  v5,
                                  v34);
                                setRandomLimitCountResetCtr = this->fields.setRandomLimitCountResetCtr;
                                if ( !setRandomLimitCountResetCtr
                                  || (v3 = sub_1BDB9B4(
                                             this->fields.setRandomLimitCountResetCtr,
                                             *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                {
                                  if ( *v9 <= 0xEu )
                                    goto LABEL_69;
                                  *(_QWORD *)(v8 + 144) = setRandomLimitCountResetCtr;
                                  sub_1BDB81C(
                                    (CGThumbnailListItem_o *)(v8 + 144),
                                    (int32_t)setRandomLimitCountResetCtr,
                                    v5,
                                    v36);
                                  setSvtRandCtr = this->fields.setSvtRandCtr;
                                  if ( !setSvtRandCtr
                                    || (v3 = sub_1BDB9B4(this->fields.setSvtRandCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                  {
                                    if ( *v9 <= 0xFu )
                                      goto LABEL_69;
                                    *(_QWORD *)(v8 + 152) = setSvtRandCtr;
                                    sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 152), (int32_t)setSvtRandCtr, v5, v38);
                                    setMessageDispCtr = this->fields.setMessageDispCtr;
                                    if ( !setMessageDispCtr
                                      || (v3 = sub_1BDB9B4(
                                                 this->fields.setMessageDispCtr,
                                                 *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                    {
                                      if ( *v9 <= 0x10u )
                                        goto LABEL_69;
                                      *(_QWORD *)(v8 + 160) = setMessageDispCtr;
                                      sub_1BDB81C(
                                        (CGThumbnailListItem_o *)(v8 + 160),
                                        (int32_t)setMessageDispCtr,
                                        v5,
                                        v40);
                                      setNoticeCtr = this->fields.setNoticeCtr;
                                      if ( !setNoticeCtr
                                        || (v3 = sub_1BDB9B4(
                                                   this->fields.setNoticeCtr,
                                                   *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                      {
                                        if ( *v9 <= 0x11u )
                                          goto LABEL_69;
                                        *(_QWORD *)(v8 + 168) = setNoticeCtr;
                                        sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 168), (int32_t)setNoticeCtr, v5, v42);
                                        setPlayOpeningMovieCtr = this->fields.setPlayOpeningMovieCtr;
                                        if ( !setPlayOpeningMovieCtr
                                          || (v3 = sub_1BDB9B4(
                                                     this->fields.setPlayOpeningMovieCtr,
                                                     *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                        {
                                          if ( *v9 <= 0x12u )
                                            goto LABEL_69;
                                          *(_QWORD *)(v8 + 176) = setPlayOpeningMovieCtr;
                                          sub_1BDB81C(
                                            (CGThumbnailListItem_o *)(v8 + 176),
                                            (int32_t)setPlayOpeningMovieCtr,
                                            v5,
                                            v44);
                                          fullDlCtr = this->fields.fullDlCtr;
                                          if ( !fullDlCtr
                                            || (v3 = sub_1BDB9B4(
                                                       this->fields.fullDlCtr,
                                                       *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                          {
                                            if ( *v9 <= 0x13u )
                                              goto LABEL_69;
                                            *(_QWORD *)(v8 + 184) = fullDlCtr;
                                            sub_1BDB81C(
                                              (CGThumbnailListItem_o *)(v8 + 184),
                                              (int32_t)fullDlCtr,
                                              v5,
                                              v46);
                                            setBlackListCtr = this->fields.setBlackListCtr;
                                            if ( !setBlackListCtr
                                              || (v3 = sub_1BDB9B4(
                                                         this->fields.setBlackListCtr,
                                                         *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                            {
                                              if ( *v9 > 0x14u )
                                              {
                                                *(_QWORD *)(v8 + 192) = setBlackListCtr;
                                                p_contentsArray = (CGThumbnailListItem_o *)&this->fields.contentsArray;
                                                sub_1BDB81C(
                                                  (CGThumbnailListItem_o *)(v8 + 192),
                                                  (int32_t)setBlackListCtr,
                                                  v5,
                                                  v48);
                                                p_contentsArray->klass = (CGThumbnailListItem_c *)v8;
                                                sub_1BDB81C(p_contentsArray, v8, v51, v52);
                                                return;
                                              }
LABEL_69:
                                              sub_1BDBADC(v3, v4, v5);
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
    v53 = sub_1BDBAF8();
    sub_1BDB9A0(v53, 0LL);
  }
}


void __fastcall SetGameOptionComponent__InitGameOption(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x2
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

  if ( (byte_4B3FBB9 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B3FBB9 = 1;
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
        sub_1BDBADC(gameObject, v4, v5);
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
    sub_1BDBAD4(gameObject, v4);
  }
  v9 = 160.0;
LABEL_13:
  collider = (UnityEngine_Object_o *)this->fields.collider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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


void __fastcall SetGameOptionComponent__SetMaskEnabled(
        SetGameOptionComponent_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *optionMask; // x0

  optionMask = this->fields.optionMask;
  if ( !optionMask )
    sub_1BDBAD4(0LL, isEnabled);
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

  if ( (byte_4B3FBBA & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, method);
    byte_4B3FBBA = 1;
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
    sub_1BDBAD4(hidePos, method);
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
  System_Func_object__bool__o *_9__40_0; // x21
  Il2CppObject *v16; // x22
  struct SetGameOptionComponent___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  SetGameOptionComponent___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_T__o *v22; // x20
  System_Action_object__o *_9__40_1; // x21
  Il2CppObject *v24; // x22
  struct SetGameOptionComponent___c_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4B3FBBB & 1) == 0 )
  {
    sub_1BDB878(&System_Action_GameOptionContentBase__TypeInfo, callback);
    sub_1BDB878(&Method_BasicHelper_ForEach_GameOptionContentBase___, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_GameOptionContentBase___, v6);
    sub_1BDB878(&System_Func_GameOptionContentBase__bool__TypeInfo, v7);
    sub_1BDB878(&OptionManager_TypeInfo, v8);
    sub_1BDB878(&SoundManager_TypeInfo, v9);
    sub_1BDB878(&Method_SetGameOptionComponent___c__reflectionGameOption_b__40_0__, v10);
    sub_1BDB878(&Method_SetGameOptionComponent___c__reflectionGameOption_b__40_1__, v11);
    sub_1BDB878(&SetGameOptionComponent___c_TypeInfo, v12);
    byte_4B3FBBB = 1;
  }
  v13 = SetGameOptionComponent___c_TypeInfo;
  contentsArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.contentsArray;
  if ( !SetGameOptionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetGameOptionComponent___c_TypeInfo);
    v13 = SetGameOptionComponent___c_TypeInfo;
  }
  _9__40_0 = (System_Func_object__bool__o *)v13->static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = SetGameOptionComponent___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__40_0 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_GameOptionContentBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__40_0,
      v16,
      Method_SetGameOptionComponent___c__reflectionGameOption_b__40_0__,
      0LL);
    static_fields = SetGameOptionComponent___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Func_GameOptionContentBase__bool__o *)_9__40_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__40_0, (int32_t)_9__40_0, v18, v19);
  }
  v20 = System_Linq_Enumerable__Where_object_(
          contentsArray,
          (System_Func_TSource__bool__o *)_9__40_0,
          (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_GameOptionContentBase___);
  v21 = SetGameOptionComponent___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_T__o *)v20;
  if ( !SetGameOptionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetGameOptionComponent___c_TypeInfo);
    v21 = SetGameOptionComponent___c_TypeInfo;
  }
  _9__40_1 = (System_Action_object__o *)v21->static_fields->__9__40_1;
  if ( !_9__40_1 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = SetGameOptionComponent___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__40_1 = (System_Action_object__o *)sub_1BDBAC4(System_Action_GameOptionContentBase__TypeInfo);
    System_Action_object____ctor(_9__40_1, v24, Method_SetGameOptionComponent___c__reflectionGameOption_b__40_1__, 0LL);
    v25 = SetGameOptionComponent___c_TypeInfo->static_fields;
    v25->__9__40_1 = (struct System_Action_GameOptionContentBase__o *)_9__40_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&v25->__9__40_1, (int32_t)_9__40_1, v26, v27);
  }
  BasicHelper__ForEach_object_(
    v22,
    (System_Action_T__o *)_9__40_1,
    (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_GameOptionContentBase___);
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
  System_Action_o *v7; // x20

  if ( (byte_4B3FBB7 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&AtlasManager_TypeInfo, v3);
    sub_1BDB878(&Method_SetGameOptionComponent__showGameOption_b__36_0__, v4);
    byte_4B3FBB7 = 1;
  }
  bgTxtSprite = this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0LL),
        bgTxtSprite = (struct UISprite_o *)BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject) )
  {
    sub_1BDBAD4(bgTxtSprite, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  v7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SetGameOptionComponent__showGameOption_b__36_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadMyRoomAtlas(v7, 1, 0LL);
}


void __fastcall SetGameOptionComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B3FBBC & 1) == 0 )
  {
    sub_1BDB878(&SetGameOptionComponent___c_TypeInfo, v1);
    byte_4B3FBBC = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(SetGameOptionComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SetGameOptionComponent___c_TypeInfo->static_fields->__9 = (struct SetGameOptionComponent___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)SetGameOptionComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BDBAD4(this, 0LL);
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
    sub_1BDBAD4(this, 0LL);
  ((void (__fastcall *)(GameOptionContentBase_o *, Il2CppMethodPointer))x->klass->vtable._5_Reflection.method)(
    x,
    x->klass->vtable._6_IsAvailable.methodPtr);
}