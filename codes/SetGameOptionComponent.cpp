void SetGameOptionComponent___ctor(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetGameOptionComponent__Awake(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  ;
}


void SetGameOptionComponent__CreateContentsArrayIfNotYet(SetGameOptionComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4CB12B9 & 1) == 0 )
  {
    sub_1C6BA08(&GameOptionContentBase___TypeInfo);
    byte_4CB12B9 = 1;
  }
  if ( !this->fields.contentsArray )
  {
    v3 = sub_1C6BAB0(GameOptionContentBase___TypeInfo, 21);
    if ( !v3 )
      sub_1C6BC60(0, v4);
    setResolutionOptionCtr = this->fields.setResolutionOptionCtr;
    v8 = v3;
    if ( !setResolutionOptionCtr
      || (v3 = sub_1C6BB44(this->fields.setResolutionOptionCtr, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
    {
      v9 = (_DWORD *)(v8 + 24);
      if ( !*(_DWORD *)(v8 + 24) )
        goto LABEL_69;
      *(_QWORD *)(v8 + 32) = setResolutionOptionCtr;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 32), (int32_t)setResolutionOptionCtr, v5, v6);
      setSmoothnessCtr = this->fields.setSmoothnessCtr;
      if ( !setSmoothnessCtr
        || (v3 = sub_1C6BB44(this->fields.setSmoothnessCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
      {
        if ( *v9 <= 1u )
          goto LABEL_69;
        *(_QWORD *)(v8 + 40) = setSmoothnessCtr;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 40), (int32_t)setSmoothnessCtr, v10, v11);
        setVolCtr = this->fields.setVolCtr;
        if ( !setVolCtr || (v3 = sub_1C6BB44(this->fields.setVolCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
        {
          if ( *v9 <= 2u )
            goto LABEL_69;
          *(_QWORD *)(v8 + 48) = setVolCtr;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 48), (int32_t)setVolCtr, v13, v14);
          setScenarioTextSpeedCtr = this->fields.setScenarioTextSpeedCtr;
          if ( !setScenarioTextSpeedCtr
            || (v3 = sub_1C6BB44(this->fields.setScenarioTextSpeedCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
          {
            if ( *v9 <= 3u )
              goto LABEL_69;
            *(_QWORD *)(v8 + 56) = setScenarioTextSpeedCtr;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 56), (int32_t)setScenarioTextSpeedCtr, v16, v17);
            setScenarioCtr = this->fields.setScenarioCtr;
            if ( !setScenarioCtr
              || (v3 = sub_1C6BB44(this->fields.setScenarioCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
            {
              if ( *v9 <= 4u )
                goto LABEL_69;
              *(_QWORD *)(v8 + 64) = setScenarioCtr;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 64), (int32_t)setScenarioCtr, v19, v20);
              setSpoilerProtectionCtr = this->fields.setSpoilerProtectionCtr;
              if ( !setSpoilerProtectionCtr
                || (v3 = sub_1C6BB44(this->fields.setSpoilerProtectionCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
              {
                if ( *v9 <= 5u )
                  goto LABEL_69;
                *(_QWORD *)(v8 + 72) = setSpoilerProtectionCtr;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 72), (int32_t)setSpoilerProtectionCtr, v22, v23);
                setSwitchCtr = this->fields.setSwitchCtr;
                if ( !setSwitchCtr
                  || (v3 = sub_1C6BB44(this->fields.setSwitchCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                {
                  if ( *v9 <= 6u )
                    goto LABEL_69;
                  *(_QWORD *)(v8 + 80) = setSwitchCtr;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 80), (int32_t)setSwitchCtr, v25, v26);
                  setSwitch2Ctr = this->fields.setSwitch2Ctr;
                  if ( !setSwitch2Ctr
                    || (v3 = sub_1C6BB44(this->fields.setSwitch2Ctr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                  {
                    if ( *v9 <= 7u )
                      goto LABEL_69;
                    *(_QWORD *)(v8 + 88) = setSwitch2Ctr;
                    sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 88), (int32_t)setSwitch2Ctr, v28, v29);
                    setPreBattleFormationCtr = this->fields.setPreBattleFormationCtr;
                    if ( !setPreBattleFormationCtr
                      || (v3 = sub_1C6BB44(this->fields.setPreBattleFormationCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                    {
                      if ( *v9 <= 8u )
                        goto LABEL_69;
                      *(_QWORD *)(v8 + 96) = setPreBattleFormationCtr;
                      sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 96), (int32_t)setPreBattleFormationCtr, v31, v32);
                      setAdvantageClassAutoCtr = this->fields.setAdvantageClassAutoCtr;
                      if ( !setAdvantageClassAutoCtr
                        || (v3 = sub_1C6BB44(this->fields.setAdvantageClassAutoCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                      {
                        if ( *v9 <= 9u )
                          goto LABEL_69;
                        *(_QWORD *)(v8 + 104) = setAdvantageClassAutoCtr;
                        sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 104), (int32_t)setAdvantageClassAutoCtr, v34, v35);
                        setAutoSelectPartyCtr = this->fields.setAutoSelectPartyCtr;
                        if ( !setAutoSelectPartyCtr
                          || (v3 = sub_1C6BB44(this->fields.setAutoSelectPartyCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                        {
                          if ( *v9 <= 0xAu )
                            goto LABEL_69;
                          *(_QWORD *)(v8 + 112) = setAutoSelectPartyCtr;
                          sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 112), (int32_t)setAutoSelectPartyCtr, v37, v38);
                          setAutoOpenAutoOrganizationDialogCtr = this->fields.setAutoOpenAutoOrganizationDialogCtr;
                          if ( !setAutoOpenAutoOrganizationDialogCtr
                            || (v3 = sub_1C6BB44(
                                       this->fields.setAutoOpenAutoOrganizationDialogCtr,
                                       *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                          {
                            if ( *v9 <= 0xBu )
                              goto LABEL_69;
                            *(_QWORD *)(v8 + 120) = setAutoOpenAutoOrganizationDialogCtr;
                            sub_1C6B9AC(
                              (CGThumbnailListItem_o *)(v8 + 120),
                              (int32_t)setAutoOpenAutoOrganizationDialogCtr,
                              v40,
                              v41);
                            setTDPlaySpeedCtr = this->fields.setTDPlaySpeedCtr;
                            if ( !setTDPlaySpeedCtr
                              || (v3 = sub_1C6BB44(this->fields.setTDPlaySpeedCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                            {
                              if ( *v9 <= 0xCu )
                                goto LABEL_69;
                              *(_QWORD *)(v8 + 128) = setTDPlaySpeedCtr;
                              sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 128), (int32_t)setTDPlaySpeedCtr, v43, v44);
                              setRandomLimitCountCtr = this->fields.setRandomLimitCountCtr;
                              if ( !setRandomLimitCountCtr
                                || (v3 = sub_1C6BB44(
                                           this->fields.setRandomLimitCountCtr,
                                           *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                              {
                                if ( *v9 <= 0xDu )
                                  goto LABEL_69;
                                *(_QWORD *)(v8 + 136) = setRandomLimitCountCtr;
                                sub_1C6B9AC(
                                  (CGThumbnailListItem_o *)(v8 + 136),
                                  (int32_t)setRandomLimitCountCtr,
                                  v46,
                                  v47);
                                setRandomLimitCountResetCtr = this->fields.setRandomLimitCountResetCtr;
                                if ( !setRandomLimitCountResetCtr
                                  || (v3 = sub_1C6BB44(
                                             this->fields.setRandomLimitCountResetCtr,
                                             *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                {
                                  if ( *v9 <= 0xEu )
                                    goto LABEL_69;
                                  *(_QWORD *)(v8 + 144) = setRandomLimitCountResetCtr;
                                  sub_1C6B9AC(
                                    (CGThumbnailListItem_o *)(v8 + 144),
                                    (int32_t)setRandomLimitCountResetCtr,
                                    v49,
                                    v50);
                                  setSvtRandCtr = this->fields.setSvtRandCtr;
                                  if ( !setSvtRandCtr
                                    || (v3 = sub_1C6BB44(this->fields.setSvtRandCtr, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                  {
                                    if ( *v9 <= 0xFu )
                                      goto LABEL_69;
                                    *(_QWORD *)(v8 + 152) = setSvtRandCtr;
                                    sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 152), (int32_t)setSvtRandCtr, v52, v53);
                                    setMessageDispCtr = this->fields.setMessageDispCtr;
                                    if ( !setMessageDispCtr
                                      || (v3 = sub_1C6BB44(
                                                 this->fields.setMessageDispCtr,
                                                 *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                    {
                                      if ( *v9 <= 0x10u )
                                        goto LABEL_69;
                                      *(_QWORD *)(v8 + 160) = setMessageDispCtr;
                                      sub_1C6B9AC(
                                        (CGThumbnailListItem_o *)(v8 + 160),
                                        (int32_t)setMessageDispCtr,
                                        v55,
                                        v56);
                                      setNoticeCtr = this->fields.setNoticeCtr;
                                      if ( !setNoticeCtr
                                        || (v3 = sub_1C6BB44(
                                                   this->fields.setNoticeCtr,
                                                   *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                      {
                                        if ( *v9 <= 0x11u )
                                          goto LABEL_69;
                                        *(_QWORD *)(v8 + 168) = setNoticeCtr;
                                        sub_1C6B9AC(
                                          (CGThumbnailListItem_o *)(v8 + 168),
                                          (int32_t)setNoticeCtr,
                                          v58,
                                          v59);
                                        setPlayOpeningMovieCtr = this->fields.setPlayOpeningMovieCtr;
                                        if ( !setPlayOpeningMovieCtr
                                          || (v3 = sub_1C6BB44(
                                                     this->fields.setPlayOpeningMovieCtr,
                                                     *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                        {
                                          if ( *v9 <= 0x12u )
                                            goto LABEL_69;
                                          *(_QWORD *)(v8 + 176) = setPlayOpeningMovieCtr;
                                          sub_1C6B9AC(
                                            (CGThumbnailListItem_o *)(v8 + 176),
                                            (int32_t)setPlayOpeningMovieCtr,
                                            v61,
                                            v62);
                                          fullDlCtr = this->fields.fullDlCtr;
                                          if ( !fullDlCtr
                                            || (v3 = sub_1C6BB44(
                                                       this->fields.fullDlCtr,
                                                       *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                          {
                                            if ( *v9 <= 0x13u )
                                              goto LABEL_69;
                                            *(_QWORD *)(v8 + 184) = fullDlCtr;
                                            sub_1C6B9AC(
                                              (CGThumbnailListItem_o *)(v8 + 184),
                                              (int32_t)fullDlCtr,
                                              v64,
                                              v65);
                                            setBlackListCtr = this->fields.setBlackListCtr;
                                            if ( !setBlackListCtr
                                              || (v3 = sub_1C6BB44(
                                                         this->fields.setBlackListCtr,
                                                         *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
                                            {
                                              if ( *v9 > 0x14u )
                                              {
                                                *(_QWORD *)(v8 + 192) = setBlackListCtr;
                                                p_contentsArray = (CGThumbnailListItem_o *)&this->fields.contentsArray;
                                                sub_1C6B9AC(
                                                  (CGThumbnailListItem_o *)(v8 + 192),
                                                  (int32_t)setBlackListCtr,
                                                  v67,
                                                  v68);
                                                p_contentsArray->klass = (CGThumbnailListItem_c *)v8;
                                                sub_1C6B9AC(p_contentsArray, v8, v71, v72);
                                                return;
                                              }
LABEL_69:
                                              sub_1C6BC68(v3);
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
    v73 = sub_1C6BC84();
    sub_1C6BB30(v73, 0);
  }
}


void SetGameOptionComponent__InitGameOption(SetGameOptionComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4CB12BA & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB12BA = 1;
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
        sub_1C6BC68(gameObject);
      v9 = contentsArray->m_Items[v7];
      if ( !v9 )
        break;
      v10 = ((__int64 (__fastcall *)(GameOptionContentBase_o *, const MethodInfo *))v9->klass->vtable._6_IsAvailable.methodPtr)(
              v9,
              v9->klass->vtable._6_IsAvailable.method);
      GameOptionContentBase__Show(v9, v10 & 1, v11);
      if ( (v10 & 1) != 0 )
      {
        ((void (__fastcall *)(GameOptionContentBase_o *, const MethodInfo *))v9->klass->vtable._4_Init.methodPtr)(
          v9,
          v9->klass->vtable._4_Init.method);
        GameOptionContentBase__SetPosY(v9, v8, v12);
        v8 = v8 - (float)v9->fields.contentHeight;
      }
      max_length = contentsArray->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_13;
    }
LABEL_21:
    sub_1C6BC60(gameObject, v4);
  }
  v8 = 160.0;
LABEL_13:
  collider = (UnityEngine_Object_o *)this->fields.collider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(collider, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v14 = this->fields.collider;
    if ( !v14 )
      goto LABEL_21;
    v15 = 160.0 - v8;
    LODWORD(v17.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0);
    v17.fields.z = 0.0;
    v17.fields.y = v15;
    UnityEngine_BoxCollider__set_size(v14, v17, 0);
    v16 = this->fields.collider;
    if ( !v16 )
      goto LABEL_21;
    LODWORD(v18.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_center(this->fields.collider, 0);
    v18.fields.y = (float)(v15 * -0.5) + 160.0;
    v18.fields.z = 0.0;
    UnityEngine_BoxCollider__set_center(v16, v18, 0);
  }
  this->fields._optionSceneType_k__BackingField = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void SetGameOptionComponent__SetMaskEnabled(SetGameOptionComponent_o *this, bool isEnabled, const MethodInfo *method)
{
  UnityEngine_GameObject_o *optionMask; // x0

  optionMask = this->fields.optionMask;
  if ( !optionMask )
    sub_1C6BC60(0, isEnabled);
  UnityEngine_GameObject__SetActive(optionMask, isEnabled, 0);
}


int32_t SetGameOptionComponent__get_optionSceneType(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  return this->fields._optionSceneType_k__BackingField;
}


void SetGameOptionComponent__hideGameOption(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *hidePos; // x0
  UnityEngine_GameObject_o *optionObj; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB12BB & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    byte_4CB12BB = 1;
  }
  hidePos = this->fields.hidePos;
  if ( !hidePos
    || (optionObj = this->fields.optionObj,
        (hidePos = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(hidePos, 0)) == 0)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)hidePos, 0),
        GameObjectExtensions__SetLocalPosition(optionObj, localPosition, 0),
        (hidePos = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0)
    || (UnityEngine_GameObject__SetActive(hidePos, 0, 0),
        (hidePos = (UnityEngine_GameObject_o *)this->fields.optionScroll) == 0) )
  {
    sub_1C6BC60(hidePos, method);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, Il2CppClass *, float, float))hidePos->klass[1]._1.declaringType)(
    hidePos,
    0,
    hidePos->klass[1]._1.parent,
    0.0,
    0.0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseMyRoomAtlas(0);
}


void SetGameOptionComponent__reflectionGameOption(
        SetGameOptionComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  SetGameOptionComponent___c_c *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *contentsArray; // x20
  System_Func_object__bool__o *_9__40_0; // x21
  Il2CppObject *v8; // x22
  struct SetGameOptionComponent___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  SetGameOptionComponent___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_T__o *v14; // x20
  System_Action_object__o *_9__40_1; // x21
  Il2CppObject *v16; // x22
  struct SetGameOptionComponent___c_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4CB12BC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_GameOptionContentBase__TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_GameOptionContentBase___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_GameOptionContentBase___);
    sub_1C6BA08(&System_Func_GameOptionContentBase__bool__TypeInfo);
    sub_1C6BA08(&OptionManager_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&Method_SetGameOptionComponent___c__reflectionGameOption_b__40_0__);
    sub_1C6BA08(&Method_SetGameOptionComponent___c__reflectionGameOption_b__40_1__);
    sub_1C6BA08(&SetGameOptionComponent___c_TypeInfo);
    byte_4CB12BC = 1;
  }
  v5 = SetGameOptionComponent___c_TypeInfo;
  contentsArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.contentsArray;
  if ( !SetGameOptionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetGameOptionComponent___c_TypeInfo);
    v5 = SetGameOptionComponent___c_TypeInfo;
  }
  _9__40_0 = (System_Func_object__bool__o *)v5->static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = SetGameOptionComponent___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__40_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_GameOptionContentBase__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__40_0, v8, Method_SetGameOptionComponent___c__reflectionGameOption_b__40_0__, 0);
    static_fields = SetGameOptionComponent___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Func_GameOptionContentBase__bool__o *)_9__40_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__40_0, (int32_t)_9__40_0, v10, v11);
  }
  v12 = System_Linq_Enumerable__Where_object_(
          contentsArray,
          (System_Func_TSource__bool__o *)_9__40_0,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_GameOptionContentBase___);
  v13 = SetGameOptionComponent___c_TypeInfo;
  v14 = (System_Collections_Generic_IEnumerable_T__o *)v12;
  if ( !SetGameOptionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetGameOptionComponent___c_TypeInfo);
    v13 = SetGameOptionComponent___c_TypeInfo;
  }
  _9__40_1 = (System_Action_object__o *)v13->static_fields->__9__40_1;
  if ( !_9__40_1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = SetGameOptionComponent___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__40_1 = (System_Action_object__o *)sub_1C6BC54(System_Action_GameOptionContentBase__TypeInfo);
    System_Action_object____ctor(_9__40_1, v16, Method_SetGameOptionComponent___c__reflectionGameOption_b__40_1__, 0);
    v17 = SetGameOptionComponent___c_TypeInfo->static_fields;
    v17->__9__40_1 = (struct System_Action_GameOptionContentBase__o *)_9__40_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v17->__9__40_1, (int32_t)_9__40_1, v18, v19);
  }
  BasicHelper__ForEach_object_(
    v14,
    (System_Action_T__o *)_9__40_1,
    (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_GameOptionContentBase___);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe(0.0, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SaveData(callback, 0);
}


void SetGameOptionComponent__set_optionSceneType(
        SetGameOptionComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._optionSceneType_k__BackingField = value;
}


void SetGameOptionComponent__showGameOption(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  struct UISprite_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v5; // x20

  if ( (byte_4CB12B8 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_SetGameOptionComponent__showGameOption_b__36_0__);
    byte_4CB12B8 = 1;
  }
  bgTxtSprite = this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0),
        bgTxtSprite = (struct UISprite_o *)BgTxtManager__IsActiveBgTxt(0),
        !gameObject) )
  {
    sub_1C6BC60(bgTxtSprite, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0);
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SetGameOptionComponent__showGameOption_b__36_0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadMyRoomAtlas(v5, 1, 0);
}


void SetGameOptionComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB12BD & 1) == 0 )
  {
    sub_1C6BA08(&SetGameOptionComponent___c_TypeInfo);
    byte_4CB12BD = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(SetGameOptionComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SetGameOptionComponent___c_TypeInfo->static_fields->__9 = (struct SetGameOptionComponent___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)SetGameOptionComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SetGameOptionComponent___c___ctor(SetGameOptionComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SetGameOptionComponent___c___reflectionGameOption_b__40_0(
        SetGameOptionComponent___c_o *this,
        GameOptionContentBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return ((__int64 (__fastcall *)(GameOptionContentBase_o *, const MethodInfo *))x->klass->vtable._6_IsAvailable.methodPtr)(
           x,
           x->klass->vtable._6_IsAvailable.method);
}


void SetGameOptionComponent___c___reflectionGameOption_b__40_1(
        SetGameOptionComponent___c_o *this,
        GameOptionContentBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  ((void (__fastcall *)(GameOptionContentBase_o *, const MethodInfo *))x->klass->vtable._5_Reflection.methodPtr)(
    x,
    x->klass->vtable._5_Reflection.method);
}