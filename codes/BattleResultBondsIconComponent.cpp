void __fastcall BattleResultBondsIconComponent___ctor(BattleResultBondsIconComponent_o *this, const MethodInfo *method)
{
  this->fields.nosupportFontSize = 23;
  this->fields.friendshipLabelSpace = 8.0;
  *(_OWORD *)&this->fields.friendshipLabelArea = xmmword_31369A0;
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
    sub_B170D4();
  ServantFaceIconComponent__ClearFaceAtlas(faceIcon, 0LL);
}


void __fastcall BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buddyPointInfo; // x20
  BattleResultBuddyPointInfoComponent_o *v4; // x0

  if ( (byte_40FA8F7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA8F7 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v4 = this->fields.buddyPointInfo;
    if ( !v4 )
      sub_B170D4();
    BattleResultBuddyPointInfoComponent__FinishUpdateBuddyPoint(v4, 0LL);
  }
}


void __fastcall BattleResultBondsIconComponent__InitBuddyPointInfo(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buddyPointInfo; // x20
  BattleResultBuddyPointInfoComponent_o *v4; // x0

  if ( (byte_40FA8F6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA8F6 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v4 = this->fields.buddyPointInfo;
    if ( !v4 )
      sub_B170D4();
    BattleResultBuddyPointInfoComponent__UpdateBuddyPointInfo(v4, 0.0, 0LL);
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
  UILabel_o *atlabel; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  UnityEngine_Component_o *bonuslabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v12; // x0
  UILabel_o *v13; // x0
  float v14; // s0
  struct UILabel_o *v15; // x8
  float parenthesisAjust; // s9
  System_String_o *mText; // x20
  float v18; // s8
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  UILabel_o *v21; // x0
  float v22; // s11
  float x; // s0
  float v24; // s8
  UILabel_o *v25; // x0
  float v26; // s8
  UnityEngine_Component_o *v27; // x0
  UnityEngine_Transform_o *transform; // x0
  float friendshipLabelArea; // s8
  UnityEngine_Transform_o *v30; // x20
  float v31; // s0
  UILabel_o *v32; // x20
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  UnityEngine_Component_o *v35; // x0
  UnityEngine_Transform_o *v36; // x0
  UnityEngine_Component_o *v37; // x0
  UnityEngine_Transform_o *v38; // x0
  UILabel_o *v39; // x0
  float v40; // s0
  UILabel_o *v41; // x0
  float friendshipLabelSpace; // s10
  float v43; // s12
  float v44; // s0
  UnityEngine_Component_o *v45; // x0
  float v46; // s9
  UnityEngine_Transform_o *v47; // x0
  float v48; // s1
  float v49; // s2
  UnityEngine_Component_o *v50; // x0
  float v51; // s13
  float v52; // s14
  UnityEngine_Transform_o *v53; // x0
  float v54; // s2
  UnityEngine_Component_o *v55; // x0
  float v56; // s1
  float v57; // s15
  UnityEngine_Transform_o *v58; // x0
  float v59; // s1
  float v60; // s8
  float v61; // s10
  UnityEngine_Component_o *v62; // x0
  UnityEngine_Transform_o *v63; // x0
  float v64; // [xsp+48h] [xbp-28h]
  int v65; // [xsp+4Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA8F4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_23854/*"（＋"*/, method);
    sub_B16FFC(&StringLiteral_23857/*"＋ "*/, v3);
    sub_B16FFC(&StringLiteral_23855/*"）"*/, v4);
    sub_B16FFC(&StringLiteral_9236/*"N0"*/, v5);
    sub_B16FFC(&StringLiteral_23853/*"（"*/, v6);
    byte_40FA8F4 = 1;
  }
  v65 = 0;
  if ( !this->fields.isMax )
  {
    v65 = this->fields.nextFriendship - this->fields.friendship - this->fields.baseFriendshipExp;
    atlabel = this->fields.atlabel;
    if ( v65 <= 0 )
    {
      if ( atlabel )
      {
        if ( UILabel__get_printedSize(this->fields.atlabel, 0LL).fields.x <= this->fields.friendshipLabelArea )
          return;
        v27 = (UnityEngine_Component_o *)this->fields.atlabel;
        if ( v27 )
        {
          transform = UnityEngine_Component__get_transform(v27, 0LL);
          if ( this->fields.atlabel )
          {
            friendshipLabelArea = this->fields.friendshipLabelArea;
            v30 = transform;
            LODWORD(v31) = *(_QWORD *)&UILabel__get_printedSize(this->fields.atlabel, 0LL);
            if ( v30 )
            {
              v66.fields.y = 1.0;
              v66.fields.x = friendshipLabelArea / v31;
              v66.fields.z = 1.0;
              UnityEngine_Transform__set_localScale(v30, v66, 0LL);
              return;
            }
          }
        }
      }
    }
    else
    {
      v8 = System_Int32__ToString_38275808((int)this + 168, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL);
      v9 = System_String__Concat_43743732((System_String_o *)StringLiteral_23857/*"＋ "*/, v8, 0LL);
      if ( atlabel )
      {
        UILabel__set_text(atlabel, v9, 0LL);
        bonuslabel = (UnityEngine_Component_o *)this->fields.bonuslabel;
        if ( bonuslabel )
        {
          gameObject = UnityEngine_Component__get_gameObject(bonuslabel, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
            v12 = this->fields.bonuslabel;
            if ( v12 )
            {
              UILabel__set_text(v12, (System_String_o *)StringLiteral_23853/*"（"*/, 0LL);
              v13 = this->fields.bonuslabel;
              if ( v13 )
              {
                LODWORD(v14) = *(_QWORD *)&UILabel__get_printedSize(v13, 0LL);
                v15 = this->fields.atlabel;
                if ( v15 )
                {
                  parenthesisAjust = this->fields.parenthesisAjust;
                  mText = v15->fields.mText;
                  v18 = v14;
                  v19 = System_Int32__ToString_38275808((int32_t)&v65, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL);
                  v20 = System_String__Concat_43747144(
                          mText,
                          (System_String_o *)StringLiteral_23854/*"（＋"*/,
                          v19,
                          (System_String_o *)StringLiteral_23855/*"）"*/,
                          0LL);
                  if ( this->fields.bonuslabel )
                  {
                    UILabel__set_text(this->fields.bonuslabel, v20, 0LL);
                    v21 = this->fields.bonuslabel;
                    if ( v21 )
                    {
                      v22 = (float)(v18 * parenthesisAjust) + (float)(v18 * parenthesisAjust);
                      x = UILabel__get_printedSize(v21, 0LL).fields.x;
                      v24 = this->fields.friendshipLabelArea;
                      if ( (float)(x - v22) <= v24 )
                      {
                        v26 = 1.0;
                      }
                      else
                      {
                        v25 = this->fields.bonuslabel;
                        if ( !v25 )
                          goto LABEL_40;
                        v26 = v24 / (float)(UILabel__get_printedSize(v25, 0LL).fields.x - v22);
                      }
                      v32 = this->fields.bonuslabel;
                      v33 = System_Int32__ToString_38275808((int32_t)&v65, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL);
                      v34 = System_String__Concat_43746016(
                              (System_String_o *)StringLiteral_23854/*"（＋"*/,
                              v33,
                              (System_String_o *)StringLiteral_23855/*"）"*/,
                              0LL);
                      if ( v32 )
                      {
                        UILabel__set_text(v32, v34, 0LL);
                        v35 = (UnityEngine_Component_o *)this->fields.bonuslabel;
                        if ( v35 )
                        {
                          v36 = UnityEngine_Component__get_transform(v35, 0LL);
                          if ( v36 )
                          {
                            v67.fields.x = v26;
                            v67.fields.y = 1.0;
                            v67.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(v36, v67, 0LL);
                            v37 = (UnityEngine_Component_o *)this->fields.atlabel;
                            if ( v37 )
                            {
                              v38 = UnityEngine_Component__get_transform(v37, 0LL);
                              if ( v38 )
                              {
                                v68.fields.x = v26;
                                v68.fields.y = 1.0;
                                v68.fields.z = 1.0;
                                UnityEngine_Transform__set_localScale(v38, v68, 0LL);
                                v39 = this->fields.bonuslabel;
                                if ( v39 )
                                {
                                  LODWORD(v40) = *(_QWORD *)&UILabel__get_printedSize(v39, 0LL);
                                  v41 = this->fields.atlabel;
                                  if ( v41 )
                                  {
                                    friendshipLabelSpace = this->fields.friendshipLabelSpace;
                                    v43 = v40;
                                    LODWORD(v44) = *(_QWORD *)&UILabel__get_printedSize(v41, 0LL);
                                    v45 = (UnityEngine_Component_o *)this->fields.atlabel;
                                    if ( v45 )
                                    {
                                      v46 = v44;
                                      v47 = UnityEngine_Component__get_transform(v45, 0LL);
                                      if ( v47 )
                                      {
                                        *(UnityEngine_Vector3_o *)(&v48 - 1) = UnityEngine_Transform__get_localPosition(
                                                                                 v47,
                                                                                 0LL);
                                        v50 = (UnityEngine_Component_o *)this->fields.bonuslabel;
                                        if ( v50 )
                                        {
                                          v51 = v48;
                                          v52 = v49;
                                          v53 = UnityEngine_Component__get_transform(v50, 0LL);
                                          if ( v53 )
                                          {
                                            *(UnityEngine_Vector3_o *)(&v54 - 2) = UnityEngine_Transform__get_localPosition(
                                                                                     v53,
                                                                                     0LL);
                                            v55 = (UnityEngine_Component_o *)this->fields.atlabel;
                                            v64 = v56;
                                            if ( v55 )
                                            {
                                              v57 = v54;
                                              v58 = UnityEngine_Component__get_transform(v55, 0LL);
                                              if ( v58 )
                                              {
                                                v59 = v26 * v46;
                                                v60 = friendshipLabelSpace + (float)(v26 * (float)(v43 - v22));
                                                v61 = (float)(v60 + v59) * 0.5;
                                                v69.fields.x = (float)(v59 - v61) - (float)(v59 * 0.5);
                                                v69.fields.y = v51;
                                                v69.fields.z = v52;
                                                UnityEngine_Transform__set_localPosition(v58, v69, 0LL);
                                                v62 = (UnityEngine_Component_o *)this->fields.bonuslabel;
                                                if ( v62 )
                                                {
                                                  v63 = UnityEngine_Component__get_transform(v62, 0LL);
                                                  if ( v63 )
                                                  {
                                                    v70.fields.x = (float)(v60 * 0.5) - (float)(v60 - v61);
                                                    v70.fields.y = v64;
                                                    v70.fields.z = v57;
                                                    UnityEngine_Transform__set_localPosition(v63, v70, 0LL);
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
    sub_B170D4();
  }
}


void __fastcall BattleResultBondsIconComponent__SetBuddyPointInfo(
        BattleResultBondsIconComponent_o *this,
        BattleBuddyPointInfo_o *pointInfo,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buddyPointInfo; // x22
  BattleResultBuddyPointInfoComponent_o *v8; // x0

  if ( (byte_40FA8F1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, pointInfo);
    byte_40FA8F1 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v8 = this->fields.buddyPointInfo;
    if ( !v8 )
      sub_B170D4();
    BattleResultBuddyPointInfoComponent__SetBuddyPointInfo(v8, pointInfo, eventId, 0LL);
  }
}


void __fastcall BattleResultBondsIconComponent__StartUpdateBuddyPoint(
        BattleResultBondsIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buddyPointInfo; // x20
  BattleResultBuddyPointInfoComponent_o *v4; // x0

  if ( (byte_40FA8F5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA8F5 = 1;
  }
  buddyPointInfo = (UnityEngine_Object_o *)this->fields.buddyPointInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(buddyPointInfo, 0LL, 0LL) )
  {
    v4 = this->fields.buddyPointInfo;
    if ( !v4 )
      sub_B170D4();
    BattleResultBuddyPointInfoComponent__StartUpdateBuddyPoint(v4, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleResultBondsIconComponent__changeGauge(
        BattleResultBondsIconComponent_o *this,
        float val,
        const MethodInfo *method)
{
  long double v3; // q8
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct IFriendshipGauge_o *gaugeComponent; // x20
  IFriendshipGauge_c *klass; // x8
  unsigned __int64 v12; // x10
  IFriendshipGauge_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Component_o *maxSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *atlabel; // x20
  UnityEngine_Component_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_Object_o *v21; // x20
  UnityEngine_Component_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_Component_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UILabel_o *v26; // x20
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  UILabel_o *v29; // x0
  UnityEngine_Component_o *v30; // x0
  UnityEngine_Transform_o *transform; // x0
  float friendshipLabelArea; // s8
  UnityEngine_Transform_o *v33; // x20
  float v34; // s0
  UnityEngine_GameObject_o *levelUpObject; // x0
  UnityEngine_GameObject_o *v36; // x0
  UITweener_o *Component_srcLineSprite; // x0
  UITweener_o *v38; // x19
  int v39; // [xsp+4h] [xbp-2Ch] BYREF
  char v40[4]; // [xsp+8h] [xbp-28h] BYREF
  char v41[4]; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  v3 = *(long double *)&val;
  if ( (byte_40FA8F3 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_B16FFC(&IFriendshipGauge_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_23743/*"ーーー"*/, v7);
    sub_B16FFC(&StringLiteral_23857/*"＋ "*/, v8);
    sub_B16FFC(&StringLiteral_9236/*"N0"*/, v9);
    byte_40FA8F3 = 1;
  }
  v41[0] = 0;
  v40[0] = 0;
  v39 = 0;
  if ( !this->fields.isUse )
    return 0;
  gaugeComponent = this->fields.gaugeComponent;
  if ( !gaugeComponent )
    goto LABEL_46;
  klass = gaugeComponent->klass;
  if ( *(_WORD *)&gaugeComponent->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = (IFriendshipGauge_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      ++v12;
      p_offset += 2;
      if ( v12 >= *(unsigned __int16 *)&gaugeComponent->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AAFEF8(this->fields.gaugeComponent, IFriendshipGauge_TypeInfo, 4LL);
  }
  v39 = (*(__int64 (__fastcall **)(struct IFriendshipGauge_o *, bool *, char *, char *, _QWORD, long double))p_method)(
          gaugeComponent,
          &this->fields.isMax,
          v41,
          v40,
          *(_QWORD *)(p_method + 8),
          v3);
  if ( this->fields.isMax )
  {
    maxSprite = (UnityEngine_Component_o *)this->fields.maxSprite;
    if ( !maxSprite )
      goto LABEL_46;
    gameObject = UnityEngine_Component__get_gameObject(maxSprite, 0LL);
    if ( !gameObject )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    atlabel = (UnityEngine_Object_o *)this->fields.atlabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(atlabel, 0LL, 0LL) )
    {
      v19 = (UnityEngine_Component_o *)this->fields.atlabel;
      if ( !v19 )
        goto LABEL_46;
      v20 = UnityEngine_Component__get_gameObject(v19, 0LL);
      if ( !v20 )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive(v20, 0, 0LL);
    }
  }
  else
  {
    v21 = (UnityEngine_Object_o *)this->fields.atlabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
    {
      v22 = (UnityEngine_Component_o *)this->fields.maxSprite;
      if ( !v22 )
        goto LABEL_46;
      v23 = UnityEngine_Component__get_gameObject(v22, 0LL);
      if ( !v23 )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive(v23, 0, 0LL);
      v24 = (UnityEngine_Component_o *)this->fields.atlabel;
      if ( !v24 )
        goto LABEL_46;
      v25 = UnityEngine_Component__get_gameObject(v24, 0LL);
      if ( !v25 )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive(v25, 1, 0LL);
      v26 = this->fields.atlabel;
      if ( this->fields.isHeroine )
      {
        if ( !v26 )
          goto LABEL_46;
        UILabel__set_text(this->fields.atlabel, (System_String_o *)StringLiteral_23743/*"ーーー"*/, 0LL);
      }
      else
      {
        v27 = System_Int32__ToString_38275808((int32_t)&v39, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL);
        v28 = System_String__Concat_43743732((System_String_o *)StringLiteral_23857/*"＋ "*/, v27, 0LL);
        if ( !v26 )
          goto LABEL_46;
        UILabel__set_text(v26, v28, 0LL);
        v29 = this->fields.atlabel;
        if ( !v29 )
          goto LABEL_46;
        if ( UILabel__get_printedSize(v29, 0LL).fields.x > this->fields.friendshipLabelArea )
        {
          v30 = (UnityEngine_Component_o *)this->fields.atlabel;
          if ( !v30 )
            goto LABEL_46;
          transform = UnityEngine_Component__get_transform(v30, 0LL);
          if ( !this->fields.atlabel )
            goto LABEL_46;
          friendshipLabelArea = this->fields.friendshipLabelArea;
          v33 = transform;
          LODWORD(v34) = *(_QWORD *)&UILabel__get_printedSize(this->fields.atlabel, 0LL);
          if ( !v33 )
            goto LABEL_46;
          v42.fields.y = 1.0;
          v42.fields.x = friendshipLabelArea / v34;
          v42.fields.z = 1.0;
          UnityEngine_Transform__set_localScale(v33, v42, 0LL);
        }
      }
    }
  }
  if ( v41[0] )
  {
    levelUpObject = this->fields.levelUpObject;
    if ( levelUpObject )
    {
      UnityEngine_GameObject__SetActive(levelUpObject, 1, 0LL);
      v36 = this->fields.levelUpObject;
      if ( v36 )
      {
        Component_srcLineSprite = (UITweener_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   v36,
                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( Component_srcLineSprite )
        {
          v38 = Component_srcLineSprite;
          UITweener__set_tweenFactor(Component_srcLineSprite, 0.0, 0LL);
          UITweener__Play(v38, 0LL);
          return v40[0] != 0;
        }
      }
    }
LABEL_46:
    sub_B170D4();
  }
  return v40[0] != 0;
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
  __int64 v5; // x1
  struct IFriendshipGauge_o *gaugeComponent; // x21
  __int64 v7; // x22
  __int64 v8; // x23
  unsigned int v9; // w22
  int32_t v10; // w0
  IFriendshipGauge_c *klass; // x8
  unsigned int v12; // w23
  unsigned __int64 v13; // x10
  IFriendshipGauge_c **p_offset; // x11
  __int64 p_method; // x0
  int32_t v17; // w0
  struct IFriendshipGauge_o *v18; // x20
  IFriendshipGauge_c *v19; // x8
  unsigned __int64 v20; // x10
  IFriendshipGauge_c **v21; // x11
  __int64 v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_40FA8F2 & 1) == 0 )
  {
    sub_B16FFC(&IFriendshipGauge_TypeInfo, userSvtCol);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_40FA8F2 = 1;
  }
  if ( !this->fields.isUse )
    return 0;
  if ( !userSvtCol )
    goto LABEL_24;
  gaugeComponent = this->fields.gaugeComponent;
  v7 = *(_QWORD *)&userSvtCol->fields.friendship.fields.currentCryptoKey;
  v8 = *(_QWORD *)&userSvtCol->fields.friendship.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v7;
  *(_QWORD *)&v23.fields.fakeValue = v8;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v23, 0LL);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtCol->fields.friendshipRank, 0LL);
  if ( !gaugeComponent )
    goto LABEL_24;
  klass = gaugeComponent->klass;
  v12 = v10;
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
    p_method = sub_AAFEF8(gaugeComponent, IFriendshipGauge_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(struct IFriendshipGauge_o *, _QWORD, _QWORD, _QWORD))p_method)(
    gaugeComponent,
    v9,
    v12,
    *(_QWORD *)(p_method + 8));
  this->fields.nextFriendShipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                      userSvtCol->fields.friendshipRank,
                                      0LL);
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtCol->fields.friendship, 0LL);
  v18 = this->fields.gaugeComponent;
  this->fields.nextFriendship = v17;
  if ( !v18 )
LABEL_24:
    sub_B170D4();
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
    v22 = sub_AAFEF8(v18, IFriendshipGauge_TypeInfo, 2LL);
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
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *levelUpObject; // x0
  __int64 v23; // x25
  __int64 v24; // x26
  int32_t v25; // w8
  ServantFaceIconComponent_o *faceIcon; // x25
  __int64 v27; // x26
  __int64 v28; // x27
  int32_t v30; // w26
  int32_t exceedCount; // w27
  bool IsNew; // w28
  bool IsEventJoin; // w0
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v36; // x25
  __int64 v37; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v38; // x24
  int32_t v39; // w0
  WarEntity_o *Entity; // x0
  WarEntity_o *v41; // x24
  __int64 v42; // x25
  __int64 v43; // x26
  __int128 v44; // q1
  FriendshipGaugeSelector_o *gaugeSelector; // x0
  struct IFriendshipGauge_o *Gauge; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct IFriendshipGauge_o *gaugeComponent; // x22
  unsigned int friendshipId; // w23
  unsigned int friendship; // w25
  unsigned int friendshipRank; // w26
  IFriendshipGauge_c *klass; // x8
  unsigned int lastQuestId; // w24
  unsigned int friendshipExceedCount; // w21
  unsigned __int64 v60; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_GameObject_o *root; // x0
  UnityEngine_GameObject_o *rootNot; // x0
  float *p_nosupportLabelWidth; // x8
  UILabel_o *atlabel; // x0
  UILabel_o *bonuslabel; // x0
  bool v68; // [xsp+4Ch] [xbp-94h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+70h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_40FA8F0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, userSvtCol);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_B16FFC(&IFriendshipGauge_TypeInfo, v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_40FA8F0 = 1;
  }
  if ( !userSvtCol || !userSvtEnt )
  {
    root = this->fields.root;
    this->fields.isUse = 0;
    if ( root )
    {
      UnityEngine_GameObject__SetActive(root, 0, 0LL);
      rootNot = this->fields.rootNot;
      if ( rootNot )
      {
        UnityEngine_GameObject__SetActive(rootNot, 1, 0LL);
        return;
      }
    }
    goto LABEL_53;
  }
  v20 = this->fields.rootNot;
  *(_WORD *)&this->fields.isUse = 1;
  if ( !v20 )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(v20, 0, 0LL);
  v21 = this->fields.root;
  if ( !v21 )
    goto LABEL_53;
  v68 = isNoFollower;
  UnityEngine_GameObject__SetActive(v21, 1, 0LL);
  levelUpObject = this->fields.levelUpObject;
  if ( !levelUpObject )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(levelUpObject, 0, 0LL);
  this->fields.baseFriendshipExp = baseFriendshipExp;
  v24 = *(_QWORD *)&userSvtEnt->fields.limitCount.fields.currentCryptoKey;
  v23 = *(_QWORD *)&userSvtEnt->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v71.fields.currentCryptoKey = v24;
  *(_QWORD *)&v71.fields.fakeValue = v23;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v71, 0LL);
  faceIcon = this->fields.faceIcon;
  v28 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.fakeValue;
  if ( v25 == afterLimitCnt || afterLimitCnt < 0 )
    afterLimitCnt = v25;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v72.fields.currentCryptoKey = v28;
  *(_QWORD *)&v72.fields.fakeValue = v27;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v72, 0LL);
  if ( (iconLimitCnt & 0x80000000) != 0 )
    iconLimitCnt = UserServantEntity__getIconLimitCount(userSvtEnt, 0, 0LL);
  exceedCount = userSvtEnt->fields.exceedCount;
  IsNew = UserServantEntity__IsNew(userSvtEnt, 0LL);
  IsEventJoin = UserServantEntity__IsEventJoin(userSvtEnt, 0LL);
  if ( !faceIcon )
    goto LABEL_53;
  ServantFaceIconComponent__Set_30702780(
    faceIcon,
    v30,
    afterLimitCnt,
    iconLimitCnt,
    exceedCount,
    0LL,
    0LL,
    2,
    IsNew,
    IsEventJoin,
    0LL,
    0,
    userSvtEnt->fields.lv,
    0,
    0,
    0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v37 = *(_QWORD *)&userSvtCol->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&userSvtCol->fields.svtId.fields.fakeValue;
  v38 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v73.fields.currentCryptoKey = v37;
  *(_QWORD *)&v73.fields.fakeValue = v36;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v73, 0LL);
  if ( !v38 )
    goto LABEL_53;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v38,
             v39,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_53;
  v41 = Entity;
  this->fields.userId = userSvtCol->fields.userId;
  v43 = *(_QWORD *)&userSvtCol->fields.svtId.fields.currentCryptoKey;
  v42 = *(_QWORD *)&userSvtCol->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v74.fields.currentCryptoKey = v43;
  *(_QWORD *)&v74.fields.fakeValue = v42;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v74, 0LL);
  v44 = *(_OWORD *)&userSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v70.fields.fakeValue = v44;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v69 = v70;
  this->fields.userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v69, 0LL);
  this->fields.svtLimit = afterLimitCnt;
  this->fields.svtLv = userSvtEnt->fields.lv;
  this->fields.friendshipId = v41->fields.eventId;
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                              userSvtCol->fields.friendship,
                              0LL);
  this->fields.friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                  userSvtCol->fields.friendshipRank,
                                  0LL);
  gaugeSelector = this->fields.gaugeSelector;
  this->fields.maxLimitCount = userSvtCol->fields.maxLimitCount;
  this->fields.maxFriendShipRank = v41->fields.lastQuestId;
  if ( !gaugeSelector )
    goto LABEL_53;
  Gauge = FriendshipGaugeSelector__GetGauge(
            gaugeSelector,
            v41->fields.lastQuestId,
            userSvtCol->fields.friendshipExceedCount,
            0LL);
  this->fields.gaugeComponent = Gauge;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.gaugeComponent,
    (System_Int32_array **)Gauge,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  gaugeComponent = this->fields.gaugeComponent;
  if ( !gaugeComponent )
    goto LABEL_53;
  friendshipId = this->fields.friendshipId;
  friendship = this->fields.friendship;
  friendshipRank = this->fields.friendshipRank;
  klass = gaugeComponent->klass;
  lastQuestId = v41->fields.lastQuestId;
  friendshipExceedCount = userSvtCol->fields.friendshipExceedCount;
  if ( *(_WORD *)&gaugeComponent->klass->_2.bitflags1 )
  {
    v60 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IFriendshipGauge_c **)p_offset - 1) != IFriendshipGauge_TypeInfo )
    {
      ++v60;
      p_offset += 4;
      if ( v60 >= *(unsigned __int16 *)&gaugeComponent->klass->_2.bitflags1 )
        goto LABEL_40;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_40:
    p_method = sub_AAFEF8(gaugeComponent, IFriendshipGauge_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(struct IFriendshipGauge_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))p_method)(
    gaugeComponent,
    friendshipId,
    friendship,
    friendshipRank,
    lastQuestId,
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
    atlabel = this->fields.atlabel;
    if ( atlabel )
    {
      UILabel__set_fontSize(atlabel, this->fields.nosupportFontSize, 0LL);
      bonuslabel = this->fields.bonuslabel;
      if ( bonuslabel )
      {
        UILabel__set_fontSize(bonuslabel, this->fields.nosupportFontSize, 0LL);
        return;
      }
    }
LABEL_53:
    sub_B170D4();
  }
}