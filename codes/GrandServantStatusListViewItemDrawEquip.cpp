void GrandServantStatusListViewItemDrawEquip___cctor(const MethodInfo *method)
{
  if ( (byte_5933967 & 1) == 0 )
  {
    sub_21FFC50(&GrandServantStatusListViewItemDrawEquip_TypeInfo);
    byte_5933967 = 1;
  }
  *GrandServantStatusListViewItemDrawEquip_TypeInfo->static_fields = (struct GrandServantStatusListViewItemDrawEquip_StaticFields)0x2800000012LL;
}


void GrandServantStatusListViewItemDrawEquip___ctor(
        GrandServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct SkillInfoObject_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_Int32_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct UnityEngine_Vector3_array *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct UnityEngine_Vector3_array *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct UnityEngine_Vector3_array *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct UnityEngine_Vector3_array *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  Il2CppClass *v47; // x0
  struct System_Int32_array *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5933966 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&SkillInfoObject___TypeInfo);
    sub_21FFC50(&UnityEngine_Vector3___TypeInfo);
    byte_5933966 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct SkillInfoObject_array *)sub_21FFD10(
                                         SkillInfoObject___TypeInfo,
                                         (unsigned int)v4->static_fields->GrandSvtEquipMax);
  this->fields.skillInfoObjectList = v5;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillInfoObjectList,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (struct System_Int32_array *)sub_21FFD10(int___TypeInfo, 3);
  this->fields.skillPitches = v12;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillPitches,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (struct UnityEngine_Vector3_array *)sub_21FFD10(UnityEngine_Vector3___TypeInfo, 3);
  this->fields.baseSizes = v19;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.baseSizes, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = (struct UnityEngine_Vector3_array *)sub_21FFD10(UnityEngine_Vector3___TypeInfo, 3);
  this->fields.titleBasePositions = v26;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.titleBasePositions,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (struct UnityEngine_Vector3_array *)sub_21FFD10(UnityEngine_Vector3___TypeInfo, 3);
  this->fields.skillBasePositions = v33;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillBasePositions,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (struct UnityEngine_Vector3_array *)sub_21FFD10(UnityEngine_Vector3___TypeInfo, 3);
  this->fields.baseSpriteSizes = v40;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseSpriteSizes,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.ColorInvalid = (struct UnityEngine_Color_o)xmmword_E93050;
  this->fields.ColorCostZero = UnityEngine_Color__HSVToRGB_83138984(0.0, 0.0, 0.5, 1, 0);
  v55 = UnityEngine_Color__HSVToRGB_83138984(0.0, 0.0, 1.0, 1, 0);
  v47 = int___TypeInfo;
  this->fields.ColorCost = v55;
  v48 = (struct System_Int32_array *)sub_21FFD10(v47, 3);
  this->fields.skillViewCounts = v48;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillViewCounts,
    (int32_t)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0);
}


void GrandServantStatusListViewItemDrawEquip__Awake(
        GrandServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct UISprite_array *titleSprites; // x8
  GrandServantStatusListViewItemDrawEquip_o *v4; // x19
  int32_t v5; // w20
  GrandServantStatusListViewItemDrawEquip_o *v6; // x21
  struct System_Int32_array *skillPitches; // x25
  float y; // s8
  int v9; // w8
  struct System_Int32_array *v10; // x8
  struct UISprite_o *baseSprite; // x10
  struct UnityEngine_Vector3_array *baseSizes; // x9
  float mWidth; // s0
  char *v14; // x9
  int v15; // w26
  int32_t mHeight; // w8
  struct UISprite_array *v17; // x8
  struct UnityEngine_Vector3_array *titleBasePositions; // x27
  struct UnityEngine_Vector3_array *v19; // x8
  float *v20; // x8
  int v21; // w9
  float v22; // s8
  int m_CancellationTokenSource; // w9
  struct UnityEngine_Vector3_array *skillBasePositions; // x21
  struct UnityEngine_Vector3_array *v25; // x8
  float *v26; // x9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  titleSprites = this->fields.titleSprites;
  if ( !titleSprites )
LABEL_40:
    sub_21FFECC(this, method);
  v4 = this;
  v5 = 0;
  while ( v5 < SLODWORD(titleSprites->max_length) )
  {
    this = (GrandServantStatusListViewItemDrawEquip_o *)GrandServantStatusListViewItemDrawEquip__GetSkillBase(
                                                          v4,
                                                          v5,
                                                          v2);
    if ( !this )
      goto LABEL_40;
    v6 = this;
    if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 2 )
    {
      this = *(GrandServantStatusListViewItemDrawEquip_o **)&this->fields.dispMode;
      if ( !this )
        goto LABEL_40;
      skillPitches = v4->fields.skillPitches;
      this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0);
      if ( !this )
        goto LABEL_40;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      if ( ((__int64)v6->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
        goto LABEL_42;
      this = (GrandServantStatusListViewItemDrawEquip_o *)v6->fields.baseButton;
      if ( !this )
        goto LABEL_40;
      y = localPosition.fields.y;
      this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0);
      if ( !this )
        goto LABEL_40;
      v28 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      if ( !skillPitches )
        goto LABEL_40;
      if ( (unsigned int)v5 >= LODWORD(skillPitches->max_length) )
        goto LABEL_42;
      v9 = (int)(float)(y - v28.fields.y);
      if ( (float)(y - v28.fields.y) == INFINITY )
        v9 = 0x80000000;
      skillPitches->m_Items[v5] = v9;
    }
    v10 = v4->fields.skillPitches;
    if ( !v10 )
      goto LABEL_40;
    if ( (unsigned int)v5 >= LODWORD(v10->max_length) )
LABEL_42:
      sub_21FFED4(this);
    baseSprite = v4->fields.baseSprite;
    if ( baseSprite )
    {
      baseSizes = v4->fields.baseSizes;
      if ( baseSizes )
      {
        if ( (unsigned int)v5 >= LODWORD(baseSizes->max_length) )
          goto LABEL_42;
        mWidth = (float)baseSprite->fields.mWidth;
        v14 = (char *)baseSizes + 12 * v5;
        v15 = v10->m_Items[v5] * LODWORD(v6->fields.m_CancellationTokenSource);
        mHeight = baseSprite->fields.mHeight;
        *((_DWORD *)v14 + 10) = 0;
        *((float *)v14 + 8) = mWidth;
        *((float *)v14 + 9) = (float)(mHeight - v15);
        v17 = v4->fields.titleSprites;
        if ( v17 )
        {
          if ( (unsigned int)v5 >= LODWORD(v17->max_length) )
            goto LABEL_42;
          this = (GrandServantStatusListViewItemDrawEquip_o *)v17->m_Items[v5];
          if ( this )
          {
            titleBasePositions = v4->fields.titleBasePositions;
            this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
            if ( this )
            {
              v29 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
              if ( titleBasePositions )
              {
                if ( (unsigned int)v5 >= LODWORD(titleBasePositions->max_length) )
                  goto LABEL_42;
                titleBasePositions->m_Items[v5] = v29;
                v19 = v4->fields.titleBasePositions;
                if ( v19 )
                {
                  if ( (unsigned int)v5 >= LODWORD(v19->max_length) )
                    goto LABEL_42;
                  v20 = (float *)((char *)v19 + 12 * v5);
                  v21 = v15 >= 0 ? v15 : v15 + 1;
                  v22 = (float)(v21 >> 1);
                  m_CancellationTokenSource = (int)v6->fields.m_CancellationTokenSource;
                  v20[9] = v20[9] - v22;
                  if ( !m_CancellationTokenSource )
                    goto LABEL_42;
                  this = *(GrandServantStatusListViewItemDrawEquip_o **)&v6->fields.dispMode;
                  if ( this )
                  {
                    skillBasePositions = v4->fields.skillBasePositions;
                    this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                                          (UnityEngine_GameObject_o *)this,
                                                                          0);
                    if ( this )
                    {
                      v30 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
                      if ( skillBasePositions )
                      {
                        if ( (unsigned int)v5 >= LODWORD(skillBasePositions->max_length) )
                          goto LABEL_42;
                        skillBasePositions->m_Items[v5] = v30;
                        v25 = v4->fields.skillBasePositions;
                        if ( v25 )
                        {
                          if ( (unsigned int)v5 >= LODWORD(v25->max_length) )
                            goto LABEL_42;
                          v26 = (float *)((char *)v25 + 12 * v5);
                          titleSprites = v4->fields.titleSprites;
                          ++v5;
                          v26[9] = v26[9] - v22;
                          if ( titleSprites )
                            continue;
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
    goto LABEL_40;
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillBase(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( LODWORD(skillInfoObjectList->max_length) <= index )
    sub_21FFED4(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_21FFECC(this, *(_QWORD *)&index);
  return v4->fields.changeSkillBase;
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillExplanationLabel(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( LODWORD(skillInfoObjectList->max_length) <= index )
    sub_21FFED4(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_21FFECC(this, *(_QWORD *)&index);
  return v4->fields.changeSkillExplanationLabel;
}


// local variable allocation has failed, the output may be wrong!
SkillIconComponent_o *GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillIconComponent(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( LODWORD(skillInfoObjectList->max_length) <= index )
    sub_21FFED4(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_21FFECC(this, *(_QWORD *)&index);
  return v4->fields.changeSkillIcon;
}


// local variable allocation has failed, the output may be wrong!
UIRangeLabel_o *GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillTitleRangeLabel(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( LODWORD(skillInfoObjectList->max_length) <= index )
    sub_21FFED4(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_21FFECC(this, *(_QWORD *)&index);
  return v4->fields.changeSkillTitleRangeLabel;
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillTypeLabel(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( LODWORD(skillInfoObjectList->max_length) <= index )
    sub_21FFED4(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_21FFECC(this, *(_QWORD *)&index);
  return v4->fields.changeSkillTypeLabel;
}


// local variable allocation has failed, the output may be wrong!
UILabel_array *GrandServantStatusListViewItemDrawEquip__GetEquipSkillExplanationLabelList(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( LODWORD(skillInfoObjectList->max_length) <= index )
    sub_21FFED4(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_21FFECC(this, *(_QWORD *)&index);
  return v4->fields.equipSkillExplanationLabelList;
}


// local variable allocation has failed, the output may be wrong!
UISprite_o *GrandServantStatusListViewItemDrawEquip__GetEquipSkillMask(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( LODWORD(skillInfoObjectList->max_length) <= index )
    sub_21FFED4(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_21FFECC(this, *(_QWORD *)&index);
  return v4->fields.equipSkillMask;
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *GrandServantStatusListViewItemDrawEquip__GetEquipSkillMaskLabel(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( LODWORD(skillInfoObjectList->max_length) <= index )
    sub_21FFED4(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_21FFECC(this, *(_QWORD *)&index);
  return v4->fields.equipSkillMaskLabel;
}


int32_t GrandServantStatusListViewItemDrawEquip__GetKind(
        GrandServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  return 20;
}


// local variable allocation has failed, the output may be wrong!
int32_t GrandServantStatusListViewItemDrawEquip__GetServantLeaderDataEquipId(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        ServantLeaderInfo_o *info,
        const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget3; // x8
  __int64 v7; // x19
  __int64 v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_5933961 & 1) == 0 )
  {
    this = (GrandServantStatusListViewItemDrawEquip_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5933961 = 1;
  }
  if ( index == 2 )
  {
    if ( info )
    {
      equipTarget3 = info->fields.equipTarget3;
      if ( equipTarget3 )
        goto LABEL_11;
      return 0;
    }
LABEL_17:
    sub_21FFECC(this, *(_QWORD *)&index);
  }
  if ( index == 1 )
  {
    if ( info )
    {
      equipTarget3 = info->fields.equipTarget2;
      if ( equipTarget3 )
        goto LABEL_11;
      return 0;
    }
    goto LABEL_17;
  }
  if ( index )
    return 0;
  if ( !info )
    goto LABEL_17;
  equipTarget3 = info->fields.equipTarget1;
  if ( !equipTarget3 )
    return 0;
LABEL_11:
  v7 = *(_QWORD *)&equipTarget3->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&equipTarget3->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&index, info);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v10, 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_array *GrandServantStatusListViewItemDrawEquip__GetSkillBase(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( LODWORD(skillInfoObjectList->max_length) <= index )
    sub_21FFED4(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_21FFECC(this, *(_QWORD *)&index);
  return v4->fields.equipSkillBaseList;
}


// local variable allocation has failed, the output may be wrong!
SkillIconComponent_array *GrandServantStatusListViewItemDrawEquip__GetSkillIconComponent(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( LODWORD(skillInfoObjectList->max_length) <= index )
    sub_21FFED4(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_21FFECC(this, *(_QWORD *)&index);
  return v4->fields.equipSkillIconList;
}


int32_t GrandServantStatusListViewItemDrawEquip__GetSkillInfoListNum(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        SkillInfo_array *skillInfoList,
        SkillIconComponent_array *equipSkillIcon,
        const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  __int64 v8; // x1
  int max_length; // w9
  __int64 v10; // x9
  unsigned __int64 v11; // x8
  unsigned __int64 max_length_low; // x11
  SkillInfo_o *v13; // x11

  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillInfoList, 0);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( !equipSkillIcon )
      goto LABEL_15;
    max_length = equipSkillIcon->max_length;
    if ( max_length >= 1 )
    {
      v10 = max_length & (unsigned int)~(max_length >> 31);
      IsNullOrEmpty = 0;
      v11 = 0;
      while ( skillInfoList )
      {
        max_length_low = LODWORD(skillInfoList->max_length);
        if ( (__int64)v11 < (int)max_length_low )
        {
          if ( v11 >= max_length_low )
            sub_21FFED4(IsNullOrEmpty);
          v13 = skillInfoList->m_Items[v11];
          if ( v13 )
          {
            if ( v13->fields.id >= 1 )
              IsNullOrEmpty = (unsigned int)(v11 + 1);
            else
              IsNullOrEmpty = (unsigned int)IsNullOrEmpty;
          }
        }
        if ( v10 == ++v11 )
          return IsNullOrEmpty;
      }
LABEL_15:
      sub_21FFECC(IsNullOrEmpty, v8);
    }
  }
  LODWORD(IsNullOrEmpty) = 0;
  return IsNullOrEmpty;
}


// local variable allocation has failed, the output may be wrong!
UIRangeLabel_array *GrandServantStatusListViewItemDrawEquip__GetSkillTitleRangeLabel(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( LODWORD(skillInfoObjectList->max_length) <= index )
    sub_21FFED4(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_21FFECC(this, *(_QWORD *)&index);
  return v4->fields.equipSkillTitleRangeLabelList;
}


bool GrandServantStatusListViewItemDrawEquip__IsNeedAddAdjust(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        SkillInfo_array *skillInfoList,
        int32_t range,
        SkillIconComponent_array *equipSkillIcon,
        int32_t *newRange,
        bool isChangeSkill,
        System_String_o *changeSkillExplanation,
        bool isMine,
        const MethodInfo *method)
{
  __int64 v16; // x1
  __int64 v17; // x2
  UILabel_array *EquipSkillExplanationLabelList; // x26
  UnityEngine_GameObject_o *Master_object; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  int v22; // w28
  unsigned __int64 v23; // x20
  unsigned __int64 max_length_low; // x8
  SkillInfo_o *v25; // x8
  GrandServantStatusListViewItemDrawEquip_c *v26; // x0
  System_String_o *explanation; // x27
  UILabel_o *v28; // x19
  UILabel_o *v29; // x8
  int v30; // w27
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_Object_o *v33; // x19
  const MethodInfo *v34; // x2
  int mHeight; // w8
  int v36; // w9
  int v37; // w28
  UnityEngine_Transform_o *transform; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  UILabel_o *v41; // x28
  const MethodInfo *v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  UnityEngine_Object_o *v45; // x21
  const MethodInfo *v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  UnityEngine_Object_o *EquipSkillMask; // x19
  const MethodInfo *v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  UnityEngine_Object_o *EquipSkillMaskLabel; // x29
  __int64 v54; // x2
  __int64 v55; // x2
  System_String_o **v56; // x8
  System_String_o *v57; // x19
  int v58; // w8
  int v59; // w19
  UnityEngine_Transform_o *v60; // x0
  __int64 v61; // x2
  GrandServantStatusListViewItemDrawEquip_c *v62; // x0
  struct System_Int32_array *skillPitches; // x8
  int32_t v64; // w10
  char *v65; // x8
  _DWORD *v66; // x8
  int v67; // w9
  int v68; // t1
  il2cpp_array_size_t max_length; // x9
  SkillInfo_o *v70; // x9
  int32_t v72; // [xsp+0h] [xbp-A0h]
  System_String_o *text; // [xsp+8h] [xbp-98h]
  int32_t *v74; // [xsp+10h] [xbp-90h]
  int v75; // [xsp+1Ch] [xbp-84h]
  UILabel_o **m_Items; // [xsp+38h] [xbp-68h]

  if ( (byte_5933964 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&GrandServantStatusListViewItemDrawEquip_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_7271/*"GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_6709/*"FOLLOWER_GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_7272/*"GRAND_BOND_EQUIP_SKILL_INFO_ANOTHER_SKILL_HEADER"*/);
    byte_5933964 = 1;
  }
  *newRange = range;
  EquipSkillExplanationLabelList = GrandServantStatusListViewItemDrawEquip__GetEquipSkillExplanationLabelList(
                                     this,
                                     index,
                                     (const MethodInfo *)skillInfoList);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16, v17);
  Master_object = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !equipSkillIcon )
LABEL_113:
    sub_21FFECC(Master_object, v20);
  if ( SLODWORD(equipSkillIcon->max_length) >= 1 )
  {
    v22 = 0;
    v23 = 0;
    v74 = newRange;
    m_Items = EquipSkillExplanationLabelList->m_Items;
    while ( 1 )
    {
      if ( skillInfoList )
      {
        max_length_low = LODWORD(skillInfoList->max_length);
        if ( (__int64)v23 < (int)max_length_low )
        {
          if ( v23 >= max_length_low )
            goto LABEL_112;
          v25 = skillInfoList->m_Items[v23];
          if ( v25 )
          {
            if ( v25->fields.id >= 1 )
            {
              if ( !EquipSkillExplanationLabelList )
                goto LABEL_113;
              if ( v23 >= LODWORD(EquipSkillExplanationLabelList->max_length) )
                goto LABEL_112;
              v26 = GrandServantStatusListViewItemDrawEquip_TypeInfo;
              explanation = v25->fields.explanation;
              v28 = m_Items[v23];
              if ( !*(&GrandServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(GrandServantStatusListViewItemDrawEquip_TypeInfo, v20, v21);
                v26 = GrandServantStatusListViewItemDrawEquip_TypeInfo;
              }
              Master_object = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                            v28,
                                                            explanation,
                                                            v26->static_fields->DetailFontSize,
                                                            v26->static_fields->DetailFontSize,
                                                            0);
              if ( v23 >= LODWORD(EquipSkillExplanationLabelList->max_length) )
                goto LABEL_112;
              v29 = m_Items[v23];
              if ( !v29 )
                goto LABEL_113;
              v30 = GrandServantStatusListViewItemDrawEquip_TypeInfo->static_fields->AdjustHeight + v29->fields.mHeight;
              if ( !v23 )
              {
                v75 = v22;
                v33 = (UnityEngine_Object_o *)GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillBase(
                                                this,
                                                index,
                                                v21);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31, v32);
                Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v33, 0, 0);
                if ( ((unsigned __int8)Master_object & 1) != 0 )
                {
                  if ( !v33 )
                    goto LABEL_113;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v33, isChangeSkill, 0);
                  if ( isChangeSkill )
                  {
                    if ( !LODWORD(EquipSkillExplanationLabelList->max_length) )
                      goto LABEL_112;
                    if ( !*m_Items )
                      goto LABEL_113;
                    mHeight = (*m_Items)->fields.mHeight;
                    if ( mHeight >= 71 )
                      v36 = -76;
                    else
                      v36 = -64;
                    v37 = v36 - mHeight;
                    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v33, 0);
                    TransformHelper__SetLocalPositionY(transform, (float)v37, 0);
                  }
                }
                v41 = GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillExplanationLabel(this, index, v34);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39, v40);
                Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                              (UnityEngine_Object_o *)v41,
                                                              0,
                                                              0);
                if ( ((unsigned __int8)Master_object & 1) != 0 )
                {
                  if ( !v41 )
                    goto LABEL_113;
                  Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v41, 0);
                  if ( !Master_object )
                    goto LABEL_113;
                  UnityEngine_GameObject__SetActive(Master_object, isChangeSkill, 0);
                }
                v45 = (UnityEngine_Object_o *)GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillTypeLabel(
                                                this,
                                                index,
                                                v42);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43, v44);
                Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v45, 0, 0);
                if ( ((unsigned __int8)Master_object & 1) != 0 )
                {
                  if ( !v45 )
                    goto LABEL_113;
                  Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v45, 0);
                  if ( !Master_object )
                    goto LABEL_113;
                  UnityEngine_GameObject__SetActive(Master_object, isChangeSkill, 0);
                }
                EquipSkillMask = (UnityEngine_Object_o *)GrandServantStatusListViewItemDrawEquip__GetEquipSkillMask(
                                                           this,
                                                           index,
                                                           v46);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47, v48);
                Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(EquipSkillMask, 0, 0);
                if ( ((unsigned __int8)Master_object & 1) != 0 )
                {
                  if ( !EquipSkillMask )
                    goto LABEL_113;
                  Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EquipSkillMask, 0);
                  if ( !Master_object )
                    goto LABEL_113;
                  UnityEngine_GameObject__SetActive(Master_object, isChangeSkill, 0);
                }
                EquipSkillMaskLabel = (UnityEngine_Object_o *)GrandServantStatusListViewItemDrawEquip__GetEquipSkillMaskLabel(
                                                                this,
                                                                index,
                                                                v50);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51, v52);
                Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(EquipSkillMaskLabel, 0, 0);
                if ( ((unsigned __int8)Master_object & 1) != 0 )
                {
                  if ( !EquipSkillMaskLabel )
                    goto LABEL_113;
                  Master_object = UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)EquipSkillMaskLabel,
                                    0);
                  if ( !Master_object )
                    goto LABEL_113;
                  UnityEngine_GameObject__SetActive(Master_object, isChangeSkill, 0);
                }
                if ( isChangeSkill )
                {
                  if ( !LODWORD(EquipSkillExplanationLabelList->max_length) )
                    goto LABEL_112;
                  if ( !*m_Items )
                    goto LABEL_113;
                  v72 = (*m_Items)->fields.mHeight;
                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
                  Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(EquipSkillMask, 0, 0);
                  if ( ((unsigned __int8)Master_object & 1) != 0 )
                  {
                    if ( !LODWORD(EquipSkillExplanationLabelList->max_length) )
                      goto LABEL_112;
                    if ( !*m_Items )
                      goto LABEL_113;
                    if ( (*m_Items)->fields.mHeight >= 71 )
                    {
                      if ( !EquipSkillMask )
                        goto LABEL_113;
                      UIWidget__set_height((UIWidget_o *)EquipSkillMask, v72 + 38, 0);
                    }
                  }
                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v54);
                  if ( UnityEngine_Object__op_Inequality(EquipSkillMaskLabel, 0, 0) )
                  {
                    v56 = (System_String_o **)&StringLiteral_7271/*"GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/;
                    if ( !isMine )
                      v56 = (System_String_o **)&StringLiteral_6709/*"FOLLOWER_GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/;
                    v57 = *v56;
                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v55);
                    Master_object = (UnityEngine_GameObject_o *)LocalizationManager__Get(v57, 0);
                    if ( !EquipSkillMaskLabel )
                      goto LABEL_113;
                    UILabel__set_text((UILabel_o *)EquipSkillMaskLabel, (System_String_o *)Master_object, 0);
                    if ( !LODWORD(EquipSkillExplanationLabelList->max_length) )
                      goto LABEL_112;
                    if ( !*m_Items )
                      goto LABEL_113;
                    if ( (*m_Items)->fields.mHeight >= 71 )
                    {
                      v58 = -38 - v72;
                      if ( -38 - v72 < 0 )
                        v58 = -37 - v72;
                      v59 = v58 >> 1;
                      v60 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)EquipSkillMaskLabel, 0);
                      TransformHelper__SetLocalPositionY(v60, (float)v59, 0);
                    }
                  }
                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v55);
                  newRange = v74;
                  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v41, 0, 0) )
                  {
                    v62 = GrandServantStatusListViewItemDrawEquip_TypeInfo;
                    if ( !*(&GrandServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(GrandServantStatusListViewItemDrawEquip_TypeInfo, v20, v61);
                      v62 = GrandServantStatusListViewItemDrawEquip_TypeInfo;
                    }
                    Master_object = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                                  v41,
                                                                  text,
                                                                  v62->static_fields->DetailFontSize,
                                                                  v62->static_fields->DetailFontSize,
                                                                  0);
                    if ( !v41 )
                      goto LABEL_113;
                    if ( !LODWORD(EquipSkillExplanationLabelList->max_length) )
                      goto LABEL_112;
                    if ( !*m_Items )
                      goto LABEL_113;
                    if ( (*m_Items)->fields.mHeight >= 71 )
                      v30 += v41->fields.mHeight + 62;
                    else
                      v30 += v41->fields.mHeight + 50;
                  }
                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v61);
                  Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v45, 0, 0);
                  v22 = v75;
                  if ( ((unsigned __int8)Master_object & 1) != 0 )
                  {
                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
                    Master_object = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_7272/*"GRAND_BOND_EQUIP_SKILL_INFO_ANOTHER_SKILL_HEADER"*/,
                                                                  0);
                    if ( !v45 )
                      goto LABEL_113;
                    UILabel__set_text((UILabel_o *)v45, (System_String_o *)Master_object, 0);
                  }
                }
                else
                {
                  newRange = v74;
                  v22 = v75;
                }
              }
              skillPitches = this->fields.skillPitches;
              if ( !skillPitches )
                goto LABEL_113;
              if ( LODWORD(skillPitches->max_length) <= index )
LABEL_112:
                sub_21FFED4(Master_object);
              v64 = *newRange;
              v65 = (char *)skillPitches + 4 * index;
              v68 = *((_DWORD *)v65 + 8);
              v66 = v65 + 32;
              v67 = v68;
              if ( v30 >= v68 )
              {
                max_length = skillInfoList->max_length;
                *newRange = v64 + v30;
                if ( v23 == (_DWORD)max_length - 1 )
                  goto LABEL_107;
                if ( v23 + 1 >= (unsigned int)max_length )
                  goto LABEL_112;
                v70 = skillInfoList->m_Items[v23 + 1];
                if ( !v70 || v70->fields.id <= 0 )
LABEL_107:
                  v22 |= v30 - *v66 > 10;
              }
              else
              {
                *newRange = v64 + v67;
              }
            }
          }
        }
      }
      if ( (__int64)++v23 >= SLODWORD(equipSkillIcon->max_length) )
        return v22 & 1;
    }
  }
  LOBYTE(v22) = 0;
  return v22 & 1;
}


// local variable allocation has failed, the output may be wrong!
void GrandServantStatusListViewItemDrawEquip__SetEquipExpInfo(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  GrandServantStatusListViewItemDrawEquip_o *v6; // x20
  struct UnityEngine_GameObject_array *expBases; // x8
  struct UnityEngine_GameObject_array *lateExpBases; // x8
  __int64 v9; // x2
  struct UILabel_array *lateExpLabels; // x8
  int32_t v11; // w22
  UILabel_o *v12; // x21
  struct UISlider_array *expBars; // x8
  float barExp; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-38h] BYREF

  v6 = this;
  if ( (byte_5933963 & 1) == 0 )
  {
    this = (GrandServantStatusListViewItemDrawEquip_o *)sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5933963 = 1;
  }
  *(_QWORD *)lateExp = 0;
  barExp = 0.0;
  if ( !item )
    goto LABEL_25;
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipExpInfoByIndex(
                                                        item,
                                                        index,
                                                        &lateExp[1],
                                                        lateExp,
                                                        &barExp,
                                                        0);
  expBases = v6->fields.expBases;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !expBases )
      goto LABEL_25;
    if ( LODWORD(expBases->max_length) > index )
    {
      this = (GrandServantStatusListViewItemDrawEquip_o *)expBases->m_Items[index];
      if ( !this )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      lateExpBases = v6->fields.lateExpBases;
      if ( !lateExpBases )
        goto LABEL_25;
      if ( LODWORD(lateExpBases->max_length) > index )
      {
        this = (GrandServantStatusListViewItemDrawEquip_o *)lateExpBases->m_Items[index];
        if ( !this )
          goto LABEL_25;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, lateExp[0] > 0, 0);
        lateExpLabels = v6->fields.lateExpLabels;
        if ( !lateExpLabels )
          goto LABEL_25;
        if ( LODWORD(lateExpLabels->max_length) > index )
        {
          v11 = lateExp[0];
          v12 = lateExpLabels->m_Items[index];
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&index, v9);
          this = (GrandServantStatusListViewItemDrawEquip_o *)LocalizationManager__GetNumberFormat(v11, 0);
          if ( !v12 )
            goto LABEL_25;
          UILabel__set_text(v12, (System_String_o *)this, 0);
          expBars = v6->fields.expBars;
          if ( !expBars )
            goto LABEL_25;
          if ( LODWORD(expBars->max_length) > index )
          {
            this = (GrandServantStatusListViewItemDrawEquip_o *)expBars->m_Items[index];
            if ( this )
            {
              UIProgressBar__set_value((UIProgressBar_o *)this, barExp, 0);
              return;
            }
LABEL_25:
            sub_21FFECC(this, *(_QWORD *)&index);
          }
        }
      }
    }
LABEL_26:
    sub_21FFED4(this);
  }
  if ( !expBases )
    goto LABEL_25;
  if ( LODWORD(expBases->max_length) <= index )
    goto LABEL_26;
  this = (GrandServantStatusListViewItemDrawEquip_o *)expBases->m_Items[index];
  if ( !this )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantStatusListViewItemDrawEquip__SetEquipIcon(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  GrandServantStatusListViewItemDrawEquip_o *v6; // x21
  struct ServantFaceIconComponent_array *equipIcons; // x8
  ServantFaceIconComponent_o *v8; // x21
  ServantLeaderInfo_o *servantLeaderInfo; // x2
  struct ServantFaceIconComponent_array *v10; // x8
  struct ServantLeaderInfo_o *v11; // x9
  EquipTargetInfo_o *equipTarget3; // x1
  struct UnityEngine_Vector3_array *baseSpriteSizes; // x9
  struct ServantFaceIconComponent_array *v14; // x9
  struct ServantFaceIconComponent_array *v15; // x9
  __int64 *v16; // x8
  struct ServantFaceIconComponent_array *v17; // x9
  struct ServantFaceIconComponent_array *v18; // x8
  struct ServantLeaderInfo_o *v19; // x9
  struct ServantFaceIconComponent_array *v20; // x8
  struct ServantLeaderInfo_o *v21; // x9

  v6 = this;
  if ( (byte_5933960 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21350/*"img_frames_nodata6"*/);
    this = (GrandServantStatusListViewItemDrawEquip_o *)sub_21FFC50(&StringLiteral_21349/*"img_frames_nodata5"*/);
    byte_5933960 = 1;
  }
  if ( !item )
    goto LABEL_50;
  if ( item->fields.userSvtEntity )
  {
    this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipIdByIndex(item, index, 0);
    if ( (__int64)this >= 1 )
    {
      equipIcons = v6->fields.equipIcons;
      if ( !equipIcons )
        goto LABEL_50;
      if ( LODWORD(equipIcons->max_length) > index )
      {
        v8 = equipIcons->m_Items[index];
        this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipIdByIndex(item, index, 0);
        if ( v8 )
        {
          ServantFaceIconComponent__Set_48018012(v8, (int64_t)this, 0, 0, 0);
          return;
        }
LABEL_50:
        sub_21FFECC(this, *(_QWORD *)&index);
      }
LABEL_51:
      sub_21FFED4(this);
    }
  }
  else
  {
    servantLeaderInfo = item->fields.servantLeaderInfo;
    if ( servantLeaderInfo )
    {
      this = (GrandServantStatusListViewItemDrawEquip_o *)GrandServantStatusListViewItemDrawEquip__GetServantLeaderDataEquipId(
                                                            this,
                                                            index,
                                                            servantLeaderInfo,
                                                            method);
      if ( (int)this >= 1 )
      {
        if ( index == 2 )
        {
          v20 = v6->fields.equipIcons;
          if ( !v20 )
            goto LABEL_50;
          if ( LODWORD(v20->max_length) <= 2 )
            goto LABEL_51;
          v21 = item->fields.servantLeaderInfo;
          if ( !v21 )
            goto LABEL_50;
          this = (GrandServantStatusListViewItemDrawEquip_o *)v20->m_Items[2];
          if ( !this )
            goto LABEL_50;
          equipTarget3 = v21->fields.equipTarget3;
        }
        else if ( index == 1 )
        {
          v18 = v6->fields.equipIcons;
          if ( !v18 )
            goto LABEL_50;
          if ( (v18->max_length & 0xFFFFFFFE) == 0 )
            goto LABEL_51;
          v19 = item->fields.servantLeaderInfo;
          if ( !v19 )
            goto LABEL_50;
          this = (GrandServantStatusListViewItemDrawEquip_o *)v18->m_Items[1];
          if ( !this )
            goto LABEL_50;
          equipTarget3 = v19->fields.equipTarget2;
        }
        else
        {
          if ( index )
            return;
          v10 = v6->fields.equipIcons;
          if ( !v10 )
            goto LABEL_50;
          if ( !LODWORD(v10->max_length) )
            goto LABEL_51;
          v11 = item->fields.servantLeaderInfo;
          if ( !v11 )
            goto LABEL_50;
          this = (GrandServantStatusListViewItemDrawEquip_o *)v10->m_Items[0];
          if ( !this )
            goto LABEL_50;
          equipTarget3 = v11->fields.equipTarget1;
        }
        ServantFaceIconComponent__Set_48024312((ServantFaceIconComponent_o *)this, equipTarget3, 0, 0, 0);
        return;
      }
    }
  }
  baseSpriteSizes = v6->fields.baseSpriteSizes;
  v6->fields.baseColliderSizes.fields.y = v6->fields.baseColliderSizes.fields.y + -11.0;
  if ( !baseSpriteSizes )
    goto LABEL_50;
  if ( LODWORD(baseSpriteSizes->max_length) <= index )
    goto LABEL_51;
  baseSpriteSizes->m_Items[index].fields.y = baseSpriteSizes->m_Items[index].fields.y + -11.0;
  switch ( index )
  {
    case 2:
      v17 = v6->fields.equipIcons;
      if ( !v17 )
        goto LABEL_50;
      if ( LODWORD(v17->max_length) <= 2 )
        goto LABEL_51;
      this = (GrandServantStatusListViewItemDrawEquip_o *)v17->m_Items[2];
      if ( !this )
        goto LABEL_50;
      v16 = &StringLiteral_21349/*"img_frames_nodata5"*/;
      goto LABEL_38;
    case 1:
      v15 = v6->fields.equipIcons;
      if ( !v15 )
        goto LABEL_50;
      if ( (v15->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_51;
      this = (GrandServantStatusListViewItemDrawEquip_o *)v15->m_Items[1];
      if ( !this )
        goto LABEL_50;
      v16 = &StringLiteral_21350/*"img_frames_nodata6"*/;
LABEL_38:
      ServantFaceIconComponent__NoMount_48012608((ServantFaceIconComponent_o *)this, (System_String_o *)*v16, 1, 0);
      return;
    case 0:
      v14 = v6->fields.equipIcons;
      if ( !v14 )
        goto LABEL_50;
      if ( !LODWORD(v14->max_length) )
        goto LABEL_51;
      this = (GrandServantStatusListViewItemDrawEquip_o *)v14->m_Items[0];
      if ( !this )
        goto LABEL_50;
      ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)this, 0);
      break;
  }
}


// local variable allocation has failed, the output may be wrong!
void GrandServantStatusListViewItemDrawEquip__SetEquipInfoLabel(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v5; // w19
  GrandServantStatusListViewItemDrawEquip_o *v6; // x20
  struct UIRangeLabel_array *nameRangeLabels; // x8
  UIRangeLabel_o *v8; // x22
  struct UIExtrusionLabel_array *levelLabels; // x8
  UIExtrusionLabel_o *v10; // x22
  struct UILabel_array *maxLevelLabels; // x8
  UILabel_o *v12; // x22
  struct UIIconLabel_array *attackIconLabels; // x8
  UIIconLabel_o *v14; // x22
  struct UIIconLabel_array *hpIconLabels; // x8
  UIIconLabel_o *v16; // x22
  struct UILabel_array *v17; // x8
  UILabel_o *v18; // x22
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  struct UILabel_array *v21; // x8
  __int64 v22; // x2
  struct UnityEngine_GameObject_array *v23; // x8
  UnityEngine_Object_o *v24; // x22
  __int64 v25; // x2
  struct UnityEngine_GameObject_array *v26; // x8
  struct UILabel_array *v27; // x8
  UnityEngine_Object_o *v28; // x22
  __int64 v29; // x2
  struct UILabel_array *v30; // x8
  UnityEngine_GameObject_o *gameObject; // x22
  struct UILabel_array *v32; // x8
  UnityEngine_Object_o *v33; // x22
  struct UILabel_array *v34; // x8
  GrandServantStatusListViewItemDrawEquip_o *v35; // x20
  bool v36; // cc
  bool v37; // w1
  struct UILabel_array *costLabels; // x8
  UILabel_o *v39; // x22
  struct UILabel_array *v40; // x8
  __int64 v41; // x2
  struct UnityEngine_GameObject_array *zeroCostObjects; // x8
  UnityEngine_Object_o *v43; // x21
  __int64 v44; // x2
  struct UnityEngine_GameObject_array *v45; // x8
  struct UILabel_array *lineLabels; // x8
  UnityEngine_Object_o *v47; // x21
  __int64 v48; // x2
  struct UILabel_array *v49; // x8
  struct UILabel_array *line2Labels; // x8
  UnityEngine_Object_o *v51; // x21
  struct UILabel_array *v52; // x8
  int32_t EquipCostByIndex; // [xsp+28h] [xbp-38h] BYREF
  int32_t EquipLevelByIndex; // [xsp+2Ch] [xbp-34h] BYREF

  v5 = index;
  v6 = this;
  if ( (byte_5933962 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_26433/*"{0}"*/);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    this = (GrandServantStatusListViewItemDrawEquip_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5933962 = 1;
  }
  nameRangeLabels = v6->fields.nameRangeLabels;
  EquipLevelByIndex = 0;
  if ( !nameRangeLabels )
LABEL_99:
    sub_21FFECC(this, *(_QWORD *)&index);
  if ( LODWORD(nameRangeLabels->max_length) <= v5 )
    goto LABEL_100;
  if ( !item )
    goto LABEL_99;
  v8 = nameRangeLabels->m_Items[v5];
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipServantByIndex(item, v5, 0);
  if ( this )
  {
    this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipServantByIndex(item, v5, 0);
    if ( !this )
      goto LABEL_99;
    this = (GrandServantStatusListViewItemDrawEquip_o *)ServantEntity__getName((ServantEntity_o *)this, -1, -1, 0, 0, 0);
    *(_QWORD *)&index = this;
    if ( !v8 )
      goto LABEL_99;
  }
  else
  {
    *(_QWORD *)&index = StringLiteral_1/*""*/;
    if ( !v8 )
      goto LABEL_99;
  }
  UIRangeLabel__Set(v8, *(System_String_o **)&index, 0, 1, 0, 0, 0);
  levelLabels = v6->fields.levelLabels;
  if ( !levelLabels )
    goto LABEL_99;
  if ( LODWORD(levelLabels->max_length) <= v5 )
    goto LABEL_100;
  v10 = levelLabels->m_Items[v5];
  EquipLevelByIndex = ServantStatusListViewItem__GetEquipLevelByIndex(item, v5, 0);
  this = (GrandServantStatusListViewItemDrawEquip_o *)System_Int32__ToString((int32_t)&EquipLevelByIndex, 0);
  if ( !v10 )
    goto LABEL_99;
  UIExtrusionLabel__set_text(v10, (System_String_o *)this, 0);
  maxLevelLabels = v6->fields.maxLevelLabels;
  if ( !maxLevelLabels )
    goto LABEL_99;
  if ( LODWORD(maxLevelLabels->max_length) <= v5 )
    goto LABEL_100;
  v12 = maxLevelLabels->m_Items[v5];
  EquipLevelByIndex = ServantStatusListViewItem__GetEquipMaxLevelByIndex(item, v5, 0);
  this = (GrandServantStatusListViewItemDrawEquip_o *)System_Int32__ToString((int32_t)&EquipLevelByIndex, 0);
  if ( !v12 )
    goto LABEL_99;
  UILabel__set_text(v12, (System_String_o *)this, 0);
  attackIconLabels = v6->fields.attackIconLabels;
  if ( !attackIconLabels )
    goto LABEL_99;
  if ( LODWORD(attackIconLabels->max_length) <= v5 )
    goto LABEL_100;
  v14 = attackIconLabels->m_Items[v5];
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipAtkByIndex(item, v5, 0);
  if ( !v14 )
    goto LABEL_99;
  UIIconLabel__Set_48040364(v14, 5, (int32_t)this, 0, 0, 0, 0, 0, 0, 0, 0);
  hpIconLabels = v6->fields.hpIconLabels;
  if ( !hpIconLabels )
    goto LABEL_99;
  if ( LODWORD(hpIconLabels->max_length) <= v5 )
    goto LABEL_100;
  v16 = hpIconLabels->m_Items[v5];
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipHpByIndex(item, v5, 0);
  if ( !v16 )
    goto LABEL_99;
  UIIconLabel__Set_48040364(v16, 3, (int32_t)this, 0, 0, 0, 0, 0, 0, 0, 0);
  if ( !v5
    || (this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipCostByIndex(item, v5, 0),
        !(_DWORD)this) )
  {
    costLabels = v6->fields.costLabels;
    if ( !costLabels )
      goto LABEL_99;
    if ( LODWORD(costLabels->max_length) > v5 )
    {
      v39 = costLabels->m_Items[v5];
      EquipLevelByIndex = ServantStatusListViewItem__GetEquipCostByIndex(item, v5, 0);
      this = (GrandServantStatusListViewItemDrawEquip_o *)System_Int32__ToString((int32_t)&EquipLevelByIndex, 0);
      if ( !v39 )
        goto LABEL_99;
      UILabel__set_text(v39, (System_String_o *)this, 0);
      v40 = v6->fields.costLabels;
      if ( !v40 )
        goto LABEL_99;
      if ( LODWORD(v40->max_length) > v5 )
      {
        this = (GrandServantStatusListViewItemDrawEquip_o *)v40->m_Items[v5];
        if ( !this )
          goto LABEL_99;
        UIWidget__set_color((UIWidget_o *)this, v6->fields.ColorCost, 0);
        zeroCostObjects = v6->fields.zeroCostObjects;
        if ( !zeroCostObjects )
          goto LABEL_99;
        if ( LODWORD(zeroCostObjects->max_length) > v5 )
        {
          v43 = (UnityEngine_Object_o *)zeroCostObjects->m_Items[v5];
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index, v41);
          this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(v43, 0, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v45 = v6->fields.zeroCostObjects;
            if ( !v45 )
              goto LABEL_99;
            if ( LODWORD(v45->max_length) <= v5 )
              goto LABEL_100;
            this = (GrandServantStatusListViewItemDrawEquip_o *)v45->m_Items[v5];
            if ( !this )
              goto LABEL_99;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          }
          lineLabels = v6->fields.lineLabels;
          if ( !lineLabels )
            goto LABEL_99;
          if ( LODWORD(lineLabels->max_length) > v5 )
          {
            v47 = (UnityEngine_Object_o *)lineLabels->m_Items[v5];
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index, v44);
            this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(v47, 0, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v49 = v6->fields.lineLabels;
              if ( !v49 )
                goto LABEL_99;
              if ( LODWORD(v49->max_length) <= v5 )
                goto LABEL_100;
              this = (GrandServantStatusListViewItemDrawEquip_o *)v49->m_Items[v5];
              if ( !this )
                goto LABEL_99;
              this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0);
              if ( !this )
                goto LABEL_99;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            }
            line2Labels = v6->fields.line2Labels;
            if ( !line2Labels )
              goto LABEL_99;
            if ( LODWORD(line2Labels->max_length) > v5 )
            {
              v51 = (UnityEngine_Object_o *)line2Labels->m_Items[v5];
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index, v48);
              this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(v51, 0, 0);
              if ( ((unsigned __int8)this & 1) == 0 )
                return;
              v52 = v6->fields.line2Labels;
              if ( !v52 )
                goto LABEL_99;
              if ( LODWORD(v52->max_length) > v5 )
              {
                this = (GrandServantStatusListViewItemDrawEquip_o *)v52->m_Items[v5];
                if ( !this )
                  goto LABEL_99;
                this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0);
                if ( !this )
                  goto LABEL_99;
                v37 = 0;
                goto LABEL_97;
              }
            }
          }
        }
      }
    }
LABEL_100:
    sub_21FFED4(this);
  }
  v17 = v6->fields.costLabels;
  if ( !v17 )
    goto LABEL_99;
  if ( LODWORD(v17->max_length) <= v5 )
    goto LABEL_100;
  v18 = v17->m_Items[v5];
  EquipCostByIndex = ServantStatusListViewItem__GetEquipCostByIndex(item, v5, 0);
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &EquipCostByIndex);
  v20 = System_String__Format((System_String_o *)StringLiteral_26433/*"{0}"*/, v19, 0);
  this = (GrandServantStatusListViewItemDrawEquip_o *)System_String__Concat_75438412(
                                                        v20,
                                                        (System_String_o *)StringLiteral_113/*" "*/,
                                                        0);
  if ( !v18 )
    goto LABEL_99;
  UILabel__set_text(v18, (System_String_o *)this, 0);
  v21 = v6->fields.costLabels;
  if ( !v21 )
    goto LABEL_99;
  if ( LODWORD(v21->max_length) <= v5 )
    goto LABEL_100;
  this = (GrandServantStatusListViewItemDrawEquip_o *)v21->m_Items[v5];
  if ( !this )
    goto LABEL_99;
  UIWidget__set_color((UIWidget_o *)this, v6->fields.ColorCostZero, 0);
  v23 = v6->fields.zeroCostObjects;
  if ( !v23 )
    goto LABEL_99;
  if ( LODWORD(v23->max_length) <= v5 )
    goto LABEL_100;
  v24 = (UnityEngine_Object_o *)v23->m_Items[v5];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index, v22);
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(v24, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v26 = v6->fields.zeroCostObjects;
    if ( !v26 )
      goto LABEL_99;
    if ( LODWORD(v26->max_length) <= v5 )
      goto LABEL_100;
    this = (GrandServantStatusListViewItemDrawEquip_o *)v26->m_Items[v5];
    if ( !this )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  }
  v27 = v6->fields.lineLabels;
  if ( !v27 )
    goto LABEL_99;
  if ( LODWORD(v27->max_length) <= v5 )
    goto LABEL_100;
  v28 = (UnityEngine_Object_o *)v27->m_Items[v5];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index, v25);
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(v28, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v30 = v6->fields.lineLabels;
    if ( !v30 )
      goto LABEL_99;
    if ( LODWORD(v30->max_length) <= v5 )
      goto LABEL_100;
    this = (GrandServantStatusListViewItemDrawEquip_o *)v30->m_Items[v5];
    if ( !this )
      goto LABEL_99;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipCostByIndex(item, v5, 0);
    if ( !gameObject )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive(gameObject, (int)this < 10, 0);
  }
  v32 = v6->fields.line2Labels;
  if ( !v32 )
    goto LABEL_99;
  if ( LODWORD(v32->max_length) <= v5 )
    goto LABEL_100;
  v33 = (UnityEngine_Object_o *)v32->m_Items[v5];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index, v29);
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(v33, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v34 = v6->fields.line2Labels;
    if ( !v34 )
      goto LABEL_99;
    if ( LODWORD(v34->max_length) > v5 )
    {
      this = (GrandServantStatusListViewItemDrawEquip_o *)v34->m_Items[v5];
      if ( !this )
        goto LABEL_99;
      v35 = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
      this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipCostByIndex(item, v5, 0);
      if ( !v35 )
        goto LABEL_99;
      v36 = (int)this <= 9;
      this = v35;
      v37 = !v36;
LABEL_97:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v37, 0);
      return;
    }
    goto LABEL_100;
  }
}


// local variable allocation has failed, the output may be wrong!
void GrandServantStatusListViewItemDrawEquip__SetEquipLimitCount(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  GrandServantStatusListViewItemDrawEquip_o *v5; // x22
  struct ServantStatusLimitCountGauge_array *limitCountGauges; // x8
  GrandServantStatusListViewItemDrawEquip_o *v8; // x21
  GrandServantStatusListViewItemDrawEquip_o *v9; // x22
  int32_t explanationLabels; // w2
  int32_t v11; // w1

  if ( !item )
    goto LABEL_12;
  v5 = this;
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipServantByIndex(item, index, 0);
  limitCountGauges = v5->fields.limitCountGauges;
  if ( !this )
  {
    if ( limitCountGauges )
    {
      if ( LODWORD(limitCountGauges->max_length) <= index )
        goto LABEL_13;
      this = (GrandServantStatusListViewItemDrawEquip_o *)limitCountGauges->m_Items[index];
      if ( this )
      {
        v11 = 0;
        explanationLabels = 0;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_21FFECC(this, *(_QWORD *)&index);
  }
  if ( !limitCountGauges )
    goto LABEL_12;
  if ( LODWORD(limitCountGauges->max_length) <= index )
LABEL_13:
    sub_21FFED4(this);
  v8 = this;
  v9 = (GrandServantStatusListViewItemDrawEquip_o *)limitCountGauges->m_Items[index];
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipLimitCountByIndex(
                                                        item,
                                                        index,
                                                        0);
  if ( !v9 )
    goto LABEL_12;
  explanationLabels = (int32_t)v8->fields.explanationLabels;
  v11 = (int)this;
  this = v9;
LABEL_11:
  ServantStatusLimitCountGauge__Set((ServantStatusLimitCountGauge_o *)this, v11, explanationLabels, 0);
}


void GrandServantStatusListViewItemDrawEquip__SetItem(
        GrandServantStatusListViewItemDrawEquip_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 Master_object; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  struct UILabel_array *explanationLabels; // x8
  float z; // s1
  UILabel_o *v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  int32_t v18; // w23
  struct UnityEngine_Vector3_array *baseSpriteSizes; // x24
  char *v20; // x9
  struct UnityEngine_Vector3_StaticFields *v21; // x8
  float v22; // s1
  struct System_Int32_array *skillViewCounts; // x8
  struct UISprite_array *line2Sprites; // x8
  UISprite_o *v25; // x24
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x2
  GrandServantStatusListViewItemDrawEquip_o *SkillIconComponent; // x26
  int32_t v31; // w1
  const MethodInfo *v32; // x4
  __int64 v33; // x2
  struct UISprite_array *lineSprites; // x8
  int v35; // w24
  UnityEngine_Object_o *v36; // x25
  struct UISprite_array *v37; // x8
  __int64 v38; // x24
  int32_t Value; // w25
  System_String_o *EffectExplanation; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_o *Name; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  bool v54; // w25
  SkillInfo_array *v55; // x27
  System_String_o *v56; // x28
  bool IsMine; // w0
  bool IsNeedAddAdjust; // w0
  const MethodInfo *v59; // x6
  struct UnityEngine_Vector3_array *baseSizes; // x8
  int v61; // w27
  float *v62; // x8
  float v63; // s2
  float v64; // s0
  unsigned int v65; // w8
  bool v66; // zf
  float y; // s2
  int v68; // w9
  struct UnityEngine_Vector3_array *v69; // x8
  float v70; // s0
  int32_t v71; // w26
  float *v72; // x8
  float v73; // s1
  struct UnityEngine_Vector3_array *titleBasePositions; // x8
  struct UISprite_array *titleSprites; // x9
  int v76; // w26
  float *v77; // x8
  float v78; // s8
  float v79; // s11
  float v80; // s9
  float v81; // s10
  const MethodInfo *v82; // x7
  struct UnityEngine_Vector3_array *skillBasePositions; // x8
  float *v84; // x8
  struct UICommonButton_array *equipButtons; // x8
  UICommonButton_o *v86; // x8
  UnityEngine_Object_o *baseCollider; // x21
  struct UnityEngine_Vector3_array *v88; // x8
  float v89; // s0
  float v90; // s2
  int v91; // w10
  float v92; // s0
  int v93; // w8
  int v94; // w9
  int v95; // w8
  const MethodInfo *v96; // x2
  const MethodInfo *v97; // [xsp+8h] [xbp-B8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v98; // [xsp+18h] [xbp-A8h]
  Il2CppObject *entity; // [xsp+20h] [xbp-A0h] BYREF
  __int64 newTb; // [xsp+28h] [xbp-98h] BYREF
  __int64 newTb_8; // [xsp+30h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593395E & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SkillInfo_TypeInfo);
    sub_21FFC50(&StringLiteral_12406/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/);
    sub_21FFC50(&StringLiteral_7284/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/);
    sub_21FFC50(&StringLiteral_21365/*"img_line_04"*/);
    byte_593395E = 1;
  }
  newTb_8 = 0;
  skillInfoList = 0;
  entity = 0;
  newTb = 0;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0);
  if ( mode )
  {
    if ( !byte_5931940 )
    {
      Master_object = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    explanationLabels = this->fields.explanationLabels;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)&this->fields.baseColliderSizes.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    this->fields.baseColliderSizes.fields.z = z;
    if ( !explanationLabels )
      goto LABEL_92;
    if ( !LODWORD(explanationLabels->max_length) )
      goto LABEL_93;
    v13 = explanationLabels->m_Items[0];
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
    Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12406/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, 0);
    if ( !v13 )
      goto LABEL_92;
    UILabel__set_text(v13, (System_String_o *)Master_object, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
    v98 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !item )
      goto LABEL_92;
    Master_object = ServantStatusListViewItem__GetEquipListCount(item, 0);
    if ( (int)Master_object >= 1 )
    {
      v18 = 0;
      do
      {
        baseSpriteSizes = this->fields.baseSpriteSizes;
        if ( !byte_5931940 )
        {
          Master_object = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931940 = 1;
        }
        if ( !baseSpriteSizes )
          goto LABEL_92;
        if ( (unsigned int)v18 >= LODWORD(baseSpriteSizes->max_length) )
          goto LABEL_93;
        v20 = (char *)baseSpriteSizes + 12 * v18;
        v21 = UnityEngine_Vector3_TypeInfo->static_fields;
        v22 = v21->zeroVector.fields.z;
        *((_QWORD *)v20 + 4) = *(_QWORD *)&v21->zeroVector.fields.x;
        *((float *)v20 + 10) = v22;
        skillViewCounts = this->fields.skillViewCounts;
        if ( !skillViewCounts )
          goto LABEL_92;
        if ( (unsigned int)v18 >= LODWORD(skillViewCounts->max_length) )
          goto LABEL_93;
        skillViewCounts->m_Items[v18] = 0;
        if ( v18 )
        {
          line2Sprites = this->fields.line2Sprites;
          if ( !line2Sprites )
            goto LABEL_92;
          if ( (unsigned int)v18 >= LODWORD(line2Sprites->max_length) )
            goto LABEL_93;
          v25 = line2Sprites->m_Items[v18];
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8, v16);
          AtlasManager__SetDownloadCommonSprite(v25, (System_String_o *)StringLiteral_21365/*"img_line_04"*/, 0);
        }
        GrandServantStatusListViewItemDrawEquip__SetEquipIcon(this, v18, item, v17);
        GrandServantStatusListViewItemDrawEquip__SetEquipInfoLabel(this, v18, item, v26);
        GrandServantStatusListViewItemDrawEquip__SetEquipExpInfo(this, v18, item, v27);
        GrandServantStatusListViewItemDrawEquip__SetEquipLimitCount(this, v18, item, v28);
        ServantStatusListViewItem__GetEquipSkillInfoByIndex(item, v18, &skillInfoList, 0);
        SkillIconComponent = (GrandServantStatusListViewItemDrawEquip_o *)GrandServantStatusListViewItemDrawEquip__GetSkillIconComponent(
                                                                            this,
                                                                            v18,
                                                                            v29);
        Master_object = GrandServantStatusListViewItemDrawEquip__GetSkillInfoListNum(
                          SkillIconComponent,
                          v31,
                          skillInfoList,
                          (SkillIconComponent_array *)SkillIconComponent,
                          v32);
        lineSprites = this->fields.lineSprites;
        if ( !lineSprites )
          goto LABEL_92;
        if ( (unsigned int)v18 >= LODWORD(lineSprites->max_length) )
          goto LABEL_93;
        v35 = Master_object;
        v36 = (UnityEngine_Object_o *)lineSprites->m_Items[v18];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v33);
        Master_object = UnityEngine_Object__op_Inequality(v36, 0, 0);
        if ( (Master_object & 1) != 0 )
        {
          v37 = this->fields.lineSprites;
          if ( !v37 )
            goto LABEL_92;
          if ( (unsigned int)v18 >= LODWORD(v37->max_length) )
            goto LABEL_93;
          Master_object = (__int64)v37->m_Items[v18];
          if ( !Master_object )
            goto LABEL_92;
          Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
          if ( !Master_object )
            goto LABEL_92;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v35 > 0, 0);
        }
        HIDWORD(newTb_8) = 0;
        v38 = sub_21FFEBC(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v38, 0);
        if ( v18 != 1 )
          goto LABEL_46;
        Master_object = ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill(item, 0);
        if ( (Master_object & 1) == 0 )
          goto LABEL_46;
        Value = ConstantMaster__getValue((System_String_o *)StringLiteral_7284/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/, 0);
        Master_object = (__int64)v98;
        if ( !v98 )
          goto LABEL_92;
        Master_object = DataMasterBase_object__object__int___TryGetEntity(
                          v98,
                          &entity,
                          Value,
                          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( (Master_object & 1) != 0 )
        {
          if ( !v38 )
            goto LABEL_92;
          Master_object = (__int64)entity;
          *(_DWORD *)(v38 + 16) = Value;
          if ( !Master_object )
            goto LABEL_92;
          EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)Master_object, 0, 0);
          *(_QWORD *)(v38 + 40) = EffectExplanation;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v38 + 40),
            (int32_t)EffectExplanation,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46);
          Master_object = (__int64)entity;
          if ( !entity )
            goto LABEL_92;
          Name = SkillEntity__getName((SkillEntity_o *)entity, 0);
          *(_QWORD *)(v38 + 32) = Name;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v38 + 32), (int32_t)Name, v48, v49, v50, v51, v52, v53);
          v54 = 1;
        }
        else
        {
LABEL_46:
          if ( !v38 )
            goto LABEL_92;
          v54 = 0;
        }
        v55 = skillInfoList;
        v56 = *(System_String_o **)(v38 + 40);
        IsMine = ServantStatusListViewItem__get_IsMine(item, 0);
        IsNeedAddAdjust = GrandServantStatusListViewItemDrawEquip__IsNeedAddAdjust(
                            this,
                            v18,
                            v55,
                            0,
                            (SkillIconComponent_array *)SkillIconComponent,
                            (int32_t *)&newTb_8 + 1,
                            v54,
                            v56,
                            IsMine,
                            v97);
        GrandServantStatusListViewItemDrawEquip__SetReinforce(
          this,
          v18,
          item,
          IsNeedAddAdjust,
          SHIDWORD(newTb_8),
          (int32_t *)&newTb_8 + 1,
          v59);
        baseSizes = this->fields.baseSizes;
        if ( !baseSizes )
          goto LABEL_92;
        if ( (unsigned int)v18 >= LODWORD(baseSizes->max_length) )
          goto LABEL_93;
        v61 = HIDWORD(newTb_8);
        v62 = (float *)((char *)baseSizes + 12 * v18);
        v63 = v62[8];
        v64 = v62[9] + (float)SHIDWORD(newTb_8);
        v65 = (int)v63;
        v66 = v63 == INFINITY;
        y = this->fields.baseColliderSizes.fields.y;
        v68 = (int)v64;
        if ( v66 )
          v8 = 0x80000000LL;
        else
          v8 = v65;
        v66 = v64 == INFINITY;
        v69 = this->fields.baseSpriteSizes;
        v70 = (float)(int)v8;
        if ( v66 )
          v71 = 0x80000000;
        else
          v71 = v68;
        this->fields.baseColliderSizes.fields.x = v70;
        this->fields.baseColliderSizes.fields.y = y + (float)v71;
        if ( !v69 )
          goto LABEL_92;
        if ( (unsigned int)v18 >= LODWORD(v69->max_length) )
          goto LABEL_93;
        v72 = (float *)((char *)v69 + 12 * v18);
        Master_object = (__int64)this->fields.baseSprite;
        v73 = v72[9] + (float)v71;
        v72[8] = v70;
        v72[9] = v73;
        if ( !Master_object )
          goto LABEL_92;
        UIWidget__set_width((UIWidget_o *)Master_object, v8, 0);
        Master_object = (__int64)this->fields.baseSprite;
        if ( !Master_object )
          goto LABEL_92;
        UIWidget__set_height((UIWidget_o *)Master_object, v71, 0);
        titleBasePositions = this->fields.titleBasePositions;
        if ( !titleBasePositions )
          goto LABEL_92;
        if ( (unsigned int)v18 >= LODWORD(titleBasePositions->max_length) )
          goto LABEL_93;
        titleSprites = this->fields.titleSprites;
        v76 = v61 >= 0 ? v61 : v61 + 1;
        if ( !titleSprites )
          goto LABEL_92;
        if ( (unsigned int)v18 >= LODWORD(titleSprites->max_length) )
          goto LABEL_93;
        Master_object = (__int64)titleSprites->m_Items[v18];
        if ( !Master_object )
          goto LABEL_92;
        v77 = (float *)((char *)titleBasePositions + 12 * v18);
        v78 = v77[8];
        v79 = v77[9];
        v80 = v77[10];
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
        if ( !Master_object )
          goto LABEL_92;
        v103.fields.x = v78;
        v103.fields.z = v80;
        v81 = (float)(v76 >> 1);
        v103.fields.y = v79 + v81;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, v103, 0);
        skillBasePositions = this->fields.skillBasePositions;
        if ( !skillBasePositions )
          goto LABEL_92;
        if ( (unsigned int)v18 >= LODWORD(skillBasePositions->max_length) )
          goto LABEL_93;
        v84 = (float *)((char *)skillBasePositions + 12 * v18);
        v104.fields.z = v84[10];
        v104.fields.y = v84[9] + v81;
        *(float *)&newTb = v84[8];
        LODWORD(v104.fields.x) = newTb;
        HIDWORD(newTb) = LODWORD(v104.fields.y);
        *(float *)&newTb_8 = v104.fields.z;
        GrandServantStatusListViewItemDrawEquip__SetSkillInfo(
          this,
          v18,
          skillInfoList,
          item,
          v104,
          (UnityEngine_Vector3_o *)&newTb,
          v54,
          (SkillInfo_o *)v38,
          v82);
        Master_object = ServantStatusListViewItem__IsEquipByIndex(item, v18, 0);
        equipButtons = this->fields.equipButtons;
        if ( !equipButtons )
          goto LABEL_92;
        if ( (unsigned int)v18 >= LODWORD(equipButtons->max_length) )
          goto LABEL_93;
        v86 = equipButtons->m_Items[v18];
        if ( !v86 )
          goto LABEL_92;
        UICommonButton__SetColliderEnable(v86, Master_object & 1, 1, 0);
        ++v18;
        Master_object = ServantStatusListViewItem__GetEquipListCount(item, 0);
      }
      while ( v18 < (int)Master_object );
    }
    baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v16);
    Master_object = UnityEngine_Object__op_Inequality(baseCollider, 0, 0);
    if ( (Master_object & 1) != 0 )
    {
      Master_object = (__int64)this->fields.baseCollider;
      if ( !Master_object )
        goto LABEL_92;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Master_object, this->fields.baseColliderSizes, 0);
    }
    v88 = this->fields.baseSpriteSizes;
    if ( !v88 )
LABEL_92:
      sub_21FFECC(Master_object, v8);
    if ( LODWORD(v88->max_length) <= 2 )
LABEL_93:
      sub_21FFED4(Master_object);
    Master_object = (__int64)this->fields.baseSprite;
    if ( !Master_object )
      goto LABEL_92;
    v89 = v88->m_Items[1].fields.y;
    v90 = v88->m_Items[2].fields.y;
    v91 = (int)v89;
    v66 = v89 == INFINITY;
    v92 = v88->m_Items[0].fields.y;
    if ( v66 )
      v91 = 0x80000000;
    if ( v90 == INFINITY )
      v93 = 0x80000000;
    else
      v93 = (int)v90;
    v94 = (int)v92 - 7;
    v95 = v91 + v93;
    if ( v92 == INFINITY )
      v94 = 2147483641;
    UIWidget__set_height((UIWidget_o *)Master_object, v94 + v95, 0);
    GrandServantStatusListViewItemDrawEquip__SetPosition(this, item, v96);
  }
}


void GrandServantStatusListViewItemDrawEquip__SetPosition(
        GrandServantStatusListViewItemDrawEquip_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  GrandServantStatusListViewItemDrawEquip_o *v4; // x20
  struct UISprite_array *titleSprites; // x8
  struct UnityEngine_Vector3_array *baseSpriteSizes; // x8
  struct UISprite_array *v7; // x9
  float y; // s11
  float v9; // s12
  float v10; // s10
  float x; // s8
  float z; // s9
  struct UISprite_array *v13; // x8
  struct UnityEngine_Vector3_array *v14; // x8
  struct UISprite_array *v15; // x9
  float v16; // s9
  float v17; // s8
  float v18; // s10
  struct UISprite_array *v19; // x8
  struct UnityEngine_Vector3_array *v20; // x8
  struct UISprite_array *v21; // x9
  float v22; // s9
  float v23; // s8
  float v24; // s11
  const MethodInfo *v25; // x2
  int32_t v26; // w21
  struct UnityEngine_GameObject_array *reinforceObject; // x8
  GrandServantStatusListViewItemDrawEquip_o *v28; // x22
  struct UnityEngine_Vector3_array *v29; // x9
  float v30; // s3
  float v31; // s13
  float v32; // s0
  struct System_Int32_array *skillViewCounts; // x8
  float v34; // s12
  int v35; // w29
  int32_t v36; // w26
  float v37; // s11
  float v38; // s9
  float v39; // s10
  const MethodInfo *v40; // x2
  float v41; // s14
  float v42; // s15
  float v43; // s8
  GrandServantStatusListViewItemDrawEquip_o *v44; // x23
  __int64 v45; // x2
  struct UnityEngine_GameObject_array *v46; // x8
  float v47; // [xsp+0h] [xbp-B0h]
  float v48; // [xsp+4h] [xbp-ACh]
  float v49; // [xsp+8h] [xbp-A8h]
  float value; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_593395F & 1) == 0 )
  {
    this = (GrandServantStatusListViewItemDrawEquip_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593395F = 1;
  }
  titleSprites = v4->fields.titleSprites;
  if ( !titleSprites )
    goto LABEL_79;
  if ( !LODWORD(titleSprites->max_length) )
    goto LABEL_80;
  this = (GrandServantStatusListViewItemDrawEquip_o *)titleSprites->m_Items[0];
  if ( !this )
    goto LABEL_79;
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
  if ( !this )
    goto LABEL_79;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  baseSpriteSizes = v4->fields.baseSpriteSizes;
  if ( !baseSpriteSizes )
    goto LABEL_79;
  if ( LODWORD(baseSpriteSizes->max_length) <= 2 )
    goto LABEL_80;
  v7 = v4->fields.titleSprites;
  if ( !v7 )
    goto LABEL_79;
  if ( !LODWORD(v7->max_length) )
    goto LABEL_80;
  this = (GrandServantStatusListViewItemDrawEquip_o *)v7->m_Items[0];
  if ( !this )
    goto LABEL_79;
  y = baseSpriteSizes->m_Items[1].fields.y;
  v9 = baseSpriteSizes->m_Items[2].fields.y;
  v10 = baseSpriteSizes->m_Items[0].fields.y;
  x = localPosition.fields.x;
  z = localPosition.fields.z;
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
  if ( !this )
    goto LABEL_79;
  v52.fields.z = z;
  v52.fields.y = (float)((float)((float)(y * 0.5) + (float)(v9 * 0.5)) + (float)(v10 * 0.5)) + -4.0;
  v52.fields.x = x;
  v49 = v52.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v52, 0);
  v13 = v4->fields.titleSprites;
  if ( !v13 )
    goto LABEL_79;
  if ( (v13->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_80;
  this = (GrandServantStatusListViewItemDrawEquip_o *)v13->m_Items[1];
  if ( !this )
    goto LABEL_79;
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
  if ( !this )
    goto LABEL_79;
  v53 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v14 = v4->fields.baseSpriteSizes;
  if ( !v14 )
    goto LABEL_79;
  if ( !LODWORD(v14->max_length) )
    goto LABEL_80;
  v15 = v4->fields.titleSprites;
  if ( !v15 )
    goto LABEL_79;
  if ( (v15->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_80;
  this = (GrandServantStatusListViewItemDrawEquip_o *)v15->m_Items[1];
  if ( !this )
    goto LABEL_79;
  v16 = v14->m_Items[0].fields.y;
  v17 = v53.fields.x;
  v18 = v53.fields.z;
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
  if ( !this )
    goto LABEL_79;
  v54.fields.z = v18;
  v54.fields.y = (float)(v49 - v16) + 6.0;
  v54.fields.x = v17;
  v48 = v54.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v54, 0);
  v19 = v4->fields.titleSprites;
  if ( !v19 )
    goto LABEL_79;
  if ( LODWORD(v19->max_length) <= 2 )
    goto LABEL_80;
  this = (GrandServantStatusListViewItemDrawEquip_o *)v19->m_Items[2];
  if ( !this )
    goto LABEL_79;
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
  if ( !this )
    goto LABEL_79;
  v55 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v20 = v4->fields.baseSpriteSizes;
  if ( !v20 )
    goto LABEL_79;
  if ( (v20->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_80;
  v21 = v4->fields.titleSprites;
  if ( !v21 )
    goto LABEL_79;
  if ( LODWORD(v21->max_length) <= 2 )
    goto LABEL_80;
  this = (GrandServantStatusListViewItemDrawEquip_o *)v21->m_Items[2];
  if ( !this )
    goto LABEL_79;
  v22 = v20->m_Items[1].fields.y;
  v23 = v55.fields.x;
  v24 = v55.fields.z;
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
  if ( !this )
    goto LABEL_79;
  v56.fields.z = v24;
  v56.fields.y = (float)(v48 - v22) + 6.0;
  v56.fields.x = v23;
  v47 = v56.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v56, 0);
  if ( !item )
    goto LABEL_79;
  if ( ServantStatusListViewItem__GetEquipListCount(item, 0) >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      this = (GrandServantStatusListViewItemDrawEquip_o *)GrandServantStatusListViewItemDrawEquip__GetSkillBase(
                                                            v4,
                                                            v26,
                                                            v25);
      reinforceObject = v4->fields.reinforceObject;
      if ( !reinforceObject )
        goto LABEL_79;
      if ( (unsigned int)v26 >= LODWORD(reinforceObject->max_length) )
        goto LABEL_80;
      v28 = this;
      this = (GrandServantStatusListViewItemDrawEquip_o *)reinforceObject->m_Items[v26];
      if ( !this )
        goto LABEL_79;
      this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0);
      if ( !this )
        goto LABEL_79;
      v57 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      v29 = v4->fields.baseSpriteSizes;
      if ( !v29 )
        goto LABEL_79;
      if ( (unsigned int)v26 >= LODWORD(v29->max_length) )
        goto LABEL_80;
      v30 = v57.fields.x;
      v31 = v57.fields.y;
      v32 = v49;
      if ( v26 == 1 )
        v32 = v48;
      if ( v26 == 2 )
        v32 = v47;
      if ( v28 )
        break;
LABEL_77:
      if ( ++v26 >= ServantStatusListViewItem__GetEquipListCount(item, 0) )
        return;
    }
    skillViewCounts = v4->fields.skillViewCounts;
    value = v30;
    if ( !skillViewCounts )
      goto LABEL_79;
    v34 = v57.fields.z;
    v35 = 0;
    v36 = 0;
    v37 = v32 + -220.0;
    v38 = v32 + -330.0;
    v39 = (float)(v32 - v29->m_Items[v26].fields.y) + 23.0;
    while ( 1 )
    {
      if ( (unsigned int)v26 >= LODWORD(skillViewCounts->max_length) )
        goto LABEL_80;
      if ( v36 >= skillViewCounts->m_Items[v26] )
      {
        v46 = v4->fields.reinforceObject;
        if ( !v46 )
          goto LABEL_79;
        if ( (unsigned int)v26 < LODWORD(v46->max_length) )
        {
          this = (GrandServantStatusListViewItemDrawEquip_o *)v46->m_Items[v26];
          if ( this )
          {
            this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0);
            if ( this )
            {
              v60.fields.y = v31;
              v60.fields.z = v34;
              v60.fields.x = value;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v60, 0);
              goto LABEL_77;
            }
          }
LABEL_79:
          sub_21FFECC(this, item);
        }
LABEL_80:
        sub_21FFED4(this);
      }
      if ( (unsigned int)v26 >= LODWORD(v28->fields.m_CancellationTokenSource) )
        goto LABEL_80;
      this = (GrandServantStatusListViewItemDrawEquip_o *)*((_QWORD *)&v28->fields.dispMode + v26);
      if ( !this )
        goto LABEL_79;
      this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0);
      if ( !this )
        goto LABEL_79;
      v58 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      v41 = v58.fields.x;
      v42 = v58.fields.z;
      if ( v36 == 1 )
      {
        this = (GrandServantStatusListViewItemDrawEquip_o *)GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillExplanationLabel(
                                                              v4,
                                                              v26,
                                                              v40);
        if ( v26 == 1 )
        {
          v44 = this;
          this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill(
                                                                item,
                                                                0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v45);
            this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)v44,
                                                                  0,
                                                                  0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v44 )
                goto LABEL_79;
              v35 = v35 - HIDWORD(v44->fields.expBases) - 50;
            }
          }
        }
        v43 = v38;
      }
      else
      {
        if ( v36 )
        {
          v43 = v58.fields.y;
          goto LABEL_67;
        }
        v43 = v37;
      }
      v31 = v39;
LABEL_67:
      if ( (unsigned int)v36 >= LODWORD(v28->fields.m_CancellationTokenSource) )
        goto LABEL_80;
      this = (GrandServantStatusListViewItemDrawEquip_o *)*((_QWORD *)&v28->fields.dispMode + v36);
      if ( this )
      {
        this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0);
        if ( this )
        {
          v59.fields.z = v42;
          v59.fields.y = v43 + (float)v35;
          v59.fields.x = v41;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v59, 0);
          skillViewCounts = v4->fields.skillViewCounts;
          ++v36;
          if ( skillViewCounts )
            continue;
        }
      }
      goto LABEL_79;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void GrandServantStatusListViewItemDrawEquip__SetReinforce(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        ServantStatusListViewItem_o *item,
        bool isNeedAddAdjust,
        int32_t range,
        int32_t *newRange,
        const MethodInfo *method)
{
  GrandServantStatusListViewItemDrawEquip_o *v8; // x22
  ServantEntity_o *EquipServantByIndex; // x0
  ServantEntity_o *v14; // x25
  int32_t EquipLevelByIndex; // w26
  struct UnityEngine_GameObject_array *reinforceObject; // x8
  int v17; // w24
  struct UICommonButton_array *reinforceButton; // x8
  bool CanMoveCombine_k__BackingField; // w1
  struct UnityEngine_GameObject_array *v20; // x8
  UnityEngine_GameObject_o **v21; // x8
  int32_t v22; // w9

  if ( !item )
    goto LABEL_22;
  v8 = this;
  EquipServantByIndex = ServantStatusListViewItem__GetEquipServantByIndex(item, index, 0);
  if ( !item->fields._IsDisplayCombineButton_k__BackingField )
    goto LABEL_21;
  v14 = EquipServantByIndex;
  if ( !EquipServantByIndex )
    goto LABEL_21;
  EquipLevelByIndex = ServantStatusListViewItem__GetEquipLevelByIndex(item, index, 0);
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipMaxLevelByIndex(item, index, 0);
  if ( EquipLevelByIndex >= (int)this )
  {
    this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipLimitCountByIndex(
                                                          item,
                                                          index,
                                                          0);
    if ( (int)this >= v14->fields.limitMax )
      goto LABEL_21;
  }
  reinforceObject = v8->fields.reinforceObject;
  v17 = isNeedAddAdjust ? 42 : 30;
  if ( !reinforceObject )
    goto LABEL_22;
  if ( LODWORD(reinforceObject->max_length) <= index )
    goto LABEL_23;
  this = (GrandServantStatusListViewItemDrawEquip_o *)reinforceObject->m_Items[index];
  if ( !this )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  reinforceButton = v8->fields.reinforceButton;
  if ( !reinforceButton )
    goto LABEL_22;
  if ( LODWORD(reinforceButton->max_length) <= index )
    goto LABEL_23;
  this = (GrandServantStatusListViewItemDrawEquip_o *)reinforceButton->m_Items[index];
  if ( !this
    || (CanMoveCombine_k__BackingField = item->fields._CanMoveCombine_k__BackingField,
        BYTE1(this->fields.nameRangeLabels) = 1,
        UICommonButton__SetEnable((UICommonButton_o *)this, CanMoveCombine_k__BackingField, 0),
        (v20 = v8->fields.reinforceObject) == 0) )
  {
LABEL_22:
    sub_21FFECC(this, *(_QWORD *)&index);
  }
  if ( LODWORD(v20->max_length) <= index )
LABEL_23:
    sub_21FFED4(this);
  range += v17;
  v21 = (UnityEngine_GameObject_o **)(&v20->obj.klass + index);
  if ( range >= 0 )
    v22 = range;
  else
    v22 = range + 1;
  GameObjectExtensions__SetLocalPositionY(v21[4], (float)-(v22 >> 1), 0);
LABEL_21:
  *newRange = range;
}


void GrandServantStatusListViewItemDrawEquip__SetSkillInfo(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        SkillInfo_array *skillInfoList,
        ServantStatusListViewItem_o *item,
        UnityEngine_Vector3_o tb,
        UnityEngine_Vector3_o *newTb,
        bool isChangeEquipSkill,
        SkillInfo_o *changeSkillInfo,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  SkillInfo_array *v15; // x27
  UnityEngine_GameObject_array *SkillBase; // x25
  const MethodInfo *v19; // x2
  UILabel_array *EquipSkillExplanationLabelList; // x26
  const MethodInfo *v21; // x2
  UnityEngine_GameObject_o *SkillIconComponent; // x0
  __int64 v23; // x1
  int max_length; // w8
  __int64 v25; // x23
  unsigned int v26; // w21
  unsigned int v27; // w9
  SkillInfo_o *v28; // x23
  UnityEngine_GameObject_c **v29; // x22
  void **v30; // x22
  UnityEngine_GameObject_o *v31; // t1
  const MethodInfo *v32; // x2
  UnityEngine_GameObject_o *v33; // x28
  UnityEngine_GameObject_c **v34; // x27
  void **v35; // x27
  UnityEngine_GameObject_o *v36; // t1
  __int64 v37; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v39; // x19
  __int64 v40; // x28
  int32_t v41; // w28
  bool v42; // w19
  __int64 v43; // x2
  UILabel_o *v44; // x8
  int32_t mHeight; // w19
  struct System_Int32_array *skillPitches; // x8
  int v47; // w8
  float v48; // s0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  __int64 v50; // x19
  __int64 v51; // x28
  struct System_Int32_array *skillViewCounts; // x8
  int32_t v53; // w19
  const MethodInfo *v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  UnityEngine_Object_o *v57; // x19
  const MethodInfo *v58; // x2
  int32_t id; // w1
  __int64 v60; // x1
  __int64 v61; // x2
  UnityEngine_Object_o *v62; // x19
  System_String_o **p_title; // x8
  UIRangeLabel_o *v64; // x0
  _BOOL4 value; // [xsp+Ch] [xbp-B4h]
  SkillInfo_o *v66; // [xsp+10h] [xbp-B0h]
  SkillInfo_array *v67; // [xsp+18h] [xbp-A8h]
  UnityEngine_GameObject_o *v68; // [xsp+20h] [xbp-A0h]
  UnityEngine_GameObject_o *v69; // [xsp+28h] [xbp-98h]
  unsigned int indexa; // [xsp+30h] [xbp-90h]
  __int64 v72; // [xsp+48h] [xbp-78h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  z = tb.fields.z;
  y = tb.fields.y;
  x = tb.fields.x;
  v15 = skillInfoList;
  if ( (byte_5933965 & 1) == 0 )
  {
    sub_21FFC50(&GrandServantStatusListViewItemDrawEquip_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5933965 = 1;
  }
  SkillBase = GrandServantStatusListViewItemDrawEquip__GetSkillBase(this, index, (const MethodInfo *)skillInfoList);
  EquipSkillExplanationLabelList = GrandServantStatusListViewItemDrawEquip__GetEquipSkillExplanationLabelList(
                                     this,
                                     index,
                                     v19);
  SkillIconComponent = (UnityEngine_GameObject_o *)GrandServantStatusListViewItemDrawEquip__GetSkillIconComponent(
                                                     this,
                                                     index,
                                                     v21);
  v69 = SkillIconComponent;
  newTb->fields.x = x;
  newTb->fields.y = y;
  newTb->fields.z = z;
  if ( !SkillBase )
LABEL_81:
    sub_21FFECC(SkillIconComponent, v23);
  max_length = SkillBase->max_length;
  v66 = changeSkillInfo;
  if ( max_length >= 1 )
  {
    v25 = index;
    value = changeSkillInfo != 0 && isChangeEquipSkill;
    v26 = 0;
    v67 = v15;
    indexa = index;
    v72 = index;
    while ( 1 )
    {
      if ( !v15 )
        goto LABEL_27;
      v27 = v15->max_length;
      if ( (int)v26 >= (int)v27 )
        goto LABEL_27;
      if ( v26 >= v27 )
        goto LABEL_82;
      v28 = v15->m_Items[v26];
      if ( !v28 || v28->fields.id < 1 )
      {
        v25 = v72;
LABEL_27:
        v42 = 0;
        goto LABEL_28;
      }
      if ( v26 >= max_length )
        goto LABEL_82;
      SkillIconComponent = SkillBase->m_Items[v26];
      if ( !SkillIconComponent )
        goto LABEL_81;
      SkillIconComponent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(SkillIconComponent, 0);
      if ( !SkillIconComponent )
        goto LABEL_81;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SkillIconComponent, *newTb, 0);
      if ( !v69 )
        goto LABEL_81;
      if ( v26 >= LODWORD(v69[1].klass) )
        goto LABEL_82;
      v29 = &v69->klass + (int)v26;
      v31 = (UnityEngine_GameObject_o *)v29[4];
      v30 = (void **)(v29 + 4);
      SkillIconComponent = v31;
      if ( !v31 )
        goto LABEL_81;
      SkillIconComponent__Set((SkillIconComponent_o *)SkillIconComponent, v28->fields.id, 0);
      SkillIconComponent = (UnityEngine_GameObject_o *)GrandServantStatusListViewItemDrawEquip__GetSkillTitleRangeLabel(
                                                         this,
                                                         index,
                                                         v32);
      if ( !SkillIconComponent )
        goto LABEL_81;
      v33 = SkillIconComponent;
      if ( v26 >= LODWORD(SkillIconComponent[1].klass) )
        goto LABEL_82;
      v34 = &SkillIconComponent->klass + (int)v26;
      v36 = (UnityEngine_GameObject_o *)v34[4];
      v35 = (void **)(v34 + 4);
      SkillIconComponent = v36;
      if ( !v36 )
        goto LABEL_81;
      UIRangeLabel__Set((UIRangeLabel_o *)SkillIconComponent, v28->fields.title, 0, 1, 0, 0, 0);
      if ( !item )
        goto LABEL_81;
      userSvtEntity = item->fields.userSvtEntity;
      v68 = v33;
      if ( userSvtEntity )
        break;
      servantLeaderInfo = item->fields.servantLeaderInfo;
      if ( servantLeaderInfo )
      {
        v50 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v51 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v37);
        *(_QWORD *)&v74.fields.currentCryptoKey = v50;
        *(_QWORD *)&v74.fields.fakeValue = v51;
        SkillIconComponent = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                           v74,
                                                           0);
        if ( !item->fields.servantLeaderInfo )
          goto LABEL_81;
        v41 = (int)SkillIconComponent;
        SkillIconComponent = (UnityEngine_GameObject_o *)ServantLeaderInfo__getRarity(item->fields.servantLeaderInfo, 0);
        goto LABEL_46;
      }
      v53 = -1;
      v41 = -1;
LABEL_49:
      SkillIconComponent = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !SkillIconComponent )
        goto LABEL_81;
      SkillIconComponent = (UnityEngine_GameObject_o *)PartyOrganizationUtility__IsRarityRestriction_41240800(
                                                         (PartyOrganizationUtility_o *)SkillIconComponent,
                                                         v41,
                                                         v53,
                                                         v28->fields.id,
                                                         v28->fields.lv,
                                                         0);
      v25 = v72;
      if ( ((unsigned __int8)SkillIconComponent & 1) != 0 )
      {
        if ( v26 >= LODWORD(v69[1].klass) )
          goto LABEL_82;
        SkillIconComponent = (UnityEngine_GameObject_o *)*v30;
        if ( !*v30 )
          goto LABEL_81;
        SkillIconComponent__SetInvalidColor((SkillIconComponent_o *)SkillIconComponent, this->fields.ColorInvalid, 0);
        if ( v26 >= LODWORD(v68[1].klass) )
          goto LABEL_82;
        SkillIconComponent = (UnityEngine_GameObject_o *)*v35;
        if ( !*v35 )
          goto LABEL_81;
        UIRangeLabel__set_color((UIRangeLabel_o *)SkillIconComponent, this->fields.ColorInvalid, 0);
        if ( !EquipSkillExplanationLabelList )
          goto LABEL_81;
        if ( v26 >= LODWORD(EquipSkillExplanationLabelList->max_length) )
          goto LABEL_82;
        SkillIconComponent = (UnityEngine_GameObject_o *)EquipSkillExplanationLabelList->m_Items[v26];
        if ( !SkillIconComponent )
          goto LABEL_81;
        UIWidget__set_color((UIWidget_o *)SkillIconComponent, this->fields.ColorInvalid, 0);
      }
      if ( v26 )
      {
        v15 = v67;
        index = indexa;
      }
      else
      {
        index = indexa;
        v57 = (UnityEngine_Object_o *)GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillIconComponent(
                                        this,
                                        indexa,
                                        v54);
        v15 = v67;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55, v56);
        SkillIconComponent = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v57, 0, 0);
        if ( ((unsigned __int8)SkillIconComponent & 1) != 0 )
        {
          if ( !v57 )
            goto LABEL_81;
          SkillIconComponent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v57, 0);
          if ( !SkillIconComponent )
            goto LABEL_81;
          UnityEngine_GameObject__SetActive(SkillIconComponent, value, 0);
          if ( value )
            id = v66->fields.id;
          else
            id = 0;
          SkillIconComponent__Set((SkillIconComponent_o *)v57, id, 0);
        }
        v62 = (UnityEngine_Object_o *)GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillTitleRangeLabel(
                                        this,
                                        indexa,
                                        v58);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v60, v61);
        SkillIconComponent = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v62, 0, 0);
        if ( ((unsigned __int8)SkillIconComponent & 1) != 0 )
        {
          if ( !v62 )
            goto LABEL_81;
          SkillIconComponent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v62, 0);
          if ( !SkillIconComponent )
            goto LABEL_81;
          UnityEngine_GameObject__SetActive(SkillIconComponent, value, 0);
          p_title = &v66->fields.title;
          if ( !value )
            p_title = *(System_String_o ***)(qword_594C0B8 + 184);
          v64 = (UIRangeLabel_o *)v62;
          v42 = 1;
          UIRangeLabel__Set(v64, *p_title, 0, 1, 0, 0, 0);
          goto LABEL_28;
        }
      }
      v42 = 1;
LABEL_28:
      if ( v26 >= LODWORD(SkillBase->max_length) )
        goto LABEL_82;
      SkillIconComponent = SkillBase->m_Items[v26];
      if ( !SkillIconComponent )
        goto LABEL_81;
      UnityEngine_GameObject__SetActive(SkillIconComponent, v42, 0);
      if ( !EquipSkillExplanationLabelList )
        goto LABEL_81;
      if ( v26 >= LODWORD(EquipSkillExplanationLabelList->max_length) )
        goto LABEL_82;
      v44 = EquipSkillExplanationLabelList->m_Items[v26];
      if ( !v44 )
        goto LABEL_81;
      SkillIconComponent = (UnityEngine_GameObject_o *)GrandServantStatusListViewItemDrawEquip_TypeInfo;
      mHeight = v44->fields.mHeight;
      if ( !*(&GrandServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(GrandServantStatusListViewItemDrawEquip_TypeInfo, v23, v43);
        SkillIconComponent = (UnityEngine_GameObject_o *)GrandServantStatusListViewItemDrawEquip_TypeInfo;
      }
      skillPitches = this->fields.skillPitches;
      if ( !skillPitches )
        goto LABEL_81;
      if ( LODWORD(skillPitches->max_length) <= index )
        goto LABEL_82;
      ++v26;
      v47 = skillPitches->m_Items[v25];
      if ( *(_DWORD *)(SkillIconComponent[7].fields.m_CachedPtr + 4) + mHeight > v47 )
        v47 = *(_DWORD *)(SkillIconComponent[7].fields.m_CachedPtr + 4) + mHeight;
      v48 = (float)v47;
      max_length = SkillBase->max_length;
      newTb->fields.y = newTb->fields.y - v48;
      if ( (int)v26 >= max_length )
        return;
    }
    v39 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v40 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v37);
    *(_QWORD *)&v73.fields.currentCryptoKey = v39;
    *(_QWORD *)&v73.fields.fakeValue = v40;
    SkillIconComponent = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                       v73,
                                                       0);
    if ( !item->fields.userSvtEntity )
      goto LABEL_81;
    v41 = (int)SkillIconComponent;
    SkillIconComponent = (UnityEngine_GameObject_o *)UserServantEntity__getRarity(item->fields.userSvtEntity, 0);
LABEL_46:
    skillViewCounts = this->fields.skillViewCounts;
    if ( !skillViewCounts )
      goto LABEL_81;
    if ( LODWORD(skillViewCounts->max_length) <= indexa )
LABEL_82:
      sub_21FFED4(SkillIconComponent);
    v53 = (int)SkillIconComponent;
    skillViewCounts->m_Items[v72] = v26 + 1;
    goto LABEL_49;
  }
}