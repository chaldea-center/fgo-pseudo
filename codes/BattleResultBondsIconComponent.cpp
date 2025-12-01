void BattleResultBondsIconComponent___ctor(BattleResultBondsIconComponent_o *this, const MethodInfo *method)
{
  this->fields.nosupportFontSize = 23;
  *(_OWORD *)&this->fields.friendshipLabelArea = xmmword_CF0680;
  this->fields.friendshipLabelSpace = 8.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t BattleResultBondsIconComponent__CalcBonusExp(BattleResultBondsIconComponent_o *this, const MethodInfo *method)
{
  return this->fields.nextFriendship - this->fields.friendship - this->fields.baseFriendshipExp;
}


// local variable allocation has failed, the output may be wrong!
bool BattleResultBondsIconComponent__ChangeGauge(
        BattleResultBondsIconComponent_o *this,
        float val,
        const MethodInfo *method)
{
  long double v3; // q8
  BattleResultBondsIconComponent_o *v4; // x19
  struct IFriendshipGauge_o *gaugeComponent; // x21
  IFriendshipGauge_c *klass; // x8
  __int64 v7; // x9
  IFriendshipGauge_c **p_offset; // x10
  __int64 v9; // x0
  UITweener_o *v11; // x21
  UnityEngine_Object_o *atlabel; // x20
  UILabel_o *v13; // x20
  System_String_o *v14; // x0
  float friendshipLabelArea; // s8
  BattleResultBondsIconComponent_o *v16; // x20
  float v17; // s0
  char v18[4]; // [xsp+4h] [xbp-3Ch] BYREF
  char v19[4]; // [xsp+8h] [xbp-38h] BYREF
  int v20; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  v3 = *(long double *)&val;
  v4 = this;
  if ( (byte_4CCACC3 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C713B0(&IFriendshipGauge_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_25572/*"ーーー"*/);
    sub_1C713B0(&StringLiteral_25707/*"＋ "*/);
    this = (BattleResultBondsIconComponent_o *)sub_1C713B0(&StringLiteral_9233/*"N0"*/);
    byte_4CCACC3 = 1;
  }
  v20 = 0;
  v19[0] = 0;
  v18[0] = 0;
  if ( !v4->fields.isUse )
    return 0;
  gaugeComponent = v4->fields.gaugeComponent;
  if ( !gaugeComponent )
    goto LABEL_32;
  klass = gaugeComponent->klass;
  v7 = *(unsigned __int16 *)&gaugeComponent->klass->_2.rank;
  if ( *(_WORD *)&gaugeComponent->klass->_2.rank )
  {
    p_offset = (IFriendshipGauge_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      --v7;
      p_offset += 2;
      if ( !v7 )
        goto LABEL_9;
    }
    v9 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3];
  }
  else
  {
LABEL_9:
    v9 = sub_1C47738(v4->fields.gaugeComponent, IFriendshipGauge_TypeInfo, 3);
  }
  v20 = (*(__int64 (__fastcall **)(struct IFriendshipGauge_o *, bool *, char *, char *, int32_t *, _QWORD, long double))v9)(
          gaugeComponent,
          &v4->fields.isMax,
          v19,
          v18,
          &v4->fields.remainingFriendship,
          *(_QWORD *)(v9 + 8),
          v3);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v4->fields.maxSprite, v4->fields.isMax, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v4->fields.atlabel, !v4->fields.isMax, 0);
  if ( v19[0] )
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
                                                 (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !this )
      goto LABEL_32;
    v11 = (UITweener_o *)this;
    UITweener__set_tweenFactor((UITweener_o *)this, 0.0, 0);
    UITweener__PlayForward(v11, 0);
  }
  if ( v4->fields.isMax )
    return v18[0] != 0;
  atlabel = (UnityEngine_Object_o *)v4->fields.atlabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultBondsIconComponent_o *)UnityEngine_Object__op_Inequality(atlabel, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return v18[0] != 0;
  v13 = v4->fields.atlabel;
  if ( !v4->fields.isNoFriendship )
  {
    v14 = System_Int32__ToString_65540220((int32_t)&v20, (System_String_o *)StringLiteral_9233/*"N0"*/, 0);
    this = (BattleResultBondsIconComponent_o *)System_String__Concat_64031724(
                                                 (System_String_o *)StringLiteral_25707/*"＋ "*/,
                                                 v14,
                                                 0);
    if ( v13 )
    {
      UILabel__set_text(v13, (System_String_o *)this, 0);
      this = (BattleResultBondsIconComponent_o *)v4->fields.atlabel;
      if ( this )
      {
        if ( UILabel__get_printedSize((UILabel_o *)this, 0).fields.x <= v4->fields.friendshipLabelArea )
          return v18[0] != 0;
        this = (BattleResultBondsIconComponent_o *)v4->fields.atlabel;
        if ( this )
        {
          this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
          if ( v4->fields.atlabel )
          {
            friendshipLabelArea = v4->fields.friendshipLabelArea;
            v16 = this;
            LODWORD(v17) = *(_QWORD *)&UILabel__get_printedSize(v4->fields.atlabel, 0);
            if ( v16 )
            {
              v21.fields.x = friendshipLabelArea / v17;
              v21.fields.y = 1.0;
              v21.fields.z = 1.0;
              UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v16, v21, 0);
              return v18[0] != 0;
            }
          }
        }
      }
    }
LABEL_32:
    sub_1C71608(this, method);
  }
  if ( !v13 )
    goto LABEL_32;
  UILabel__set_text(v4->fields.atlabel, (System_String_o *)StringLiteral_25572/*"ーーー"*/, 0);
  return v18[0] != 0;
}


void BattleResultBondsIconComponent__ClearFaceAtlas(BattleResultBondsIconComponent_o *this, const MethodInfo *method)
{
  ServantFaceIconComponent_o *faceIcon; // x0

  faceIcon = this->fields.faceIcon;
  if ( !faceIcon )
    sub_1C71608(0, method);
  ServantFaceIconComponent__ClearFaceAtlas(faceIcon, 0);
}


void BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buddyPointInfo; // x20
  const MethodInfo *v4; // x1
  BattleResultBuddyPointInfoComponent_o *v5; // x0

  if ( (byte_4CCACC8 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCACC8 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0, 0) )
  {
    v5 = this->fields.buddyPointInfo;
    if ( !v5 )
      sub_1C71608(0, v4);
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

  if ( (byte_4CCACC7 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCACC7 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0, 0) )
  {
    v5 = this->fields.buddyPointInfo;
    if ( !v5 )
      sub_1C71608(0, v4);
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
  System_String_o *p_baseFriendshipExp; // x0
  UILabel_o *atlabel; // x20
  System_String_o *v5; // x0
  float v6; // s0
  struct UILabel_o *v7; // x8
  float parenthesisAjust; // s9
  System_String_o *mText; // x20
  float v10; // s8
  System_String_o *v11; // x0
  float v12; // s11
  float x; // s0
  float friendshipLabelArea; // s9
  float v15; // s8
  UILabel_o *bonuslabel; // x20
  System_String_o *v17; // x0
  float v18; // s0
  float friendshipLabelSpace; // s10
  float v20; // s12
  float v21; // s0
  float v22; // s9
  float y; // s13
  float z; // s14
  float v25; // s15
  float v26; // s1
  float v27; // s8
  float v28; // s10
  float v29; // s8
  UnityEngine_Transform_o *v30; // x20
  float v31; // s0
  float value; // [xsp+8h] [xbp-78h]
  int v33; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCACC4 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_25704/*"（＋"*/);
    sub_1C713B0(&StringLiteral_25707/*"＋ "*/);
    sub_1C713B0(&StringLiteral_25705/*"）"*/);
    sub_1C713B0(&StringLiteral_9233/*"N0"*/);
    sub_1C713B0(&StringLiteral_25703/*"（"*/);
    byte_4CCACC4 = 1;
  }
  if ( !this->fields.isMax )
  {
    p_baseFriendshipExp = (System_String_o *)&this->fields.baseFriendshipExp;
    v33 = this->fields.nextFriendship - this->fields.friendship - this->fields.baseFriendshipExp;
    atlabel = this->fields.atlabel;
    if ( v33 > 0 )
    {
      v5 = System_Int32__ToString_65540220((int32_t)p_baseFriendshipExp, (System_String_o *)StringLiteral_9233/*"N0"*/, 0);
      p_baseFriendshipExp = System_String__Concat_64031724((System_String_o *)StringLiteral_25707/*"＋ "*/, v5, 0);
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
              UILabel__set_text((UILabel_o *)p_baseFriendshipExp, (System_String_o *)StringLiteral_25703/*"（"*/, 0);
              p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
              if ( p_baseFriendshipExp )
              {
                LODWORD(v6) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0);
                v7 = this->fields.atlabel;
                if ( v7 )
                {
                  parenthesisAjust = this->fields.parenthesisAjust;
                  mText = v7->fields.mText;
                  v10 = v6;
                  v11 = System_Int32__ToString_65540220((int32_t)&v33, (System_String_o *)StringLiteral_9233/*"N0"*/, 0);
                  p_baseFriendshipExp = System_String__Concat_64071992(
                                          mText,
                                          (System_String_o *)StringLiteral_25704/*"（＋"*/,
                                          v11,
                                          (System_String_o *)StringLiteral_25705/*"）"*/,
                                          0);
                  if ( this->fields.bonuslabel )
                  {
                    UILabel__set_text(this->fields.bonuslabel, p_baseFriendshipExp, 0);
                    p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                    if ( p_baseFriendshipExp )
                    {
                      v12 = (float)(v10 * parenthesisAjust) + (float)(v10 * parenthesisAjust);
                      x = UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0).fields.x;
                      friendshipLabelArea = this->fields.friendshipLabelArea;
                      v15 = 1.0;
                      if ( (float)(x - v12) > friendshipLabelArea )
                      {
                        p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                        if ( !p_baseFriendshipExp )
                          goto LABEL_39;
                        v15 = friendshipLabelArea
                            / (float)(UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0).fields.x - v12);
                      }
                      bonuslabel = this->fields.bonuslabel;
                      v17 = System_Int32__ToString_65540220((int32_t)&v33, (System_String_o *)StringLiteral_9233/*"N0"*/, 0);
                      p_baseFriendshipExp = System_String__Concat_64069988(
                                              (System_String_o *)StringLiteral_25704/*"（＋"*/,
                                              v17,
                                              (System_String_o *)StringLiteral_25705/*"）"*/,
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
                            v34.fields.y = 1.0;
                            v34.fields.z = 1.0;
                            v34.fields.x = v15;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)p_baseFriendshipExp,
                              v34,
                              0);
                            p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
                            if ( p_baseFriendshipExp )
                            {
                              p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                         0);
                              if ( p_baseFriendshipExp )
                              {
                                v35.fields.y = 1.0;
                                v35.fields.z = 1.0;
                                v35.fields.x = v15;
                                UnityEngine_Transform__set_localScale(
                                  (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                  v35,
                                  0);
                                p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                                if ( p_baseFriendshipExp )
                                {
                                  LODWORD(v18) = *(_QWORD *)&UILabel__get_printedSize(
                                                               (UILabel_o *)p_baseFriendshipExp,
                                                               0);
                                  p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
                                  if ( p_baseFriendshipExp )
                                  {
                                    friendshipLabelSpace = this->fields.friendshipLabelSpace;
                                    v20 = v18;
                                    LODWORD(v21) = *(_QWORD *)&UILabel__get_printedSize(
                                                                 (UILabel_o *)p_baseFriendshipExp,
                                                                 0);
                                    p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
                                    if ( p_baseFriendshipExp )
                                    {
                                      v22 = v21;
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
                                            v37 = UnityEngine_Transform__get_localPosition(
                                                    (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                    0);
                                            p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
                                            value = v37.fields.y;
                                            if ( p_baseFriendshipExp )
                                            {
                                              v25 = v37.fields.z;
                                              p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                                         (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                                         0);
                                              if ( p_baseFriendshipExp )
                                              {
                                                v26 = v15 * v22;
                                                v27 = friendshipLabelSpace + (float)(v15 * (float)(v20 - v12));
                                                v28 = (float)(v27 + v26) * 0.5;
                                                v38.fields.x = (float)(v26 - v28) - (float)(v26 * 0.5);
                                                v38.fields.y = y;
                                                v38.fields.z = z;
                                                UnityEngine_Transform__set_localPosition(
                                                  (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                  v38,
                                                  0);
                                                p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                                                if ( p_baseFriendshipExp )
                                                {
                                                  p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                                             (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                                             0);
                                                  if ( p_baseFriendshipExp )
                                                  {
                                                    v39.fields.x = (float)(v27 * 0.5) - (float)(v27 - v28);
                                                    v39.fields.y = value;
                                                    v39.fields.z = v25;
                                                    UnityEngine_Transform__set_localPosition(
                                                      (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                      v39,
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
      sub_1C71608(p_baseFriendshipExp, method);
    }
    if ( !atlabel )
      goto LABEL_39;
    if ( UILabel__get_printedSize(this->fields.atlabel, 0).fields.x > this->fields.friendshipLabelArea )
    {
      p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
      if ( !p_baseFriendshipExp )
        goto LABEL_39;
      p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                 0);
      if ( !this->fields.atlabel )
        goto LABEL_39;
      v29 = this->fields.friendshipLabelArea;
      v30 = (UnityEngine_Transform_o *)p_baseFriendshipExp;
      LODWORD(v31) = *(_QWORD *)&UILabel__get_printedSize(this->fields.atlabel, 0);
      if ( !v30 )
        goto LABEL_39;
      v40.fields.x = v29 / v31;
      v40.fields.y = 1.0;
      v40.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(v30, v40, 0);
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

  if ( (byte_4CCACC1 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCACC1 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0, 0) )
  {
    v10 = this->fields.buddyPointInfo;
    if ( !v10 )
      sub_1C71608(0, v8);
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
  UILabel_o *v4; // x20
  System_String_o *v5; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  int32_t remainingFriendship; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CCACC5 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_11115/*"RESULT_BOUNDS_NEXT_FRIENDSHIP"*/);
    byte_4CCACC5 = 1;
  }
  if ( !this->fields.isMax && !this->fields.isNoFriendship )
  {
    remainingFriendshipLabel = (UnityEngine_Object_o *)this->fields.remainingFriendshipLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(remainingFriendshipLabel, 0, 0) )
    {
      v4 = this->fields.remainingFriendshipLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = LocalizationManager__Get((System_String_o *)StringLiteral_11115/*"RESULT_BOUNDS_NEXT_FRIENDSHIP"*/, 0);
      remainingFriendship = this->fields.remainingFriendship;
      v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &remainingFriendship);
      v7 = System_String__Format(v5, v6, 0);
      if ( !v4 )
        sub_1C71608(v7, v8);
      UILabel__set_text(v4, v7, 0);
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

  if ( (byte_4CCACC6 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCACC6 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0, 0) )
  {
    v5 = this->fields.buddyPointInfo;
    if ( !v5 )
      sub_1C71608(0, v4);
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
  if ( (byte_4CCACC2 & 1) == 0 )
  {
    sub_1C713B0(&IFriendshipGauge_TypeInfo);
    this = (BattleResultBondsIconComponent_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CCACC2 = 1;
  }
  if ( !v4->fields.isUse )
    return 0;
  if ( !userSvtCol )
    goto LABEL_23;
  gaugeComponent = v4->fields.gaugeComponent;
  v6 = *(_QWORD *)&userSvtCol->fields.friendship.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userSvtCol->fields.friendship.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v6;
  *(_QWORD *)&v20.fields.fakeValue = v7;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v20, 0);
  this = (BattleResultBondsIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
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
    v13 = sub_1C47738(gaugeComponent, IFriendshipGauge_TypeInfo, 1);
  }
  (*(void (__fastcall **)(struct IFriendshipGauge_o *, _QWORD, _QWORD, _QWORD))v13)(
    gaugeComponent,
    v8,
    v10,
    *(_QWORD *)(v13 + 8));
  v4->fields.nextFriendShipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                    userSvtCol->fields.friendshipRank,
                                    0);
  this = (BattleResultBondsIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                               userSvtCol->fields.friendship,
                                               0);
  v15 = v4->fields.gaugeComponent;
  v4->fields.nextFriendship = (int)this;
  if ( !v15 )
LABEL_23:
    sub_1C71608(this, userSvtCol);
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
    v19 = sub_1C47738(v15, IFriendshipGauge_TypeInfo, 2);
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
  __int64 v18; // x20
  __int64 v19; // x26
  int32_t v20; // w0
  bool v21; // nf
  int32_t v22; // w28
  int32_t actualRarity; // w23
  ServantFaceIconComponent_o *faceIcon; // x26
  __int64 v25; // x20
  __int64 v26; // x27
  int32_t v27; // w27
  int32_t exceedCount; // w28
  int32_t v29; // w25
  bool IsNew; // w29
  bool IsEventJoin; // w0
  int32_t lv; // w24
  bool v33; // w20
  Il2CppObject *MasterData_object; // x0
  __int64 v35; // x24
  __int64 v36; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x20
  __int64 v38; // x24
  __int64 v39; // x20
  __int64 v40; // x25
  __int128 v41; // q1
  struct IFriendshipGauge_o *Gauge; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  struct IFriendshipGauge_o *gaugeComponent; // x22
  unsigned int friendshipId; // w23
  unsigned int friendship; // w25
  unsigned int friendshipRank; // w26
  IFriendshipGauge_c *klass; // x8
  unsigned int v54; // w24
  unsigned int friendshipExceedCount; // w21
  __int64 v56; // x9
  int32_t *p_offset; // x10
  __int64 v58; // x0
  __int64 v59; // x8
  UnityEngine_GameObject_o *remainingFriendshipObject; // x0
  UnityEngine_Object_o *remainingFriendshipLabel; // x20
  float friendshipLabelArea; // s0
  int v63; // w8
  bool v64; // [xsp+64h] [xbp-ACh]
  int32_t v65; // [xsp+68h] [xbp-A8h]
  int32_t v66; // [xsp+6Ch] [xbp-A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_4CCACC0 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_GetOrAddComponent_CondensedScaleLabel___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&IFriendshipGauge_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCACC0 = 1;
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
    goto LABEL_57;
  }
  root = (__int64)this->fields.rootNot;
  *(_WORD *)&this->fields.isUse = 1;
  if ( !root )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)root, 0, 0);
  root = (__int64)this->fields.root;
  if ( !root )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)root, 1, 0);
  root = (__int64)this->fields.levelUpObject;
  if ( !root )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)root, 0, 0);
  this->fields.baseFriendshipExp = baseFriendshipExp;
  v19 = *(_QWORD *)&userSvtEnt->fields.limitCount.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userSvtEnt->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v69.fields.currentCryptoKey = v19;
  *(_QWORD *)&v69.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v69, 0);
  v21 = v20 == afterLimitCnt || afterLimitCnt < 0;
  v22 = v21 ? v20 : afterLimitCnt;
  root = (__int64)UserServantEntity__GetOverwriteStatus_43476600(userSvtEnt, dispLimitCnt, 0);
  if ( !root )
    goto LABEL_57;
  actualRarity = *(_DWORD *)(root + 40);
  faceIcon = this->fields.faceIcon;
  v26 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.fakeValue;
  v65 = *(_DWORD *)(root + 24);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v70.fields.currentCryptoKey = v26;
  *(_QWORD *)&v70.fields.fakeValue = v25;
  v66 = v22;
  v64 = isNoFollower;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v70, 0);
  if ( iconLimitCnt < 0 )
    iconLimitCnt = UserServantEntity__getIconLimitCount(userSvtEnt, 0, 0);
  exceedCount = userSvtEnt->fields.exceedCount;
  v29 = iconLimitCnt;
  IsNew = UserServantEntity__IsNew(userSvtEnt, 0);
  IsEventJoin = UserServantEntity__IsEventJoin(userSvtEnt, 0);
  lv = userSvtEnt->fields.lv;
  v33 = IsEventJoin;
  root = UserServantEntity__IsGrandServant(userSvtEnt, 0);
  if ( !faceIcon )
    goto LABEL_57;
  ServantFaceIconComponent__SetIcon(
    faceIcon,
    v27,
    v65,
    v66,
    v29,
    exceedCount,
    0,
    0,
    2,
    IsNew,
    v33,
    0,
    0,
    lv,
    0,
    0,
    actualRarity,
    root & 1,
    0);
  root = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !root )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)root,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
  v36 = *(_QWORD *)&userSvtCol->fields.svtId.fields.currentCryptoKey;
  v35 = *(_QWORD *)&userSvtCol->fields.svtId.fields.fakeValue;
  v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v71.fields.currentCryptoKey = v36;
  *(_QWORD *)&v71.fields.fakeValue = v35;
  root = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v71, 0);
  if ( !v37 )
    goto LABEL_57;
  root = (__int64)DataMasterBase_object__object__int___GetEntity(
                    v37,
                    root,
                    (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !root )
    goto LABEL_57;
  v38 = root;
  this->fields.userId = userSvtCol->fields.userId;
  v40 = *(_QWORD *)&userSvtCol->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&userSvtCol->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v72.fields.currentCryptoKey = v40;
  *(_QWORD *)&v72.fields.fakeValue = v39;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v72, 0);
  v41 = *(_OWORD *)&userSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v68.fields.fakeValue = v41;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v67 = v68;
  this->fields.userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v67, 0);
  this->fields.svtLimit = v66;
  this->fields.svtLv = userSvtEnt->fields.lv;
  this->fields.friendshipId = *(_DWORD *)(v38 + 96);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                              userSvtCol->fields.friendship,
                              0);
  this->fields.friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                  userSvtCol->fields.friendshipRank,
                                  0);
  root = (__int64)this->fields.gaugeSelector;
  this->fields.maxLimitCount = userSvtCol->fields.maxLimitCount;
  if ( !root )
    goto LABEL_57;
  Gauge = FriendshipGaugeSelector__GetGauge(
            (FriendshipGaugeSelector_o *)root,
            *(_DWORD *)(v38 + 100),
            userSvtCol->fields.friendshipExceedCount,
            0);
  this->fields.gaugeComponent = Gauge;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.gaugeComponent, (int32_t)Gauge, v43, v44, v45, v46, v47, v48);
  gaugeComponent = this->fields.gaugeComponent;
  if ( !gaugeComponent )
    goto LABEL_57;
  friendshipId = this->fields.friendshipId;
  friendship = this->fields.friendship;
  friendshipRank = this->fields.friendshipRank;
  klass = gaugeComponent->klass;
  v54 = *(_DWORD *)(v38 + 100);
  friendshipExceedCount = userSvtCol->fields.friendshipExceedCount;
  v56 = *(unsigned __int16 *)&gaugeComponent->klass->_2.rank;
  if ( *(_WORD *)&gaugeComponent->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IFriendshipGauge_c **)p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      --v56;
      p_offset += 4;
      if ( !v56 )
        goto LABEL_37;
    }
    v58 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_37:
    v58 = sub_1C47738(this->fields.gaugeComponent, IFriendshipGauge_TypeInfo, 0);
  }
  root = (*(__int64 (__fastcall **)(struct IFriendshipGauge_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v58)(
           gaugeComponent,
           friendshipId,
           friendship,
           friendshipRank,
           v54,
           friendshipExceedCount,
           *(_QWORD *)(v58 + 8));
  if ( !this )
    goto LABEL_57;
  v59 = 204;
  remainingFriendshipObject = this->fields.remainingFriendshipObject;
  if ( v64 )
    v59 = 208;
  this->fields.friendshipLabelArea = *(float *)((char *)&this->klass + v59);
  GameObjectHelper__SetActiveSafely(remainingFriendshipObject, 0, 0);
  remainingFriendshipLabel = (UnityEngine_Object_o *)this->fields.remainingFriendshipLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(remainingFriendshipLabel, 0, 0) )
  {
    root = (__int64)BasicHelper__GetOrAddComponent_object_(
                      (UnityEngine_Component_o *)this->fields.remainingFriendshipLabel,
                      (const MethodInfo_3138538 *)Method_BasicHelper_GetOrAddComponent_CondensedScaleLabel___);
    if ( !root )
      goto LABEL_57;
    friendshipLabelArea = this->fields.friendshipLabelArea;
    v63 = (int)friendshipLabelArea;
    if ( friendshipLabelArea == INFINITY )
      v63 = 0x80000000;
    *(_DWORD *)(root + 56) = v63;
  }
  if ( !v64 )
    return;
  root = (__int64)this->fields.atlabel;
  if ( !root
    || (UILabel__set_fontSize((UILabel_o *)root, this->fields.nosupportFontSize, 0),
        (root = (__int64)this->fields.bonuslabel) == 0) )
  {
LABEL_57:
    sub_1C71608(root, userSvtCol);
  }
  UILabel__set_fontSize((UILabel_o *)root, this->fields.nosupportFontSize, 0);
}