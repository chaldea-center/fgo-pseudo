void BattleResultBondsIconComponent___ctor(BattleResultBondsIconComponent_o *this, const MethodInfo *method)
{
  this->fields.nosupportFontSize = 23;
  this->fields.friendshipLabelSpace = 8.0;
  *(_OWORD *)&this->fields.friendshipLabelArea = xmmword_E93620;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t BattleResultBondsIconComponent__CalcBonusExp(BattleResultBondsIconComponent_o *this, const MethodInfo *method)
{
  return this->fields.nextFriendship - (this->fields.friendship + this->fields.baseFriendshipExp);
}


bool BattleResultBondsIconComponent__ChangeGauge(
        BattleResultBondsIconComponent_o *this,
        float val,
        const MethodInfo *method)
{
  BattleResultBondsIconComponent_o *v4; // x19
  _BOOL4 isUse; // w8
  struct IFriendshipGauge_o *gaugeComponent; // x20
  IFriendshipGauge_c *klass; // x8
  __int64 v8; // x9
  IFriendshipGauge_c **p_offset; // x10
  __int64 v10; // x0
  int v12; // w0
  UnityEngine_Component_o *maxSprite; // x8
  bool isMax; // w1
  UITweener_o *v15; // x20
  UnityEngine_Object_o *atlabel; // x20
  UILabel_o *v17; // x20
  System_String_o *v18; // x0
  BattleResultBondsIconComponent_o *v19; // x20
  float friendshipLabelArea; // s8
  float v21; // s0
  char v22[4]; // [xsp+4h] [xbp-2Ch] BYREF
  char v23[4]; // [xsp+8h] [xbp-28h] BYREF
  int v24; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_593C1FB & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_21FFC50(&IFriendshipGauge_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_26790/*"ーーー"*/);
    sub_21FFC50(&StringLiteral_26925/*"＋ "*/);
    this = (BattleResultBondsIconComponent_o *)sub_21FFC50(&StringLiteral_9604/*"N0"*/);
    byte_593C1FB = 1;
  }
  isUse = v4->fields.isUse;
  v24 = 0;
  v23[0] = 0;
  v22[0] = 0;
  if ( !isUse )
    return 0;
  gaugeComponent = v4->fields.gaugeComponent;
  if ( !gaugeComponent )
    goto LABEL_32;
  klass = gaugeComponent->klass;
  v8 = *(unsigned __int16 *)&gaugeComponent->klass->_2.rank;
  if ( *(_WORD *)&gaugeComponent->klass->_2.rank )
  {
    p_offset = (IFriendshipGauge_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      --v8;
      p_offset += 2;
      if ( !v8 )
        goto LABEL_9;
    }
    v10 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3];
  }
  else
  {
LABEL_9:
    v10 = sub_2237E2C(v4->fields.gaugeComponent, IFriendshipGauge_TypeInfo, 3);
  }
  v12 = (*(__int64 (__fastcall **)(struct IFriendshipGauge_o *, bool *, char *, char *, int32_t *, _QWORD, float))v10)(
          gaugeComponent,
          &v4->fields.isMax,
          v23,
          v22,
          &v4->fields.remainingFriendship,
          *(_QWORD *)(v10 + 8),
          val);
  maxSprite = (UnityEngine_Component_o *)v4->fields.maxSprite;
  isMax = v4->fields.isMax;
  v24 = v12;
  BasicHelper__SetActiveSafely(maxSprite, isMax, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v4->fields.atlabel, !v4->fields.isMax, 0);
  if ( v23[0] )
  {
    this = (BattleResultBondsIconComponent_o *)v4->fields.levelUpObject;
    if ( !this )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (BattleResultBondsIconComponent_o *)v4->fields.levelUpObject;
    if ( !this )
      goto LABEL_32;
    this = (BattleResultBondsIconComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !this )
      goto LABEL_32;
    v15 = (UITweener_o *)this;
    UITweener__set_tweenFactor((UITweener_o *)this, 0.0, 0);
    UITweener__PlayForward(v15, 0);
  }
  if ( v4->fields.isMax )
    return v22[0] != 0;
  atlabel = (UnityEngine_Object_o *)v4->fields.atlabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleResultBondsIconComponent_o *)UnityEngine_Object__op_Inequality(atlabel, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return v22[0] != 0;
  v17 = v4->fields.atlabel;
  if ( !v4->fields.isNoFriendship )
  {
    v18 = System_Int32__ToString_76925352((int32_t)&v24, (System_String_o *)StringLiteral_9604/*"N0"*/, 0);
    this = (BattleResultBondsIconComponent_o *)System_String__Concat_75438412(
                                                 (System_String_o *)StringLiteral_26925/*"＋ "*/,
                                                 v18,
                                                 0);
    if ( v17 )
    {
      UILabel__set_text(v17, (System_String_o *)this, 0);
      this = (BattleResultBondsIconComponent_o *)v4->fields.atlabel;
      if ( this )
      {
        if ( UILabel__get_printedSize((UILabel_o *)this, 0).fields.x <= v4->fields.friendshipLabelArea )
          return v22[0] != 0;
        this = (BattleResultBondsIconComponent_o *)v4->fields.atlabel;
        if ( this )
        {
          this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
          if ( v4->fields.atlabel )
          {
            v19 = this;
            friendshipLabelArea = v4->fields.friendshipLabelArea;
            LODWORD(v21) = *(_QWORD *)&UILabel__get_printedSize(v4->fields.atlabel, 0);
            if ( v19 )
            {
              v25.fields.x = friendshipLabelArea / v21;
              v25.fields.y = 1.0;
              v25.fields.z = 1.0;
              UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v19, v25, 0);
              return v22[0] != 0;
            }
          }
        }
      }
    }
LABEL_32:
    sub_21FFECC(this, method);
  }
  if ( !v17 )
    goto LABEL_32;
  UILabel__set_text(v4->fields.atlabel, (System_String_o *)StringLiteral_26790/*"ーーー"*/, 0);
  return v22[0] != 0;
}


void BattleResultBondsIconComponent__ClearFaceAtlas(BattleResultBondsIconComponent_o *this, const MethodInfo *method)
{
  ServantFaceIconComponent_o *faceIcon; // x0

  faceIcon = this->fields.faceIcon;
  if ( !faceIcon )
    sub_21FFECC(0, method);
  ServantFaceIconComponent__ClearFaceAtlas(faceIcon, 0);
}


void BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buddyPointInfo; // x20
  const MethodInfo *v4; // x1
  BattleResultBuddyPointInfoComponent_o *v5; // x0

  if ( (byte_593C200 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C200 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0, 0) )
  {
    v5 = this->fields.buddyPointInfo;
    if ( !v5 )
      sub_21FFECC(0, v4);
    BattleResultBuddyPointInfoComponent__FinishUpdateBuddyPoint(v5, v4);
  }
}


void BattleResultBondsIconComponent__FinishUpdateValue(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  BattleResultBondsIconComponent__ChangeGauge(this, 1.0, method);
  BattleResultBondsIconComponent__LayoutFriendshipValue(this, v3);
  BattleResultBondsIconComponent__ShowRemainingFriendship(this, v4);
}


void BattleResultBondsIconComponent__InitBuddyPointInfo(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buddyPointInfo; // x20
  const MethodInfo *v4; // x1
  BattleResultBuddyPointInfoComponent_o *v5; // x0

  if ( (byte_593C1FF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C1FF = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0, 0) )
  {
    v5 = this->fields.buddyPointInfo;
    if ( !v5 )
      sub_21FFECC(0, v4);
    BattleResultBuddyPointInfoComponent__UpdateBuddyPointInfo(v5, 0.0, v4);
  }
}


bool BattleResultBondsIconComponent__IsUse(BattleResultBondsIconComponent_o *this, const MethodInfo *method)
{
  return this->fields.isUse;
}


void BattleResultBondsIconComponent__LayoutFriendshipValue(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  _BOOL4 isMax; // w8
  System_String_o *p_baseFriendshipExp; // x0
  UILabel_o *atlabel; // x20
  System_String_o *v6; // x0
  float v7; // s0
  struct UILabel_o *v8; // x8
  float parenthesisAjust; // s9
  System_String_o *mText; // x20
  float v11; // s8
  System_String_o *v12; // x0
  float v13; // s11
  float x; // s0
  float friendshipLabelArea; // s9
  float v16; // s8
  UILabel_o *bonuslabel; // x20
  System_String_o *v18; // x0
  float v19; // s0
  float friendshipLabelSpace; // s9
  float v21; // s12
  float v22; // s0
  float v23; // s10
  float y; // s13
  float z; // s14
  float v26; // s15
  float v27; // s9
  float v28; // s0
  float v29; // s10
  UnityEngine_Transform_o *v30; // x20
  float v31; // s8
  float v32; // s0
  float value; // [xsp+8h] [xbp-78h]
  int v34; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593C1FC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26922/*"（＋"*/);
    sub_21FFC50(&StringLiteral_26925/*"＋ "*/);
    sub_21FFC50(&StringLiteral_26923/*"）"*/);
    sub_21FFC50(&StringLiteral_9604/*"N0"*/);
    sub_21FFC50(&StringLiteral_26921/*"（"*/);
    byte_593C1FC = 1;
  }
  isMax = this->fields.isMax;
  v34 = 0;
  if ( !isMax )
  {
    p_baseFriendshipExp = (System_String_o *)&this->fields.baseFriendshipExp;
    atlabel = this->fields.atlabel;
    v34 = this->fields.nextFriendship - (this->fields.friendship + this->fields.baseFriendshipExp);
    if ( v34 > 0 )
    {
      v6 = System_Int32__ToString_76925352((int32_t)p_baseFriendshipExp, (System_String_o *)StringLiteral_9604/*"N0"*/, 0);
      p_baseFriendshipExp = System_String__Concat_75438412((System_String_o *)StringLiteral_26925/*"＋ "*/, v6, 0);
      if ( atlabel )
      {
        UILabel__set_text(atlabel, p_baseFriendshipExp, 0);
        p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
        if ( p_baseFriendshipExp )
        {
          p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                     0);
          if ( p_baseFriendshipExp )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)p_baseFriendshipExp, 1, 0);
            p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
            if ( p_baseFriendshipExp )
            {
              UILabel__set_text((UILabel_o *)p_baseFriendshipExp, (System_String_o *)StringLiteral_26921/*"（"*/, 0);
              p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
              if ( p_baseFriendshipExp )
              {
                LODWORD(v7) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0);
                v8 = this->fields.atlabel;
                if ( v8 )
                {
                  parenthesisAjust = this->fields.parenthesisAjust;
                  mText = v8->fields.mText;
                  v11 = v7;
                  v12 = System_Int32__ToString_76925352((int32_t)&v34, (System_String_o *)StringLiteral_9604/*"N0"*/, 0);
                  p_baseFriendshipExp = System_String__Concat_75483552(
                                          mText,
                                          (System_String_o *)StringLiteral_26922/*"（＋"*/,
                                          v12,
                                          (System_String_o *)StringLiteral_26923/*"）"*/,
                                          0);
                  if ( this->fields.bonuslabel )
                  {
                    UILabel__set_text(this->fields.bonuslabel, p_baseFriendshipExp, 0);
                    p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                    if ( p_baseFriendshipExp )
                    {
                      v13 = (float)(v11 * parenthesisAjust) + (float)(v11 * parenthesisAjust);
                      x = UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0).fields.x;
                      friendshipLabelArea = this->fields.friendshipLabelArea;
                      v16 = 1.0;
                      if ( (float)(x - v13) > friendshipLabelArea )
                      {
                        p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                        if ( !p_baseFriendshipExp )
                          goto LABEL_39;
                        v16 = friendshipLabelArea
                            / (float)(UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0).fields.x - v13);
                      }
                      bonuslabel = this->fields.bonuslabel;
                      v18 = System_Int32__ToString_76925352((int32_t)&v34, (System_String_o *)StringLiteral_9604/*"N0"*/, 0);
                      p_baseFriendshipExp = System_String__Concat_75481624(
                                              (System_String_o *)StringLiteral_26922/*"（＋"*/,
                                              v18,
                                              (System_String_o *)StringLiteral_26923/*"）"*/,
                                              0);
                      if ( bonuslabel )
                      {
                        UILabel__set_text(bonuslabel, p_baseFriendshipExp, 0);
                        p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                        if ( p_baseFriendshipExp )
                        {
                          p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                     0);
                          if ( p_baseFriendshipExp )
                          {
                            v35.fields.x = v16;
                            v35.fields.y = 1.0;
                            v35.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)p_baseFriendshipExp,
                              v35,
                              0);
                            p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
                            if ( p_baseFriendshipExp )
                            {
                              p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                         0);
                              if ( p_baseFriendshipExp )
                              {
                                v36.fields.x = v16;
                                v36.fields.y = 1.0;
                                v36.fields.z = 1.0;
                                UnityEngine_Transform__set_localScale(
                                  (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                  v36,
                                  0);
                                p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                                if ( p_baseFriendshipExp )
                                {
                                  LODWORD(v19) = *(_QWORD *)&UILabel__get_printedSize(
                                                               (UILabel_o *)p_baseFriendshipExp,
                                                               0);
                                  p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
                                  if ( p_baseFriendshipExp )
                                  {
                                    friendshipLabelSpace = this->fields.friendshipLabelSpace;
                                    v21 = v19;
                                    LODWORD(v22) = *(_QWORD *)&UILabel__get_printedSize(
                                                                 (UILabel_o *)p_baseFriendshipExp,
                                                                 0);
                                    p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
                                    if ( p_baseFriendshipExp )
                                    {
                                      v23 = v22;
                                      p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                                 (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                                 0);
                                      if ( p_baseFriendshipExp )
                                      {
                                        localPosition = UnityEngine_Transform__get_localPosition(
                                                          (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                          0);
                                        p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                                        if ( p_baseFriendshipExp )
                                        {
                                          y = localPosition.fields.y;
                                          z = localPosition.fields.z;
                                          p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                                     (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                                     0);
                                          if ( p_baseFriendshipExp )
                                          {
                                            v38 = UnityEngine_Transform__get_localPosition(
                                                    (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                    0);
                                            p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
                                            value = v38.fields.y;
                                            if ( p_baseFriendshipExp )
                                            {
                                              v26 = v38.fields.z;
                                              p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                                         (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                                         0);
                                              if ( p_baseFriendshipExp )
                                              {
                                                v39.fields.z = z;
                                                v27 = friendshipLabelSpace + (float)(v16 * (float)(v21 - v13));
                                                v28 = v16 * v23;
                                                v29 = (float)(v27 + (float)(v16 * v23)) * 0.5;
                                                v39.fields.x = (float)(v28 - v29) - (float)(v28 * 0.5);
                                                v39.fields.y = y;
                                                UnityEngine_Transform__set_localPosition(
                                                  (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                  v39,
                                                  0);
                                                p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                                                if ( p_baseFriendshipExp )
                                                {
                                                  p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                                             (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                                             0);
                                                  if ( p_baseFriendshipExp )
                                                  {
                                                    v40.fields.z = v26;
                                                    v40.fields.x = (float)(v27 * 0.5) - (float)(v27 - v29);
                                                    v40.fields.y = value;
                                                    UnityEngine_Transform__set_localPosition(
                                                      (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                      v40,
                                                      0);
                                                    return;
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
        }
      }
LABEL_39:
      sub_21FFECC(p_baseFriendshipExp, method);
    }
    if ( !atlabel )
      goto LABEL_39;
    if ( UILabel__get_printedSize(atlabel, 0).fields.x > this->fields.friendshipLabelArea )
    {
      p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
      if ( !p_baseFriendshipExp )
        goto LABEL_39;
      p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                 0);
      if ( !this->fields.atlabel )
        goto LABEL_39;
      v30 = (UnityEngine_Transform_o *)p_baseFriendshipExp;
      v31 = this->fields.friendshipLabelArea;
      LODWORD(v32) = *(_QWORD *)&UILabel__get_printedSize(this->fields.atlabel, 0);
      if ( !v30 )
        goto LABEL_39;
      v41.fields.x = v31 / v32;
      v41.fields.y = 1.0;
      v41.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(v30, v41, 0);
    }
  }
}


void BattleResultBondsIconComponent__SetBuddyPointInfo(
        BattleResultBondsIconComponent_o *this,
        BattleBuddyPointInfo_o *pointInfo,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buddyPointInfo; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  BattleResultBuddyPointInfoComponent_o *v10; // x0

  if ( (byte_593C1F9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C1F9 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, pointInfo);
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0, 0) )
  {
    v10 = this->fields.buddyPointInfo;
    if ( !v10 )
      sub_21FFECC(0, v8);
    BattleResultBuddyPointInfoComponent__SetBuddyPointInfo(v10, pointInfo, eventId, v9);
  }
}


void BattleResultBondsIconComponent__SetIsNoFriendship(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  this->fields.isNoFriendship = 1;
}


void BattleResultBondsIconComponent__ShowRemainingFriendship(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *remainingFriendshipLabel; // x20
  __int64 v4; // x1
  UILabel_o *v5; // x20
  System_String_o *v6; // x21
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  int32_t remainingFriendship; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593C1FD & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_11573/*"RESULT_BOUNDS_NEXT_FRIENDSHIP"*/);
    byte_593C1FD = 1;
  }
  if ( !this->fields.isMax && !this->fields.isNoFriendship )
  {
    remainingFriendshipLabel = (UnityEngine_Object_o *)this->fields.remainingFriendshipLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(remainingFriendshipLabel, 0, 0) )
    {
      v5 = this->fields.remainingFriendshipLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
      v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11573/*"RESULT_BOUNDS_NEXT_FRIENDSHIP"*/, 0);
      remainingFriendship = this->fields.remainingFriendship;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &remainingFriendship);
      v8 = System_String__Format(v6, v7, 0);
      if ( !v5 )
        sub_21FFECC(v8, v9);
      UILabel__set_text(v5, v8, 0);
    }
    GameObjectHelper__SetActiveSafely(this->fields.remainingFriendshipObject, 1, 0);
  }
}


void BattleResultBondsIconComponent__StartUpdateBuddyPoint(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buddyPointInfo; // x20
  const MethodInfo *v4; // x1
  BattleResultBuddyPointInfoComponent_o *v5; // x0

  if ( (byte_593C1FE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C1FE = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0, 0) )
  {
    v5 = this->fields.buddyPointInfo;
    if ( !v5 )
      sub_21FFECC(0, v4);
    BattleResultBuddyPointInfoComponent__StartUpdateBuddyPoint(v5, v4);
  }
}


int32_t BattleResultBondsIconComponent__getLv(BattleResultBondsIconComponent_o *this, const MethodInfo *method)
{
  return this->fields.svtLv;
}


int32_t BattleResultBondsIconComponent__getMaxLimitCount(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.maxLimitCount;
}


int32_t BattleResultBondsIconComponent__getNextFriendShipRank(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.nextFriendShipRank;
}


int32_t BattleResultBondsIconComponent__getPrevFriendShipRank(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.friendshipRank;
}


int32_t BattleResultBondsIconComponent__getSvtId(BattleResultBondsIconComponent_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


int32_t BattleResultBondsIconComponent__getSvtLimitCount(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.svtLimit;
}


int64_t BattleResultBondsIconComponent__getUserId(BattleResultBondsIconComponent_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


int64_t BattleResultBondsIconComponent__getUserSvtId(BattleResultBondsIconComponent_o *this, const MethodInfo *method)
{
  return this->fields.userSvtId;
}


bool BattleResultBondsIconComponent__isChangeRank(BattleResultBondsIconComponent_o *this, const MethodInfo *method)
{
  return this->fields.isUse && this->fields.friendshipRank != this->fields.nextFriendShipRank;
}


bool BattleResultBondsIconComponent__setNextServantData(
        BattleResultBondsIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtCol,
        const MethodInfo *method)
{
  BattleResultBondsIconComponent_o *v4; // x19
  struct IFriendshipGauge_o *gaugeComponent; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  unsigned int v8; // w22
  IFriendshipGauge_c *klass; // x8
  unsigned int v10; // w23
  __int64 v11; // x9
  IFriendshipGauge_c **p_offset; // x10
  __int64 v13; // x0
  struct IFriendshipGauge_o *v15; // x20
  IFriendshipGauge_c *v16; // x8
  __int64 v17; // x9
  IFriendshipGauge_c **v18; // x10
  __int64 v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v4 = this;
  if ( (byte_593C1FA & 1) == 0 )
  {
    sub_21FFC50(&IFriendshipGauge_TypeInfo);
    this = (BattleResultBondsIconComponent_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593C1FA = 1;
  }
  if ( !v4->fields.isUse )
    return 0;
  if ( !userSvtCol )
    goto LABEL_23;
  gaugeComponent = v4->fields.gaugeComponent;
  v6 = *(_QWORD *)&userSvtCol->fields.friendship.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userSvtCol->fields.friendship.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtCol);
  *(_QWORD *)&v20.fields.currentCryptoKey = v6;
  *(_QWORD *)&v20.fields.fakeValue = v7;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v20, 0);
  this = (BattleResultBondsIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                               userSvtCol->fields.friendshipRank,
                                               0);
  if ( !gaugeComponent )
    goto LABEL_23;
  klass = gaugeComponent->klass;
  v10 = (unsigned int)this;
  v11 = *(unsigned __int16 *)&gaugeComponent->klass->_2.rank;
  if ( *(_WORD *)&gaugeComponent->klass->_2.rank )
  {
    p_offset = (IFriendshipGauge_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      --v11;
      p_offset += 2;
      if ( !v11 )
        goto LABEL_12;
    }
    v13 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_12:
    v13 = sub_2237E2C(gaugeComponent, IFriendshipGauge_TypeInfo, 1);
  }
  (*(void (__fastcall **)(struct IFriendshipGauge_o *, _QWORD, _QWORD, _QWORD))v13)(
    gaugeComponent,
    v8,
    v10,
    *(_QWORD *)(v13 + 8));
  v4->fields.nextFriendShipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                    userSvtCol->fields.friendshipRank,
                                    0);
  this = (BattleResultBondsIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                               userSvtCol->fields.friendship,
                                               0);
  v15 = v4->fields.gaugeComponent;
  v4->fields.nextFriendship = (int)this;
  if ( !v15 )
LABEL_23:
    sub_21FFECC(this, userSvtCol);
  v16 = v15->klass;
  v17 = *(unsigned __int16 *)&v15->klass->_2.rank;
  if ( *(_WORD *)&v15->klass->_2.rank )
  {
    v18 = (IFriendshipGauge_c **)&v16->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != IFriendshipGauge_TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_20;
    }
    v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 2];
  }
  else
  {
LABEL_20:
    v19 = sub_2237E2C(v15, IFriendshipGauge_TypeInfo, 2);
  }
  return (*(__int64 (__fastcall **)(struct IFriendshipGauge_o *, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8));
}


void BattleResultBondsIconComponent__setServantData(
        BattleResultBondsIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtCol,
        UserServantEntity_o *userSvtEnt,
        int32_t iconLimitCnt,
        int32_t dispLimitCnt,
        int32_t baseFriendshipExp,
        bool isNoFollower,
        int32_t afterLimitCnt,
        const MethodInfo *method)
{
  __int64 root; // x0
  __int64 v18; // x1
  __int64 v19; // x20
  __int64 v20; // x26
  int32_t v21; // w0
  bool v22; // nf
  int32_t v23; // w20
  int32_t actualRarity; // w23
  ServantFaceIconComponent_o *faceIcon; // x26
  int32_t ServantId; // w27
  int32_t v27; // w25
  int32_t exceedCount; // w28
  bool IsNew; // w29
  bool IsEventJoin; // w0
  int32_t lv; // w24
  bool v32; // w20
  __int64 v33; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v35; // x24
  __int64 v36; // x25
  __int64 v37; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v38; // x0
  __int64 v39; // x20
  __int64 v40; // x25
  __int64 v41; // x1
  __int128 v42; // q1
  int v43; // w8
  int64_t v44; // x0
  int32_t v45; // w8
  int32_t v46; // w9
  int32_t v47; // w8
  int32_t maxLimitCount; // w9
  struct IFriendshipGauge_o *Gauge; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  struct IFriendshipGauge_o *gaugeComponent; // x22
  IFriendshipGauge_c *klass; // x8
  unsigned int friendshipRank; // w26
  unsigned int v59; // w24
  unsigned int friendshipId; // w23
  unsigned int friendship; // w25
  __int64 v62; // x9
  unsigned int friendshipExceedCount; // w21
  int32_t *p_offset; // x10
  __int64 v65; // x0
  __int64 v66; // x8
  UnityEngine_GameObject_o *remainingFriendshipObject; // x0
  __int64 v68; // x1
  UnityEngine_Object_o *remainingFriendshipLabel; // x20
  float friendshipLabelArea; // s0
  int v71; // w8
  bool v72; // [xsp+74h] [xbp-ACh]
  int32_t v73; // [xsp+78h] [xbp-A8h]
  int32_t v74; // [xsp+7Ch] [xbp-A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+80h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+A0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  if ( (byte_593C1F8 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetOrAddComponent_CondensedScaleLabel___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&IFriendshipGauge_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593C1F8 = 1;
  }
  if ( !userSvtCol || !userSvtEnt )
  {
    root = (__int64)this->fields.root;
    this->fields.isUse = 0;
    if ( root )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)root, 0, 0);
      root = (__int64)this->fields.rootNot;
      if ( root )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)root, 1, 0);
        return;
      }
    }
    goto LABEL_56;
  }
  root = (__int64)this->fields.rootNot;
  *(_WORD *)&this->fields.isUse = 1;
  if ( !root )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)root, 0, 0);
  root = (__int64)this->fields.root;
  if ( !root )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)root, 1, 0);
  root = (__int64)this->fields.levelUpObject;
  if ( !root )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)root, 0, 0);
  this->fields.baseFriendshipExp = baseFriendshipExp;
  v19 = *(_QWORD *)&userSvtEnt->fields.limitCount.fields.currentCryptoKey;
  v20 = *(_QWORD *)&userSvtEnt->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
  *(_QWORD *)&v77.fields.currentCryptoKey = v19;
  *(_QWORD *)&v77.fields.fakeValue = v20;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v77, 0);
  v22 = v21 == afterLimitCnt || afterLimitCnt < 0;
  v23 = v22 ? v21 : afterLimitCnt;
  root = (__int64)UserServantEntity__GetOverwriteStatus_50140328(userSvtEnt, dispLimitCnt, 0);
  if ( !root )
    goto LABEL_56;
  actualRarity = *(_DWORD *)(root + 40);
  faceIcon = this->fields.faceIcon;
  v72 = isNoFollower;
  v73 = *(_DWORD *)(root + 24);
  v74 = v23;
  ServantId = UserServantEntity__GetServantId(userSvtEnt, -1, 0);
  if ( iconLimitCnt < 0 )
    iconLimitCnt = UserServantEntity__getIconLimitCount(userSvtEnt, 0, 0);
  v27 = iconLimitCnt;
  exceedCount = userSvtEnt->fields.exceedCount;
  IsNew = UserServantEntity__IsNew(userSvtEnt, 0);
  IsEventJoin = UserServantEntity__IsEventJoin(userSvtEnt, 0);
  lv = userSvtEnt->fields.lv;
  v32 = IsEventJoin;
  root = UserServantEntity__IsGrandServant(userSvtEnt, 0);
  if ( !faceIcon )
    goto LABEL_56;
  ServantFaceIconComponent__SetIcon(
    faceIcon,
    ServantId,
    v73,
    v74,
    v27,
    exceedCount,
    0,
    0,
    2,
    IsNew,
    v32,
    0,
    0,
    lv,
    0,
    0,
    actualRarity,
    root & 1,
    0,
    0);
  root = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !root )
    goto LABEL_56;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)root,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v35 = *(_QWORD *)&userSvtCol->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&userSvtCol->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
  *(_QWORD *)&v78.fields.currentCryptoKey = v35;
  *(_QWORD *)&v78.fields.fakeValue = v36;
  root = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v78, 0);
  if ( !MasterData_object )
    goto LABEL_56;
  root = (__int64)DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                    root,
                    (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !root )
    goto LABEL_56;
  v37 = root;
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  this->fields.userId = userSvtCol->fields.userId;
  v39 = *(_QWORD *)&userSvtCol->fields.svtId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&userSvtCol->fields.svtId.fields.fakeValue;
  if ( !*(&v38->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v38, userSvtCol);
  *(_QWORD *)&v79.fields.currentCryptoKey = v39;
  *(_QWORD *)&v79.fields.fakeValue = v40;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v79, 0);
  v42 = *(_OWORD *)&userSvtEnt->fields.id.fields.fakeValue;
  v43 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v76.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v76.fields.fakeValue = v42;
  if ( !v43 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v41);
  v75 = v76;
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v75, 0);
  v45 = userSvtEnt->fields.lv;
  v46 = *(_DWORD *)(v37 + 96);
  this->fields.userSvtId = v44;
  this->fields.svtLimit = v74;
  this->fields.svtLv = v45;
  this->fields.friendshipId = v46;
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                              userSvtCol->fields.friendship,
                              0);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(userSvtCol->fields.friendshipRank, 0);
  maxLimitCount = userSvtCol->fields.maxLimitCount;
  root = (__int64)this->fields.gaugeSelector;
  this->fields.friendshipRank = v47;
  this->fields.maxLimitCount = maxLimitCount;
  if ( !root )
    goto LABEL_56;
  Gauge = FriendshipGaugeSelector__GetGauge(
            (FriendshipGaugeSelector_o *)root,
            *(_DWORD *)(v37 + 100),
            userSvtCol->fields.friendshipExceedCount,
            0);
  this->fields.gaugeComponent = Gauge;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.gaugeComponent,
    (int32_t)Gauge,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  gaugeComponent = this->fields.gaugeComponent;
  if ( !gaugeComponent )
    goto LABEL_56;
  klass = gaugeComponent->klass;
  friendshipRank = this->fields.friendshipRank;
  v59 = *(_DWORD *)(v37 + 100);
  friendshipId = this->fields.friendshipId;
  friendship = this->fields.friendship;
  v62 = *(unsigned __int16 *)&gaugeComponent->klass->_2.rank;
  friendshipExceedCount = userSvtCol->fields.friendshipExceedCount;
  if ( *(_WORD *)&gaugeComponent->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IFriendshipGauge_c **)p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      --v62;
      p_offset += 4;
      if ( !v62 )
        goto LABEL_35;
    }
    v65 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_35:
    v65 = sub_2237E2C(this->fields.gaugeComponent, IFriendshipGauge_TypeInfo, 0);
  }
  root = (*(__int64 (__fastcall **)(struct IFriendshipGauge_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v65)(
           gaugeComponent,
           friendshipId,
           friendship,
           friendshipRank,
           v59,
           friendshipExceedCount,
           *(_QWORD *)(v65 + 8));
  if ( !this )
    goto LABEL_56;
  v66 = 204;
  remainingFriendshipObject = this->fields.remainingFriendshipObject;
  if ( v72 )
    v66 = 208;
  this->fields.friendshipLabelArea = *(float *)((char *)&this->klass + v66);
  GameObjectHelper__SetActiveSafely(remainingFriendshipObject, 0, 0);
  remainingFriendshipLabel = (UnityEngine_Object_o *)this->fields.remainingFriendshipLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v68);
  if ( UnityEngine_Object__op_Inequality(remainingFriendshipLabel, 0, 0) )
  {
    root = (__int64)BasicHelper__GetOrAddComponent_object_(
                      (UnityEngine_Component_o *)this->fields.remainingFriendshipLabel,
                      (const MethodInfo_37E0A68 *)Method_BasicHelper_GetOrAddComponent_CondensedScaleLabel___);
    if ( !root )
      goto LABEL_56;
    friendshipLabelArea = this->fields.friendshipLabelArea;
    if ( friendshipLabelArea == INFINITY )
      v71 = 0x80000000;
    else
      v71 = (int)friendshipLabelArea;
    *(_DWORD *)(root + 56) = v71;
  }
  if ( !v72 )
    return;
  root = (__int64)this->fields.atlabel;
  if ( !root
    || (UILabel__set_fontSize((UILabel_o *)root, this->fields.nosupportFontSize, 0),
        (root = (__int64)this->fields.bonuslabel) == 0) )
  {
LABEL_56:
    sub_21FFECC(root, userSvtCol);
  }
  UILabel__set_fontSize((UILabel_o *)root, this->fields.nosupportFontSize, 0);
}