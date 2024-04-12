void __fastcall BattleResultBondsIconComponent___ctor(BattleResultBondsIconComponent_o *this, const MethodInfo *method)
{
  this->fields.nosupportFontSize = 23;
  this->fields.friendshipLabelSpace = 8.0;
  *(_OWORD *)&this->fields.friendshipLabelArea = xmmword_327CDE0;
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
    sub_B52A5C(0LL, method);
  ServantFaceIconComponent__ClearFaceAtlas(faceIcon, 0LL);
}


void __fastcall BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buddyPointInfo; // x20
  __int64 v4; // x1
  BattleResultBuddyPointInfoComponent_o *v5; // x0

  if ( (byte_42B0A29 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0A29 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v5 = this->fields.buddyPointInfo;
    if ( !v5 )
      sub_B52A5C(0LL, v4);
    BattleResultBuddyPointInfoComponent__FinishUpdateBuddyPoint(v5, 0LL);
  }
}


void __fastcall BattleResultBondsIconComponent__InitBuddyPointInfo(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buddyPointInfo; // x20
  __int64 v4; // x1
  BattleResultBuddyPointInfoComponent_o *v5; // x0

  if ( (byte_42B0A28 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0A28 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v5 = this->fields.buddyPointInfo;
    if ( !v5 )
      sub_B52A5C(0LL, v4);
    BattleResultBuddyPointInfoComponent__UpdateBuddyPointInfo(v5, 0.0, 0LL);
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
  UnityEngine_Component_o *p_baseFriendshipExp; // x0
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
  float v14; // s8
  float v15; // s8
  float friendshipLabelArea; // s8
  UnityEngine_Transform_o *v17; // x20
  float v18; // s0
  UILabel_o *bonuslabel; // x20
  System_String_o *v20; // x0
  float v21; // s0
  float friendshipLabelSpace; // s10
  float v23; // s12
  float v24; // s0
  float v25; // s9
  float v26; // s1
  float v27; // s2
  float v28; // s13
  float v29; // s14
  float v30; // s2
  float v31; // s1
  float v32; // s15
  float v33; // s1
  float v34; // s8
  float v35; // s10
  float v36; // [xsp+48h] [xbp-28h]
  int v37; // [xsp+4Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B0A26 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_24157/*"（＋"*/);
    sub_B52984(&StringLiteral_24160/*"＋ "*/);
    sub_B52984(&StringLiteral_24158/*"）"*/);
    sub_B52984(&StringLiteral_9323/*"N0"*/);
    sub_B52984(&StringLiteral_24156/*"（"*/);
    byte_42B0A26 = 1;
  }
  v37 = 0;
  if ( !this->fields.isMax )
  {
    p_baseFriendshipExp = (UnityEngine_Component_o *)&this->fields.baseFriendshipExp;
    v37 = this->fields.nextFriendship - this->fields.friendship - this->fields.baseFriendshipExp;
    atlabel = this->fields.atlabel;
    if ( v37 <= 0 )
    {
      if ( atlabel )
      {
        if ( UILabel__get_printedSize(this->fields.atlabel, 0LL).fields.x <= this->fields.friendshipLabelArea )
          return;
        p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.atlabel;
        if ( p_baseFriendshipExp )
        {
          p_baseFriendshipExp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                             p_baseFriendshipExp,
                                                             0LL);
          if ( this->fields.atlabel )
          {
            friendshipLabelArea = this->fields.friendshipLabelArea;
            v17 = (UnityEngine_Transform_o *)p_baseFriendshipExp;
            LODWORD(v18) = *(_QWORD *)&UILabel__get_printedSize(this->fields.atlabel, 0LL);
            if ( v17 )
            {
              v38.fields.y = 1.0;
              v38.fields.x = friendshipLabelArea / v18;
              v38.fields.z = 1.0;
              UnityEngine_Transform__set_localScale(v17, v38, 0LL);
              return;
            }
          }
        }
      }
    }
    else
    {
      v5 = System_Int32__ToString_39387012((int32_t)p_baseFriendshipExp, (System_String_o *)StringLiteral_9323/*"N0"*/, 0LL);
      p_baseFriendshipExp = (UnityEngine_Component_o *)System_String__Concat_44568316(
                                                         (System_String_o *)StringLiteral_24160/*"＋ "*/,
                                                         v5,
                                                         0LL);
      if ( atlabel )
      {
        UILabel__set_text(atlabel, (System_String_o *)p_baseFriendshipExp, 0LL);
        p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
        if ( p_baseFriendshipExp )
        {
          p_baseFriendshipExp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             p_baseFriendshipExp,
                                                             0LL);
          if ( p_baseFriendshipExp )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)p_baseFriendshipExp, 1, 0LL);
            p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
            if ( p_baseFriendshipExp )
            {
              UILabel__set_text((UILabel_o *)p_baseFriendshipExp, (System_String_o *)StringLiteral_24156/*"（"*/, 0LL);
              p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
              if ( p_baseFriendshipExp )
              {
                LODWORD(v6) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0LL);
                v7 = this->fields.atlabel;
                if ( v7 )
                {
                  parenthesisAjust = this->fields.parenthesisAjust;
                  mText = v7->fields.mText;
                  v10 = v6;
                  v11 = System_Int32__ToString_39387012((int32_t)&v37, (System_String_o *)StringLiteral_9323/*"N0"*/, 0LL);
                  p_baseFriendshipExp = (UnityEngine_Component_o *)System_String__Concat_44571728(
                                                                     mText,
                                                                     (System_String_o *)StringLiteral_24157/*"（＋"*/,
                                                                     v11,
                                                                     (System_String_o *)StringLiteral_24158/*"）"*/,
                                                                     0LL);
                  if ( this->fields.bonuslabel )
                  {
                    UILabel__set_text(this->fields.bonuslabel, (System_String_o *)p_baseFriendshipExp, 0LL);
                    p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
                    if ( p_baseFriendshipExp )
                    {
                      v12 = (float)(v10 * parenthesisAjust) + (float)(v10 * parenthesisAjust);
                      x = UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0LL).fields.x;
                      v14 = this->fields.friendshipLabelArea;
                      if ( (float)(x - v12) <= v14 )
                      {
                        v15 = 1.0;
                      }
                      else
                      {
                        p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
                        if ( !p_baseFriendshipExp )
                          goto LABEL_40;
                        v15 = v14
                            / (float)(UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0LL).fields.x - v12);
                      }
                      bonuslabel = this->fields.bonuslabel;
                      v20 = System_Int32__ToString_39387012((int32_t)&v37, (System_String_o *)StringLiteral_9323/*"N0"*/, 0LL);
                      p_baseFriendshipExp = (UnityEngine_Component_o *)System_String__Concat_44570600(
                                                                         (System_String_o *)StringLiteral_24157/*"（＋"*/,
                                                                         v20,
                                                                         (System_String_o *)StringLiteral_24158/*"）"*/,
                                                                         0LL);
                      if ( bonuslabel )
                      {
                        UILabel__set_text(bonuslabel, (System_String_o *)p_baseFriendshipExp, 0LL);
                        p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
                        if ( p_baseFriendshipExp )
                        {
                          p_baseFriendshipExp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                             p_baseFriendshipExp,
                                                                             0LL);
                          if ( p_baseFriendshipExp )
                          {
                            v39.fields.x = v15;
                            v39.fields.y = 1.0;
                            v39.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)p_baseFriendshipExp,
                              v39,
                              0LL);
                            p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.atlabel;
                            if ( p_baseFriendshipExp )
                            {
                              p_baseFriendshipExp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                                 p_baseFriendshipExp,
                                                                                 0LL);
                              if ( p_baseFriendshipExp )
                              {
                                v40.fields.x = v15;
                                v40.fields.y = 1.0;
                                v40.fields.z = 1.0;
                                UnityEngine_Transform__set_localScale(
                                  (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                  v40,
                                  0LL);
                                p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
                                if ( p_baseFriendshipExp )
                                {
                                  LODWORD(v21) = *(_QWORD *)&UILabel__get_printedSize(
                                                               (UILabel_o *)p_baseFriendshipExp,
                                                               0LL);
                                  p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.atlabel;
                                  if ( p_baseFriendshipExp )
                                  {
                                    friendshipLabelSpace = this->fields.friendshipLabelSpace;
                                    v23 = v21;
                                    LODWORD(v24) = *(_QWORD *)&UILabel__get_printedSize(
                                                                 (UILabel_o *)p_baseFriendshipExp,
                                                                 0LL);
                                    p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.atlabel;
                                    if ( p_baseFriendshipExp )
                                    {
                                      v25 = v24;
                                      p_baseFriendshipExp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                                         p_baseFriendshipExp,
                                                                                         0LL);
                                      if ( p_baseFriendshipExp )
                                      {
                                        *(UnityEngine_Vector3_o *)(&v26 - 1) = UnityEngine_Transform__get_localPosition(
                                                                                 (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                                                 0LL);
                                        p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
                                        if ( p_baseFriendshipExp )
                                        {
                                          v28 = v26;
                                          v29 = v27;
                                          p_baseFriendshipExp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                                             p_baseFriendshipExp,
                                                                                             0LL);
                                          if ( p_baseFriendshipExp )
                                          {
                                            *(UnityEngine_Vector3_o *)(&v30 - 2) = UnityEngine_Transform__get_localPosition(
                                                                                     (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                                                     0LL);
                                            p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.atlabel;
                                            v36 = v31;
                                            if ( p_baseFriendshipExp )
                                            {
                                              v32 = v30;
                                              p_baseFriendshipExp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                                                 p_baseFriendshipExp,
                                                                                                 0LL);
                                              if ( p_baseFriendshipExp )
                                              {
                                                v33 = v15 * v25;
                                                v34 = friendshipLabelSpace + (float)(v15 * (float)(v23 - v12));
                                                v35 = (float)(v34 + v33) * 0.5;
                                                v41.fields.x = (float)(v33 - v35) - (float)(v33 * 0.5);
                                                v41.fields.y = v28;
                                                v41.fields.z = v29;
                                                UnityEngine_Transform__set_localPosition(
                                                  (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                  v41,
                                                  0LL);
                                                p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
                                                if ( p_baseFriendshipExp )
                                                {
                                                  p_baseFriendshipExp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                                                     p_baseFriendshipExp,
                                                                                                     0LL);
                                                  if ( p_baseFriendshipExp )
                                                  {
                                                    v42.fields.x = (float)(v34 * 0.5) - (float)(v34 - v35);
                                                    v42.fields.y = v36;
                                                    v42.fields.z = v32;
                                                    UnityEngine_Transform__set_localPosition(
                                                      (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                      v42,
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
    }
LABEL_40:
    sub_B52A5C(p_baseFriendshipExp, method);
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
  BattleResultBuddyPointInfoComponent_o *v9; // x0

  if ( (byte_42B0A23 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0A23 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v9 = this->fields.buddyPointInfo;
    if ( !v9 )
      sub_B52A5C(0LL, v8);
    BattleResultBuddyPointInfoComponent__SetBuddyPointInfo(v9, pointInfo, eventId, 0LL);
  }
}


void __fastcall BattleResultBondsIconComponent__StartUpdateBuddyPoint(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buddyPointInfo; // x20
  __int64 v4; // x1
  BattleResultBuddyPointInfoComponent_o *v5; // x0

  if ( (byte_42B0A27 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0A27 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v5 = this->fields.buddyPointInfo;
    if ( !v5 )
      sub_B52A5C(0LL, v4);
    BattleResultBuddyPointInfoComponent__StartUpdateBuddyPoint(v5, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleResultBondsIconComponent__changeGauge(
        BattleResultBondsIconComponent_o *this,
        float val,
        const MethodInfo *method)
{
  __int64 v3; // x3
  long double v4; // q8
  BattleResultBondsIconComponent_o *v5; // x19
  struct IFriendshipGauge_o *gaugeComponent; // x20
  IFriendshipGauge_c *klass; // x8
  unsigned __int64 v8; // x10
  IFriendshipGauge_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *atlabel; // x20
  UnityEngine_Object_o *v13; // x20
  UILabel_o *v14; // x20
  System_String_o *v15; // x0
  float friendshipLabelArea; // s8
  UnityEngine_Transform_o *v17; // x20
  float v18; // s0
  UITweener_o *v19; // x19
  int v20; // [xsp+4h] [xbp-2Ch] BYREF
  char v21[4]; // [xsp+8h] [xbp-28h] BYREF
  char v22[4]; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  v4 = *(long double *)&val;
  v5 = this;
  if ( (byte_42B0A25 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B52984(&IFriendshipGauge_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_24042/*"ーーー"*/);
    sub_B52984(&StringLiteral_24160/*"＋ "*/);
    this = (BattleResultBondsIconComponent_o *)sub_B52984(&StringLiteral_9323/*"N0"*/);
    byte_42B0A25 = 1;
  }
  v22[0] = 0;
  v21[0] = 0;
  v20 = 0;
  if ( !v5->fields.isUse )
    return 0;
  gaugeComponent = v5->fields.gaugeComponent;
  if ( !gaugeComponent )
    goto LABEL_46;
  klass = gaugeComponent->klass;
  if ( *(_WORD *)&gaugeComponent->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = (IFriendshipGauge_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      ++v8;
      p_offset += 2;
      if ( v8 >= *(unsigned __int16 *)&gaugeComponent->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AEB880(v5->fields.gaugeComponent, IFriendshipGauge_TypeInfo, 4LL, v3);
  }
  v20 = (*(__int64 (__fastcall **)(struct IFriendshipGauge_o *, bool *, char *, char *, _QWORD, long double))p_method)(
          gaugeComponent,
          &v5->fields.isMax,
          v22,
          v21,
          *(_QWORD *)(p_method + 8),
          v4);
  if ( v5->fields.isMax )
  {
    this = (BattleResultBondsIconComponent_o *)v5->fields.maxSprite;
    if ( !this )
      goto LABEL_46;
    this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
    if ( !this )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    atlabel = (UnityEngine_Object_o *)v5->fields.atlabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(atlabel, 0LL, 0LL) )
    {
      this = (BattleResultBondsIconComponent_o *)v5->fields.atlabel;
      if ( !this )
        goto LABEL_46;
      this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
      if ( !this )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
  }
  else
  {
    v13 = (UnityEngine_Object_o *)v5->fields.atlabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
    {
      this = (BattleResultBondsIconComponent_o *)v5->fields.maxSprite;
      if ( !this )
        goto LABEL_46;
      this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
      if ( !this )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (BattleResultBondsIconComponent_o *)v5->fields.atlabel;
      if ( !this )
        goto LABEL_46;
      this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
      if ( !this )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v14 = v5->fields.atlabel;
      if ( v5->fields.isHeroine )
      {
        if ( !v14 )
          goto LABEL_46;
        UILabel__set_text(v5->fields.atlabel, (System_String_o *)StringLiteral_24042/*"ーーー"*/, 0LL);
      }
      else
      {
        v15 = System_Int32__ToString_39387012((int32_t)&v20, (System_String_o *)StringLiteral_9323/*"N0"*/, 0LL);
        this = (BattleResultBondsIconComponent_o *)System_String__Concat_44568316(
                                                     (System_String_o *)StringLiteral_24160/*"＋ "*/,
                                                     v15,
                                                     0LL);
        if ( !v14 )
          goto LABEL_46;
        UILabel__set_text(v14, (System_String_o *)this, 0LL);
        this = (BattleResultBondsIconComponent_o *)v5->fields.atlabel;
        if ( !this )
          goto LABEL_46;
        if ( UILabel__get_printedSize((UILabel_o *)this, 0LL).fields.x > v5->fields.friendshipLabelArea )
        {
          this = (BattleResultBondsIconComponent_o *)v5->fields.atlabel;
          if ( !this )
            goto LABEL_46;
          this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
          if ( !v5->fields.atlabel )
            goto LABEL_46;
          friendshipLabelArea = v5->fields.friendshipLabelArea;
          v17 = (UnityEngine_Transform_o *)this;
          LODWORD(v18) = *(_QWORD *)&UILabel__get_printedSize(v5->fields.atlabel, 0LL);
          if ( !v17 )
            goto LABEL_46;
          v23.fields.y = 1.0;
          v23.fields.x = friendshipLabelArea / v18;
          v23.fields.z = 1.0;
          UnityEngine_Transform__set_localScale(v17, v23, 0LL);
        }
      }
    }
  }
  if ( v22[0] )
  {
    this = (BattleResultBondsIconComponent_o *)v5->fields.levelUpObject;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (BattleResultBondsIconComponent_o *)v5->fields.levelUpObject;
      if ( this )
      {
        this = (BattleResultBondsIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( this )
        {
          v19 = (UITweener_o *)this;
          UITweener__set_tweenFactor((UITweener_o *)this, 0.0, 0LL);
          UITweener__Play(v19, 0LL);
          return v21[0] != 0;
        }
      }
    }
LABEL_46:
    sub_B52A5C(this, method);
  }
  return v21[0] != 0;
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
  struct IFriendshipGauge_o *gaugeComponent; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  unsigned int v8; // w22
  __int64 v9; // x3
  IFriendshipGauge_c *klass; // x8
  unsigned int v11; // w23
  unsigned __int64 v12; // x10
  IFriendshipGauge_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x3
  struct IFriendshipGauge_o *v17; // x20
  IFriendshipGauge_c *v18; // x8
  unsigned __int64 v19; // x10
  IFriendshipGauge_c **v20; // x11
  __int64 v21; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v4 = this;
  if ( (byte_42B0A24 & 1) == 0 )
  {
    sub_B52984(&IFriendshipGauge_TypeInfo);
    this = (BattleResultBondsIconComponent_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B0A24 = 1;
  }
  if ( !v4->fields.isUse )
    return 0;
  if ( !userSvtCol )
    goto LABEL_24;
  gaugeComponent = v4->fields.gaugeComponent;
  v6 = *(_QWORD *)&userSvtCol->fields.friendship.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userSvtCol->fields.friendship.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v6;
  *(_QWORD *)&v22.fields.fakeValue = v7;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v22, 0LL);
  this = (BattleResultBondsIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                               userSvtCol->fields.friendshipRank,
                                               0LL);
  if ( !gaugeComponent )
    goto LABEL_24;
  klass = gaugeComponent->klass;
  v11 = (unsigned int)this;
  if ( *(_WORD *)&gaugeComponent->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = (IFriendshipGauge_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      ++v12;
      p_offset += 2;
      if ( v12 >= *(unsigned __int16 *)&gaugeComponent->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AEB880(gaugeComponent, IFriendshipGauge_TypeInfo, 1LL, v9);
  }
  (*(void (__fastcall **)(struct IFriendshipGauge_o *, _QWORD, _QWORD, _QWORD))p_method)(
    gaugeComponent,
    v8,
    v11,
    *(_QWORD *)(p_method + 8));
  v4->fields.nextFriendShipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                    userSvtCol->fields.friendshipRank,
                                    0LL);
  this = (BattleResultBondsIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                               userSvtCol->fields.friendship,
                                               0LL);
  v17 = v4->fields.gaugeComponent;
  v4->fields.nextFriendship = (int)this;
  if ( !v17 )
LABEL_24:
    sub_B52A5C(this, userSvtCol);
  v18 = v17->klass;
  if ( *(_WORD *)&v17->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    v20 = (IFriendshipGauge_c **)&v18->_1.interfaceOffsets->offset;
    while ( *(v20 - 1) != IFriendshipGauge_TypeInfo )
    {
      ++v19;
      v20 += 2;
      if ( v19 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 2].method;
  }
  else
  {
LABEL_21:
    v21 = sub_AEB880(v17, IFriendshipGauge_TypeInfo, 2LL, v16);
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
  UnityEngine_GameObject_o *root; // x0
  __int64 v16; // x25
  __int64 v17; // x26
  int32_t v18; // w8
  ServantFaceIconComponent_o *faceIcon; // x25
  __int64 v20; // x26
  __int64 v21; // x27
  int32_t v23; // w26
  int32_t exceedCount; // w27
  bool IsNew; // w28
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v27; // x25
  __int64 v28; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x24
  UnityEngine_GameObject_o *v30; // x24
  __int64 v31; // x25
  __int64 v32; // x26
  __int128 v33; // q1
  struct IFriendshipGauge_o *Gauge; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x3
  struct IFriendshipGauge_o *gaugeComponent; // x22
  unsigned int friendshipId; // w23
  unsigned int friendship; // w25
  unsigned int friendshipRank; // w26
  IFriendshipGauge_c *klass; // x8
  unsigned int klass_high; // w24
  unsigned int friendshipExceedCount; // w21
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  float *p_nosupportLabelWidth; // x8
  bool v53; // [xsp+4Ch] [xbp-94h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+70h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_42B0A22 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&IFriendshipGauge_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0A22 = 1;
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
    goto LABEL_53;
  }
  root = this->fields.rootNot;
  *(_WORD *)&this->fields.isUse = 1;
  if ( !root )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  root = this->fields.root;
  if ( !root )
    goto LABEL_53;
  v53 = isNoFollower;
  UnityEngine_GameObject__SetActive(root, 1, 0LL);
  root = this->fields.levelUpObject;
  if ( !root )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  this->fields.baseFriendshipExp = baseFriendshipExp;
  v17 = *(_QWORD *)&userSvtEnt->fields.limitCount.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userSvtEnt->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v56.fields.currentCryptoKey = v17;
  *(_QWORD *)&v56.fields.fakeValue = v16;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v56, 0LL);
  faceIcon = this->fields.faceIcon;
  v21 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.fakeValue;
  if ( v18 == afterLimitCnt || afterLimitCnt < 0 )
    afterLimitCnt = v18;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v57.fields.currentCryptoKey = v21;
  *(_QWORD *)&v57.fields.fakeValue = v20;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v57, 0LL);
  if ( (iconLimitCnt & 0x80000000) != 0 )
    iconLimitCnt = UserServantEntity__getIconLimitCount(userSvtEnt, 0, 0LL);
  exceedCount = userSvtEnt->fields.exceedCount;
  IsNew = UserServantEntity__IsNew(userSvtEnt, 0LL);
  root = (UnityEngine_GameObject_o *)UserServantEntity__IsEventJoin(userSvtEnt, 0LL);
  if ( !faceIcon )
    goto LABEL_53;
  ServantFaceIconComponent__Set_30467316(
    faceIcon,
    v23,
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
  root = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !root )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)root,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v28 = *(_QWORD *)&userSvtCol->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&userSvtCol->fields.svtId.fields.fakeValue;
  v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v58.fields.currentCryptoKey = v28;
  *(_QWORD *)&v58.fields.fakeValue = v27;
  root = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v58, 0LL);
  if ( !v29 )
    goto LABEL_53;
  root = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v29,
                                       (int32_t)root,
                                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !root )
    goto LABEL_53;
  v30 = root;
  this->fields.userId = userSvtCol->fields.userId;
  v32 = *(_QWORD *)&userSvtCol->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&userSvtCol->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v59.fields.currentCryptoKey = v32;
  *(_QWORD *)&v59.fields.fakeValue = v31;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v59, 0LL);
  v33 = *(_OWORD *)&userSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v55.fields.fakeValue = v33;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v54 = v55;
  this->fields.userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v54, 0LL);
  this->fields.svtLimit = afterLimitCnt;
  this->fields.svtLv = userSvtEnt->fields.lv;
  this->fields.friendshipId = (int32_t)v30[4].klass;
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                              userSvtCol->fields.friendship,
                              0LL);
  this->fields.friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                  userSvtCol->fields.friendshipRank,
                                  0LL);
  root = (UnityEngine_GameObject_o *)this->fields.gaugeSelector;
  this->fields.maxLimitCount = userSvtCol->fields.maxLimitCount;
  this->fields.maxFriendShipRank = HIDWORD(v30[4].klass);
  if ( !root )
    goto LABEL_53;
  Gauge = FriendshipGaugeSelector__GetGauge(
            (FriendshipGaugeSelector_o *)root,
            HIDWORD(v30[4].klass),
            userSvtCol->fields.friendshipExceedCount,
            0LL);
  this->fields.gaugeComponent = Gauge;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.gaugeComponent,
    (System_Int32_array **)Gauge,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  gaugeComponent = this->fields.gaugeComponent;
  if ( !gaugeComponent )
    goto LABEL_53;
  friendshipId = this->fields.friendshipId;
  friendship = this->fields.friendship;
  friendshipRank = this->fields.friendshipRank;
  klass = gaugeComponent->klass;
  klass_high = HIDWORD(v30[4].klass);
  friendshipExceedCount = userSvtCol->fields.friendshipExceedCount;
  if ( *(_WORD *)&gaugeComponent->klass->_2.bitflags1 )
  {
    v49 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IFriendshipGauge_c **)p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      ++v49;
      p_offset += 4;
      if ( v49 >= *(unsigned __int16 *)&gaugeComponent->klass->_2.bitflags1 )
        goto LABEL_40;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_40:
    p_method = sub_AEB880(gaugeComponent, IFriendshipGauge_TypeInfo, 0LL, v41);
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
    goto LABEL_53;
  p_nosupportLabelWidth = &this->fields.nosupportLabelWidth;
  if ( !v53 )
    p_nosupportLabelWidth = &this->fields.supportLabelWidth;
  this->fields.friendshipLabelArea = *p_nosupportLabelWidth;
  if ( v53 )
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
LABEL_53:
    sub_B52A5C(root, userSvtCol);
  }
}