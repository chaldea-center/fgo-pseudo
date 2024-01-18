void __fastcall BattleResultBondsIconComponent___ctor(BattleResultBondsIconComponent_o *this, const MethodInfo *method)
{
  this->fields.nosupportFontSize = 23;
  this->fields.friendshipLabelSpace = 8.0;
  *(_OWORD *)&this->fields.friendshipLabelArea = xmmword_31A2D50;
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
    sub_B2C434(0LL, method);
  ServantFaceIconComponent__ClearFaceAtlas(faceIcon, 0LL);
}


void __fastcall BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buddyPointInfo; // x20
  __int64 v4; // x1
  BattleResultBuddyPointInfoComponent_o *v5; // x0

  if ( (byte_4188564 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188564 = 1;
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
      sub_B2C434(0LL, v4);
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

  if ( (byte_4188563 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188563 = 1;
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
      sub_B2C434(0LL, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *p_baseFriendshipExp; // x0
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
  float v18; // s8
  float v19; // s8
  float friendshipLabelArea; // s8
  UnityEngine_Transform_o *v21; // x20
  float v22; // s0
  UILabel_o *bonuslabel; // x20
  System_String_o *v24; // x0
  float v25; // s0
  float friendshipLabelSpace; // s10
  float v27; // s12
  float v28; // s0
  float v29; // s9
  float v30; // s1
  float v31; // s2
  float v32; // s13
  float v33; // s14
  float v34; // s2
  float v35; // s1
  float v36; // s15
  float v37; // s1
  float v38; // s8
  float v39; // s10
  float v40; // [xsp+48h] [xbp-28h]
  int v41; // [xsp+4Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4188561 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_23954/*"（＋"*/, method);
    sub_B2C35C(&StringLiteral_23957/*"＋ "*/, v3);
    sub_B2C35C(&StringLiteral_23955/*"）"*/, v4);
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, v5);
    sub_B2C35C(&StringLiteral_23953/*"（"*/, v6);
    byte_4188561 = 1;
  }
  v41 = 0;
  if ( !this->fields.isMax )
  {
    p_baseFriendshipExp = (UnityEngine_Component_o *)&this->fields.baseFriendshipExp;
    v41 = this->fields.nextFriendship - this->fields.friendship - this->fields.baseFriendshipExp;
    atlabel = this->fields.atlabel;
    if ( v41 <= 0 )
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
            v21 = (UnityEngine_Transform_o *)p_baseFriendshipExp;
            LODWORD(v22) = *(_QWORD *)&UILabel__get_printedSize(this->fields.atlabel, 0LL);
            if ( v21 )
            {
              v42.fields.y = 1.0;
              v42.fields.x = friendshipLabelArea / v22;
              v42.fields.z = 1.0;
              UnityEngine_Transform__set_localScale(v21, v42, 0LL);
              return;
            }
          }
        }
      }
    }
    else
    {
      v9 = System_Int32__ToString_38381416((int32_t)p_baseFriendshipExp, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL);
      p_baseFriendshipExp = (UnityEngine_Component_o *)System_String__Concat_44305532(
                                                         (System_String_o *)StringLiteral_23957/*"＋ "*/,
                                                         v9,
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
              UILabel__set_text((UILabel_o *)p_baseFriendshipExp, (System_String_o *)StringLiteral_23953/*"（"*/, 0LL);
              p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
              if ( p_baseFriendshipExp )
              {
                LODWORD(v10) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0LL);
                v11 = this->fields.atlabel;
                if ( v11 )
                {
                  parenthesisAjust = this->fields.parenthesisAjust;
                  mText = v11->fields.mText;
                  v14 = v10;
                  v15 = System_Int32__ToString_38381416((int32_t)&v41, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL);
                  p_baseFriendshipExp = (UnityEngine_Component_o *)System_String__Concat_44308944(
                                                                     mText,
                                                                     (System_String_o *)StringLiteral_23954/*"（＋"*/,
                                                                     v15,
                                                                     (System_String_o *)StringLiteral_23955/*"）"*/,
                                                                     0LL);
                  if ( this->fields.bonuslabel )
                  {
                    UILabel__set_text(this->fields.bonuslabel, (System_String_o *)p_baseFriendshipExp, 0LL);
                    p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
                    if ( p_baseFriendshipExp )
                    {
                      v16 = (float)(v14 * parenthesisAjust) + (float)(v14 * parenthesisAjust);
                      x = UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0LL).fields.x;
                      v18 = this->fields.friendshipLabelArea;
                      if ( (float)(x - v16) <= v18 )
                      {
                        v19 = 1.0;
                      }
                      else
                      {
                        p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
                        if ( !p_baseFriendshipExp )
                          goto LABEL_40;
                        v19 = v18
                            / (float)(UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0LL).fields.x - v16);
                      }
                      bonuslabel = this->fields.bonuslabel;
                      v24 = System_Int32__ToString_38381416((int32_t)&v41, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL);
                      p_baseFriendshipExp = (UnityEngine_Component_o *)System_String__Concat_44307816(
                                                                         (System_String_o *)StringLiteral_23954/*"（＋"*/,
                                                                         v24,
                                                                         (System_String_o *)StringLiteral_23955/*"）"*/,
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
                            v43.fields.x = v19;
                            v43.fields.y = 1.0;
                            v43.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)p_baseFriendshipExp,
                              v43,
                              0LL);
                            p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.atlabel;
                            if ( p_baseFriendshipExp )
                            {
                              p_baseFriendshipExp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                                 p_baseFriendshipExp,
                                                                                 0LL);
                              if ( p_baseFriendshipExp )
                              {
                                v44.fields.x = v19;
                                v44.fields.y = 1.0;
                                v44.fields.z = 1.0;
                                UnityEngine_Transform__set_localScale(
                                  (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                  v44,
                                  0LL);
                                p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
                                if ( p_baseFriendshipExp )
                                {
                                  LODWORD(v25) = *(_QWORD *)&UILabel__get_printedSize(
                                                               (UILabel_o *)p_baseFriendshipExp,
                                                               0LL);
                                  p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.atlabel;
                                  if ( p_baseFriendshipExp )
                                  {
                                    friendshipLabelSpace = this->fields.friendshipLabelSpace;
                                    v27 = v25;
                                    LODWORD(v28) = *(_QWORD *)&UILabel__get_printedSize(
                                                                 (UILabel_o *)p_baseFriendshipExp,
                                                                 0LL);
                                    p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.atlabel;
                                    if ( p_baseFriendshipExp )
                                    {
                                      v29 = v28;
                                      p_baseFriendshipExp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                                         p_baseFriendshipExp,
                                                                                         0LL);
                                      if ( p_baseFriendshipExp )
                                      {
                                        *(UnityEngine_Vector3_o *)(&v30 - 1) = UnityEngine_Transform__get_localPosition(
                                                                                 (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                                                 0LL);
                                        p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
                                        if ( p_baseFriendshipExp )
                                        {
                                          v32 = v30;
                                          v33 = v31;
                                          p_baseFriendshipExp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                                             p_baseFriendshipExp,
                                                                                             0LL);
                                          if ( p_baseFriendshipExp )
                                          {
                                            *(UnityEngine_Vector3_o *)(&v34 - 2) = UnityEngine_Transform__get_localPosition(
                                                                                     (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                                                     0LL);
                                            p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.atlabel;
                                            v40 = v35;
                                            if ( p_baseFriendshipExp )
                                            {
                                              v36 = v34;
                                              p_baseFriendshipExp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                                                 p_baseFriendshipExp,
                                                                                                 0LL);
                                              if ( p_baseFriendshipExp )
                                              {
                                                v37 = v19 * v29;
                                                v38 = friendshipLabelSpace + (float)(v19 * (float)(v27 - v16));
                                                v39 = (float)(v38 + v37) * 0.5;
                                                v45.fields.x = (float)(v37 - v39) - (float)(v37 * 0.5);
                                                v45.fields.y = v32;
                                                v45.fields.z = v33;
                                                UnityEngine_Transform__set_localPosition(
                                                  (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                  v45,
                                                  0LL);
                                                p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
                                                if ( p_baseFriendshipExp )
                                                {
                                                  p_baseFriendshipExp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                                                     p_baseFriendshipExp,
                                                                                                     0LL);
                                                  if ( p_baseFriendshipExp )
                                                  {
                                                    v46.fields.x = (float)(v38 * 0.5) - (float)(v38 - v39);
                                                    v46.fields.y = v40;
                                                    v46.fields.z = v36;
                                                    UnityEngine_Transform__set_localPosition(
                                                      (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                      v46,
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
    sub_B2C434(p_baseFriendshipExp, method);
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

  if ( (byte_418855E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, pointInfo);
    byte_418855E = 1;
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
      sub_B2C434(0LL, v8);
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

  if ( (byte_4188562 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188562 = 1;
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
      sub_B2C434(0LL, v4);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct IFriendshipGauge_o *gaugeComponent; // x20
  IFriendshipGauge_c *klass; // x8
  unsigned __int64 v13; // x10
  IFriendshipGauge_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *atlabel; // x20
  UnityEngine_Object_o *v18; // x20
  UILabel_o *v19; // x20
  System_String_o *v20; // x0
  float friendshipLabelArea; // s8
  UnityEngine_Transform_o *v22; // x20
  float v23; // s0
  UITweener_o *v24; // x19
  int v25; // [xsp+4h] [xbp-2Ch] BYREF
  char v26[4]; // [xsp+8h] [xbp-28h] BYREF
  char v27[4]; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  v4 = *(long double *)&val;
  v5 = this;
  if ( (byte_4188560 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_B2C35C(&IFriendshipGauge_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_23842/*"ーーー"*/, v8);
    sub_B2C35C(&StringLiteral_23957/*"＋ "*/, v9);
    this = (BattleResultBondsIconComponent_o *)sub_B2C35C(&StringLiteral_9266/*"N0"*/, v10);
    byte_4188560 = 1;
  }
  v27[0] = 0;
  v26[0] = 0;
  v25 = 0;
  if ( !v5->fields.isUse )
    return 0;
  gaugeComponent = v5->fields.gaugeComponent;
  if ( !gaugeComponent )
    goto LABEL_46;
  klass = gaugeComponent->klass;
  if ( *(_WORD *)&gaugeComponent->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = (IFriendshipGauge_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      ++v13;
      p_offset += 2;
      if ( v13 >= *(unsigned __int16 *)&gaugeComponent->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AC5258(v5->fields.gaugeComponent, IFriendshipGauge_TypeInfo, 4LL, v3);
  }
  v25 = (*(__int64 (__fastcall **)(struct IFriendshipGauge_o *, bool *, char *, char *, _QWORD, long double))p_method)(
          gaugeComponent,
          &v5->fields.isMax,
          v27,
          v26,
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
    v18 = (UnityEngine_Object_o *)v5->fields.atlabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
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
      v19 = v5->fields.atlabel;
      if ( v5->fields.isHeroine )
      {
        if ( !v19 )
          goto LABEL_46;
        UILabel__set_text(v5->fields.atlabel, (System_String_o *)StringLiteral_23842/*"ーーー"*/, 0LL);
      }
      else
      {
        v20 = System_Int32__ToString_38381416((int32_t)&v25, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL);
        this = (BattleResultBondsIconComponent_o *)System_String__Concat_44305532(
                                                     (System_String_o *)StringLiteral_23957/*"＋ "*/,
                                                     v20,
                                                     0LL);
        if ( !v19 )
          goto LABEL_46;
        UILabel__set_text(v19, (System_String_o *)this, 0LL);
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
          v22 = (UnityEngine_Transform_o *)this;
          LODWORD(v23) = *(_QWORD *)&UILabel__get_printedSize(v5->fields.atlabel, 0LL);
          if ( !v22 )
            goto LABEL_46;
          v28.fields.y = 1.0;
          v28.fields.x = friendshipLabelArea / v23;
          v28.fields.z = 1.0;
          UnityEngine_Transform__set_localScale(v22, v28, 0LL);
        }
      }
    }
  }
  if ( v27[0] )
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
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( this )
        {
          v24 = (UITweener_o *)this;
          UITweener__set_tweenFactor((UITweener_o *)this, 0.0, 0LL);
          UITweener__Play(v24, 0LL);
          return v26[0] != 0;
        }
      }
    }
LABEL_46:
    sub_B2C434(this, method);
  }
  return v26[0] != 0;
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
  __int64 v10; // x3
  IFriendshipGauge_c *klass; // x8
  unsigned int v12; // w23
  unsigned __int64 v13; // x10
  IFriendshipGauge_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  struct IFriendshipGauge_o *v18; // x20
  IFriendshipGauge_c *v19; // x8
  unsigned __int64 v20; // x10
  IFriendshipGauge_c **v21; // x11
  __int64 v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  v4 = this;
  if ( (byte_418855F & 1) == 0 )
  {
    sub_B2C35C(&IFriendshipGauge_TypeInfo, userSvtCol);
    this = (BattleResultBondsIconComponent_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_418855F = 1;
  }
  if ( !v4->fields.isUse )
    return 0;
  if ( !userSvtCol )
    goto LABEL_24;
  gaugeComponent = v4->fields.gaugeComponent;
  v7 = *(_QWORD *)&userSvtCol->fields.friendship.fields.currentCryptoKey;
  v8 = *(_QWORD *)&userSvtCol->fields.friendship.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v7;
  *(_QWORD *)&v23.fields.fakeValue = v8;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v23, 0LL);
  this = (BattleResultBondsIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                               userSvtCol->fields.friendshipRank,
                                               0LL);
  if ( !gaugeComponent )
    goto LABEL_24;
  klass = gaugeComponent->klass;
  v12 = (unsigned int)this;
  if ( *(_WORD *)&gaugeComponent->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = (IFriendshipGauge_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      ++v13;
      p_offset += 2;
      if ( v13 >= *(unsigned __int16 *)&gaugeComponent->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AC5258(gaugeComponent, IFriendshipGauge_TypeInfo, 1LL, v10);
  }
  (*(void (__fastcall **)(struct IFriendshipGauge_o *, _QWORD, _QWORD, _QWORD))p_method)(
    gaugeComponent,
    v9,
    v12,
    *(_QWORD *)(p_method + 8));
  v4->fields.nextFriendShipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                    userSvtCol->fields.friendshipRank,
                                    0LL);
  this = (BattleResultBondsIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                               userSvtCol->fields.friendship,
                                               0LL);
  v18 = v4->fields.gaugeComponent;
  v4->fields.nextFriendship = (int)this;
  if ( !v18 )
LABEL_24:
    sub_B2C434(this, userSvtCol);
  v19 = v18->klass;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    v21 = (IFriendshipGauge_c **)&v19->_1.interfaceOffsets->offset;
    while ( *(v21 - 1) != IFriendshipGauge_TypeInfo )
    {
      ++v20;
      v21 += 2;
      if ( v20 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v22 = (__int64)&v19->vtable[*(_DWORD *)v21 + 2].method;
  }
  else
  {
LABEL_21:
    v22 = sub_AC5258(v18, IFriendshipGauge_TypeInfo, 2LL, v17);
  }
  return (*(__int64 (__fastcall **)(struct IFriendshipGauge_o *, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8));
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v32; // x25
  __int64 v33; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v34; // x24
  UnityEngine_GameObject_o *v35; // x24
  __int64 v36; // x25
  __int64 v37; // x26
  __int128 v38; // q1
  struct IFriendshipGauge_o *Gauge; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x3
  struct IFriendshipGauge_o *gaugeComponent; // x22
  unsigned int friendshipId; // w23
  unsigned int friendship; // w25
  unsigned int friendshipRank; // w26
  IFriendshipGauge_c *klass; // x8
  unsigned int klass_high; // w24
  unsigned int friendshipExceedCount; // w21
  unsigned __int64 v54; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  float *p_nosupportLabelWidth; // x8
  bool v58; // [xsp+4Ch] [xbp-94h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+70h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_418855D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, userSvtCol);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_B2C35C(&IFriendshipGauge_TypeInfo, v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_418855D = 1;
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
  v58 = isNoFollower;
  UnityEngine_GameObject__SetActive(root, 1, 0LL);
  root = this->fields.levelUpObject;
  if ( !root )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  this->fields.baseFriendshipExp = baseFriendshipExp;
  v22 = *(_QWORD *)&userSvtEnt->fields.limitCount.fields.currentCryptoKey;
  v21 = *(_QWORD *)&userSvtEnt->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v61.fields.currentCryptoKey = v22;
  *(_QWORD *)&v61.fields.fakeValue = v21;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v61, 0LL);
  faceIcon = this->fields.faceIcon;
  v26 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.fakeValue;
  if ( v23 == afterLimitCnt || afterLimitCnt < 0 )
    afterLimitCnt = v23;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v62.fields.currentCryptoKey = v26;
  *(_QWORD *)&v62.fields.fakeValue = v25;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v62, 0LL);
  if ( (iconLimitCnt & 0x80000000) != 0 )
    iconLimitCnt = UserServantEntity__getIconLimitCount(userSvtEnt, 0, 0LL);
  exceedCount = userSvtEnt->fields.exceedCount;
  IsNew = UserServantEntity__IsNew(userSvtEnt, 0LL);
  root = (UnityEngine_GameObject_o *)UserServantEntity__IsEventJoin(userSvtEnt, 0LL);
  if ( !faceIcon )
    goto LABEL_53;
  ServantFaceIconComponent__Set_30790452(
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
  root = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !root )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)root,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v33 = *(_QWORD *)&userSvtCol->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&userSvtCol->fields.svtId.fields.fakeValue;
  v34 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v63.fields.currentCryptoKey = v33;
  *(_QWORD *)&v63.fields.fakeValue = v32;
  root = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v63, 0LL);
  if ( !v34 )
    goto LABEL_53;
  root = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v34,
                                       (int32_t)root,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !root )
    goto LABEL_53;
  v35 = root;
  this->fields.userId = userSvtCol->fields.userId;
  v37 = *(_QWORD *)&userSvtCol->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&userSvtCol->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v64.fields.currentCryptoKey = v37;
  *(_QWORD *)&v64.fields.fakeValue = v36;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v64, 0LL);
  v38 = *(_OWORD *)&userSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v60.fields.fakeValue = v38;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v59 = v60;
  this->fields.userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v59, 0LL);
  this->fields.svtLimit = afterLimitCnt;
  this->fields.svtLv = userSvtEnt->fields.lv;
  this->fields.friendshipId = (int32_t)v35[4].klass;
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                              userSvtCol->fields.friendship,
                              0LL);
  this->fields.friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                  userSvtCol->fields.friendshipRank,
                                  0LL);
  root = (UnityEngine_GameObject_o *)this->fields.gaugeSelector;
  this->fields.maxLimitCount = userSvtCol->fields.maxLimitCount;
  this->fields.maxFriendShipRank = HIDWORD(v35[4].klass);
  if ( !root )
    goto LABEL_53;
  Gauge = FriendshipGaugeSelector__GetGauge(
            (FriendshipGaugeSelector_o *)root,
            HIDWORD(v35[4].klass),
            userSvtCol->fields.friendshipExceedCount,
            0LL);
  this->fields.gaugeComponent = Gauge;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.gaugeComponent,
    (System_Int32_array **)Gauge,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  gaugeComponent = this->fields.gaugeComponent;
  if ( !gaugeComponent )
    goto LABEL_53;
  friendshipId = this->fields.friendshipId;
  friendship = this->fields.friendship;
  friendshipRank = this->fields.friendshipRank;
  klass = gaugeComponent->klass;
  klass_high = HIDWORD(v35[4].klass);
  friendshipExceedCount = userSvtCol->fields.friendshipExceedCount;
  if ( *(_WORD *)&gaugeComponent->klass->_2.bitflags1 )
  {
    v54 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IFriendshipGauge_c **)p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      ++v54;
      p_offset += 4;
      if ( v54 >= *(unsigned __int16 *)&gaugeComponent->klass->_2.bitflags1 )
        goto LABEL_40;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_40:
    p_method = sub_AC5258(gaugeComponent, IFriendshipGauge_TypeInfo, 0LL, v46);
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
  if ( !v58 )
    p_nosupportLabelWidth = &this->fields.supportLabelWidth;
  this->fields.friendshipLabelArea = *p_nosupportLabelWidth;
  if ( v58 )
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
    sub_B2C434(root, userSvtCol);
  }
}