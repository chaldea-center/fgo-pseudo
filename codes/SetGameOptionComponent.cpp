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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct SetResolutionOptionControl_o *setResolutionOptionCtr; // x21
  __int64 v8; // x20
  _DWORD *v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct SetSmoothnessControl_o *setSmoothnessCtr; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct SetVolumeControl_o *setVolCtr; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct SetScenarioTextSpeedControl_o *setScenarioTextSpeedCtr; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct SetScenarioControl_o *setScenarioCtr; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct SetSpoilerProtectionControl_o *setSpoilerProtectionCtr; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct SetSwitchOptionControl_o *setSwitchCtr; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct SetSwitch2OptionControl_o *setSwitch2Ctr; // x21
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct SetPreBattleFormationControl_o *setPreBattleFormationCtr; // x21
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct SetAdvantageClassAutoOptionControl_o *setAdvantageClassAutoCtr; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct SetAutoSelectPartyOptionControl_o *setAutoSelectPartyCtr; // x21
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct SetAutoOpenAutoOrganizationDialogOptionControl_o *setAutoOpenAutoOrganizationDialogCtr; // x21
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct SetTDPlaySpeedControl_o *setTDPlaySpeedCtr; // x21
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct SetRandomLimitCountOptionControl_o *setRandomLimitCountCtr; // x21
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct SetRandomLimitCountResetOptionControl_o *setRandomLimitCountResetCtr; // x21
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct SetSvtRandOptionControl_o *setSvtRandCtr; // x21
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct SetMessageDispOptionControl_o *setMessageDispCtr; // x21
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct SetNoticeOptionControl_o *setNoticeCtr; // x21
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct SetPlayOpeningMovieOptionControl_o *setPlayOpeningMovieCtr; // x21
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct FullDownloadControl_o *fullDlCtr; // x21
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  struct SetBlacklistOptionControl_o *setBlackListCtr; // x21
  CGThumbnailListItem_o *p_contentsArray; // x19
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  __int64 v73; // x0

  if ( (byte_4A49640 & 1) == 0 )
  {
    sub_1B863B8(&GameOptionContentBase___TypeInfo, method);
    byte_4A49640 = 1;
  }
  if ( !this->fields.contentsArray )
  {
    v3 = sub_1B86460(GameOptionContentBase___TypeInfo, 21LL);
    if ( !v3 )
      sub_1B86614(0LL, v4);
    setResolutionOptionCtr = this->fields.setResolutionOptionCtr;
    v8 = v3;
    if ( !setResolutionOptionCtr
      || (v3 = sub_1B864F4(this->fields.setResolutionOptionCtr, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
    {
      v9 = (_DWORD *)(v8 + 24);
      if ( !*(_DWORD *)(v8 + 24) )
        goto LABEL_69;
      *(_QWORD *)(v8 + 32) = setResolutionOptionCtr;
      sub_1B8635C((CGThumbnailListItem_o *)(v8 + 32), (int32_t)setResolutionOptionCtr, v5, v6);
      setSmoothnessCtr = this->fields.setSmoothnessCtr;
      if ( !setSmoothnessCtr
        || (v3 = sub_1B864F4(this->fields.setSmoothnessCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
      {
        if ( *v9 <= 1u )
          goto LABEL_69;
        *(_QWORD *)(v8 + 40) = setSmoothnessCtr;
        sub_1B8635C((CGThumbnailListItem_o *)(v8 + 40), (int32_t)setSmoothnessCtr, v10, v11);
        setVolCtr = this->fields.setVolCtr;
        if ( !setVolCtr || (v3 = sub_1B864F4(this->fields.setVolCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
        {
          if ( *v9 <= 2u )
            goto LABEL_69;
          *(_QWORD *)(v8 + 48) = setVolCtr;
          sub_1B8635C((CGThumbnailListItem_o *)(v8 + 48), (int32_t)setVolCtr, v13, v14);
          setScenarioTextSpeedCtr = this->fields.setScenarioTextSpeedCtr;
          if ( !setScenarioTextSpeedCtr
            || (v3 = sub_1B864F4(this->fields.setScenarioTextSpeedCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
          {
            if ( *v9 <= 3u )
              goto LABEL_69;
            *(_QWORD *)(v8 + 56) = setScenarioTextSpeedCtr;
            sub_1B8635C((CGThumbnailListItem_o *)(v8 + 56), (int32_t)setScenarioTextSpeedCtr, v16, v17);
            setScenarioCtr = this->fields.setScenarioCtr;
            if ( !setScenarioCtr
              || (v3 = sub_1B864F4(this->fields.setScenarioCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
            {
              if ( *v9 <= 4u )
                goto LABEL_69;
              *(_QWORD *)(v8 + 64) = setScenarioCtr;
              sub_1B8635C((CGThumbnailListItem_o *)(v8 + 64), (int32_t)setScenarioCtr, v19, v20);
              setSpoilerProtectionCtr = this->fields.setSpoilerProtectionCtr;
              if ( !setSpoilerProtectionCtr
                || (v3 = sub_1B864F4(this->fields.setSpoilerProtectionCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
              {
                if ( *v9 <= 5u )
                  goto LABEL_69;
                *(_QWORD *)(v8 + 72) = setSpoilerProtectionCtr;
                sub_1B8635C((CGThumbnailListItem_o *)(v8 + 72), (int32_t)setSpoilerProtectionCtr, v22, v23);
                setSwitchCtr = this->fields.setSwitchCtr;
                if ( !setSwitchCtr
                  || (v3 = sub_1B864F4(this->fields.setSwitchCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                {
                  if ( *v9 <= 6u )
                    goto LABEL_69;
                  *(_QWORD *)(v8 + 80) = setSwitchCtr;
                  sub_1B8635C((CGThumbnailListItem_o *)(v8 + 80), (int32_t)setSwitchCtr, v25, v26);
                  setSwitch2Ctr = this->fields.setSwitch2Ctr;
                  if ( !setSwitch2Ctr
                    || (v3 = sub_1B864F4(this->fields.setSwitch2Ctr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                  {
                    if ( *v9 <= 7u )
                      goto LABEL_69;
                    *(_QWORD *)(v8 + 88) = setSwitch2Ctr;
                    sub_1B8635C((CGThumbnailListItem_o *)(v8 + 88), (int32_t)setSwitch2Ctr, v28, v29);
                    setPreBattleFormationCtr = this->fields.setPreBattleFormationCtr;
                    if ( !setPreBattleFormationCtr
                      || (v3 = sub_1B864F4(this->fields.setPreBattleFormationCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                    {
                      if ( *v9 <= 8u )
                        goto LABEL_69;
                      *(_QWORD *)(v8 + 96) = setPreBattleFormationCtr;
                      sub_1B8635C((CGThumbnailListItem_o *)(v8 + 96), (int32_t)setPreBattleFormationCtr, v31, v32);
                      setAdvantageClassAutoCtr = this->fields.setAdvantageClassAutoCtr;
                      if ( !setAdvantageClassAutoCtr
                        || (v3 = sub_1B864F4(this->fields.setAdvantageClassAutoCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                      {
                        if ( *v9 <= 9u )
                          goto LABEL_69;
                        *(_QWORD *)(v8 + 104) = setAdvantageClassAutoCtr;
                        sub_1B8635C((CGThumbnailListItem_o *)(v8 + 104), (int32_t)setAdvantageClassAutoCtr, v34, v35);
                        setAutoSelectPartyCtr = this->fields.setAutoSelectPartyCtr;
                        if ( !setAutoSelectPartyCtr
                          || (v3 = sub_1B864F4(this->fields.setAutoSelectPartyCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                        {
                          if ( *v9 <= 0xAu )
                            goto LABEL_69;
                          *(_QWORD *)(v8 + 112) = setAutoSelectPartyCtr;
                          sub_1B8635C((CGThumbnailListItem_o *)(v8 + 112), (int32_t)setAutoSelectPartyCtr, v37, v38);
                          setAutoOpenAutoOrganizationDialogCtr = this->fields.setAutoOpenAutoOrganizationDialogCtr;
                          if ( !setAutoOpenAutoOrganizationDialogCtr
                            || (v3 = sub_1B864F4(
                                       this->fields.setAutoOpenAutoOrganizationDialogCtr,
                                       *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                          {
                            if ( *v9 <= 0xBu )
                              goto LABEL_69;
                            *(_QWORD *)(v8 + 120) = setAutoOpenAutoOrganizationDialogCtr;
                            sub_1B8635C(
                              (CGThumbnailListItem_o *)(v8 + 120),
                              (int32_t)setAutoOpenAutoOrganizationDialogCtr,
                              v40,
                              v41);
                            setTDPlaySpeedCtr = this->fields.setTDPlaySpeedCtr;
                            if ( !setTDPlaySpeedCtr
                              || (v3 = sub_1B864F4(this->fields.setTDPlaySpeedCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                            {
                              if ( *v9 <= 0xCu )
                                goto LABEL_69;
                              *(_QWORD *)(v8 + 128) = setTDPlaySpeedCtr;
                              sub_1B8635C((CGThumbnailListItem_o *)(v8 + 128), (int32_t)setTDPlaySpeedCtr, v43, v44);
                              setRandomLimitCountCtr = this->fields.setRandomLimitCountCtr;
                              if ( !setRandomLimitCountCtr
                                || (v3 = sub_1B864F4(
                                           this->fields.setRandomLimitCountCtr,
                                           *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                              {
                                if ( *v9 <= 0xDu )
                                  goto LABEL_69;
                                *(_QWORD *)(v8 + 136) = setRandomLimitCountCtr;
                                sub_1B8635C(
                                  (CGThumbnailListItem_o *)(v8 + 136),
                                  (int32_t)setRandomLimitCountCtr,
                                  v46,
                                  v47);
                                setRandomLimitCountResetCtr = this->fields.setRandomLimitCountResetCtr;
                                if ( !setRandomLimitCountResetCtr
                                  || (v3 = sub_1B864F4(
                                             this->fields.setRandomLimitCountResetCtr,
                                             *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                {
                                  if ( *v9 <= 0xEu )
                                    goto LABEL_69;
                                  *(_QWORD *)(v8 + 144) = setRandomLimitCountResetCtr;
                                  sub_1B8635C(
                                    (CGThumbnailListItem_o *)(v8 + 144),
                                    (int32_t)setRandomLimitCountResetCtr,
                                    v49,
                                    v50);
                                  setSvtRandCtr = this->fields.setSvtRandCtr;
                                  if ( !setSvtRandCtr
                                    || (v3 = sub_1B864F4(this->fields.setSvtRandCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                  {
                                    if ( *v9 <= 0xFu )
                                      goto LABEL_69;
                                    *(_QWORD *)(v8 + 152) = setSvtRandCtr;
                                    sub_1B8635C((CGThumbnailListItem_o *)(v8 + 152), (int32_t)setSvtRandCtr, v52, v53);
                                    setMessageDispCtr = this->fields.setMessageDispCtr;
                                    if ( !setMessageDispCtr
                                      || (v3 = sub_1B864F4(
                                                 this->fields.setMessageDispCtr,
                                                 *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                    {
                                      if ( *v9 <= 0x10u )
                                        goto LABEL_69;
                                      *(_QWORD *)(v8 + 160) = setMessageDispCtr;
                                      sub_1B8635C(
                                        (CGThumbnailListItem_o *)(v8 + 160),
                                        (int32_t)setMessageDispCtr,
                                        v55,
                                        v56);
                                      setNoticeCtr = this->fields.setNoticeCtr;
                                      if ( !setNoticeCtr
                                        || (v3 = sub_1B864F4(
                                                   this->fields.setNoticeCtr,
                                                   *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                      {
                                        if ( *v9 <= 0x11u )
                                          goto LABEL_69;
                                        *(_QWORD *)(v8 + 168) = setNoticeCtr;
                                        sub_1B8635C(
                                          (CGThumbnailListItem_o *)(v8 + 168),
                                          (int32_t)setNoticeCtr,
                                          v58,
                                          v59);
                                        setPlayOpeningMovieCtr = this->fields.setPlayOpeningMovieCtr;
                                        if ( !setPlayOpeningMovieCtr
                                          || (v3 = sub_1B864F4(
                                                     this->fields.setPlayOpeningMovieCtr,
                                                     *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                        {
                                          if ( *v9 <= 0x12u )
                                            goto LABEL_69;
                                          *(_QWORD *)(v8 + 176) = setPlayOpeningMovieCtr;
                                          sub_1B8635C(
                                            (CGThumbnailListItem_o *)(v8 + 176),
                                            (int32_t)setPlayOpeningMovieCtr,
                                            v61,
                                            v62);
                                          fullDlCtr = this->fields.fullDlCtr;
                                          if ( !fullDlCtr
                                            || (v3 = sub_1B864F4(
                                                       this->fields.fullDlCtr,
                                                       *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                          {
                                            if ( *v9 <= 0x13u )
                                              goto LABEL_69;
                                            *(_QWORD *)(v8 + 184) = fullDlCtr;
                                            sub_1B8635C(
                                              (CGThumbnailListItem_o *)(v8 + 184),
                                              (int32_t)fullDlCtr,
                                              v64,
                                              v65);
                                            setBlackListCtr = this->fields.setBlackListCtr;
                                            if ( !setBlackListCtr
                                              || (v3 = sub_1B864F4(
                                                         this->fields.setBlackListCtr,
                                                         *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                            {
                                              if ( *v9 > 0x14u )
                                              {
                                                *(_QWORD *)(v8 + 192) = setBlackListCtr;
                                                p_contentsArray = (CGThumbnailListItem_o *)&this->fields.contentsArray;
                                                sub_1B8635C(
                                                  (CGThumbnailListItem_o *)(v8 + 192),
                                                  (int32_t)setBlackListCtr,
                                                  v67,
                                                  v68);
                                                p_contentsArray->klass = (CGThumbnailListItem_c *)v8;
                                                sub_1B8635C(p_contentsArray, v8, v71, v72);
                                                return;
                                              }
LABEL_69:
                                              sub_1B8661C(v3, v4);
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
    v73 = sub_1B86638();
    sub_1B864E0(v73, 0LL);
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

  if ( (byte_4A49641 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A49641 = 1;
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
        sub_1B8661C(gameObject, v4);
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
    sub_1B86614(gameObject, v4);
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
    sub_1B86614(0LL, isEnabled);
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

  if ( (byte_4A49642 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, method);
    byte_4A49642 = 1;
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
    sub_1B86614(hidePos, method);
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

  if ( (byte_4A49643 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_GameOptionContentBase__TypeInfo, callback);
    sub_1B863B8(&Method_BasicHelper_ForEach_GameOptionContentBase___, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_GameOptionContentBase___, v6);
    sub_1B863B8(&System_Func_GameOptionContentBase__bool__TypeInfo, v7);
    sub_1B863B8(&OptionManager_TypeInfo, v8);
    sub_1B863B8(&SoundManager_TypeInfo, v9);
    sub_1B863B8(&Method_SetGameOptionComponent___c__reflectionGameOption_b__40_0__, v10);
    sub_1B863B8(&Method_SetGameOptionComponent___c__reflectionGameOption_b__40_1__, v11);
    sub_1B863B8(&SetGameOptionComponent___c_TypeInfo, v12);
    byte_4A49643 = 1;
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
    _9__40_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_GameOptionContentBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__40_0,
      v16,
      Method_SetGameOptionComponent___c__reflectionGameOption_b__40_0__,
      0LL);
    static_fields = SetGameOptionComponent___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Func_GameOptionContentBase__bool__o *)_9__40_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__40_0, (int32_t)_9__40_0, v18, v19);
  }
  v20 = System_Linq_Enumerable__Where_object_(
          contentsArray,
          (System_Func_TSource__bool__o *)_9__40_0,
          (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_GameOptionContentBase___);
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
    _9__40_1 = (System_Action_object__o *)sub_1B86604(System_Action_GameOptionContentBase__TypeInfo);
    System_Action_object____ctor(_9__40_1, v24, Method_SetGameOptionComponent___c__reflectionGameOption_b__40_1__, 0LL);
    v25 = SetGameOptionComponent___c_TypeInfo->static_fields;
    v25->__9__40_1 = (struct System_Action_GameOptionContentBase__o *)_9__40_1;
    sub_1B8635C((CGThumbnailListItem_o *)&v25->__9__40_1, (int32_t)_9__40_1, v26, v27);
  }
  BasicHelper__ForEach_object_(
    v22,
    (System_Action_T__o *)_9__40_1,
    (const MethodInfo_2F59FB0 *)Method_BasicHelper_ForEach_GameOptionContentBase___);
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

  if ( (byte_4A4963F & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AtlasManager_TypeInfo, v3);
    sub_1B863B8(&Method_SetGameOptionComponent__showGameOption_b__36_0__, v4);
    byte_4A4963F = 1;
  }
  bgTxtSprite = this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0LL),
        bgTxtSprite = (struct UISprite_o *)BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject) )
  {
    sub_1B86614(bgTxtSprite, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  v7 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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

  if ( (byte_4A49644 & 1) == 0 )
  {
    sub_1B863B8(&SetGameOptionComponent___c_TypeInfo, v1);
    byte_4A49644 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(SetGameOptionComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SetGameOptionComponent___c_TypeInfo->static_fields->__9 = (struct SetGameOptionComponent___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)SetGameOptionComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B86614(this, 0LL);
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
    sub_1B86614(this, 0LL);
  ((void (__fastcall *)(GameOptionContentBase_o *, Il2CppMethodPointer))x->klass->vtable._5_Reflection.method)(
    x,
    x->klass->vtable._6_IsAvailable.methodPtr);
}