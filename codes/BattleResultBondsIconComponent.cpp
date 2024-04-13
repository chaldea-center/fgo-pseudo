void __fastcall BattleResultBondsIconComponent___ctor(BattleResultBondsIconComponent_o *this, const MethodInfo *method)
{
  this->fields.nosupportFontSize = 23;
  this->fields.friendshipLabelSpace = 8.0;
  *(_OWORD *)&this->fields.friendshipLabelArea = xmmword_32A2EA0;
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
    sub_B5D69C(0LL, method);
  ServantFaceIconComponent__ClearFaceAtlas(faceIcon, 0LL);
}


void __fastcall BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *buddyPointInfo; // x20
  const MethodInfo *v6; // x1
  BattleResultBuddyPointInfoComponent_o *v7; // x0

  if ( (byte_42E88A8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E88A8 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v7 = this->fields.buddyPointInfo;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    BattleResultBuddyPointInfoComponent__FinishUpdateBuddyPoint(v7, v6);
  }
}


void __fastcall BattleResultBondsIconComponent__InitBuddyPointInfo(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *buddyPointInfo; // x20
  const MethodInfo *v6; // x1
  BattleResultBuddyPointInfoComponent_o *v7; // x0

  if ( (byte_42E88A7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E88A7 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v7 = this->fields.buddyPointInfo;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    BattleResultBuddyPointInfoComponent__UpdateBuddyPointInfo(v7, 0.0, v6);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Component_o *p_baseFriendshipExp; // x0
  UILabel_o *atlabel; // x20
  System_String_o *v19; // x0
  float v20; // s0
  struct UILabel_o *v21; // x8
  float parenthesisAjust; // s9
  System_String_o *mText; // x20
  float v24; // s8
  System_String_o *v25; // x0
  float v26; // s11
  float x; // s0
  float v28; // s8
  float v29; // s8
  float friendshipLabelArea; // s8
  UnityEngine_Transform_o *v31; // x20
  float v32; // s0
  UILabel_o *bonuslabel; // x20
  System_String_o *v34; // x0
  float v35; // s0
  float friendshipLabelSpace; // s10
  float v37; // s12
  float v38; // s0
  float v39; // s9
  float v40; // s1
  float v41; // s2
  float v42; // s13
  float v43; // s14
  float v44; // s2
  float v45; // s1
  float v46; // s15
  float v47; // s1
  float v48; // s8
  float v49; // s10
  float v50; // [xsp+48h] [xbp-28h]
  int v51; // [xsp+4Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E88A5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_24277/*"（＋"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_24280/*"＋ "*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_24278/*"）"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_24276/*"（"*/, v14, v15, v16);
    byte_42E88A5 = 1;
  }
  v51 = 0;
  if ( !this->fields.isMax )
  {
    p_baseFriendshipExp = (UnityEngine_Component_o *)&this->fields.baseFriendshipExp;
    v51 = this->fields.nextFriendship - this->fields.friendship - this->fields.baseFriendshipExp;
    atlabel = this->fields.atlabel;
    if ( v51 <= 0 )
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
            v31 = (UnityEngine_Transform_o *)p_baseFriendshipExp;
            LODWORD(v32) = *(_QWORD *)&UILabel__get_printedSize(this->fields.atlabel, 0LL);
            if ( v31 )
            {
              v52.fields.y = 1.0;
              v52.fields.x = friendshipLabelArea / v32;
              v52.fields.z = 1.0;
              UnityEngine_Transform__set_localScale(v31, v52, 0LL);
              return;
            }
          }
        }
      }
    }
    else
    {
      v19 = System_Int32__ToString_39741776((int32_t)p_baseFriendshipExp, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
      p_baseFriendshipExp = (UnityEngine_Component_o *)System_String__Concat_44577788(
                                                         (System_String_o *)StringLiteral_24280/*"＋ "*/,
                                                         v19,
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
              UILabel__set_text((UILabel_o *)p_baseFriendshipExp, (System_String_o *)StringLiteral_24276/*"（"*/, 0LL);
              p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
              if ( p_baseFriendshipExp )
              {
                LODWORD(v20) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0LL);
                v21 = this->fields.atlabel;
                if ( v21 )
                {
                  parenthesisAjust = this->fields.parenthesisAjust;
                  mText = v21->fields.mText;
                  v24 = v20;
                  v25 = System_Int32__ToString_39741776((int32_t)&v51, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
                  p_baseFriendshipExp = (UnityEngine_Component_o *)System_String__Concat_44581200(
                                                                     mText,
                                                                     (System_String_o *)StringLiteral_24277/*"（＋"*/,
                                                                     v25,
                                                                     (System_String_o *)StringLiteral_24278/*"）"*/,
                                                                     0LL);
                  if ( this->fields.bonuslabel )
                  {
                    UILabel__set_text(this->fields.bonuslabel, (System_String_o *)p_baseFriendshipExp, 0LL);
                    p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
                    if ( p_baseFriendshipExp )
                    {
                      v26 = (float)(v24 * parenthesisAjust) + (float)(v24 * parenthesisAjust);
                      x = UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0LL).fields.x;
                      v28 = this->fields.friendshipLabelArea;
                      if ( (float)(x - v26) <= v28 )
                      {
                        v29 = 1.0;
                      }
                      else
                      {
                        p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
                        if ( !p_baseFriendshipExp )
                          goto LABEL_40;
                        v29 = v28
                            / (float)(UILabel__get_printedSize((UILabel_o *)p_baseFriendshipExp, 0LL).fields.x - v26);
                      }
                      bonuslabel = this->fields.bonuslabel;
                      v34 = System_Int32__ToString_39741776((int32_t)&v51, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
                      p_baseFriendshipExp = (UnityEngine_Component_o *)System_String__Concat_44580072(
                                                                         (System_String_o *)StringLiteral_24277/*"（＋"*/,
                                                                         v34,
                                                                         (System_String_o *)StringLiteral_24278/*"）"*/,
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
                            v53.fields.x = v29;
                            v53.fields.y = 1.0;
                            v53.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)p_baseFriendshipExp,
                              v53,
                              0LL);
                            p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.atlabel;
                            if ( p_baseFriendshipExp )
                            {
                              p_baseFriendshipExp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                                 p_baseFriendshipExp,
                                                                                 0LL);
                              if ( p_baseFriendshipExp )
                              {
                                v54.fields.x = v29;
                                v54.fields.y = 1.0;
                                v54.fields.z = 1.0;
                                UnityEngine_Transform__set_localScale(
                                  (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                  v54,
                                  0LL);
                                p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
                                if ( p_baseFriendshipExp )
                                {
                                  LODWORD(v35) = *(_QWORD *)&UILabel__get_printedSize(
                                                               (UILabel_o *)p_baseFriendshipExp,
                                                               0LL);
                                  p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.atlabel;
                                  if ( p_baseFriendshipExp )
                                  {
                                    friendshipLabelSpace = this->fields.friendshipLabelSpace;
                                    v37 = v35;
                                    LODWORD(v38) = *(_QWORD *)&UILabel__get_printedSize(
                                                                 (UILabel_o *)p_baseFriendshipExp,
                                                                 0LL);
                                    p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.atlabel;
                                    if ( p_baseFriendshipExp )
                                    {
                                      v39 = v38;
                                      p_baseFriendshipExp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                                         p_baseFriendshipExp,
                                                                                         0LL);
                                      if ( p_baseFriendshipExp )
                                      {
                                        *(UnityEngine_Vector3_o *)(&v40 - 1) = UnityEngine_Transform__get_localPosition(
                                                                                 (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                                                 0LL);
                                        p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
                                        if ( p_baseFriendshipExp )
                                        {
                                          v42 = v40;
                                          v43 = v41;
                                          p_baseFriendshipExp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                                             p_baseFriendshipExp,
                                                                                             0LL);
                                          if ( p_baseFriendshipExp )
                                          {
                                            *(UnityEngine_Vector3_o *)(&v44 - 2) = UnityEngine_Transform__get_localPosition(
                                                                                     (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                                                     0LL);
                                            p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.atlabel;
                                            v50 = v45;
                                            if ( p_baseFriendshipExp )
                                            {
                                              v46 = v44;
                                              p_baseFriendshipExp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                                                 p_baseFriendshipExp,
                                                                                                 0LL);
                                              if ( p_baseFriendshipExp )
                                              {
                                                v47 = v29 * v39;
                                                v48 = friendshipLabelSpace + (float)(v29 * (float)(v37 - v26));
                                                v49 = (float)(v48 + v47) * 0.5;
                                                v55.fields.x = (float)(v47 - v49) - (float)(v47 * 0.5);
                                                v55.fields.y = v42;
                                                v55.fields.z = v43;
                                                UnityEngine_Transform__set_localPosition(
                                                  (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                  v55,
                                                  0LL);
                                                p_baseFriendshipExp = (UnityEngine_Component_o *)this->fields.bonuslabel;
                                                if ( p_baseFriendshipExp )
                                                {
                                                  p_baseFriendshipExp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                                                     p_baseFriendshipExp,
                                                                                                     0LL);
                                                  if ( p_baseFriendshipExp )
                                                  {
                                                    v56.fields.x = (float)(v48 * 0.5) - (float)(v48 - v49);
                                                    v56.fields.y = v50;
                                                    v56.fields.z = v46;
                                                    UnityEngine_Transform__set_localPosition(
                                                      (UnityEngine_Transform_o *)p_baseFriendshipExp,
                                                      v56,
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
    sub_B5D69C(p_baseFriendshipExp, method);
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

  if ( (byte_42E88A2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)pointInfo, eventId, method);
    byte_42E88A2 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v10 = this->fields.buddyPointInfo;
    if ( !v10 )
      sub_B5D69C(0LL, v8);
    BattleResultBuddyPointInfoComponent__SetBuddyPointInfo(v10, pointInfo, eventId, v9);
  }
}


void __fastcall BattleResultBondsIconComponent__StartUpdateBuddyPoint(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *buddyPointInfo; // x20
  const MethodInfo *v6; // x1
  BattleResultBuddyPointInfoComponent_o *v7; // x0

  if ( (byte_42E88A6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E88A6 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v7 = this->fields.buddyPointInfo;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    BattleResultBuddyPointInfoComponent__StartUpdateBuddyPoint(v7, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleResultBondsIconComponent__changeGauge(
        BattleResultBondsIconComponent_o *this,
        float val,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  long double v5; // q8
  BattleResultBondsIconComponent_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  struct IFriendshipGauge_o *gaugeComponent; // x20
  IFriendshipGauge_c *klass; // x8
  unsigned __int64 v24; // x10
  IFriendshipGauge_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *atlabel; // x20
  UnityEngine_Object_o *v29; // x20
  UILabel_o *v30; // x20
  System_String_o *v31; // x0
  float friendshipLabelArea; // s8
  UnityEngine_Transform_o *v33; // x20
  float v34; // s0
  UITweener_o *v35; // x19
  int v36; // [xsp+4h] [xbp-2Ch] BYREF
  char v37[4]; // [xsp+8h] [xbp-28h] BYREF
  char v38[4]; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  v5 = *(long double *)&val;
  v6 = this;
  if ( (byte_42E88A4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, (_DWORD)method, v3, v4);
    sub_B5D5C4(&IFriendshipGauge_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_24160/*"ーーー"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_24280/*"＋ "*/, v16, v17, v18);
    this = (BattleResultBondsIconComponent_o *)sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v19, v20, v21);
    byte_42E88A4 = 1;
  }
  v38[0] = 0;
  v37[0] = 0;
  v36 = 0;
  if ( !v6->fields.isUse )
    return 0;
  gaugeComponent = v6->fields.gaugeComponent;
  if ( !gaugeComponent )
    goto LABEL_46;
  klass = gaugeComponent->klass;
  if ( *(_WORD *)&gaugeComponent->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = (IFriendshipGauge_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      ++v24;
      p_offset += 2;
      if ( v24 >= *(unsigned __int16 *)&gaugeComponent->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AF54C0(v6->fields.gaugeComponent, IFriendshipGauge_TypeInfo, 4LL, v4);
  }
  v36 = (*(__int64 (__fastcall **)(struct IFriendshipGauge_o *, bool *, char *, char *, _QWORD, long double))p_method)(
          gaugeComponent,
          &v6->fields.isMax,
          v38,
          v37,
          *(_QWORD *)(p_method + 8),
          v5);
  if ( v6->fields.isMax )
  {
    this = (BattleResultBondsIconComponent_o *)v6->fields.maxSprite;
    if ( !this )
      goto LABEL_46;
    this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
    if ( !this )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    atlabel = (UnityEngine_Object_o *)v6->fields.atlabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(atlabel, 0LL, 0LL) )
    {
      this = (BattleResultBondsIconComponent_o *)v6->fields.atlabel;
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
    v29 = (UnityEngine_Object_o *)v6->fields.atlabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
    {
      this = (BattleResultBondsIconComponent_o *)v6->fields.maxSprite;
      if ( !this )
        goto LABEL_46;
      this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
      if ( !this )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (BattleResultBondsIconComponent_o *)v6->fields.atlabel;
      if ( !this )
        goto LABEL_46;
      this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
      if ( !this )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v30 = v6->fields.atlabel;
      if ( v6->fields.isHeroine )
      {
        if ( !v30 )
          goto LABEL_46;
        UILabel__set_text(v6->fields.atlabel, (System_String_o *)StringLiteral_24160/*"ーーー"*/, 0LL);
      }
      else
      {
        v31 = System_Int32__ToString_39741776((int32_t)&v36, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
        this = (BattleResultBondsIconComponent_o *)System_String__Concat_44577788(
                                                     (System_String_o *)StringLiteral_24280/*"＋ "*/,
                                                     v31,
                                                     0LL);
        if ( !v30 )
          goto LABEL_46;
        UILabel__set_text(v30, (System_String_o *)this, 0LL);
        this = (BattleResultBondsIconComponent_o *)v6->fields.atlabel;
        if ( !this )
          goto LABEL_46;
        if ( UILabel__get_printedSize((UILabel_o *)this, 0LL).fields.x > v6->fields.friendshipLabelArea )
        {
          this = (BattleResultBondsIconComponent_o *)v6->fields.atlabel;
          if ( !this )
            goto LABEL_46;
          this = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
          if ( !v6->fields.atlabel )
            goto LABEL_46;
          friendshipLabelArea = v6->fields.friendshipLabelArea;
          v33 = (UnityEngine_Transform_o *)this;
          LODWORD(v34) = *(_QWORD *)&UILabel__get_printedSize(v6->fields.atlabel, 0LL);
          if ( !v33 )
            goto LABEL_46;
          v39.fields.y = 1.0;
          v39.fields.x = friendshipLabelArea / v34;
          v39.fields.z = 1.0;
          UnityEngine_Transform__set_localScale(v33, v39, 0LL);
        }
      }
    }
  }
  if ( v38[0] )
  {
    this = (BattleResultBondsIconComponent_o *)v6->fields.levelUpObject;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (BattleResultBondsIconComponent_o *)v6->fields.levelUpObject;
      if ( this )
      {
        this = (BattleResultBondsIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( this )
        {
          v35 = (UITweener_o *)this;
          UITweener__set_tweenFactor((UITweener_o *)this, 0.0, 0LL);
          UITweener__Play(v35, 0LL);
          return v37[0] != 0;
        }
      }
    }
LABEL_46:
    sub_B5D69C(this, method);
  }
  return v37[0] != 0;
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
  __int64 v3; // x3
  BattleResultBondsIconComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct IFriendshipGauge_o *gaugeComponent; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  unsigned int v12; // w22
  __int64 v13; // x3
  IFriendshipGauge_c *klass; // x8
  unsigned int v15; // w23
  unsigned __int64 v16; // x10
  IFriendshipGauge_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v20; // x3
  struct IFriendshipGauge_o *v21; // x20
  IFriendshipGauge_c *v22; // x8
  unsigned __int64 v23; // x10
  IFriendshipGauge_c **v24; // x11
  __int64 v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v5 = this;
  if ( (byte_42E88A3 & 1) == 0 )
  {
    sub_B5D5C4(&IFriendshipGauge_TypeInfo, (_DWORD)userSvtCol, (_DWORD)method, v3);
    this = (BattleResultBondsIconComponent_o *)sub_B5D5C4(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                 v6,
                                                 v7,
                                                 v8);
    byte_42E88A3 = 1;
  }
  if ( !v5->fields.isUse )
    return 0;
  if ( !userSvtCol )
    goto LABEL_24;
  gaugeComponent = v5->fields.gaugeComponent;
  v10 = *(_QWORD *)&userSvtCol->fields.friendship.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtCol->fields.friendship.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v10;
  *(_QWORD *)&v26.fields.fakeValue = v11;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v26, 0LL);
  this = (BattleResultBondsIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                               userSvtCol->fields.friendshipRank,
                                               0LL);
  if ( !gaugeComponent )
    goto LABEL_24;
  klass = gaugeComponent->klass;
  v15 = (unsigned int)this;
  if ( *(_WORD *)&gaugeComponent->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = (IFriendshipGauge_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      ++v16;
      p_offset += 2;
      if ( v16 >= *(unsigned __int16 *)&gaugeComponent->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AF54C0(gaugeComponent, IFriendshipGauge_TypeInfo, 1LL, v13);
  }
  (*(void (__fastcall **)(struct IFriendshipGauge_o *, _QWORD, _QWORD, _QWORD))p_method)(
    gaugeComponent,
    v12,
    v15,
    *(_QWORD *)(p_method + 8));
  v5->fields.nextFriendShipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                    userSvtCol->fields.friendshipRank,
                                    0LL);
  this = (BattleResultBondsIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                               userSvtCol->fields.friendship,
                                               0LL);
  v21 = v5->fields.gaugeComponent;
  v5->fields.nextFriendship = (int)this;
  if ( !v21 )
LABEL_24:
    sub_B5D69C(this, userSvtCol);
  v22 = v21->klass;
  if ( *(_WORD *)&v21->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = (IFriendshipGauge_c **)&v22->_1.interfaceOffsets->offset;
    while ( *(v24 - 1) != IFriendshipGauge_TypeInfo )
    {
      ++v23;
      v24 += 2;
      if ( v23 >= *(unsigned __int16 *)&v21->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v25 = (__int64)&v22->vtable[*(_DWORD *)v24 + 2].method;
  }
  else
  {
LABEL_21:
    v25 = sub_AF54C0(v21, IFriendshipGauge_TypeInfo, 2LL, v20);
  }
  return (*(__int64 (__fastcall **)(struct IFriendshipGauge_o *, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8));
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t IconLimitCount; // w24
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  UnityEngine_GameObject_o *root; // x0
  __int64 v31; // x25
  __int64 v32; // x26
  int32_t v33; // w8
  ServantFaceIconComponent_o *faceIcon; // x25
  __int64 v35; // x26
  __int64 v36; // x27
  int32_t v38; // w26
  int32_t exceedCount; // w27
  bool IsNew; // w28
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v42; // x25
  __int64 v43; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v44; // x24
  UnityEngine_GameObject_o *v45; // x24
  __int64 v46; // x25
  __int64 v47; // x26
  __int128 v48; // q1
  struct IFriendshipGauge_o *Gauge; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x3
  struct IFriendshipGauge_o *gaugeComponent; // x22
  unsigned int friendshipId; // w23
  unsigned int friendship; // w25
  unsigned int friendshipRank; // w26
  IFriendshipGauge_c *klass; // x8
  unsigned int klass_high; // w24
  unsigned int friendshipExceedCount; // w21
  unsigned __int64 v64; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  float *p_nosupportLabelWidth; // x8
  bool v68; // [xsp+4Ch] [xbp-94h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+70h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  IconLimitCount = iconLimitCnt;
  if ( (byte_42E88A1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantMaster___,
      (_DWORD)userSvtCol,
      (_DWORD)userSvtEnt,
      *(_QWORD *)&iconLimitCnt);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&IFriendshipGauge_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    byte_42E88A1 = 1;
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
  v68 = isNoFollower;
  UnityEngine_GameObject__SetActive(root, 1, 0LL);
  root = this->fields.levelUpObject;
  if ( !root )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  this->fields.baseFriendshipExp = baseFriendshipExp;
  v32 = *(_QWORD *)&userSvtEnt->fields.limitCount.fields.currentCryptoKey;
  v31 = *(_QWORD *)&userSvtEnt->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v71.fields.currentCryptoKey = v32;
  *(_QWORD *)&v71.fields.fakeValue = v31;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v71, 0LL);
  faceIcon = this->fields.faceIcon;
  v36 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.currentCryptoKey;
  v35 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.fakeValue;
  if ( v33 == afterLimitCnt || afterLimitCnt < 0 )
    afterLimitCnt = v33;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v72.fields.currentCryptoKey = v36;
  *(_QWORD *)&v72.fields.fakeValue = v35;
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v72, 0LL);
  if ( (IconLimitCount & 0x80000000) != 0 )
    IconLimitCount = UserServantEntity__getIconLimitCount(userSvtEnt, 0, 0LL);
  exceedCount = userSvtEnt->fields.exceedCount;
  IsNew = UserServantEntity__IsNew(userSvtEnt, 0LL);
  root = (UnityEngine_GameObject_o *)UserServantEntity__IsEventJoin(userSvtEnt, 0LL);
  if ( !faceIcon )
    goto LABEL_53;
  ServantFaceIconComponent__Set_30846632(
    faceIcon,
    v38,
    afterLimitCnt,
    IconLimitCount,
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
  root = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !root )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)root,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v43 = *(_QWORD *)&userSvtCol->fields.svtId.fields.currentCryptoKey;
  v42 = *(_QWORD *)&userSvtCol->fields.svtId.fields.fakeValue;
  v44 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v73.fields.currentCryptoKey = v43;
  *(_QWORD *)&v73.fields.fakeValue = v42;
  root = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v73, 0LL);
  if ( !v44 )
    goto LABEL_53;
  root = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v44,
                                       (int32_t)root,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !root )
    goto LABEL_53;
  v45 = root;
  this->fields.userId = userSvtCol->fields.userId;
  v47 = *(_QWORD *)&userSvtCol->fields.svtId.fields.currentCryptoKey;
  v46 = *(_QWORD *)&userSvtCol->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v74.fields.currentCryptoKey = v47;
  *(_QWORD *)&v74.fields.fakeValue = v46;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v74, 0LL);
  v48 = *(_OWORD *)&userSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v70.fields.fakeValue = v48;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v69 = v70;
  this->fields.userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v69, 0LL);
  this->fields.svtLimit = afterLimitCnt;
  this->fields.svtLv = userSvtEnt->fields.lv;
  this->fields.friendshipId = (int32_t)v45[4].klass;
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                              userSvtCol->fields.friendship,
                              0LL);
  this->fields.friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                  userSvtCol->fields.friendshipRank,
                                  0LL);
  root = (UnityEngine_GameObject_o *)this->fields.gaugeSelector;
  this->fields.maxLimitCount = userSvtCol->fields.maxLimitCount;
  this->fields.maxFriendShipRank = HIDWORD(v45[4].klass);
  if ( !root )
    goto LABEL_53;
  Gauge = FriendshipGaugeSelector__GetGauge(
            (FriendshipGaugeSelector_o *)root,
            HIDWORD(v45[4].klass),
            userSvtCol->fields.friendshipExceedCount,
            0LL);
  this->fields.gaugeComponent = Gauge;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.gaugeComponent,
    (System_Int32_array **)Gauge,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  gaugeComponent = this->fields.gaugeComponent;
  if ( !gaugeComponent )
    goto LABEL_53;
  friendshipId = this->fields.friendshipId;
  friendship = this->fields.friendship;
  friendshipRank = this->fields.friendshipRank;
  klass = gaugeComponent->klass;
  klass_high = HIDWORD(v45[4].klass);
  friendshipExceedCount = userSvtCol->fields.friendshipExceedCount;
  if ( *(_WORD *)&gaugeComponent->klass->_2.bitflags1 )
  {
    v64 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IFriendshipGauge_c **)p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      ++v64;
      p_offset += 4;
      if ( v64 >= *(unsigned __int16 *)&gaugeComponent->klass->_2.bitflags1 )
        goto LABEL_40;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_40:
    p_method = sub_AF54C0(gaugeComponent, IFriendshipGauge_TypeInfo, 0LL, v56);
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
  if ( !v68 )
    p_nosupportLabelWidth = &this->fields.supportLabelWidth;
  this->fields.friendshipLabelArea = *p_nosupportLabelWidth;
  if ( v68 )
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
    sub_B5D69C(root, userSvtCol);
  }
}