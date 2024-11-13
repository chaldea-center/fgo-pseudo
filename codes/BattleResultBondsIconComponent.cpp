void __fastcall BattleResultBondsIconComponent___ctor(BattleResultBondsIconComponent_o *this, const MethodInfo *method)
{
  this->fields.nosupportFontSize = 23;
  this->fields.friendshipLabelSpace = 8.0;
  *(_OWORD *)&this->fields.friendshipLabelArea = xmmword_BD3E40;
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
    sub_1BCAA3C(0LL, method);
  ServantFaceIconComponent__ClearFaceAtlas(faceIcon, 0LL);
}


void __fastcall BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *buddyPointInfo; // x20
  const MethodInfo *v5; // x1
  BattleResultBuddyPointInfoComponent_o *v6; // x0

  if ( (byte_4B194BD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B194BD = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v6 = this->fields.buddyPointInfo;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    BattleResultBuddyPointInfoComponent__FinishUpdateBuddyPoint(v6, v5);
  }
}


void __fastcall BattleResultBondsIconComponent__InitBuddyPointInfo(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *buddyPointInfo; // x20
  const MethodInfo *v5; // x1
  BattleResultBuddyPointInfoComponent_o *v6; // x0

  if ( (byte_4B194BC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B194BC = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v6 = this->fields.buddyPointInfo;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    BattleResultBuddyPointInfoComponent__UpdateBuddyPointInfo(v6, 0.0, v5);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *p_baseFriendshipExp; // x0
  UILabel_o *atlabel; // x20
  System_String_o *v14; // x0
  float v15; // s0
  struct UILabel_o *v16; // x8
  float parenthesisAjust; // s9
  System_String_o *mText; // x20
  float v19; // s8
  System_String_o *v20; // x0
  float v21; // s11
  float x; // s0
  float friendshipLabelArea; // s9
  float v24; // s8
  UILabel_o *bonuslabel; // x20
  System_String_o *v26; // x0
  float v27; // s0
  float friendshipLabelSpace; // s10
  float v29; // s12
  float v30; // s0
  float v31; // s9
  float v32; // s1
  float v33; // s2
  float v34; // s13
  float v35; // s14
  float v36; // s2
  float v37; // s1
  float v38; // s15
  float v39; // s1
  float v40; // s8
  float v41; // s10
  float v42; // s8
  UnityEngine_Transform_o *v43; // x20
  float v44; // s0
  float value; // [xsp+8h] [xbp-78h]
  int v46; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B194BA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_25711/*"（＋"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_25714/*"＋ "*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_25712/*"）"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_25710/*"（"*/, v10, v11);
    byte_4B194BA = 1;
  }
  if ( !this->fields.isMax )
  {
    p_baseFriendshipExp = (System_String_o *)&this->fields.baseFriendshipExp;
    v46 = this->fields.nextFriendship - this->fields.friendship - this->fields.baseFriendshipExp;
    atlabel = this->fields.atlabel;
    if ( v46 > 0 )
    {
      v14 = System_Int32__ToString_63206828((int32_t)p_baseFriendshipExp, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
      p_baseFriendshipExp = System_String__Concat_62401220((System_String_o *)StringLiteral_25714/*"＋ "*/, v14, 0LL);
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
              UILabel__set_text((UILabel_o *)p_baseFriendshipExp, (System_String_o *)StringLiteral_25710/*"（"*/, 0LL);
              p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
              if ( p_baseFriendshipExp )
              {
                LODWORD(v15) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0LL);
                v16 = this->fields.atlabel;
                if ( v16 )
                {
                  parenthesisAjust = this->fields.parenthesisAjust;
                  mText = v16->fields.mText;
                  v19 = v15;
                  v20 = System_Int32__ToString_63206828((int32_t)&v46, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
                  p_baseFriendshipExp = System_String__Concat_62414484(
                                          mText,
                                          (System_String_o *)StringLiteral_25711/*"（＋"*/,
                                          v20,
                                          (System_String_o *)StringLiteral_25712/*"）"*/,
                                          0LL);
                  if ( this->fields.bonuslabel )
                  {
                    UILabel__set_text(this->fields.bonuslabel, p_baseFriendshipExp, 0LL);
                    p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                    if ( p_baseFriendshipExp )
                    {
                      v21 = (float)(v19 * parenthesisAjust) + (float)(v19 * parenthesisAjust);
                      x = UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0LL).fields.x;
                      friendshipLabelArea = this->fields.friendshipLabelArea;
                      v24 = 1.0;
                      if ( (float)(x - v21) > friendshipLabelArea )
                      {
                        p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                        if ( !p_baseFriendshipExp )
                          goto LABEL_39;
                        v24 = friendshipLabelArea
                            / (float)(UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0LL).fields.x - v21);
                      }
                      bonuslabel = this->fields.bonuslabel;
                      v26 = System_Int32__ToString_63206828((int32_t)&v46, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
                      p_baseFriendshipExp = System_String__Concat_62412480(
                                              (System_String_o *)StringLiteral_25711/*"（＋"*/,
                                              v26,
                                              (System_String_o *)StringLiteral_25712/*"）"*/,
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
                            v47.fields.y = 1.0;
                            v47.fields.z = 1.0;
                            v47.fields.x = v24;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)p_baseFriendshipExp,
                              v47,
                              0LL);
                            p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
                            if ( p_baseFriendshipExp )
                            {
                              p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                         0LL);
                              if ( p_baseFriendshipExp )
                              {
                                v48.fields.y = 1.0;
                                v48.fields.z = 1.0;
                                v48.fields.x = v24;
                                UnityEngine_Transform__set_localScale(
                                  (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                  v48,
                                  0LL);
                                p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                                if ( p_baseFriendshipExp )
                                {
                                  LODWORD(v27) = *(_QWORD *)&UILabel__get_printedSize(
                                                               (UILabel_o *)p_baseFriendshipExp,
                                                               0LL);
                                  p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
                                  if ( p_baseFriendshipExp )
                                  {
                                    friendshipLabelSpace = this->fields.friendshipLabelSpace;
                                    v29 = v27;
                                    LODWORD(v30) = *(_QWORD *)&UILabel__get_printedSize(
                                                                 (UILabel_o *)p_baseFriendshipExp,
                                                                 0LL);
                                    p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
                                    if ( p_baseFriendshipExp )
                                    {
                                      v31 = v30;
                                      p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                                 (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                                 0LL);
                                      if ( p_baseFriendshipExp )
                                      {
                                        *(UnityEngine_Vector3_o *)(&v32 - 1) = UnityEngine_Transform__get_localPosition(
                                                                                 (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                                                 0LL);
                                        p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                                        if ( p_baseFriendshipExp )
                                        {
                                          v34 = v32;
                                          v35 = v33;
                                          p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                                     (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                                     0LL);
                                          if ( p_baseFriendshipExp )
                                          {
                                            *(UnityEngine_Vector3_o *)(&v36 - 2) = UnityEngine_Transform__get_localPosition(
                                                                                     (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                                                     0LL);
                                            p_baseFriendshipExp = (System_String_o *)this->fields.atlabel;
                                            value = v37;
                                            if ( p_baseFriendshipExp )
                                            {
                                              v38 = v36;
                                              p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                                         (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                                         0LL);
                                              if ( p_baseFriendshipExp )
                                              {
                                                v39 = v24 * v31;
                                                v40 = friendshipLabelSpace + (float)(v24 * (float)(v29 - v21));
                                                v41 = (float)(v40 + v39) * 0.5;
                                                v49.fields.x = (float)(v39 - v41) - (float)(v39 * 0.5);
                                                v49.fields.y = v34;
                                                v49.fields.z = v35;
                                                UnityEngine_Transform__set_localPosition(
                                                  (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                  v49,
                                                  0LL);
                                                p_baseFriendshipExp = (System_String_o *)this->fields.bonuslabel;
                                                if ( p_baseFriendshipExp )
                                                {
                                                  p_baseFriendshipExp = (System_String_o *)UnityEngine_Component__get_transform(
                                                                                             (UnityEngine_Component_o *)p_baseFriendshipExp,
                                                                                             0LL);
                                                  if ( p_baseFriendshipExp )
                                                  {
                                                    v50.fields.x = (float)(v40 * 0.5) - (float)(v40 - v41);
                                                    v50.fields.y = value;
                                                    v50.fields.z = v38;
                                                    UnityEngine_Transform__set_localPosition(
                                                      (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                      v50,
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
      sub_1BCAA3C(p_baseFriendshipExp, method);
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
      v42 = this->fields.friendshipLabelArea;
      v43 = (UnityEngine_Transform_o *)p_baseFriendshipExp;
      LODWORD(v44) = *(_QWORD *)&UILabel__get_printedSize(this->fields.atlabel, 0LL);
      if ( !v43 )
        goto LABEL_39;
      v51.fields.x = v42 / v44;
      v51.fields.y = 1.0;
      v51.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(v43, v51, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B194B7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, pointInfo, *(_QWORD *)&eventId);
    byte_4B194B7 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, pointInfo);
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v10 = this->fields.buddyPointInfo;
    if ( !v10 )
      sub_1BCAA3C(0LL, v8);
    BattleResultBuddyPointInfoComponent__SetBuddyPointInfo(v10, pointInfo, eventId, v9);
  }
}


void __fastcall BattleResultBondsIconComponent__StartUpdateBuddyPoint(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *buddyPointInfo; // x20
  const MethodInfo *v5; // x1
  BattleResultBuddyPointInfoComponent_o *v6; // x0

  if ( (byte_4B194BB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B194BB = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v6 = this->fields.buddyPointInfo;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    BattleResultBuddyPointInfoComponent__StartUpdateBuddyPoint(v6, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleResultBondsIconComponent__changeGauge(
        BattleResultBondsIconComponent_o *this,
        float val,
        const MethodInfo *method)
{
  __int64 v3; // x2
  long double v4; // q8
  BattleResultBondsIconComponent_o *v5; // x19
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
  struct IFriendshipGauge_o *gaugeComponent; // x20
  IFriendshipGauge_c *klass; // x8
  __int64 v18; // x9
  IFriendshipGauge_c **p_offset; // x10
  __int64 p_method; // x0
  __int64 v22; // x1
  UnityEngine_Object_o *atlabel; // x20
  UnityEngine_Object_o *v24; // x20
  UILabel_o *v25; // x20
  System_String_o *v26; // x0
  float friendshipLabelArea; // s8
  BattleResultBondsIconComponent_o *v28; // x20
  float v29; // s0
  UITweener_o *v30; // x19
  int v31; // [xsp+Ch] [xbp-34h] BYREF
  char v32[4]; // [xsp+18h] [xbp-28h] BYREF
  char v33[4]; // [xsp+1Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  v4 = *(long double *)&val;
  v5 = this;
  if ( (byte_4B194B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method, v3);
    sub_1BCA7E0(&IFriendshipGauge_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_25582/*"ーーー"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_25714/*"＋ "*/, v12, v13);
    this = (BattleResultBondsIconComponent_o *)sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v14, v15);
    byte_4B194B9 = 1;
  }
  v33[0] = 0;
  v32[0] = 0;
  v31 = 0;
  if ( !v5->fields.isUse )
    return 0;
  gaugeComponent = v5->fields.gaugeComponent;
  if ( !gaugeComponent )
    goto LABEL_44;
  klass = gaugeComponent->klass;
  v18 = *(unsigned __int16 *)(&gaugeComponent->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gaugeComponent->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IFriendshipGauge_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      --v18;
      p_offset += 2;
      if ( !v18 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1C1C7C0(v5->fields.gaugeComponent, IFriendshipGauge_TypeInfo, 4LL);
  }
  v31 = (*(__int64 (__fastcall **)(struct IFriendshipGauge_o *, bool *, char *, char *, _QWORD, long double))p_method)(
          gaugeComponent,
          &v5->fields.isMax,
          v33,
          v32,
          *(_QWORD *)(p_method + 8),
          v4);
  if ( v5->fields.isMax )
  {
    this = (BattleResultBondsIconComponent_o *)v5->fields.maxSprite;
    if ( !this )
      goto LABEL_44;
    this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
    if ( !this )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    atlabel = (UnityEngine_Object_o *)v5->fields.atlabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    if ( UnityEngine_Object__op_Inequality(atlabel, 0LL, 0LL) )
    {
      this = (BattleResultBondsIconComponent_o *)v5->fields.atlabel;
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
    v24 = (UnityEngine_Object_o *)v5->fields.atlabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
    {
      this = (BattleResultBondsIconComponent_o *)v5->fields.maxSprite;
      if ( !this )
        goto LABEL_44;
      this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
      if ( !this )
        goto LABEL_44;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (BattleResultBondsIconComponent_o *)v5->fields.atlabel;
      if ( !this )
        goto LABEL_44;
      this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
      if ( !this )
        goto LABEL_44;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v25 = v5->fields.atlabel;
      if ( v5->fields.isHeroine )
      {
        if ( !v25 )
          goto LABEL_44;
        UILabel__set_text(v5->fields.atlabel, (System_String_o *)StringLiteral_25582/*"ーーー"*/, 0LL);
      }
      else
      {
        v26 = System_Int32__ToString_63206828((int32_t)&v31, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
        this = (BattleResultBondsIconComponent_o *)System_String__Concat_62401220(
                                                     (System_String_o *)StringLiteral_25714/*"＋ "*/,
                                                     v26,
                                                     0LL);
        if ( !v25 )
          goto LABEL_44;
        UILabel__set_text(v25, (System_String_o *)this, 0LL);
        this = (BattleResultBondsIconComponent_o *)v5->fields.atlabel;
        if ( !this )
          goto LABEL_44;
        if ( UILabel__get_printedSize((UILabel_o *)this, 0LL).fields.x > v5->fields.friendshipLabelArea )
        {
          this = (BattleResultBondsIconComponent_o *)v5->fields.atlabel;
          if ( !this )
            goto LABEL_44;
          this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
          if ( !v5->fields.atlabel )
            goto LABEL_44;
          friendshipLabelArea = v5->fields.friendshipLabelArea;
          v28 = this;
          LODWORD(v29) = *(_QWORD *)&UILabel__get_printedSize(v5->fields.atlabel, 0LL);
          if ( !v28 )
            goto LABEL_44;
          v34.fields.x = friendshipLabelArea / v29;
          v34.fields.y = 1.0;
          v34.fields.z = 1.0;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v28, v34, 0LL);
        }
      }
    }
  }
  if ( v33[0] )
  {
    this = (BattleResultBondsIconComponent_o *)v5->fields.levelUpObject;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (BattleResultBondsIconComponent_o *)v5->fields.levelUpObject;
      if ( this )
      {
        this = (BattleResultBondsIconComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( this )
        {
          v30 = (UITweener_o *)this;
          UITweener__set_tweenFactor((UITweener_o *)this, 0.0, 0LL);
          UITweener__PlayForward(v30, 0LL);
          return v32[0] != 0;
        }
      }
    }
LABEL_44:
    sub_1BCAA3C(this, method);
  }
  return v32[0] != 0;
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
  __int64 v6; // x2
  struct IFriendshipGauge_o *gaugeComponent; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  unsigned int v10; // w22
  IFriendshipGauge_c *klass; // x8
  unsigned int v12; // w23
  __int64 v13; // x9
  IFriendshipGauge_c **p_offset; // x10
  __int64 p_method; // x0
  struct IFriendshipGauge_o *v17; // x20
  IFriendshipGauge_c *v18; // x8
  __int64 v19; // x9
  IFriendshipGauge_c **v20; // x10
  __int64 v21; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v4 = this;
  if ( (byte_4B194B8 & 1) == 0 )
  {
    sub_1BCA7E0(&IFriendshipGauge_TypeInfo, userSvtCol, method);
    this = (BattleResultBondsIconComponent_o *)sub_1BCA7E0(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                 v5,
                                                 v6);
    byte_4B194B8 = 1;
  }
  if ( !v4->fields.isUse )
    return 0;
  if ( !userSvtCol )
    goto LABEL_23;
  gaugeComponent = v4->fields.gaugeComponent;
  v8 = *(_QWORD *)&userSvtCol->fields.friendship.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userSvtCol->fields.friendship.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtCol);
  *(_QWORD *)&v22.fields.currentCryptoKey = v8;
  *(_QWORD *)&v22.fields.fakeValue = v9;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v22, 0LL);
  this = (BattleResultBondsIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                               userSvtCol->fields.friendshipRank,
                                               0LL);
  if ( !gaugeComponent )
    goto LABEL_23;
  klass = gaugeComponent->klass;
  v12 = (unsigned int)this;
  v13 = *(unsigned __int16 *)(&gaugeComponent->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gaugeComponent->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IFriendshipGauge_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      --v13;
      p_offset += 2;
      if ( !v13 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_12:
    p_method = sub_1C1C7C0(gaugeComponent, IFriendshipGauge_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(struct IFriendshipGauge_o *, _QWORD, _QWORD, _QWORD))p_method)(
    gaugeComponent,
    v10,
    v12,
    *(_QWORD *)(p_method + 8));
  v4->fields.nextFriendShipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                    userSvtCol->fields.friendshipRank,
                                    0LL);
  this = (BattleResultBondsIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                               userSvtCol->fields.friendship,
                                               0LL);
  v17 = v4->fields.gaugeComponent;
  v4->fields.nextFriendship = (int)this;
  if ( !v17 )
LABEL_23:
    sub_1BCAA3C(this, userSvtCol);
  v18 = v17->klass;
  v19 = *(unsigned __int16 *)(&v17->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v17->klass->_2.bitflags2 + 3) )
  {
    v20 = (IFriendshipGauge_c **)&v18->_1.interfaceOffsets->offset;
    while ( *(v20 - 1) != IFriendshipGauge_TypeInfo )
    {
      --v19;
      v20 += 2;
      if ( !v19 )
        goto LABEL_20;
    }
    v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 2].method;
  }
  else
  {
LABEL_20:
    v21 = sub_1C1C7C0(v17, IFriendshipGauge_TypeInfo, 2LL);
  }
  return (*(__int64 (__fastcall **)(struct IFriendshipGauge_o *, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8));
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_GameObject_o *root; // x0
  __int64 v26; // x1
  __int64 v27; // x25
  __int64 v28; // x26
  __int64 v29; // x1
  int32_t v30; // w8
  ServantFaceIconComponent_o *faceIcon; // x25
  __int64 v32; // x26
  __int64 v33; // x27
  int32_t v35; // w26
  int32_t exceedCount; // w27
  bool IsNew; // w28
  Il2CppObject *MasterData_object; // x0
  __int64 v39; // x1
  __int64 v40; // x25
  __int64 v41; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x24
  UnityEngine_GameObject_o *v43; // x24
  __int64 v44; // x25
  __int64 v45; // x26
  __int64 v46; // x1
  __int128 v47; // q1
  struct IFriendshipGauge_o *Gauge; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct IFriendshipGauge_o *gaugeComponent; // x22
  unsigned int friendshipId; // w23
  unsigned int friendship; // w25
  unsigned int friendshipRank; // w26
  IFriendshipGauge_c *klass; // x8
  unsigned int klass_high; // w24
  unsigned int friendshipExceedCount; // w21
  __int64 v62; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v65; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_4B194B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, userSvtCol, userSvtEnt);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&IFriendshipGauge_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B194B6 = 1;
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
  v28 = *(_QWORD *)&userSvtEnt->fields.limitCount.fields.currentCryptoKey;
  v27 = *(_QWORD *)&userSvtEnt->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
  *(_QWORD *)&v68.fields.currentCryptoKey = v28;
  *(_QWORD *)&v68.fields.fakeValue = v27;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v68, 0LL);
  faceIcon = this->fields.faceIcon;
  v33 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.fakeValue;
  if ( v30 == afterLimitCnt || afterLimitCnt < 0 )
    afterLimitCnt = v30;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
  *(_QWORD *)&v69.fields.currentCryptoKey = v33;
  *(_QWORD *)&v69.fields.fakeValue = v32;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v69, 0LL);
  if ( (iconLimitCnt & 0x80000000) != 0 )
    iconLimitCnt = UserServantEntity__getIconLimitCount(userSvtEnt, 0, 0LL);
  exceedCount = userSvtEnt->fields.exceedCount;
  IsNew = UserServantEntity__IsNew(userSvtEnt, 0LL);
  root = (UnityEngine_GameObject_o *)UserServantEntity__IsEventJoin(userSvtEnt, 0LL);
  if ( !faceIcon )
    goto LABEL_48;
  ServantFaceIconComponent__Set_38928428(
    faceIcon,
    v35,
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
  root = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !root )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)root,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v41 = *(_QWORD *)&userSvtCol->fields.svtId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&userSvtCol->fields.svtId.fields.fakeValue;
  v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
  *(_QWORD *)&v70.fields.currentCryptoKey = v41;
  *(_QWORD *)&v70.fields.fakeValue = v40;
  root = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v70, 0LL);
  if ( !v42 )
    goto LABEL_48;
  root = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                       v42,
                                       (int32_t)root,
                                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !root )
    goto LABEL_48;
  v43 = root;
  this->fields.userId = userSvtCol->fields.userId;
  v45 = *(_QWORD *)&userSvtCol->fields.svtId.fields.currentCryptoKey;
  v44 = *(_QWORD *)&userSvtCol->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtCol);
  *(_QWORD *)&v71.fields.currentCryptoKey = v45;
  *(_QWORD *)&v71.fields.fakeValue = v44;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v71, 0LL);
  v47 = *(_OWORD *)&userSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v67.fields.fakeValue = v47;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v46);
  v66 = v67;
  this->fields.userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v66, 0LL);
  this->fields.svtLimit = afterLimitCnt;
  this->fields.svtLv = userSvtEnt->fields.lv;
  this->fields.friendshipId = (int32_t)v43[4].klass;
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                              userSvtCol->fields.friendship,
                              0LL);
  this->fields.friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                  userSvtCol->fields.friendshipRank,
                                  0LL);
  root = (UnityEngine_GameObject_o *)this->fields.gaugeSelector;
  this->fields.maxLimitCount = userSvtCol->fields.maxLimitCount;
  this->fields.maxFriendShipRank = HIDWORD(v43[4].klass);
  if ( !root )
    goto LABEL_48;
  Gauge = FriendshipGaugeSelector__GetGauge(
            (FriendshipGaugeSelector_o *)root,
            HIDWORD(v43[4].klass),
            userSvtCol->fields.friendshipExceedCount,
            0LL);
  this->fields.gaugeComponent = Gauge;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.gaugeComponent, (int64_t)Gauge, v49, v50, v51, v52, v53, v54);
  gaugeComponent = this->fields.gaugeComponent;
  if ( !gaugeComponent )
    goto LABEL_48;
  friendshipId = this->fields.friendshipId;
  friendship = this->fields.friendship;
  friendshipRank = this->fields.friendshipRank;
  klass = gaugeComponent->klass;
  klass_high = HIDWORD(v43[4].klass);
  friendshipExceedCount = userSvtCol->fields.friendshipExceedCount;
  v62 = *(unsigned __int16 *)(&gaugeComponent->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gaugeComponent->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IFriendshipGauge_c **)p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      --v62;
      p_offset += 4;
      if ( !v62 )
        goto LABEL_35;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_35:
    p_method = sub_1C1C7C0(gaugeComponent, IFriendshipGauge_TypeInfo, 0LL);
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
  v65 = 188LL;
  if ( isNoFollower )
    v65 = 192LL;
  this->fields.friendshipLabelArea = *(float *)((char *)&this->klass + v65);
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
    sub_1BCAA3C(root, userSvtCol);
  }
}