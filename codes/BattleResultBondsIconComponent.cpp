void __fastcall BattleResultBondsIconComponent___ctor(BattleResultBondsIconComponent_o *this, const MethodInfo *method)
{
  this->fields.nosupportFontSize = 23;
  *(_OWORD *)&this->fields.friendshipLabelArea = xmmword_BFF770;
  this->fields.friendshipLabelSpace = 8.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall BattleResultBondsIconComponent__CalcBonusExp(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.nextFriendship - this->fields.friendship - this->fields.baseFriendshipExp;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleResultBondsIconComponent__ChangeGauge(
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
  __int64 p_method; // x0
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
  if ( (byte_4BDF8F5 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C21E38(&IFriendshipGauge_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_25778/*"ーーー"*/);
    sub_1C21E38(&StringLiteral_25910/*"＋ "*/);
    this = (BattleResultBondsIconComponent_o *)sub_1C21E38(&StringLiteral_9399/*"N0"*/);
    byte_4BDF8F5 = 1;
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
  v7 = *(unsigned __int16 *)(&gaugeComponent->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gaugeComponent->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IFriendshipGauge_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      --v7;
      p_offset += 2;
      if ( !v7 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1C73E18(v4->fields.gaugeComponent, IFriendshipGauge_TypeInfo, 3LL);
  }
  v20 = (*(__int64 (__fastcall **)(struct IFriendshipGauge_o *, bool *, char *, char *, int32_t *, _QWORD, long double))p_method)(
          gaugeComponent,
          &v4->fields.isMax,
          v19,
          v18,
          &v4->fields.remainingFriendship,
          *(_QWORD *)(p_method + 8),
          v3);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v4->fields.maxSprite, v4->fields.isMax, 0LL);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v4->fields.atlabel, !v4->fields.isMax, 0LL);
  if ( v19[0] )
  {
    this = (BattleResultBondsIconComponent_o *)v4->fields.levelUpObject;
    if ( !this )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (BattleResultBondsIconComponent_o *)v4->fields.levelUpObject;
    if ( !this )
      goto LABEL_32;
    this = (BattleResultBondsIconComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !this )
      goto LABEL_32;
    v11 = (UITweener_o *)this;
    UITweener__set_tweenFactor((UITweener_o *)this, 0.0, 0LL);
    UITweener__PlayForward(v11, 0LL);
  }
  if ( v4->fields.isMax )
    return v18[0] != 0;
  atlabel = (UnityEngine_Object_o *)v4->fields.atlabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultBondsIconComponent_o *)UnityEngine_Object__op_Inequality(atlabel, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return v18[0] != 0;
  v13 = v4->fields.atlabel;
  if ( !v4->fields.isNoFriendship )
  {
    v14 = System_Int32__ToString_63921084((int32_t)&v20, (System_String_o *)StringLiteral_9399/*"N0"*/, 0LL);
    this = (BattleResultBondsIconComponent_o *)System_String__Concat_63115476(
                                                 (System_String_o *)StringLiteral_25910/*"＋ "*/,
                                                 v14,
                                                 0LL);
    if ( v13 )
    {
      UILabel__set_text(v13, (System_String_o *)this, 0LL);
      this = (BattleResultBondsIconComponent_o *)v4->fields.atlabel;
      if ( this )
      {
        if ( UILabel__get_printedSize((UILabel_o *)this, 0LL).fields.x <= v4->fields.friendshipLabelArea )
          return v18[0] != 0;
        this = (BattleResultBondsIconComponent_o *)v4->fields.atlabel;
        if ( this )
        {
          this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
          if ( v4->fields.atlabel )
          {
            friendshipLabelArea = v4->fields.friendshipLabelArea;
            v16 = this;
            LODWORD(v17) = *(_QWORD *)&UILabel__get_printedSize(v4->fields.atlabel, 0LL);
            if ( v16 )
            {
              v21.fields.x = friendshipLabelArea / v17;
              v21.fields.y = 1.0;
              v21.fields.z = 1.0;
              UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v16, v21, 0LL);
              return v18[0] != 0;
            }
          }
        }
      }
    }
LABEL_32:
    sub_1C22094(this, method);
  }
  if ( !v13 )
    goto LABEL_32;
  UILabel__set_text(v4->fields.atlabel, (System_String_o *)StringLiteral_25778/*"ーーー"*/, 0LL);
  return v18[0] != 0;
}


void __fastcall BattleResultBondsIconComponent__ClearFaceAtlas(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *faceIcon; // x0

  faceIcon = this->fields.faceIcon;
  if ( !faceIcon )
    sub_1C22094(0LL, method);
  ServantFaceIconComponent__ClearFaceAtlas(faceIcon, 0LL);
}


void __fastcall BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buddyPointInfo; // x20
  const MethodInfo *v4; // x1
  BattleResultBuddyPointInfoComponent_o *v5; // x0

  if ( (byte_4BDF8FA & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF8FA = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v5 = this->fields.buddyPointInfo;
    if ( !v5 )
      sub_1C22094(0LL, v4);
    BattleResultBuddyPointInfoComponent__FinishUpdateBuddyPoint(v5, v4);
  }
}


void __fastcall BattleResultBondsIconComponent__FinishUpdateValue(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  BattleResultBondsIconComponent__ChangeGauge(this, 1.0, method);
  BattleResultBondsIconComponent__LayoutFriendshipValue(this, v3);
  BattleResultBondsIconComponent__ShowRemainingFriendship(this, v4);
}


void __fastcall BattleResultBondsIconComponent__InitBuddyPointInfo(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buddyPointInfo; // x20
  const MethodInfo *v4; // x1
  BattleResultBuddyPointInfoComponent_o *v5; // x0

  if ( (byte_4BDF8F9 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF8F9 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v5 = this->fields.buddyPointInfo;
    if ( !v5 )
      sub_1C22094(0LL, v4);
    BattleResultBuddyPointInfoComponent__UpdateBuddyPointInfo(v5, 0.0, v4);
  }
}


bool __fastcall BattleResultBondsIconComponent__IsUse(BattleResultBondsIconComponent_o *this, const MethodInfo *method)
{
  return this->fields.isUse;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultBondsIconComponent__LayoutFriendshipValue(
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
  float v23; // s1
  float v24; // s2
  float v25; // s13
  float v26; // s14
  float v27; // s2
  float v28; // s1
  float v29; // s15
  float v30; // s1
  float v31; // s8
  float v32; // s10
  float v33; // s8
  UnityEngine_Transform_o *v34; // x20
  float v35; // s0
  float value; // [xsp+8h] [xbp-78h]
  int v37; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDF8F6 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_25907/*"（＋"*/);
    sub_1C21E38(&StringLiteral_25910/*"＋ "*/);
    sub_1C21E38(&StringLiteral_25908/*"）"*/);
    sub_1C21E38(&StringLiteral_9399/*"N0"*/);
    sub_1C21E38(&StringLiteral_25906/*"（"*/);
    byte_4BDF8F6 = 1;
  }
  if ( !this->fields.isMax )
  {
    p_baseFriendshipExp = (System_String_o *)&this->fields.baseFriendshipExp;
    v37 = this->fields.nextFriendship - this->fields.friendship - this->fields.baseFriendshipExp;
    atlabel = this->fields.atlabel;
    if ( v37 > 0 )
    {
      v5 = System_Int32__ToString_63921084((int32_t)p_baseFriendshipExp, (System_String_o *)StringLiteral_9399/*"N0"*/, 0LL);
      p_baseFriendshipExp = System_String__Concat_63115476((System_String_o *)StringLiteral_25910/*"＋ "*/, v5, 0LL);
      if ( atlabel )
      {
        UILabel__set_text(atlabel, p_baseFriendshipExp, 0LL);
        p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
        if ( p_baseFriendshipExp )
        {
          p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                     0LL);
          if ( p_baseFriendshipExp )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)p_baseFriendshipExp, 1, 0LL);
            p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
            if ( p_baseFriendshipExp )
            {
              UILabel__set_text((UILabel_o *)p_baseFriendshipExp, (System_String_o *)StringLiteral_25906/*"（"*/, 0LL);
              p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
              if ( p_baseFriendshipExp )
              {
                LODWORD(v6) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0LL);
                v7 = this->fields.atlabel;
                if ( v7 )
                {
                  parenthesisAjust = this->fields.parenthesisAjust;
                  mText = v7->fields.mText;
                  v10 = v6;
                  v11 = System_Int32__ToString_63921084((int32_t)&v37, (System_String_o *)StringLiteral_9399/*"N0"*/, 0LL);
                  p_baseFriendshipExp = System_String__Concat_63128740(
                                          mText,
                                          (System_String_o *)StringLiteral_25907/*"（＋"*/,
                                          v11,
                                          (System_String_o *)StringLiteral_25908/*"）"*/,
                                          0LL);
                  if ( this->fields.bonuslabel )
                  {
                    UILabel__set_text(this->fields.bonuslabel, p_baseFriendshipExp, 0LL);
                    p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                    if ( p_baseFriendshipExp )
                    {
                      v12 = (float)(v10 * parenthesisAjust) + (float)(v10 * parenthesisAjust);
                      x = UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0LL).fields.x;
                      friendshipLabelArea = this->fields.friendshipLabelArea;
                      v15 = 1.0;
                      if ( (float)(x - v12) > friendshipLabelArea )
                      {
                        p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                        if ( !p_baseFriendshipExp )
                          goto LABEL_39;
                        v15 = friendshipLabelArea
                            / (float)(UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0LL).fields.x - v12);
                      }
                      bonuslabel = this->fields.bonuslabel;
                      v17 = System_Int32__ToString_63921084((int32_t)&v37, (System_String_o *)StringLiteral_9399/*"N0"*/, 0LL);
                      p_baseFriendshipExp = System_String__Concat_63126736(
                                              (System_String_o *)StringLiteral_25907/*"（＋"*/,
                                              v17,
                                              (System_String_o *)StringLiteral_25908/*"）"*/,
                                              0LL);
                      if ( bonuslabel )
                      {
                        UILabel__set_text(bonuslabel, p_baseFriendshipExp, 0LL);
                        p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                        if ( p_baseFriendshipExp )
                        {
                          p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                     0LL);
                          if ( p_baseFriendshipExp )
                          {
                            v38.fields.y = 1.0;
                            v38.fields.z = 1.0;
                            v38.fields.x = v15;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)p_baseFriendshipExp,
                              v38,
                              0LL);
                            p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
                            if ( p_baseFriendshipExp )
                            {
                              p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                         0LL);
                              if ( p_baseFriendshipExp )
                              {
                                v39.fields.y = 1.0;
                                v39.fields.z = 1.0;
                                v39.fields.x = v15;
                                UnityEngine_Transform__set_localScale(
                                  (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                  v39,
                                  0LL);
                                p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                                if ( p_baseFriendshipExp )
                                {
                                  LODWORD(v18) = *(_QWORD *)&UILabel__get_printedSize(
                                                               (UILabel_o *)p_baseFriendshipExp,
                                                               0LL);
                                  p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
                                  if ( p_baseFriendshipExp )
                                  {
                                    friendshipLabelSpace = this->fields.friendshipLabelSpace;
                                    v20 = v18;
                                    LODWORD(v21) = *(_QWORD *)&UILabel__get_printedSize(
                                                                 (UILabel_o *)p_baseFriendshipExp,
                                                                 0LL);
                                    p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
                                    if ( p_baseFriendshipExp )
                                    {
                                      v22 = v21;
                                      p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                                 (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                                 0LL);
                                      if ( p_baseFriendshipExp )
                                      {
                                        *(UnityEngine_Vector3_o *)(&v23 - 1) = UnityEngine_Transform__get_localPosition(
                                                                                 (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                                                 0LL);
                                        p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                                        if ( p_baseFriendshipExp )
                                        {
                                          v25 = v23;
                                          v26 = v24;
                                          p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                                     (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                                     0LL);
                                          if ( p_baseFriendshipExp )
                                          {
                                            *(UnityEngine_Vector3_o *)(&v27 - 2) = UnityEngine_Transform__get_localPosition(
                                                                                     (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                                                     0LL);
                                            p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
                                            value = v28;
                                            if ( p_baseFriendshipExp )
                                            {
                                              v29 = v27;
                                              p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                                         (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                                         0LL);
                                              if ( p_baseFriendshipExp )
                                              {
                                                v30 = v15 * v22;
                                                v31 = friendshipLabelSpace + (float)(v15 * (float)(v20 - v12));
                                                v32 = (float)(v31 + v30) * 0.5;
                                                v40.fields.x = (float)(v30 - v32) - (float)(v30 * 0.5);
                                                v40.fields.y = v25;
                                                v40.fields.z = v26;
                                                UnityEngine_Transform__set_localPosition(
                                                  (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                  v40,
                                                  0LL);
                                                p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                                                if ( p_baseFriendshipExp )
                                                {
                                                  p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                                             (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                                             0LL);
                                                  if ( p_baseFriendshipExp )
                                                  {
                                                    v41.fields.x = (float)(v31 * 0.5) - (float)(v31 - v32);
                                                    v41.fields.y = value;
                                                    v41.fields.z = v29;
                                                    UnityEngine_Transform__set_localPosition(
                                                      (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                      v41,
                                                      0LL);
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
      sub_1C22094(p_baseFriendshipExp, method);
    }
    if ( !atlabel )
      goto LABEL_39;
    if ( UILabel__get_printedSize(this->fields.atlabel, 0LL).fields.x > this->fields.friendshipLabelArea )
    {
      p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
      if ( !p_baseFriendshipExp )
        goto LABEL_39;
      p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                 0LL);
      if ( !this->fields.atlabel )
        goto LABEL_39;
      v33 = this->fields.friendshipLabelArea;
      v34 = (UnityEngine_Transform_o *)p_baseFriendshipExp;
      LODWORD(v35) = *(_QWORD *)&UILabel__get_printedSize(this->fields.atlabel, 0LL);
      if ( !v34 )
        goto LABEL_39;
      v42.fields.x = v33 / v35;
      v42.fields.y = 1.0;
      v42.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(v34, v42, 0LL);
    }
  }
}


void __fastcall BattleResultBondsIconComponent__SetBuddyPointInfo(
        BattleResultBondsIconComponent_o *this,
        BattleBuddyPointInfo_o *pointInfo,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buddyPointInfo; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  BattleResultBuddyPointInfoComponent_o *v10; // x0

  if ( (byte_4BDF8F3 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF8F3 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v10 = this->fields.buddyPointInfo;
    if ( !v10 )
      sub_1C22094(0LL, v8);
    BattleResultBuddyPointInfoComponent__SetBuddyPointInfo(v10, pointInfo, eventId, v9);
  }
}


void __fastcall BattleResultBondsIconComponent__SetIsNoFriendship(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  this->fields.isNoFriendship = 1;
}


void __fastcall BattleResultBondsIconComponent__ShowRemainingFriendship(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *remainingFriendshipLabel; // x20
  UILabel_o *v4; // x20
  System_String_o *v5; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int32_t remainingFriendship; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDF8F7 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_11300/*"RESULT_BOUNDS_NEXT_FRIENDSHIP"*/);
    byte_4BDF8F7 = 1;
  }
  if ( !this->fields.isMax && !this->fields.isNoFriendship )
  {
    remainingFriendshipLabel = (UnityEngine_Object_o *)this->fields.remainingFriendshipLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(remainingFriendshipLabel, 0LL, 0LL) )
    {
      v4 = this->fields.remainingFriendshipLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = LocalizationManager__Get((System_String_o *)StringLiteral_11300/*"RESULT_BOUNDS_NEXT_FRIENDSHIP"*/, 0LL);
      remainingFriendship = this->fields.remainingFriendship;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &remainingFriendship, v6, v7, v8);
      v10 = System_String__Format(v5, v9, 0LL);
      if ( !v4 )
        sub_1C22094(v10, v11);
      UILabel__set_text(v4, v10, 0LL);
    }
    GameObjectHelper__SetActiveSafely(this->fields.remainingFriendshipObject, 1, 0LL);
  }
}


void __fastcall BattleResultBondsIconComponent__StartUpdateBuddyPoint(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buddyPointInfo; // x20
  const MethodInfo *v4; // x1
  BattleResultBuddyPointInfoComponent_o *v5; // x0

  if ( (byte_4BDF8F8 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF8F8 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v5 = this->fields.buddyPointInfo;
    if ( !v5 )
      sub_1C22094(0LL, v4);
    BattleResultBuddyPointInfoComponent__StartUpdateBuddyPoint(v5, v4);
  }
}


int32_t __fastcall BattleResultBondsIconComponent__getLv(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.svtLv;
}


int32_t __fastcall BattleResultBondsIconComponent__getMaxLimitCount(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.maxLimitCount;
}


int32_t __fastcall BattleResultBondsIconComponent__getNextFriendShipRank(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.nextFriendShipRank;
}


int32_t __fastcall BattleResultBondsIconComponent__getPrevFriendShipRank(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.friendshipRank;
}


int32_t __fastcall BattleResultBondsIconComponent__getSvtId(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.svtId;
}


int32_t __fastcall BattleResultBondsIconComponent__getSvtLimitCount(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.svtLimit;
}


int64_t __fastcall BattleResultBondsIconComponent__getUserId(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.userId;
}


int64_t __fastcall BattleResultBondsIconComponent__getUserSvtId(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtId;
}


bool __fastcall BattleResultBondsIconComponent__isChangeRank(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isUse && this->fields.friendshipRank != this->fields.nextFriendShipRank;
}


bool __fastcall BattleResultBondsIconComponent__setNextServantData(
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
  __int64 p_method; // x0
  struct IFriendshipGauge_o *v15; // x20
  IFriendshipGauge_c *v16; // x8
  __int64 v17; // x9
  IFriendshipGauge_c **v18; // x10
  __int64 v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v4 = this;
  if ( (byte_4BDF8F4 & 1) == 0 )
  {
    sub_1C21E38(&IFriendshipGauge_TypeInfo);
    this = (BattleResultBondsIconComponent_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDF8F4 = 1;
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
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v20, 0LL);
  this = (BattleResultBondsIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                               userSvtCol->fields.friendshipRank,
                                               0LL);
  if ( !gaugeComponent )
    goto LABEL_23;
  klass = gaugeComponent->klass;
  v10 = (unsigned int)this;
  v11 = *(unsigned __int16 *)(&gaugeComponent->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gaugeComponent->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IFriendshipGauge_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      --v11;
      p_offset += 2;
      if ( !v11 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_12:
    p_method = sub_1C73E18(gaugeComponent, IFriendshipGauge_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(struct IFriendshipGauge_o *, _QWORD, _QWORD, _QWORD))p_method)(
    gaugeComponent,
    v8,
    v10,
    *(_QWORD *)(p_method + 8));
  v4->fields.nextFriendShipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                    userSvtCol->fields.friendshipRank,
                                    0LL);
  this = (BattleResultBondsIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                               userSvtCol->fields.friendship,
                                               0LL);
  v15 = v4->fields.gaugeComponent;
  v4->fields.nextFriendship = (int)this;
  if ( !v15 )
LABEL_23:
    sub_1C22094(this, userSvtCol);
  v16 = v15->klass;
  v17 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
  {
    v18 = (IFriendshipGauge_c **)&v16->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != IFriendshipGauge_TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_20;
    }
    v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 2].method;
  }
  else
  {
LABEL_20:
    v19 = sub_1C73E18(v15, IFriendshipGauge_TypeInfo, 2LL);
  }
  return (*(__int64 (__fastcall **)(struct IFriendshipGauge_o *, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8));
}


void __fastcall BattleResultBondsIconComponent__setServantData(
        BattleResultBondsIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtCol,
        UserServantEntity_o *userSvtEnt,
        int32_t iconLimitCnt,
        int32_t baseFriendshipExp,
        bool isNoFollower,
        int32_t afterLimitCnt,
        const MethodInfo *method)
{
  __int64 root; // x0
  __int64 v16; // x25
  __int64 v17; // x26
  int32_t v18; // w8
  ServantFaceIconComponent_o *faceIcon; // x25
  __int64 v20; // x26
  __int64 v21; // x27
  int32_t v23; // w26
  int32_t exceedCount; // w27
  bool IsNew; // w28
  Il2CppObject *MasterData_object; // x0
  __int64 v27; // x25
  __int64 v28; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x23
  __int64 v30; // x23
  __int64 v31; // x25
  __int64 v32; // x26
  __int128 v33; // q1
  struct IFriendshipGauge_o *Gauge; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct IFriendshipGauge_o *gaugeComponent; // x22
  unsigned int friendshipId; // w24
  unsigned int friendship; // w25
  unsigned int friendshipRank; // w26
  IFriendshipGauge_c *klass; // x8
  unsigned int v46; // w23
  unsigned int friendshipExceedCount; // w21
  __int64 v48; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v51; // x8
  UnityEngine_GameObject_o *remainingFriendshipObject; // x0
  UnityEngine_Object_o *remainingFriendshipLabel; // x21
  float friendshipLabelArea; // s0
  int v55; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+70h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4BDF8F2 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_GetOrAddComponent_CondensedScaleLabel___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&IFriendshipGauge_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF8F2 = 1;
  }
  if ( !userSvtCol || !userSvtEnt )
  {
    root = (__int64)this->fields.root;
    this->fields.isUse = 0;
    if ( root )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)root, 0, 0LL);
      root = (__int64)this->fields.rootNot;
      if ( root )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)root, 1, 0LL);
        return;
      }
    }
    goto LABEL_55;
  }
  root = (__int64)this->fields.rootNot;
  *(_WORD *)&this->fields.isUse = 1;
  if ( !root )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)root, 0, 0LL);
  root = (__int64)this->fields.root;
  if ( !root )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)root, 1, 0LL);
  root = (__int64)this->fields.levelUpObject;
  if ( !root )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)root, 0, 0LL);
  this->fields.baseFriendshipExp = baseFriendshipExp;
  v17 = *(_QWORD *)&userSvtEnt->fields.limitCount.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userSvtEnt->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v58.fields.currentCryptoKey = v17;
  *(_QWORD *)&v58.fields.fakeValue = v16;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v58, 0LL);
  faceIcon = this->fields.faceIcon;
  v21 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.fakeValue;
  if ( v18 == afterLimitCnt || afterLimitCnt < 0 )
    afterLimitCnt = v18;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v59.fields.currentCryptoKey = v21;
  *(_QWORD *)&v59.fields.fakeValue = v20;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v59, 0LL);
  if ( (iconLimitCnt & 0x80000000) != 0 )
    iconLimitCnt = UserServantEntity__getIconLimitCount(userSvtEnt, 0, 0LL);
  exceedCount = userSvtEnt->fields.exceedCount;
  IsNew = UserServantEntity__IsNew(userSvtEnt, 0LL);
  root = UserServantEntity__IsEventJoin(userSvtEnt, 0LL);
  if ( !faceIcon )
    goto LABEL_55;
  ServantFaceIconComponent__Set_39461076(
    faceIcon,
    v23,
    afterLimitCnt,
    iconLimitCnt,
    exceedCount,
    0LL,
    0LL,
    2,
    IsNew,
    root & 1,
    0LL,
    0,
    userSvtEnt->fields.lv,
    0,
    0,
    0LL,
    0LL);
  root = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !root )
    goto LABEL_55;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)root,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  v28 = *(_QWORD *)&userSvtCol->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&userSvtCol->fields.svtId.fields.fakeValue;
  v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v60.fields.currentCryptoKey = v28;
  *(_QWORD *)&v60.fields.fakeValue = v27;
  root = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v60, 0LL);
  if ( !v29 )
    goto LABEL_55;
  root = (__int64)DataMasterBase_object__object__int___GetEntity(
                    v29,
                    root,
                    (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !root )
    goto LABEL_55;
  v30 = root;
  this->fields.userId = userSvtCol->fields.userId;
  v32 = *(_QWORD *)&userSvtCol->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&userSvtCol->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v61.fields.currentCryptoKey = v32;
  *(_QWORD *)&v61.fields.fakeValue = v31;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v61, 0LL);
  v33 = *(_OWORD *)&userSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v57.fields.fakeValue = v33;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v56 = v57;
  this->fields.userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v56, 0LL);
  this->fields.svtLimit = afterLimitCnt;
  this->fields.svtLv = userSvtEnt->fields.lv;
  this->fields.friendshipId = *(_DWORD *)(v30 + 96);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                              userSvtCol->fields.friendship,
                              0LL);
  this->fields.friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                  userSvtCol->fields.friendshipRank,
                                  0LL);
  root = (__int64)this->fields.gaugeSelector;
  this->fields.maxLimitCount = userSvtCol->fields.maxLimitCount;
  if ( !root )
    goto LABEL_55;
  Gauge = FriendshipGaugeSelector__GetGauge(
            (FriendshipGaugeSelector_o *)root,
            *(_DWORD *)(v30 + 100),
            userSvtCol->fields.friendshipExceedCount,
            0LL);
  this->fields.gaugeComponent = Gauge;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.gaugeComponent, (int64_t)Gauge, v35, v36, v37, v38, v39, v40);
  gaugeComponent = this->fields.gaugeComponent;
  if ( !gaugeComponent )
    goto LABEL_55;
  friendshipId = this->fields.friendshipId;
  friendship = this->fields.friendship;
  friendshipRank = this->fields.friendshipRank;
  klass = gaugeComponent->klass;
  v46 = *(_DWORD *)(v30 + 100);
  friendshipExceedCount = userSvtCol->fields.friendshipExceedCount;
  v48 = *(unsigned __int16 *)(&gaugeComponent->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gaugeComponent->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IFriendshipGauge_c **)p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      --v48;
      p_offset += 4;
      if ( !v48 )
        goto LABEL_35;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_35:
    p_method = sub_1C73E18(gaugeComponent, IFriendshipGauge_TypeInfo, 0LL);
  }
  root = (*(__int64 (__fastcall **)(struct IFriendshipGauge_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))p_method)(
           gaugeComponent,
           friendshipId,
           friendship,
           friendshipRank,
           v46,
           friendshipExceedCount,
           *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_55;
  v51 = 204LL;
  if ( isNoFollower )
    v51 = 208LL;
  remainingFriendshipObject = this->fields.remainingFriendshipObject;
  this->fields.friendshipLabelArea = *(float *)((char *)&this->klass + v51);
  GameObjectHelper__SetActiveSafely(remainingFriendshipObject, 0, 0LL);
  remainingFriendshipLabel = (UnityEngine_Object_o *)this->fields.remainingFriendshipLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(remainingFriendshipLabel, 0LL, 0LL) )
  {
    root = (__int64)BasicHelper__GetOrAddComponent_object_(
                      (UnityEngine_Component_o *)this->fields.remainingFriendshipLabel,
                      (const MethodInfo_2F9DB30 *)Method_BasicHelper_GetOrAddComponent_CondensedScaleLabel___);
    if ( !root )
      goto LABEL_55;
    friendshipLabelArea = this->fields.friendshipLabelArea;
    v55 = (int)friendshipLabelArea;
    if ( friendshipLabelArea == INFINITY )
      v55 = 0x80000000;
    *(_DWORD *)(root + 48) = v55;
  }
  if ( !isNoFollower )
    return;
  root = (__int64)this->fields.atlabel;
  if ( !root
    || (UILabel__set_fontSize((UILabel_o *)root, this->fields.nosupportFontSize, 0LL),
        (root = (__int64)this->fields.bonuslabel) == 0) )
  {
LABEL_55:
    sub_1C22094(root, userSvtCol);
  }
  UILabel__set_fontSize((UILabel_o *)root, this->fields.nosupportFontSize, 0LL);
}