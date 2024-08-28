void __fastcall BattleResultBondsIconComponent___ctor(BattleResultBondsIconComponent_o *this, const MethodInfo *method)
{
  this->fields.nosupportFontSize = 23;
  this->fields.friendshipLabelSpace = 8.0;
  *(_OWORD *)&this->fields.friendshipLabelArea = xmmword_BA78B0;
  this->fields.maxFriendShipRank = 5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall BattleResultBondsIconComponent__CalcBonusExp(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.nextFriendship - this->fields.friendship - this->fields.baseFriendshipExp;
}


void __fastcall BattleResultBondsIconComponent__ClearFaceAtlas(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *faceIcon; // x0

  faceIcon = this->fields.faceIcon;
  if ( !faceIcon )
    sub_1B68930(0LL, method);
  ServantFaceIconComponent__ClearFaceAtlas(faceIcon, 0LL);
}


void __fastcall BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buddyPointInfo; // x20
  const MethodInfo *v4; // x1
  BattleResultBuddyPointInfoComponent_o *v5; // x0

  if ( (byte_4A0BD61 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0BD61 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v5 = this->fields.buddyPointInfo;
    if ( !v5 )
      sub_1B68930(0LL, v4);
    BattleResultBuddyPointInfoComponent__FinishUpdateBuddyPoint(v5, v4);
  }
}


void __fastcall BattleResultBondsIconComponent__InitBuddyPointInfo(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buddyPointInfo; // x20
  const MethodInfo *v4; // x1
  BattleResultBuddyPointInfoComponent_o *v5; // x0

  if ( (byte_4A0BD60 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0BD60 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v5 = this->fields.buddyPointInfo;
    if ( !v5 )
      sub_1B68930(0LL, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *p_baseFriendshipExp; // x0
  UILabel_o *atlabel; // x20
  System_String_o *v9; // x0
  float v10; // s0
  struct UILabel_o *v11; // x8
  float parenthesisAjust; // s9
  System_String_o *mText; // x20
  float v14; // s8
  System_String_o *v15; // x0
  float v16; // s11
  float x; // s0
  float friendshipLabelArea; // s9
  float v19; // s8
  UILabel_o *bonuslabel; // x20
  System_String_o *v21; // x0
  float v22; // s0
  float friendshipLabelSpace; // s10
  float v24; // s12
  float v25; // s0
  float v26; // s9
  float v27; // s1
  float v28; // s2
  float v29; // s13
  float v30; // s14
  float v31; // s2
  float v32; // s1
  float v33; // s15
  float v34; // s1
  float v35; // s8
  float v36; // s10
  float v37; // s8
  UnityEngine_Transform_o *v38; // x20
  float v39; // s0
  float value; // [xsp+8h] [xbp-78h]
  int v41; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A0BD5E & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_25372/*"（＋"*/, method);
    sub_1B686D4(&StringLiteral_25375/*"＋ "*/, v3);
    sub_1B686D4(&StringLiteral_25373/*"）"*/, v4);
    sub_1B686D4(&StringLiteral_9169/*"N0"*/, v5);
    sub_1B686D4(&StringLiteral_25371/*"（"*/, v6);
    byte_4A0BD5E = 1;
  }
  if ( !this->fields.isMax )
  {
    p_baseFriendshipExp = (System_String_o *)&this->fields.baseFriendshipExp;
    v41 = this->fields.nextFriendship - this->fields.friendship - this->fields.baseFriendshipExp;
    atlabel = this->fields.atlabel;
    if ( v41 > 0 )
    {
      v9 = System_Int32__ToString_62224748((int32_t)p_baseFriendshipExp, (System_String_o *)StringLiteral_9169/*"N0"*/, 0LL);
      p_baseFriendshipExp = System_String__Concat_61419468((System_String_o *)StringLiteral_25375/*"＋ "*/, v9, 0LL);
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
              UILabel__set_text((UILabel_o *)p_baseFriendshipExp, (System_String_o *)StringLiteral_25371/*"（"*/, 0LL);
              p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
              if ( p_baseFriendshipExp )
              {
                LODWORD(v10) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0LL);
                v11 = this->fields.atlabel;
                if ( v11 )
                {
                  parenthesisAjust = this->fields.parenthesisAjust;
                  mText = v11->fields.mText;
                  v14 = v10;
                  v15 = System_Int32__ToString_62224748((int32_t)&v41, (System_String_o *)StringLiteral_9169/*"N0"*/, 0LL);
                  p_baseFriendshipExp = System_String__Concat_61432732(
                                          mText,
                                          (System_String_o *)StringLiteral_25372/*"（＋"*/,
                                          v15,
                                          (System_String_o *)StringLiteral_25373/*"）"*/,
                                          0LL);
                  if ( this->fields.bonuslabel )
                  {
                    UILabel__set_text(this->fields.bonuslabel, p_baseFriendshipExp, 0LL);
                    p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                    if ( p_baseFriendshipExp )
                    {
                      v16 = (float)(v14 * parenthesisAjust) + (float)(v14 * parenthesisAjust);
                      x = UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0LL).fields.x;
                      friendshipLabelArea = this->fields.friendshipLabelArea;
                      v19 = 1.0;
                      if ( (float)(x - v16) > friendshipLabelArea )
                      {
                        p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                        if ( !p_baseFriendshipExp )
                          goto LABEL_39;
                        v19 = friendshipLabelArea
                            / (float)(UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0LL).fields.x - v16);
                      }
                      bonuslabel = this->fields.bonuslabel;
                      v21 = System_Int32__ToString_62224748((int32_t)&v41, (System_String_o *)StringLiteral_9169/*"N0"*/, 0LL);
                      p_baseFriendshipExp = System_String__Concat_61430728(
                                              (System_String_o *)StringLiteral_25372/*"（＋"*/,
                                              v21,
                                              (System_String_o *)StringLiteral_25373/*"）"*/,
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
                            v42.fields.y = 1.0;
                            v42.fields.z = 1.0;
                            v42.fields.x = v19;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)p_baseFriendshipExp,
                              v42,
                              0LL);
                            p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
                            if ( p_baseFriendshipExp )
                            {
                              p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                         0LL);
                              if ( p_baseFriendshipExp )
                              {
                                v43.fields.y = 1.0;
                                v43.fields.z = 1.0;
                                v43.fields.x = v19;
                                UnityEngine_Transform__set_localScale(
                                  (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                  v43,
                                  0LL);
                                p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                                if ( p_baseFriendshipExp )
                                {
                                  LODWORD(v22) = *(_QWORD *)&UILabel__get_printedSize(
                                                               (UILabel_o *)p_baseFriendshipExp,
                                                               0LL);
                                  p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
                                  if ( p_baseFriendshipExp )
                                  {
                                    friendshipLabelSpace = this->fields.friendshipLabelSpace;
                                    v24 = v22;
                                    LODWORD(v25) = *(_QWORD *)&UILabel__get_printedSize(
                                                                 (UILabel_o *)p_baseFriendshipExp,
                                                                 0LL);
                                    p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
                                    if ( p_baseFriendshipExp )
                                    {
                                      v26 = v25;
                                      p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                                 (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                                 0LL);
                                      if ( p_baseFriendshipExp )
                                      {
                                        *(UnityEngine_Vector3_o *)(&v27 - 1) = UnityEngine_Transform__get_localPosition(
                                                                                 (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                                                 0LL);
                                        p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                                        if ( p_baseFriendshipExp )
                                        {
                                          v29 = v27;
                                          v30 = v28;
                                          p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                                     (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                                     0LL);
                                          if ( p_baseFriendshipExp )
                                          {
                                            *(UnityEngine_Vector3_o *)(&v31 - 2) = UnityEngine_Transform__get_localPosition(
                                                                                     (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                                                     0LL);
                                            p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
                                            value = v32;
                                            if ( p_baseFriendshipExp )
                                            {
                                              v33 = v31;
                                              p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                                         (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                                         0LL);
                                              if ( p_baseFriendshipExp )
                                              {
                                                v34 = v19 * v26;
                                                v35 = friendshipLabelSpace + (float)(v19 * (float)(v24 - v16));
                                                v36 = (float)(v35 + v34) * 0.5;
                                                v44.fields.x = (float)(v34 - v36) - (float)(v34 * 0.5);
                                                v44.fields.y = v29;
                                                v44.fields.z = v30;
                                                UnityEngine_Transform__set_localPosition(
                                                  (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                  v44,
                                                  0LL);
                                                p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                                                if ( p_baseFriendshipExp )
                                                {
                                                  p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                                             (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                                             0LL);
                                                  if ( p_baseFriendshipExp )
                                                  {
                                                    v45.fields.x = (float)(v35 * 0.5) - (float)(v35 - v36);
                                                    v45.fields.y = value;
                                                    v45.fields.z = v33;
                                                    UnityEngine_Transform__set_localPosition(
                                                      (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                      v45,
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
      sub_1B68930(p_baseFriendshipExp, method);
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
      v37 = this->fields.friendshipLabelArea;
      v38 = (UnityEngine_Transform_o *)p_baseFriendshipExp;
      LODWORD(v39) = *(_QWORD *)&UILabel__get_printedSize(this->fields.atlabel, 0LL);
      if ( !v38 )
        goto LABEL_39;
      v46.fields.x = v37 / v39;
      v46.fields.y = 1.0;
      v46.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(v38, v46, 0LL);
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

  if ( (byte_4A0BD5B & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, pointInfo);
    byte_4A0BD5B = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v10 = this->fields.buddyPointInfo;
    if ( !v10 )
      sub_1B68930(0LL, v8);
    BattleResultBuddyPointInfoComponent__SetBuddyPointInfo(v10, pointInfo, eventId, v9);
  }
}


void __fastcall BattleResultBondsIconComponent__StartUpdateBuddyPoint(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buddyPointInfo; // x20
  const MethodInfo *v4; // x1
  BattleResultBuddyPointInfoComponent_o *v5; // x0

  if ( (byte_4A0BD5F & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0BD5F = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v5 = this->fields.buddyPointInfo;
    if ( !v5 )
      sub_1B68930(0LL, v4);
    BattleResultBuddyPointInfoComponent__StartUpdateBuddyPoint(v5, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleResultBondsIconComponent__changeGauge(
        BattleResultBondsIconComponent_o *this,
        float val,
        const MethodInfo *method)
{
  long double v3; // q8
  BattleResultBondsIconComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct IFriendshipGauge_o *gaugeComponent; // x20
  IFriendshipGauge_c *klass; // x8
  __int64 v12; // x9
  IFriendshipGauge_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *atlabel; // x20
  UnityEngine_Object_o *v17; // x20
  UILabel_o *v18; // x20
  System_String_o *v19; // x0
  float friendshipLabelArea; // s8
  BattleResultBondsIconComponent_o *v21; // x20
  float v22; // s0
  UITweener_o *v23; // x19
  int v24; // [xsp+Ch] [xbp-34h] BYREF
  char v25[4]; // [xsp+18h] [xbp-28h] BYREF
  char v26[4]; // [xsp+1Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  v3 = *(long double *)&val;
  v4 = this;
  if ( (byte_4A0BD5D & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_1B686D4(&IFriendshipGauge_TypeInfo, v5);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v6);
    sub_1B686D4(&StringLiteral_25243/*"ーーー"*/, v7);
    sub_1B686D4(&StringLiteral_25375/*"＋ "*/, v8);
    this = (BattleResultBondsIconComponent_o *)sub_1B686D4(&StringLiteral_9169/*"N0"*/, v9);
    byte_4A0BD5D = 1;
  }
  v26[0] = 0;
  v25[0] = 0;
  v24 = 0;
  if ( !v4->fields.isUse )
    return 0;
  gaugeComponent = v4->fields.gaugeComponent;
  if ( !gaugeComponent )
    goto LABEL_44;
  klass = gaugeComponent->klass;
  v12 = *(unsigned __int16 *)(&gaugeComponent->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gaugeComponent->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IFriendshipGauge_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      --v12;
      p_offset += 2;
      if ( !v12 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1BBA6B4(v4->fields.gaugeComponent, IFriendshipGauge_TypeInfo, 4LL);
  }
  v24 = (*(__int64 (__fastcall **)(struct IFriendshipGauge_o *, bool *, char *, char *, _QWORD, long double))p_method)(
          gaugeComponent,
          &v4->fields.isMax,
          v26,
          v25,
          *(_QWORD *)(p_method + 8),
          v3);
  if ( v4->fields.isMax )
  {
    this = (BattleResultBondsIconComponent_o *)v4->fields.maxSprite;
    if ( !this )
      goto LABEL_44;
    this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
    if ( !this )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    atlabel = (UnityEngine_Object_o *)v4->fields.atlabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(atlabel, 0LL, 0LL) )
    {
      this = (BattleResultBondsIconComponent_o *)v4->fields.atlabel;
      if ( !this )
        goto LABEL_44;
      this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
      if ( !this )
        goto LABEL_44;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
  }
  else
  {
    v17 = (UnityEngine_Object_o *)v4->fields.atlabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
    {
      this = (BattleResultBondsIconComponent_o *)v4->fields.maxSprite;
      if ( !this )
        goto LABEL_44;
      this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
      if ( !this )
        goto LABEL_44;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (BattleResultBondsIconComponent_o *)v4->fields.atlabel;
      if ( !this )
        goto LABEL_44;
      this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
      if ( !this )
        goto LABEL_44;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v18 = v4->fields.atlabel;
      if ( v4->fields.isHeroine )
      {
        if ( !v18 )
          goto LABEL_44;
        UILabel__set_text(v4->fields.atlabel, (System_String_o *)StringLiteral_25243/*"ーーー"*/, 0LL);
      }
      else
      {
        v19 = System_Int32__ToString_62224748((int32_t)&v24, (System_String_o *)StringLiteral_9169/*"N0"*/, 0LL);
        this = (BattleResultBondsIconComponent_o *)System_String__Concat_61419468(
                                                     (System_String_o *)StringLiteral_25375/*"＋ "*/,
                                                     v19,
                                                     0LL);
        if ( !v18 )
          goto LABEL_44;
        UILabel__set_text(v18, (System_String_o *)this, 0LL);
        this = (BattleResultBondsIconComponent_o *)v4->fields.atlabel;
        if ( !this )
          goto LABEL_44;
        if ( UILabel__get_printedSize((UILabel_o *)this, 0LL).fields.x > v4->fields.friendshipLabelArea )
        {
          this = (BattleResultBondsIconComponent_o *)v4->fields.atlabel;
          if ( !this )
            goto LABEL_44;
          this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
          if ( !v4->fields.atlabel )
            goto LABEL_44;
          friendshipLabelArea = v4->fields.friendshipLabelArea;
          v21 = this;
          LODWORD(v22) = *(_QWORD *)&UILabel__get_printedSize(v4->fields.atlabel, 0LL);
          if ( !v21 )
            goto LABEL_44;
          v27.fields.x = friendshipLabelArea / v22;
          v27.fields.y = 1.0;
          v27.fields.z = 1.0;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v21, v27, 0LL);
        }
      }
    }
  }
  if ( v26[0] )
  {
    this = (BattleResultBondsIconComponent_o *)v4->fields.levelUpObject;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (BattleResultBondsIconComponent_o *)v4->fields.levelUpObject;
      if ( this )
      {
        this = (BattleResultBondsIconComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( this )
        {
          v23 = (UITweener_o *)this;
          UITweener__set_tweenFactor((UITweener_o *)this, 0.0, 0LL);
          UITweener__PlayForward(v23, 0LL);
          return v25[0] != 0;
        }
      }
    }
LABEL_44:
    sub_1B68930(this, method);
  }
  return v25[0] != 0;
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


void __fastcall BattleResultBondsIconComponent__setHeroine(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  this->fields.isHeroine = 1;
}


bool __fastcall BattleResultBondsIconComponent__setNextServantData(
        BattleResultBondsIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtCol,
        const MethodInfo *method)
{
  BattleResultBondsIconComponent_o *v4; // x19
  __int64 v5; // x1
  struct IFriendshipGauge_o *gaugeComponent; // x21
  __int64 v7; // x22
  __int64 v8; // x23
  unsigned int v9; // w22
  IFriendshipGauge_c *klass; // x8
  unsigned int v11; // w23
  __int64 v12; // x9
  IFriendshipGauge_c **p_offset; // x10
  __int64 p_method; // x0
  struct IFriendshipGauge_o *v16; // x20
  IFriendshipGauge_c *v17; // x8
  __int64 v18; // x9
  IFriendshipGauge_c **v19; // x10
  __int64 v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  v4 = this;
  if ( (byte_4A0BD5C & 1) == 0 )
  {
    sub_1B686D4(&IFriendshipGauge_TypeInfo, userSvtCol);
    this = (BattleResultBondsIconComponent_o *)sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4A0BD5C = 1;
  }
  if ( !v4->fields.isUse )
    return 0;
  if ( !userSvtCol )
    goto LABEL_23;
  gaugeComponent = v4->fields.gaugeComponent;
  v7 = *(_QWORD *)&userSvtCol->fields.friendship.fields.currentCryptoKey;
  v8 = *(_QWORD *)&userSvtCol->fields.friendship.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v7;
  *(_QWORD *)&v21.fields.fakeValue = v8;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v21, 0LL);
  this = (BattleResultBondsIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                                               userSvtCol->fields.friendshipRank,
                                               0LL);
  if ( !gaugeComponent )
    goto LABEL_23;
  klass = gaugeComponent->klass;
  v11 = (unsigned int)this;
  v12 = *(unsigned __int16 *)(&gaugeComponent->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gaugeComponent->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IFriendshipGauge_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      --v12;
      p_offset += 2;
      if ( !v12 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_12:
    p_method = sub_1BBA6B4(gaugeComponent, IFriendshipGauge_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(struct IFriendshipGauge_o *, _QWORD, _QWORD, _QWORD))p_method)(
    gaugeComponent,
    v9,
    v11,
    *(_QWORD *)(p_method + 8));
  v4->fields.nextFriendShipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                                    userSvtCol->fields.friendshipRank,
                                    0LL);
  this = (BattleResultBondsIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                                               userSvtCol->fields.friendship,
                                               0LL);
  v16 = v4->fields.gaugeComponent;
  v4->fields.nextFriendship = (int)this;
  if ( !v16 )
LABEL_23:
    sub_1B68930(this, userSvtCol);
  v17 = v16->klass;
  v18 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
  {
    v19 = (IFriendshipGauge_c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != IFriendshipGauge_TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_20;
    }
    v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 2].method;
  }
  else
  {
LABEL_20:
    v20 = sub_1BBA6B4(v16, IFriendshipGauge_TypeInfo, 2LL);
  }
  return (*(__int64 (__fastcall **)(struct IFriendshipGauge_o *, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8));
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_GameObject_o *root; // x0
  __int64 v21; // x25
  __int64 v22; // x26
  int32_t v23; // w8
  ServantFaceIconComponent_o *faceIcon; // x25
  __int64 v25; // x26
  __int64 v26; // x27
  int32_t v28; // w26
  int32_t exceedCount; // w27
  bool IsNew; // w28
  Il2CppObject *MasterData_object; // x0
  __int64 v32; // x25
  __int64 v33; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x24
  UnityEngine_GameObject_o *v35; // x24
  __int64 v36; // x25
  __int64 v37; // x26
  __int128 v38; // q1
  struct IFriendshipGauge_o *Gauge; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  struct IFriendshipGauge_o *gaugeComponent; // x22
  unsigned int friendshipId; // w23
  unsigned int friendship; // w25
  unsigned int friendshipRank; // w26
  IFriendshipGauge_c *klass; // x8
  unsigned int klass_high; // w24
  unsigned int friendshipExceedCount; // w21
  __int64 v49; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v52; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4A0BD5A & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, userSvtCol);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_1B686D4(&IFriendshipGauge_TypeInfo, v16);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4A0BD5A = 1;
  }
  if ( !userSvtCol || !userSvtEnt )
  {
    root = this->fields.root;
    this->fields.isUse = 0;
    if ( root )
    {
      UnityEngine_GameObject__SetActive(root, 0, 0LL);
      root = this->fields.rootNot;
      if ( root )
      {
        UnityEngine_GameObject__SetActive(root, 1, 0LL);
        return;
      }
    }
    goto LABEL_48;
  }
  root = this->fields.rootNot;
  *(_WORD *)&this->fields.isUse = 1;
  if ( !root )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  root = this->fields.root;
  if ( !root )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive(root, 1, 0LL);
  root = this->fields.levelUpObject;
  if ( !root )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  this->fields.baseFriendshipExp = baseFriendshipExp;
  v22 = *(_QWORD *)&userSvtEnt->fields.limitCount.fields.currentCryptoKey;
  v21 = *(_QWORD *)&userSvtEnt->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v55.fields.currentCryptoKey = v22;
  *(_QWORD *)&v55.fields.fakeValue = v21;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v55, 0LL);
  faceIcon = this->fields.faceIcon;
  v26 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.fakeValue;
  if ( v23 == afterLimitCnt || afterLimitCnt < 0 )
    afterLimitCnt = v23;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v56.fields.currentCryptoKey = v26;
  *(_QWORD *)&v56.fields.fakeValue = v25;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v56, 0LL);
  if ( (iconLimitCnt & 0x80000000) != 0 )
    iconLimitCnt = UserServantEntity__getIconLimitCount(userSvtEnt, 0, 0LL);
  exceedCount = userSvtEnt->fields.exceedCount;
  IsNew = UserServantEntity__IsNew(userSvtEnt, 0LL);
  root = (UnityEngine_GameObject_o *)UserServantEntity__IsEventJoin(userSvtEnt, 0LL);
  if ( !faceIcon )
    goto LABEL_48;
  ServantFaceIconComponent__Set_37964052(
    faceIcon,
    v28,
    afterLimitCnt,
    iconLimitCnt,
    exceedCount,
    0LL,
    0LL,
    2,
    IsNew,
    (unsigned __int8)root & 1,
    0LL,
    0,
    userSvtEnt->fields.lv,
    0,
    0,
    0LL);
  root = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !root )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)root,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
  v33 = *(_QWORD *)&userSvtCol->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&userSvtCol->fields.svtId.fields.fakeValue;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v57.fields.currentCryptoKey = v33;
  *(_QWORD *)&v57.fields.fakeValue = v32;
  root = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v57, 0LL);
  if ( !v34 )
    goto LABEL_48;
  root = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                       v34,
                                       (int32_t)root,
                                       (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !root )
    goto LABEL_48;
  v35 = root;
  this->fields.userId = userSvtCol->fields.userId;
  v37 = *(_QWORD *)&userSvtCol->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&userSvtCol->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v58.fields.currentCryptoKey = v37;
  *(_QWORD *)&v58.fields.fakeValue = v36;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v58, 0LL);
  v38 = *(_OWORD *)&userSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v54.fields.fakeValue = v38;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v53 = v54;
  this->fields.userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v53, 0LL);
  this->fields.svtLimit = afterLimitCnt;
  this->fields.svtLv = userSvtEnt->fields.lv;
  this->fields.friendshipId = (int32_t)v35[4].klass;
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                              userSvtCol->fields.friendship,
                              0LL);
  this->fields.friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                                  userSvtCol->fields.friendshipRank,
                                  0LL);
  root = (UnityEngine_GameObject_o *)this->fields.gaugeSelector;
  this->fields.maxLimitCount = userSvtCol->fields.maxLimitCount;
  this->fields.maxFriendShipRank = HIDWORD(v35[4].klass);
  if ( !root )
    goto LABEL_48;
  Gauge = FriendshipGaugeSelector__GetGauge(
            (FriendshipGaugeSelector_o *)root,
            HIDWORD(v35[4].klass),
            userSvtCol->fields.friendshipExceedCount,
            0LL);
  this->fields.gaugeComponent = Gauge;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.gaugeComponent, (int32_t)Gauge, v40, v41);
  gaugeComponent = this->fields.gaugeComponent;
  if ( !gaugeComponent )
    goto LABEL_48;
  friendshipId = this->fields.friendshipId;
  friendship = this->fields.friendship;
  friendshipRank = this->fields.friendshipRank;
  klass = gaugeComponent->klass;
  klass_high = HIDWORD(v35[4].klass);
  friendshipExceedCount = userSvtCol->fields.friendshipExceedCount;
  v49 = *(unsigned __int16 *)(&gaugeComponent->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gaugeComponent->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IFriendshipGauge_c **)p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      --v49;
      p_offset += 4;
      if ( !v49 )
        goto LABEL_35;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_35:
    p_method = sub_1BBA6B4(gaugeComponent, IFriendshipGauge_TypeInfo, 0LL);
  }
  root = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(struct IFriendshipGauge_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))p_method)(
                                       gaugeComponent,
                                       friendshipId,
                                       friendship,
                                       friendshipRank,
                                       klass_high,
                                       friendshipExceedCount,
                                       *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_48;
  v52 = 188LL;
  if ( isNoFollower )
    v52 = 192LL;
  this->fields.friendshipLabelArea = *(float *)((char *)&this->klass + v52);
  if ( isNoFollower )
  {
    root = (UnityEngine_GameObject_o *)this->fields.atlabel;
    if ( root )
    {
      UILabel__set_fontSize((UILabel_o *)root, this->fields.nosupportFontSize, 0LL);
      root = (UnityEngine_GameObject_o *)this->fields.bonuslabel;
      if ( root )
      {
        UILabel__set_fontSize((UILabel_o *)root, this->fields.nosupportFontSize, 0LL);
        return;
      }
    }
LABEL_48:
    sub_1B68930(root, userSvtCol);
  }
}