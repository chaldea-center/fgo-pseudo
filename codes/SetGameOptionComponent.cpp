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
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct SetResolutionOptionControl_o *setResolutionOptionCtr; // x21
  __int64 v7; // x20
  _DWORD *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct SetSmoothnessControl_o *setSmoothnessCtr; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct SetVolumeControl_o *setVolCtr; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct SetScenarioTextSpeedControl_o *setScenarioTextSpeedCtr; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct SetScenarioControl_o *setScenarioCtr; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct SetSpoilerProtectionControl_o *setSpoilerProtectionCtr; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct SetSwitchOptionControl_o *setSwitchCtr; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct SetSwitch2OptionControl_o *setSwitch2Ctr; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct SetPreBattleFormationControl_o *setPreBattleFormationCtr; // x21
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct SetAdvantageClassAutoOptionControl_o *setAdvantageClassAutoCtr; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct SetAutoSelectPartyOptionControl_o *setAutoSelectPartyCtr; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct SetAutoOpenAutoOrganizationDialogOptionControl_o *setAutoOpenAutoOrganizationDialogCtr; // x21
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct SetTDPlaySpeedControl_o *setTDPlaySpeedCtr; // x21
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct SetRandomLimitCountOptionControl_o *setRandomLimitCountCtr; // x21
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct SetRandomLimitCountResetOptionControl_o *setRandomLimitCountResetCtr; // x21
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct SetSvtRandOptionControl_o *setSvtRandCtr; // x21
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct SetMessageDispOptionControl_o *setMessageDispCtr; // x21
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct SetNoticeOptionControl_o *setNoticeCtr; // x21
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct SetPlayOpeningMovieOptionControl_o *setPlayOpeningMovieCtr; // x21
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  struct FullDownloadControl_o *fullDlCtr; // x21
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  struct SetBlacklistOptionControl_o *setBlackListCtr; // x21
  CGThumbnailListItem_o *p_contentsArray; // x19
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  __int64 v72; // x0

  if ( (byte_4C3DFF1 & 1) == 0 )
  {
    sub_1C37058(&GameOptionContentBase___TypeInfo);
    byte_4C3DFF1 = 1;
  }
  if ( !this->fields.contentsArray )
  {
    v3 = sub_1C37100(GameOptionContentBase___TypeInfo, 21);
    if ( !v3 )
      sub_1C372B4(0);
    setResolutionOptionCtr = this->fields.setResolutionOptionCtr;
    v7 = v3;
    if ( !setResolutionOptionCtr
      || (v3 = sub_1C37194(this->fields.setResolutionOptionCtr, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
    {
      v8 = (_DWORD *)(v7 + 24);
      if ( !*(_DWORD *)(v7 + 24) )
        goto LABEL_69;
      *(_QWORD *)(v7 + 32) = setResolutionOptionCtr;
      sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)setResolutionOptionCtr, v4, v5);
      setSmoothnessCtr = this->fields.setSmoothnessCtr;
      if ( !setSmoothnessCtr
        || (v3 = sub_1C37194(this->fields.setSmoothnessCtr, *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
      {
        if ( *v8 <= 1u )
          goto LABEL_69;
        *(_QWORD *)(v7 + 40) = setSmoothnessCtr;
        sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)setSmoothnessCtr, v9, v10);
        setVolCtr = this->fields.setVolCtr;
        if ( !setVolCtr || (v3 = sub_1C37194(this->fields.setVolCtr, *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
        {
          if ( *v8 <= 2u )
            goto LABEL_69;
          *(_QWORD *)(v7 + 48) = setVolCtr;
          sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 48), (int32_t)setVolCtr, v12, v13);
          setScenarioTextSpeedCtr = this->fields.setScenarioTextSpeedCtr;
          if ( !setScenarioTextSpeedCtr
            || (v3 = sub_1C37194(this->fields.setScenarioTextSpeedCtr, *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
          {
            if ( *v8 <= 3u )
              goto LABEL_69;
            *(_QWORD *)(v7 + 56) = setScenarioTextSpeedCtr;
            sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 56), (int32_t)setScenarioTextSpeedCtr, v15, v16);
            setScenarioCtr = this->fields.setScenarioCtr;
            if ( !setScenarioCtr
              || (v3 = sub_1C37194(this->fields.setScenarioCtr, *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
            {
              if ( *v8 <= 4u )
                goto LABEL_69;
              *(_QWORD *)(v7 + 64) = setScenarioCtr;
              sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 64), (int32_t)setScenarioCtr, v18, v19);
              setSpoilerProtectionCtr = this->fields.setSpoilerProtectionCtr;
              if ( !setSpoilerProtectionCtr
                || (v3 = sub_1C37194(this->fields.setSpoilerProtectionCtr, *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
              {
                if ( *v8 <= 5u )
                  goto LABEL_69;
                *(_QWORD *)(v7 + 72) = setSpoilerProtectionCtr;
                sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 72), (int32_t)setSpoilerProtectionCtr, v21, v22);
                setSwitchCtr = this->fields.setSwitchCtr;
                if ( !setSwitchCtr
                  || (v3 = sub_1C37194(this->fields.setSwitchCtr, *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
                {
                  if ( *v8 <= 6u )
                    goto LABEL_69;
                  *(_QWORD *)(v7 + 80) = setSwitchCtr;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 80), (int32_t)setSwitchCtr, v24, v25);
                  setSwitch2Ctr = this->fields.setSwitch2Ctr;
                  if ( !setSwitch2Ctr
                    || (v3 = sub_1C37194(this->fields.setSwitch2Ctr, *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
                  {
                    if ( *v8 <= 7u )
                      goto LABEL_69;
                    *(_QWORD *)(v7 + 88) = setSwitch2Ctr;
                    sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 88), (int32_t)setSwitch2Ctr, v27, v28);
                    setPreBattleFormationCtr = this->fields.setPreBattleFormationCtr;
                    if ( !setPreBattleFormationCtr
                      || (v3 = sub_1C37194(this->fields.setPreBattleFormationCtr, *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
                    {
                      if ( *v8 <= 8u )
                        goto LABEL_69;
                      *(_QWORD *)(v7 + 96) = setPreBattleFormationCtr;
                      sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 96), (int32_t)setPreBattleFormationCtr, v30, v31);
                      setAdvantageClassAutoCtr = this->fields.setAdvantageClassAutoCtr;
                      if ( !setAdvantageClassAutoCtr
                        || (v3 = sub_1C37194(this->fields.setAdvantageClassAutoCtr, *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
                      {
                        if ( *v8 <= 9u )
                          goto LABEL_69;
                        *(_QWORD *)(v7 + 104) = setAdvantageClassAutoCtr;
                        sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 104), (int32_t)setAdvantageClassAutoCtr, v33, v34);
                        setAutoSelectPartyCtr = this->fields.setAutoSelectPartyCtr;
                        if ( !setAutoSelectPartyCtr
                          || (v3 = sub_1C37194(this->fields.setAutoSelectPartyCtr, *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
                        {
                          if ( *v8 <= 0xAu )
                            goto LABEL_69;
                          *(_QWORD *)(v7 + 112) = setAutoSelectPartyCtr;
                          sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 112), (int32_t)setAutoSelectPartyCtr, v36, v37);
                          setAutoOpenAutoOrganizationDialogCtr = this->fields.setAutoOpenAutoOrganizationDialogCtr;
                          if ( !setAutoOpenAutoOrganizationDialogCtr
                            || (v3 = sub_1C37194(
                                       this->fields.setAutoOpenAutoOrganizationDialogCtr,
                                       *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
                          {
                            if ( *v8 <= 0xBu )
                              goto LABEL_69;
                            *(_QWORD *)(v7 + 120) = setAutoOpenAutoOrganizationDialogCtr;
                            sub_1C36FFC(
                              (CGThumbnailListItem_o *)(v7 + 120),
                              (int32_t)setAutoOpenAutoOrganizationDialogCtr,
                              v39,
                              v40);
                            setTDPlaySpeedCtr = this->fields.setTDPlaySpeedCtr;
                            if ( !setTDPlaySpeedCtr
                              || (v3 = sub_1C37194(this->fields.setTDPlaySpeedCtr, *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
                            {
                              if ( *v8 <= 0xCu )
                                goto LABEL_69;
                              *(_QWORD *)(v7 + 128) = setTDPlaySpeedCtr;
                              sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 128), (int32_t)setTDPlaySpeedCtr, v42, v43);
                              setRandomLimitCountCtr = this->fields.setRandomLimitCountCtr;
                              if ( !setRandomLimitCountCtr
                                || (v3 = sub_1C37194(
                                           this->fields.setRandomLimitCountCtr,
                                           *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
                              {
                                if ( *v8 <= 0xDu )
                                  goto LABEL_69;
                                *(_QWORD *)(v7 + 136) = setRandomLimitCountCtr;
                                sub_1C36FFC(
                                  (CGThumbnailListItem_o *)(v7 + 136),
                                  (int32_t)setRandomLimitCountCtr,
                                  v45,
                                  v46);
                                setRandomLimitCountResetCtr = this->fields.setRandomLimitCountResetCtr;
                                if ( !setRandomLimitCountResetCtr
                                  || (v3 = sub_1C37194(
                                             this->fields.setRandomLimitCountResetCtr,
                                             *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
                                {
                                  if ( *v8 <= 0xEu )
                                    goto LABEL_69;
                                  *(_QWORD *)(v7 + 144) = setRandomLimitCountResetCtr;
                                  sub_1C36FFC(
                                    (CGThumbnailListItem_o *)(v7 + 144),
                                    (int32_t)setRandomLimitCountResetCtr,
                                    v48,
                                    v49);
                                  setSvtRandCtr = this->fields.setSvtRandCtr;
                                  if ( !setSvtRandCtr
                                    || (v3 = sub_1C37194(this->fields.setSvtRandCtr, *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
                                  {
                                    if ( *v8 <= 0xFu )
                                      goto LABEL_69;
                                    *(_QWORD *)(v7 + 152) = setSvtRandCtr;
                                    sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 152), (int32_t)setSvtRandCtr, v51, v52);
                                    setMessageDispCtr = this->fields.setMessageDispCtr;
                                    if ( !setMessageDispCtr
                                      || (v3 = sub_1C37194(
                                                 this->fields.setMessageDispCtr,
                                                 *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
                                    {
                                      if ( *v8 <= 0x10u )
                                        goto LABEL_69;
                                      *(_QWORD *)(v7 + 160) = setMessageDispCtr;
                                      sub_1C36FFC(
                                        (CGThumbnailListItem_o *)(v7 + 160),
                                        (int32_t)setMessageDispCtr,
                                        v54,
                                        v55);
                                      setNoticeCtr = this->fields.setNoticeCtr;
                                      if ( !setNoticeCtr
                                        || (v3 = sub_1C37194(
                                                   this->fields.setNoticeCtr,
                                                   *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
                                      {
                                        if ( *v8 <= 0x11u )
                                          goto LABEL_69;
                                        *(_QWORD *)(v7 + 168) = setNoticeCtr;
                                        sub_1C36FFC(
                                          (CGThumbnailListItem_o *)(v7 + 168),
                                          (int32_t)setNoticeCtr,
                                          v57,
                                          v58);
                                        setPlayOpeningMovieCtr = this->fields.setPlayOpeningMovieCtr;
                                        if ( !setPlayOpeningMovieCtr
                                          || (v3 = sub_1C37194(
                                                     this->fields.setPlayOpeningMovieCtr,
                                                     *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
                                        {
                                          if ( *v8 <= 0x12u )
                                            goto LABEL_69;
                                          *(_QWORD *)(v7 + 176) = setPlayOpeningMovieCtr;
                                          sub_1C36FFC(
                                            (CGThumbnailListItem_o *)(v7 + 176),
                                            (int32_t)setPlayOpeningMovieCtr,
                                            v60,
                                            v61);
                                          fullDlCtr = this->fields.fullDlCtr;
                                          if ( !fullDlCtr
                                            || (v3 = sub_1C37194(
                                                       this->fields.fullDlCtr,
                                                       *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
                                          {
                                            if ( *v8 <= 0x13u )
                                              goto LABEL_69;
                                            *(_QWORD *)(v7 + 184) = fullDlCtr;
                                            sub_1C36FFC(
                                              (CGThumbnailListItem_o *)(v7 + 184),
                                              (int32_t)fullDlCtr,
                                              v63,
                                              v64);
                                            setBlackListCtr = this->fields.setBlackListCtr;
                                            if ( !setBlackListCtr
                                              || (v3 = sub_1C37194(
                                                         this->fields.setBlackListCtr,
                                                         *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
                                            {
                                              if ( *v8 > 0x14u )
                                              {
                                                *(_QWORD *)(v7 + 192) = setBlackListCtr;
                                                p_contentsArray = (CGThumbnailListItem_o *)&this->fields.contentsArray;
                                                sub_1C36FFC(
                                                  (CGThumbnailListItem_o *)(v7 + 192),
                                                  (int32_t)setBlackListCtr,
                                                  v66,
                                                  v67);
                                                p_contentsArray->klass = (CGThumbnailListItem_c *)v7;
                                                sub_1C36FFC(p_contentsArray, v7, v70, v71);
                                                return;
                                              }
LABEL_69:
                                              sub_1C372BC(v3);
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
    v72 = sub_1C372D8();
    sub_1C37180(v72, 0);
  }
}


void SetGameOptionComponent__InitGameOption(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct GameOptionContentBase_array *contentsArray; // x22
  int max_length; // w8
  unsigned int v6; // w23
  float v7; // s8
  GameOptionContentBase_o *v8; // x20
  char v9; // w21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  UnityEngine_Object_o *collider; // x20
  UnityEngine_BoxCollider_o *v13; // x20
  float v14; // s8
  UnityEngine_BoxCollider_o *v15; // x20
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3DFF2 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DFF2 = 1;
  }
  SetGameOptionComponent__CreateContentsArrayIfNotYet(this, method);
  contentsArray = this->fields.contentsArray;
  if ( !contentsArray )
    goto LABEL_21;
  max_length = contentsArray->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    v7 = 160.0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C372BC(gameObject);
      v8 = contentsArray->m_Items[v6];
      if ( !v8 )
        break;
      v9 = ((__int64 (__fastcall *)(GameOptionContentBase_o *, const MethodInfo *))v8->klass->vtable._6_IsAvailable.methodPtr)(
             v8,
             v8->klass->vtable._6_IsAvailable.method);
      GameOptionContentBase__Show(v8, v9 & 1, v10);
      if ( (v9 & 1) != 0 )
      {
        ((void (__fastcall *)(GameOptionContentBase_o *, const MethodInfo *))v8->klass->vtable._4_Init.methodPtr)(
          v8,
          v8->klass->vtable._4_Init.method);
        GameOptionContentBase__SetPosY(v8, v7, v11);
        v7 = v7 - (float)v8->fields.contentHeight;
      }
      max_length = contentsArray->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_13;
    }
LABEL_21:
    sub_1C372B4(gameObject);
  }
  v7 = 160.0;
LABEL_13:
  collider = (UnityEngine_Object_o *)this->fields.collider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(collider, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v13 = this->fields.collider;
    if ( !v13 )
      goto LABEL_21;
    v14 = 160.0 - v7;
    LODWORD(v16.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0);
    v16.fields.z = 0.0;
    v16.fields.y = v14;
    UnityEngine_BoxCollider__set_size(v13, v16, 0);
    v15 = this->fields.collider;
    if ( !v15 )
      goto LABEL_21;
    LODWORD(v17.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_center(this->fields.collider, 0);
    v17.fields.y = (float)(v14 * -0.5) + 160.0;
    v17.fields.z = 0.0;
    UnityEngine_BoxCollider__set_center(v15, v17, 0);
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
    sub_1C372B4(0);
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

  if ( (byte_4C3DFF3 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    byte_4C3DFF3 = 1;
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
    sub_1C372B4(hidePos);
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

  if ( (byte_4C3DFF4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_GameOptionContentBase__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_GameOptionContentBase___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_GameOptionContentBase___);
    sub_1C37058(&System_Func_GameOptionContentBase__bool__TypeInfo);
    sub_1C37058(&OptionManager_TypeInfo);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&Method_SetGameOptionComponent___c__reflectionGameOption_b__40_0__);
    sub_1C37058(&Method_SetGameOptionComponent___c__reflectionGameOption_b__40_1__);
    sub_1C37058(&SetGameOptionComponent___c_TypeInfo);
    byte_4C3DFF4 = 1;
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
    _9__40_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_GameOptionContentBase__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__40_0, v8, Method_SetGameOptionComponent___c__reflectionGameOption_b__40_0__, 0);
    static_fields = SetGameOptionComponent___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Func_GameOptionContentBase__bool__o *)_9__40_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__40_0, (int32_t)_9__40_0, v10, v11);
  }
  v12 = System_Linq_Enumerable__Where_object_(
          contentsArray,
          (System_Func_TSource__bool__o *)_9__40_0,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_GameOptionContentBase___);
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
    _9__40_1 = (System_Action_object__o *)sub_1C372A4(System_Action_GameOptionContentBase__TypeInfo);
    System_Action_object____ctor(_9__40_1, v16, Method_SetGameOptionComponent___c__reflectionGameOption_b__40_1__, 0);
    v17 = SetGameOptionComponent___c_TypeInfo->static_fields;
    v17->__9__40_1 = (struct System_Action_GameOptionContentBase__o *)_9__40_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v17->__9__40_1, (int32_t)_9__40_1, v18, v19);
  }
  BasicHelper__ForEach_object_(
    v14,
    (System_Action_T__o *)_9__40_1,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_GameOptionContentBase___);
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

  if ( (byte_4C3DFF0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_SetGameOptionComponent__showGameOption_b__36_0__);
    byte_4C3DFF0 = 1;
  }
  bgTxtSprite = this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0),
        bgTxtSprite = (struct UISprite_o *)BgTxtManager__IsActiveBgTxt(0),
        !gameObject) )
  {
    sub_1C372B4(bgTxtSprite);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0);
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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

  if ( (byte_4C3DFF5 & 1) == 0 )
  {
    sub_1C37058(&SetGameOptionComponent___c_TypeInfo);
    byte_4C3DFF5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(SetGameOptionComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SetGameOptionComponent___c_TypeInfo->static_fields->__9 = (struct SetGameOptionComponent___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)SetGameOptionComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  ((void (__fastcall *)(GameOptionContentBase_o *, const MethodInfo *))x->klass->vtable._5_Reflection.methodPtr)(
    x,
    x->klass->vtable._5_Reflection.method);
}