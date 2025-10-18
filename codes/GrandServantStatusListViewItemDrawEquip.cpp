void GrandServantStatusListViewItemDrawEquip___cctor(const MethodInfo *method)
{
  if ( (byte_4C3E286 & 1) == 0 )
  {
    sub_1C37058(&GrandServantStatusListViewItemDrawEquip_TypeInfo);
    byte_4C3E286 = 1;
  }
  *GrandServantStatusListViewItemDrawEquip_TypeInfo->static_fields = (struct GrandServantStatusListViewItemDrawEquip_StaticFields)0x2800000012LL;
}


void GrandServantStatusListViewItemDrawEquip___ctor(
        GrandServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct SkillInfoObject_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct System_Int32_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UnityEngine_Vector3_array *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UnityEngine_Vector3_array *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct UnityEngine_Vector3_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct UnityEngine_Vector3_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Int32_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4C3E285 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&SkillInfoObject___TypeInfo);
    sub_1C37058(&UnityEngine_Vector3___TypeInfo);
    byte_4C3E285 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct SkillInfoObject_array *)sub_1C37100(
                                         SkillInfoObject___TypeInfo,
                                         (unsigned int)v3->static_fields->GrandSvtEquipMax);
  this->fields.skillInfoObjectList = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.skillInfoObjectList, (int32_t)v4, v5, v6);
  v7 = (struct System_Int32_array *)sub_1C37100(int___TypeInfo, 3);
  this->fields.skillPitches = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.skillPitches, (int32_t)v7, v8, v9);
  v10 = (struct UnityEngine_Vector3_array *)sub_1C37100(UnityEngine_Vector3___TypeInfo, 3);
  this->fields.baseSizes = v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseSizes, (int32_t)v10, v11, v12);
  v13 = (struct UnityEngine_Vector3_array *)sub_1C37100(UnityEngine_Vector3___TypeInfo, 3);
  this->fields.titleBasePositions = v13;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.titleBasePositions, (int32_t)v13, v14, v15);
  v16 = (struct UnityEngine_Vector3_array *)sub_1C37100(UnityEngine_Vector3___TypeInfo, 3);
  this->fields.skillBasePositions = v16;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.skillBasePositions, (int32_t)v16, v17, v18);
  v19 = (struct UnityEngine_Vector3_array *)sub_1C37100(UnityEngine_Vector3___TypeInfo, 3);
  this->fields.baseSpriteSizes = v19;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseSpriteSizes, (int32_t)v19, v20, v21);
  this->fields.ColorInvalid = (struct UnityEngine_Color_o)xmmword_C0F670;
  this->fields.ColorCostZero = UnityEngine_Color__HSVToRGB_71188328(0.0, 0.0, 0.5, 1, 0);
  this->fields.ColorCost = UnityEngine_Color__HSVToRGB_71188328(0.0, 0.0, 1.0, 1, 0);
  v22 = (struct System_Int32_array *)sub_1C37100(int___TypeInfo, 3);
  this->fields.skillViewCounts = v22;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.skillViewCounts, (int32_t)v22, v23, v24);
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0);
}


void GrandServantStatusListViewItemDrawEquip__Awake(
        GrandServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct UISprite_array *titleSprites; // x8
  GrandServantStatusListViewItemDrawEquip_o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x22
  GrandServantStatusListViewItemDrawEquip_o *v7; // x21
  struct System_Int32_array *skillPitches; // x25
  float y; // s8
  int v10; // w8
  struct System_Int32_array *v11; // x8
  struct UISprite_o *baseSprite; // x9
  struct UnityEngine_Vector3_array *baseSizes; // x10
  float *v14; // x10
  int v15; // w25
  float v16; // s1
  struct UISprite_array *v17; // x8
  struct UnityEngine_Vector3_array *titleBasePositions; // x26
  struct UnityEngine_Vector3_array *v19; // x8
  float *v20; // x8
  int v21; // w9
  float v22; // s8
  struct UnityEngine_Vector3_array *skillBasePositions; // x21
  struct UnityEngine_Vector3_array *v24; // x8
  float *v25; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  titleSprites = this->fields.titleSprites;
  if ( !titleSprites )
LABEL_40:
    sub_1C372B4(this);
  v4 = this;
  v5 = 0;
  v6 = 40;
  while ( (int)v5 < SLODWORD(titleSprites->max_length) )
  {
    this = (GrandServantStatusListViewItemDrawEquip_o *)GrandServantStatusListViewItemDrawEquip__GetSkillBase(
                                                          v4,
                                                          v5,
                                                          v2);
    if ( !this )
      goto LABEL_40;
    v7 = this;
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
      if ( LODWORD(v7->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_42;
      this = (GrandServantStatusListViewItemDrawEquip_o *)v7->fields.baseButton;
      if ( !this )
        goto LABEL_40;
      y = localPosition.fields.y;
      this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0);
      if ( !this )
        goto LABEL_40;
      v27 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      if ( !skillPitches )
        goto LABEL_40;
      if ( (unsigned int)v5 >= LODWORD(skillPitches->max_length) )
        goto LABEL_42;
      v10 = (int)(float)(y - v27.fields.y);
      if ( (float)(y - v27.fields.y) == INFINITY )
        v10 = 0x80000000;
      skillPitches->m_Items[(int)v5] = v10;
    }
    v11 = v4->fields.skillPitches;
    if ( !v11 )
      goto LABEL_40;
    if ( (unsigned int)v5 >= LODWORD(v11->max_length) )
LABEL_42:
      sub_1C372BC(this);
    baseSprite = v4->fields.baseSprite;
    if ( baseSprite )
    {
      baseSizes = v4->fields.baseSizes;
      if ( baseSizes )
      {
        if ( (unsigned int)v5 >= LODWORD(baseSizes->max_length) )
          goto LABEL_42;
        v14 = (float *)((char *)baseSizes + v6);
        v15 = v11->m_Items[v5] * LODWORD(v7->fields.m_CancellationTokenSource);
        v16 = (float)(baseSprite->fields.mHeight - v15);
        *(v14 - 2) = (float)baseSprite->fields.mWidth;
        *(v14 - 1) = v16;
        *v14 = 0.0;
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
              v28 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
              if ( titleBasePositions )
              {
                if ( (unsigned int)v5 >= LODWORD(titleBasePositions->max_length) )
                  goto LABEL_42;
                *(UnityEngine_Vector3_o *)((char *)titleBasePositions + v6 - 8) = v28;
                v19 = v4->fields.titleBasePositions;
                if ( v19 )
                {
                  if ( (unsigned int)v5 >= LODWORD(v19->max_length) )
                    goto LABEL_42;
                  v20 = (float *)((char *)v19 + v6);
                  v21 = v15 >= 0 ? v15 : v15 + 1;
                  v22 = (float)(v21 >> 1);
                  *(v20 - 1) = *(v20 - 1) - v22;
                  if ( !LODWORD(v7->fields.m_CancellationTokenSource) )
                    goto LABEL_42;
                  this = *(GrandServantStatusListViewItemDrawEquip_o **)&v7->fields.dispMode;
                  if ( this )
                  {
                    skillBasePositions = v4->fields.skillBasePositions;
                    this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                                          (UnityEngine_GameObject_o *)this,
                                                                          0);
                    if ( this )
                    {
                      v29 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
                      if ( skillBasePositions )
                      {
                        if ( (unsigned int)v5 >= LODWORD(skillBasePositions->max_length) )
                          goto LABEL_42;
                        *(UnityEngine_Vector3_o *)((char *)skillBasePositions + v6 - 8) = v29;
                        v24 = v4->fields.skillBasePositions;
                        if ( v24 )
                        {
                          if ( (unsigned int)v5 >= LODWORD(v24->max_length) )
                            goto LABEL_42;
                          v25 = (float *)((char *)v24 + v6);
                          ++v5;
                          v6 += 12;
                          *(v25 - 1) = *(v25 - 1) - v22;
                          titleSprites = v4->fields.titleSprites;
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
    sub_1C372BC(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C372B4(this);
  return v4->fields.changeSkillBase;
}


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
    sub_1C372BC(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C372B4(this);
  return v4->fields.changeSkillExplanationLabel;
}


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
    sub_1C372BC(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C372B4(this);
  return v4->fields.changeSkillIcon;
}


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
    sub_1C372BC(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C372B4(this);
  return v4->fields.changeSkillTitleRangeLabel;
}


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
    sub_1C372BC(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C372B4(this);
  return v4->fields.changeSkillTypeLabel;
}


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
    sub_1C372BC(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C372B4(this);
  return v4->fields.equipSkillExplanationLabelList;
}


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
    sub_1C372BC(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C372B4(this);
  return v4->fields.equipSkillMask;
}


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
    sub_1C372BC(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C372B4(this);
  return v4->fields.equipSkillMaskLabel;
}


int32_t GrandServantStatusListViewItemDrawEquip__GetKind(
        GrandServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  return 20;
}


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

  if ( (byte_4C3E280 & 1) == 0 )
  {
    this = (GrandServantStatusListViewItemDrawEquip_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3E280 = 1;
  }
  if ( index == 2 )
  {
    if ( info )
    {
      equipTarget3 = info->fields.equipTarget3;
      if ( equipTarget3 )
        goto LABEL_8;
      return 0;
    }
LABEL_17:
    sub_1C372B4(this);
  }
  if ( index == 1 )
  {
    if ( info )
    {
      equipTarget3 = info->fields.equipTarget2;
      if ( equipTarget3 )
        goto LABEL_8;
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
LABEL_8:
  v8 = *(_QWORD *)&equipTarget3->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&equipTarget3->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v10, 0);
}


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
    sub_1C372BC(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C372B4(this);
  return v4->fields.equipSkillBaseList;
}


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
    sub_1C372BC(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C372B4(this);
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
  unsigned __int64 v8; // x9
  unsigned __int64 max_length_low; // x11
  SkillInfo_o *v10; // x11

  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillInfoList, 0);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( equipSkillIcon )
    {
      LODWORD(IsNullOrEmpty) = 0;
      if ( (int)equipSkillIcon->max_length < 1 )
        return IsNullOrEmpty;
      IsNullOrEmpty = 0;
      v8 = 0;
      while ( skillInfoList )
      {
        max_length_low = LODWORD(skillInfoList->max_length);
        if ( (__int64)v8 < (int)max_length_low )
        {
          if ( v8 >= max_length_low )
            sub_1C372BC(IsNullOrEmpty);
          v10 = skillInfoList->m_Items[v8];
          if ( v10 )
          {
            if ( v10->fields.id >= 1 )
              IsNullOrEmpty = (unsigned int)(v8 + 1);
            else
              IsNullOrEmpty = (unsigned int)IsNullOrEmpty;
          }
        }
        if ( (unsigned int)equipSkillIcon->max_length == ++v8 )
          return IsNullOrEmpty;
      }
    }
    sub_1C372B4(IsNullOrEmpty);
  }
  LODWORD(IsNullOrEmpty) = 0;
  return IsNullOrEmpty;
}


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
    sub_1C372BC(this);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C372B4(this);
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
  UILabel_array *EquipSkillExplanationLabelList; // x26
  UnityEngine_GameObject_o *Master_object; // x0
  int v18; // w22
  unsigned __int64 v19; // x20
  unsigned __int64 max_length_low; // x8
  SkillInfo_o *v21; // x8
  GrandServantStatusListViewItemDrawEquip_c *v22; // x0
  System_String_o *explanation; // x27
  UILabel_o *v24; // x19
  const MethodInfo *v25; // x2
  UILabel_o *v26; // x8
  int v27; // w27
  UnityEngine_Object_o *v28; // x19
  const MethodInfo *v29; // x2
  int mHeight; // w8
  int v31; // w9
  int v32; // w28
  UnityEngine_Transform_o *transform; // x0
  UILabel_o *v34; // x28
  const MethodInfo *v35; // x2
  UnityEngine_Object_o *v36; // x19
  const MethodInfo *v37; // x2
  UnityEngine_Object_o *EquipSkillMask; // x19
  const MethodInfo *v39; // x2
  UnityEngine_Object_o *EquipSkillMaskLabel; // x29
  int32_t v41; // w22
  UnityEngine_Object_o *v42; // x19
  System_String_o **v43; // x8
  System_String_o *v44; // x19
  int v45; // w8
  int v46; // w19
  UnityEngine_Transform_o *v47; // x0
  float v48; // s0
  GrandServantStatusListViewItemDrawEquip_c *v49; // x0
  struct System_Int32_array *skillPitches; // x8
  char *v51; // x8
  _DWORD *v52; // x8
  int v53; // w10
  int v54; // t1
  int32_t v55; // w9
  il2cpp_array_size_t max_length; // x9
  SkillInfo_o *v57; // x9
  System_String_o *text; // [xsp+10h] [xbp-A0h]
  int32_t *v60; // [xsp+18h] [xbp-98h]
  int v61; // [xsp+24h] [xbp-8Ch]
  UnityEngine_Object_o *v62; // [xsp+28h] [xbp-88h]
  SkillIconComponent_array *v63; // [xsp+30h] [xbp-80h]
  UILabel_o **m_Items; // [xsp+48h] [xbp-68h]

  if ( (byte_4C3E283 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&GrandServantStatusListViewItemDrawEquip_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_6989/*"GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/);
    sub_1C37058(&StringLiteral_6436/*"FOLLOWER_GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/);
    sub_1C37058(&StringLiteral_6990/*"GRAND_BOND_EQUIP_SKILL_INFO_ANOTHER_SKILL_HEADER"*/);
    byte_4C3E283 = 1;
  }
  *newRange = range;
  EquipSkillExplanationLabelList = GrandServantStatusListViewItemDrawEquip__GetEquipSkillExplanationLabelList(
                                     this,
                                     index,
                                     (const MethodInfo *)skillInfoList);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !equipSkillIcon )
LABEL_113:
    sub_1C372B4(Master_object);
  if ( SLODWORD(equipSkillIcon->max_length) >= 1 )
  {
    v18 = 0;
    v19 = 0;
    v63 = equipSkillIcon;
    m_Items = EquipSkillExplanationLabelList->m_Items;
    v60 = newRange;
    while ( 1 )
    {
      if ( skillInfoList )
      {
        max_length_low = LODWORD(skillInfoList->max_length);
        if ( (__int64)v19 < (int)max_length_low )
        {
          if ( v19 >= max_length_low )
            goto LABEL_114;
          v21 = skillInfoList->m_Items[v19];
          if ( v21 )
          {
            if ( v21->fields.id >= 1 )
            {
              if ( !EquipSkillExplanationLabelList )
                goto LABEL_113;
              if ( v19 >= LODWORD(EquipSkillExplanationLabelList->max_length) )
                goto LABEL_114;
              v22 = GrandServantStatusListViewItemDrawEquip_TypeInfo;
              explanation = v21->fields.explanation;
              v24 = m_Items[v19];
              if ( !GrandServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(GrandServantStatusListViewItemDrawEquip_TypeInfo);
                v22 = GrandServantStatusListViewItemDrawEquip_TypeInfo;
              }
              Master_object = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                            v24,
                                                            explanation,
                                                            v22->static_fields->DetailFontSize,
                                                            v22->static_fields->DetailFontSize,
                                                            0);
              if ( v19 >= LODWORD(EquipSkillExplanationLabelList->max_length) )
                goto LABEL_114;
              v26 = m_Items[v19];
              if ( !v26 )
                goto LABEL_113;
              v27 = GrandServantStatusListViewItemDrawEquip_TypeInfo->static_fields->AdjustHeight + v26->fields.mHeight;
              if ( !v19 )
              {
                v61 = v18;
                v28 = (UnityEngine_Object_o *)GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillBase(
                                                this,
                                                index,
                                                v25);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v28, 0, 0);
                if ( ((unsigned __int8)Master_object & 1) != 0 )
                {
                  if ( !v28 )
                    goto LABEL_113;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v28, isChangeSkill, 0);
                  if ( isChangeSkill )
                  {
                    if ( !LODWORD(EquipSkillExplanationLabelList->max_length) )
                      goto LABEL_114;
                    if ( !*m_Items )
                      goto LABEL_113;
                    mHeight = (*m_Items)->fields.mHeight;
                    if ( mHeight >= 71 )
                      v31 = -76;
                    else
                      v31 = -64;
                    v32 = v31 - mHeight;
                    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v28, 0);
                    TransformHelper__SetLocalPositionY(transform, (float)v32, 0);
                  }
                }
                v34 = GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillExplanationLabel(this, index, v29);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                              (UnityEngine_Object_o *)v34,
                                                              0,
                                                              0);
                if ( ((unsigned __int8)Master_object & 1) != 0 )
                {
                  if ( !v34 )
                    goto LABEL_113;
                  Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v34, 0);
                  if ( !Master_object )
                    goto LABEL_113;
                  UnityEngine_GameObject__SetActive(Master_object, isChangeSkill, 0);
                }
                v36 = (UnityEngine_Object_o *)GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillTypeLabel(
                                                this,
                                                index,
                                                v35);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v36, 0, 0);
                if ( ((unsigned __int8)Master_object & 1) != 0 )
                {
                  if ( !v36 )
                    goto LABEL_113;
                  Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v36, 0);
                  if ( !Master_object )
                    goto LABEL_113;
                  UnityEngine_GameObject__SetActive(Master_object, isChangeSkill, 0);
                }
                v62 = v36;
                EquipSkillMask = (UnityEngine_Object_o *)GrandServantStatusListViewItemDrawEquip__GetEquipSkillMask(
                                                           this,
                                                           index,
                                                           v37);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                                                                v39);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                    goto LABEL_114;
                  if ( !*m_Items )
                    goto LABEL_113;
                  v41 = (*m_Items)->fields.mHeight;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(EquipSkillMask, 0, 0);
                  if ( ((unsigned __int8)Master_object & 1) != 0 )
                  {
                    if ( !LODWORD(EquipSkillExplanationLabelList->max_length) )
                      goto LABEL_114;
                    if ( !*m_Items )
                      goto LABEL_113;
                    if ( (*m_Items)->fields.mHeight >= 71 )
                    {
                      if ( !EquipSkillMask )
                        goto LABEL_113;
                      UIWidget__set_height((UIWidget_o *)EquipSkillMask, v41 + 38, 0);
                    }
                  }
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  v42 = v62;
                  if ( UnityEngine_Object__op_Inequality(EquipSkillMaskLabel, 0, 0) )
                  {
                    v43 = (System_String_o **)&StringLiteral_6989/*"GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/;
                    if ( !isMine )
                      v43 = (System_String_o **)&StringLiteral_6436/*"FOLLOWER_GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/;
                    v44 = *v43;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    Master_object = (UnityEngine_GameObject_o *)LocalizationManager__Get(v44, 0);
                    if ( !EquipSkillMaskLabel )
                      goto LABEL_113;
                    UILabel__set_text((UILabel_o *)EquipSkillMaskLabel, (System_String_o *)Master_object, 0);
                    v42 = v62;
                    if ( !LODWORD(EquipSkillExplanationLabelList->max_length) )
                      goto LABEL_114;
                    if ( !*m_Items )
                      goto LABEL_113;
                    if ( (*m_Items)->fields.mHeight >= 71 )
                    {
                      v45 = -38 - v41;
                      if ( -38 - v41 < 0 )
                        v45 = -37 - v41;
                      v46 = v45 >> 1;
                      v47 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)EquipSkillMaskLabel, 0);
                      v48 = (float)v46;
                      v42 = v62;
                      TransformHelper__SetLocalPositionY(v47, v48, 0);
                    }
                  }
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  newRange = v60;
                  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v34, 0, 0) )
                  {
                    v49 = GrandServantStatusListViewItemDrawEquip_TypeInfo;
                    if ( !GrandServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(GrandServantStatusListViewItemDrawEquip_TypeInfo);
                      v49 = GrandServantStatusListViewItemDrawEquip_TypeInfo;
                    }
                    Master_object = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                                  v34,
                                                                  text,
                                                                  v49->static_fields->DetailFontSize,
                                                                  v49->static_fields->DetailFontSize,
                                                                  0);
                    v42 = v62;
                    if ( !v34 )
                      goto LABEL_113;
                    if ( !LODWORD(EquipSkillExplanationLabelList->max_length) )
                      goto LABEL_114;
                    if ( !*m_Items )
                      goto LABEL_113;
                    if ( (*m_Items)->fields.mHeight >= 71 )
                      v27 += v34->fields.mHeight + 62;
                    else
                      v27 += v34->fields.mHeight + 50;
                  }
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v42, 0, 0);
                  v18 = v61;
                  if ( ((unsigned __int8)Master_object & 1) != 0 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    Master_object = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_6990/*"GRAND_BOND_EQUIP_SKILL_INFO_ANOTHER_SKILL_HEADER"*/,
                                                                  0);
                    if ( !v42 )
                      goto LABEL_113;
                    UILabel__set_text((UILabel_o *)v42, (System_String_o *)Master_object, 0);
                  }
                }
                else
                {
                  newRange = v60;
                }
              }
              skillPitches = this->fields.skillPitches;
              if ( !skillPitches )
                goto LABEL_113;
              if ( LODWORD(skillPitches->max_length) <= index )
LABEL_114:
                sub_1C372BC(Master_object);
              v51 = (char *)skillPitches + 4 * index;
              v54 = *((_DWORD *)v51 + 8);
              v52 = v51 + 32;
              v53 = v54;
              v55 = *newRange;
              if ( v27 >= v54 )
              {
                *newRange = v55 + v27;
                max_length = skillInfoList->max_length;
                if ( v19 == (_DWORD)max_length - 1 )
                  goto LABEL_107;
                if ( v19 + 1 >= (unsigned int)max_length )
                  goto LABEL_114;
                v57 = skillInfoList->m_Items[v19 + 1];
                if ( !v57 || v57->fields.id <= 0 )
LABEL_107:
                  v18 |= v27 - *v52 > 10;
              }
              else
              {
                *newRange = v55 + v53;
              }
              equipSkillIcon = v63;
            }
          }
        }
      }
      if ( (__int64)++v19 >= SLODWORD(equipSkillIcon->max_length) )
        return v18 & 1;
    }
  }
  LOBYTE(v18) = 0;
  return v18 & 1;
}


void GrandServantStatusListViewItemDrawEquip__SetEquipExpInfo(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  GrandServantStatusListViewItemDrawEquip_o *v6; // x20
  struct UnityEngine_GameObject_array *expBases; // x8
  UnityEngine_GameObject_o *v8; // x8
  struct UnityEngine_GameObject_array *lateExpBases; // x8
  struct UILabel_array *lateExpLabels; // x8
  UILabel_o *v11; // x21
  int32_t v12; // w22
  struct UISlider_array *expBars; // x8
  float barExp; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-38h] BYREF

  v6 = this;
  if ( (byte_4C3E282 & 1) == 0 )
  {
    this = (GrandServantStatusListViewItemDrawEquip_o *)sub_1C37058(&LocalizationManager_TypeInfo);
    byte_4C3E282 = 1;
  }
  *(_QWORD *)lateExp = 0;
  barExp = 0.0;
  if ( !item )
    goto LABEL_22;
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipExpInfoByIndex(
                                                        item,
                                                        index,
                                                        &lateExp[1],
                                                        lateExp,
                                                        &barExp,
                                                        0);
  expBases = v6->fields.expBases;
  if ( !expBases )
    goto LABEL_22;
  if ( LODWORD(expBases->max_length) <= index )
LABEL_23:
    sub_1C372BC(this);
  v8 = expBases->m_Items[index];
  if ( !v8 )
    goto LABEL_22;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive(v8, 1, 0);
    lateExpBases = v6->fields.lateExpBases;
    if ( !lateExpBases )
      goto LABEL_22;
    if ( LODWORD(lateExpBases->max_length) > index )
    {
      this = (GrandServantStatusListViewItemDrawEquip_o *)lateExpBases->m_Items[index];
      if ( !this )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, lateExp[0] > 0, 0);
      lateExpLabels = v6->fields.lateExpLabels;
      if ( !lateExpLabels )
        goto LABEL_22;
      if ( LODWORD(lateExpLabels->max_length) > index )
      {
        v11 = lateExpLabels->m_Items[index];
        v12 = lateExp[0];
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (GrandServantStatusListViewItemDrawEquip_o *)LocalizationManager__GetNumberFormat(v12, 0);
        if ( !v11 )
          goto LABEL_22;
        UILabel__set_text(v11, (System_String_o *)this, 0);
        expBars = v6->fields.expBars;
        if ( !expBars )
          goto LABEL_22;
        if ( LODWORD(expBars->max_length) > index )
        {
          this = (GrandServantStatusListViewItemDrawEquip_o *)expBars->m_Items[index];
          if ( this )
          {
            UIProgressBar__set_value((UIProgressBar_o *)this, barExp, 0);
            return;
          }
LABEL_22:
          sub_1C372B4(this);
        }
      }
    }
    goto LABEL_23;
  }
  UnityEngine_GameObject__SetActive(v8, 0, 0);
}


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
  if ( (byte_4C3E27F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20409/*"img_frames_nodata6"*/);
    this = (GrandServantStatusListViewItemDrawEquip_o *)sub_1C37058(&StringLiteral_20408/*"img_frames_nodata5"*/);
    byte_4C3E27F = 1;
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
          ServantFaceIconComponent__Set_41005120(v8, (int64_t)this, 0, 0, 0);
          return;
        }
LABEL_50:
        sub_1C372B4(this);
      }
LABEL_51:
      sub_1C372BC(this);
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
          v18 = v6->fields.equipIcons;
          if ( !v18 )
            goto LABEL_50;
          if ( LODWORD(v18->max_length) <= 2 )
            goto LABEL_51;
          v19 = item->fields.servantLeaderInfo;
          if ( !v19 )
            goto LABEL_50;
          this = (GrandServantStatusListViewItemDrawEquip_o *)v18->m_Items[2];
          if ( !this )
            goto LABEL_50;
          equipTarget3 = v19->fields.equipTarget3;
        }
        else if ( index == 1 )
        {
          v20 = v6->fields.equipIcons;
          if ( !v20 )
            goto LABEL_50;
          if ( LODWORD(v20->max_length) <= 1 )
            goto LABEL_51;
          v21 = item->fields.servantLeaderInfo;
          if ( !v21 )
            goto LABEL_50;
          this = (GrandServantStatusListViewItemDrawEquip_o *)v20->m_Items[1];
          if ( !this )
            goto LABEL_50;
          equipTarget3 = v21->fields.equipTarget2;
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
        ServantFaceIconComponent__Set_41011416((ServantFaceIconComponent_o *)this, equipTarget3, 0, 0, 0);
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
      v15 = v6->fields.equipIcons;
      if ( !v15 )
        goto LABEL_50;
      if ( LODWORD(v15->max_length) <= 2 )
        goto LABEL_51;
      this = (GrandServantStatusListViewItemDrawEquip_o *)v15->m_Items[2];
      if ( !this )
        goto LABEL_50;
      v16 = &StringLiteral_20408/*"img_frames_nodata5"*/;
LABEL_38:
      ServantFaceIconComponent__NoMount_40999864((ServantFaceIconComponent_o *)this, (System_String_o *)*v16, 1, 0);
      return;
    case 1:
      v17 = v6->fields.equipIcons;
      if ( !v17 )
        goto LABEL_50;
      if ( LODWORD(v17->max_length) <= 1 )
        goto LABEL_51;
      this = (GrandServantStatusListViewItemDrawEquip_o *)v17->m_Items[1];
      if ( !this )
        goto LABEL_50;
      v16 = &StringLiteral_20409/*"img_frames_nodata6"*/;
      goto LABEL_38;
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


void GrandServantStatusListViewItemDrawEquip__SetEquipInfoLabel(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  GrandServantStatusListViewItemDrawEquip_o *v6; // x20
  struct UIRangeLabel_array *nameRangeLabels; // x8
  UIRangeLabel_o *v8; // x22
  GrandServantStatusListViewItemDrawEquip_o *v9; // x1
  struct UIExtrusionLabel_array *levelLabels; // x8
  UIExtrusionLabel_o *v11; // x22
  struct UILabel_array *maxLevelLabels; // x8
  UILabel_o *v13; // x22
  struct UIIconLabel_array *attackIconLabels; // x8
  UIIconLabel_o *v15; // x22
  struct UIIconLabel_array *hpIconLabels; // x8
  UIIconLabel_o *v17; // x22
  struct UILabel_array *v18; // x8
  UILabel_o *v19; // x22
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  struct UILabel_array *v28; // x8
  struct UnityEngine_GameObject_array *v29; // x8
  UnityEngine_Object_o *v30; // x22
  struct UnityEngine_GameObject_array *v31; // x8
  struct UILabel_array *v32; // x8
  UnityEngine_Object_o *v33; // x22
  struct UILabel_array *v34; // x8
  UnityEngine_GameObject_o *gameObject; // x22
  struct UILabel_array *v36; // x8
  UnityEngine_Object_o *v37; // x22
  struct UILabel_array *v38; // x8
  GrandServantStatusListViewItemDrawEquip_o *v39; // x20
  bool v40; // w1
  struct UILabel_array *costLabels; // x8
  UILabel_o *v42; // x22
  struct UILabel_array *v43; // x8
  struct UnityEngine_GameObject_array *zeroCostObjects; // x8
  UnityEngine_Object_o *v45; // x21
  struct UnityEngine_GameObject_array *v46; // x8
  struct UILabel_array *lineLabels; // x8
  UnityEngine_Object_o *v48; // x21
  struct UILabel_array *v49; // x8
  struct UILabel_array *line2Labels; // x8
  UnityEngine_Object_o *v51; // x21
  struct UILabel_array *v52; // x8
  int32_t EquipCostByIndex; // [xsp+28h] [xbp-38h] BYREF
  int32_t EquipLevelByIndex; // [xsp+2Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4C3E281 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_25101/*"{0}"*/);
    sub_1C37058(&StringLiteral_113/*" "*/);
    this = (GrandServantStatusListViewItemDrawEquip_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3E281 = 1;
  }
  nameRangeLabels = v6->fields.nameRangeLabels;
  if ( !nameRangeLabels )
LABEL_97:
    sub_1C372B4(this);
  if ( LODWORD(nameRangeLabels->max_length) <= index )
    goto LABEL_98;
  if ( !item )
    goto LABEL_97;
  v8 = nameRangeLabels->m_Items[index];
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipServantByIndex(item, index, 0);
  if ( this )
  {
    this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipServantByIndex(
                                                          item,
                                                          index,
                                                          0);
    if ( !this )
      goto LABEL_97;
    this = (GrandServantStatusListViewItemDrawEquip_o *)ServantEntity__getName((ServantEntity_o *)this, -1, -1, 0, 0);
    v9 = this;
    if ( !v8 )
      goto LABEL_97;
  }
  else
  {
    v9 = (GrandServantStatusListViewItemDrawEquip_o *)StringLiteral_1/*""*/;
    if ( !v8 )
      goto LABEL_97;
  }
  UIRangeLabel__Set(v8, (System_String_o *)v9, 0, 1, 0, 0, 0);
  levelLabels = v6->fields.levelLabels;
  if ( !levelLabels )
    goto LABEL_97;
  if ( LODWORD(levelLabels->max_length) <= index )
    goto LABEL_98;
  v11 = levelLabels->m_Items[index];
  EquipLevelByIndex = ServantStatusListViewItem__GetEquipLevelByIndex(item, index, 0);
  this = (GrandServantStatusListViewItemDrawEquip_o *)System_Int32__ToString((int32_t)&EquipLevelByIndex, 0);
  if ( !v11 )
    goto LABEL_97;
  UIExtrusionLabel__set_text(v11, (System_String_o *)this, 0);
  maxLevelLabels = v6->fields.maxLevelLabels;
  if ( !maxLevelLabels )
    goto LABEL_97;
  if ( LODWORD(maxLevelLabels->max_length) <= index )
    goto LABEL_98;
  v13 = maxLevelLabels->m_Items[index];
  EquipLevelByIndex = ServantStatusListViewItem__GetEquipMaxLevelByIndex(item, index, 0);
  this = (GrandServantStatusListViewItemDrawEquip_o *)System_Int32__ToString((int32_t)&EquipLevelByIndex, 0);
  if ( !v13 )
    goto LABEL_97;
  UILabel__set_text(v13, (System_String_o *)this, 0);
  attackIconLabels = v6->fields.attackIconLabels;
  if ( !attackIconLabels )
    goto LABEL_97;
  if ( LODWORD(attackIconLabels->max_length) <= index )
    goto LABEL_98;
  v15 = attackIconLabels->m_Items[index];
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipAtkByIndex(item, index, 0);
  if ( !v15 )
    goto LABEL_97;
  UIIconLabel__Set_41110308(v15, 5, (int32_t)this, 0, 0, 0, 0, 0, 0, 0, 0);
  hpIconLabels = v6->fields.hpIconLabels;
  if ( !hpIconLabels )
    goto LABEL_97;
  if ( LODWORD(hpIconLabels->max_length) <= index )
    goto LABEL_98;
  v17 = hpIconLabels->m_Items[index];
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipHpByIndex(item, index, 0);
  if ( !v17 )
    goto LABEL_97;
  UIIconLabel__Set_41110308(v17, 3, (int32_t)this, 0, 0, 0, 0, 0, 0, 0, 0);
  if ( !index
    || (this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipCostByIndex(
                                                              item,
                                                              index,
                                                              0),
        !(_DWORD)this) )
  {
    costLabels = v6->fields.costLabels;
    if ( !costLabels )
      goto LABEL_97;
    if ( LODWORD(costLabels->max_length) > index )
    {
      v42 = costLabels->m_Items[index];
      EquipLevelByIndex = ServantStatusListViewItem__GetEquipCostByIndex(item, index, 0);
      this = (GrandServantStatusListViewItemDrawEquip_o *)System_Int32__ToString((int32_t)&EquipLevelByIndex, 0);
      if ( !v42 )
        goto LABEL_97;
      UILabel__set_text(v42, (System_String_o *)this, 0);
      v43 = v6->fields.costLabels;
      if ( !v43 )
        goto LABEL_97;
      if ( LODWORD(v43->max_length) > index )
      {
        this = (GrandServantStatusListViewItemDrawEquip_o *)v43->m_Items[index];
        if ( !this )
          goto LABEL_97;
        UIWidget__set_color((UIWidget_o *)this, v6->fields.ColorCost, 0);
        zeroCostObjects = v6->fields.zeroCostObjects;
        if ( !zeroCostObjects )
          goto LABEL_97;
        if ( LODWORD(zeroCostObjects->max_length) > index )
        {
          v45 = (UnityEngine_Object_o *)zeroCostObjects->m_Items[index];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(v45, 0, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v46 = v6->fields.zeroCostObjects;
            if ( !v46 )
              goto LABEL_97;
            if ( LODWORD(v46->max_length) <= index )
              goto LABEL_98;
            this = (GrandServantStatusListViewItemDrawEquip_o *)v46->m_Items[index];
            if ( !this )
              goto LABEL_97;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          }
          lineLabels = v6->fields.lineLabels;
          if ( !lineLabels )
            goto LABEL_97;
          if ( LODWORD(lineLabels->max_length) > index )
          {
            v48 = (UnityEngine_Object_o *)lineLabels->m_Items[index];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(v48, 0, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v49 = v6->fields.lineLabels;
              if ( !v49 )
                goto LABEL_97;
              if ( LODWORD(v49->max_length) <= index )
                goto LABEL_98;
              this = (GrandServantStatusListViewItemDrawEquip_o *)v49->m_Items[index];
              if ( !this )
                goto LABEL_97;
              this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0);
              if ( !this )
                goto LABEL_97;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            }
            line2Labels = v6->fields.line2Labels;
            if ( !line2Labels )
              goto LABEL_97;
            if ( LODWORD(line2Labels->max_length) > index )
            {
              v51 = (UnityEngine_Object_o *)line2Labels->m_Items[index];
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(v51, 0, 0);
              if ( ((unsigned __int8)this & 1) == 0 )
                return;
              v52 = v6->fields.line2Labels;
              if ( !v52 )
                goto LABEL_97;
              if ( LODWORD(v52->max_length) > index )
              {
                this = (GrandServantStatusListViewItemDrawEquip_o *)v52->m_Items[index];
                if ( !this )
                  goto LABEL_97;
                this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0);
                if ( !this )
                  goto LABEL_97;
                v40 = 0;
                goto LABEL_95;
              }
            }
          }
        }
      }
    }
LABEL_98:
    sub_1C372BC(this);
  }
  v18 = v6->fields.costLabels;
  if ( !v18 )
    goto LABEL_97;
  if ( LODWORD(v18->max_length) <= index )
    goto LABEL_98;
  v19 = v18->m_Items[index];
  EquipCostByIndex = ServantStatusListViewItem__GetEquipCostByIndex(item, index, 0);
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &EquipCostByIndex, v20, v21, v22, v23, v24, v25);
  v27 = System_String__Format((System_String_o *)StringLiteral_25101/*"{0}"*/, v26, 0);
  this = (GrandServantStatusListViewItemDrawEquip_o *)System_String__Concat_63561656(
                                                        v27,
                                                        (System_String_o *)StringLiteral_113/*" "*/,
                                                        0);
  if ( !v19 )
    goto LABEL_97;
  UILabel__set_text(v19, (System_String_o *)this, 0);
  v28 = v6->fields.costLabels;
  if ( !v28 )
    goto LABEL_97;
  if ( LODWORD(v28->max_length) <= index )
    goto LABEL_98;
  this = (GrandServantStatusListViewItemDrawEquip_o *)v28->m_Items[index];
  if ( !this )
    goto LABEL_97;
  UIWidget__set_color((UIWidget_o *)this, v6->fields.ColorCostZero, 0);
  v29 = v6->fields.zeroCostObjects;
  if ( !v29 )
    goto LABEL_97;
  if ( LODWORD(v29->max_length) <= index )
    goto LABEL_98;
  v30 = (UnityEngine_Object_o *)v29->m_Items[index];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(v30, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v31 = v6->fields.zeroCostObjects;
    if ( !v31 )
      goto LABEL_97;
    if ( LODWORD(v31->max_length) <= index )
      goto LABEL_98;
    this = (GrandServantStatusListViewItemDrawEquip_o *)v31->m_Items[index];
    if ( !this )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  }
  v32 = v6->fields.lineLabels;
  if ( !v32 )
    goto LABEL_97;
  if ( LODWORD(v32->max_length) <= index )
    goto LABEL_98;
  v33 = (UnityEngine_Object_o *)v32->m_Items[index];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(v33, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v34 = v6->fields.lineLabels;
    if ( !v34 )
      goto LABEL_97;
    if ( LODWORD(v34->max_length) <= index )
      goto LABEL_98;
    this = (GrandServantStatusListViewItemDrawEquip_o *)v34->m_Items[index];
    if ( !this )
      goto LABEL_97;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipCostByIndex(item, index, 0);
    if ( !gameObject )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive(gameObject, (int)this < 10, 0);
  }
  v36 = v6->fields.line2Labels;
  if ( !v36 )
    goto LABEL_97;
  if ( LODWORD(v36->max_length) <= index )
    goto LABEL_98;
  v37 = (UnityEngine_Object_o *)v36->m_Items[index];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(v37, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v38 = v6->fields.line2Labels;
    if ( !v38 )
      goto LABEL_97;
    if ( LODWORD(v38->max_length) > index )
    {
      this = (GrandServantStatusListViewItemDrawEquip_o *)v38->m_Items[index];
      if ( !this )
        goto LABEL_97;
      v39 = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
      this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipCostByIndex(item, index, 0);
      if ( !v39 )
        goto LABEL_97;
      v40 = (int)this > 9;
      this = v39;
LABEL_95:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v40, 0);
      return;
    }
    goto LABEL_98;
  }
}


void GrandServantStatusListViewItemDrawEquip__SetEquipLimitCount(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  GrandServantStatusListViewItemDrawEquip_o *v5; // x21
  struct ServantStatusLimitCountGauge_array *limitCountGauges; // x8
  Il2CppClass **v8; // x8
  ServantStatusLimitCountGauge_o *v9; // x22
  GrandServantStatusListViewItemDrawEquip_o *v10; // x21
  int32_t explanationLabels; // w2
  int32_t v12; // w1
  ServantStatusLimitCountGauge_o *v13; // x0

  if ( !item )
    goto LABEL_10;
  v5 = this;
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipServantByIndex(item, index, 0);
  limitCountGauges = v5->fields.limitCountGauges;
  if ( !limitCountGauges )
    goto LABEL_10;
  if ( LODWORD(limitCountGauges->max_length) <= index )
    sub_1C372BC(this);
  v8 = &limitCountGauges->obj.klass + index;
  v9 = (ServantStatusLimitCountGauge_o *)v8[4];
  v10 = this;
  if ( !this )
  {
    if ( v9 )
    {
      v13 = (ServantStatusLimitCountGauge_o *)v8[4];
      v12 = 0;
      explanationLabels = 0;
      goto LABEL_9;
    }
LABEL_10:
    sub_1C372B4(this);
  }
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipLimitCountByIndex(
                                                        item,
                                                        index,
                                                        0);
  if ( !v9 )
    goto LABEL_10;
  explanationLabels = (int32_t)v10->fields.explanationLabels;
  v12 = (int)this;
  v13 = v9;
LABEL_9:
  ServantStatusLimitCountGauge__Set(v13, v12, explanationLabels, 0);
}


void GrandServantStatusListViewItemDrawEquip__SetItem(
        GrandServantStatusListViewItemDrawEquip_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UISprite_o *Master_object; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  struct UILabel_array *explanationLabels; // x8
  float z; // s1
  UILabel_o *v11; // x22
  const MethodInfo *v12; // x3
  int32_t v13; // w23
  struct UnityEngine_Vector3_array *baseSpriteSizes; // x24
  struct UnityEngine_Vector3_StaticFields *v15; // x8
  __int64 v16; // d0
  float v17; // s1
  char *v18; // x8
  struct System_Int32_array *skillViewCounts; // x8
  struct UISprite_array *line2Sprites; // x8
  UISprite_o *v21; // x24
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x2
  GrandServantStatusListViewItemDrawEquip_o *SkillIconComponent; // x25
  int32_t v27; // w1
  const MethodInfo *v28; // x4
  struct UISprite_array *lineSprites; // x8
  int v30; // w24
  UnityEngine_Object_o *v31; // x26
  struct UISprite_array *v32; // x8
  __int64 v33; // x24
  int32_t Value; // w26
  System_String_o *EffectExplanation; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_String_o *Name; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  bool v41; // w26
  SkillInfo_array *v42; // x27
  System_String_o *v43; // x28
  bool IsMine; // w0
  bool IsNeedAddAdjust; // w0
  const MethodInfo *v46; // x6
  struct UnityEngine_Vector3_array *baseSizes; // x8
  float *v48; // x8
  int32_t v49; // w27
  float v50; // s1
  float v51; // s0
  float y; // s3
  struct UnityEngine_Vector3_array *v53; // x8
  int32_t v54; // w1
  int32_t v55; // w25
  float *v56; // x8
  float v57; // s1
  struct UnityEngine_Vector3_array *titleBasePositions; // x8
  struct UISprite_array *titleSprites; // x9
  int v60; // w25
  float *v61; // x8
  float v62; // s8
  float v63; // s11
  float v64; // s9
  float v65; // s10
  const MethodInfo *v66; // x7
  struct UnityEngine_Vector3_array *skillBasePositions; // x8
  float *v68; // x8
  bool v69; // w1
  struct UICommonButton_array *equipButtons; // x8
  UnityEngine_Object_o *baseCollider; // x21
  struct UnityEngine_Vector3_array *v72; // x8
  float v73; // s1
  float v74; // s2
  float v75; // s0
  int v76; // w10
  int v77; // w9
  int v78; // w8
  const MethodInfo *v79; // x2
  const MethodInfo *v80; // [xsp+8h] [xbp-B8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v81; // [xsp+18h] [xbp-A8h]
  Il2CppObject *entity; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o newTb; // [xsp+28h] [xbp-98h] BYREF
  int32_t newRange; // [xsp+34h] [xbp-8Ch] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3E27D & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SkillInfo_TypeInfo);
    sub_1C37058(&StringLiteral_11917/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/);
    sub_1C37058(&StringLiteral_7001/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/);
    sub_1C37058(&StringLiteral_20424/*"img_line_04"*/);
    byte_4C3E27D = 1;
  }
  skillInfoList = 0;
  newTb.fields.z = 0.0;
  entity = 0;
  *(_QWORD *)&newTb.fields.x = 0;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0);
  if ( mode )
  {
    if ( !byte_4C3C921 )
    {
      Master_object = (UISprite_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    explanationLabels = this->fields.explanationLabels;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)&this->fields.baseColliderSizes.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    this->fields.baseColliderSizes.fields.z = z;
    if ( !explanationLabels )
      goto LABEL_95;
    if ( !LODWORD(explanationLabels->max_length) )
      goto LABEL_96;
    v11 = explanationLabels->m_Items[0];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11917/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, 0);
    if ( !v11 )
      goto LABEL_95;
    UILabel__set_text(v11, (System_String_o *)Master_object, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UISprite_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillMaster___);
    v81 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !item )
      goto LABEL_95;
    Master_object = (UISprite_o *)ServantStatusListViewItem__GetEquipListCount(item, 0);
    if ( (int)Master_object >= 1 )
    {
      v13 = 0;
      do
      {
        baseSpriteSizes = this->fields.baseSpriteSizes;
        if ( !byte_4C3C921 )
        {
          Master_object = (UISprite_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C921 = 1;
        }
        if ( !baseSpriteSizes )
          goto LABEL_95;
        if ( (unsigned int)v13 >= LODWORD(baseSpriteSizes->max_length) )
          goto LABEL_96;
        v15 = UnityEngine_Vector3_TypeInfo->static_fields;
        v16 = *(_QWORD *)&v15->zeroVector.fields.x;
        v17 = v15->zeroVector.fields.z;
        v18 = (char *)baseSpriteSizes + 12 * v13;
        *((_QWORD *)v18 + 4) = v16;
        *((float *)v18 + 10) = v17;
        skillViewCounts = this->fields.skillViewCounts;
        if ( !skillViewCounts )
          goto LABEL_95;
        if ( (unsigned int)v13 >= LODWORD(skillViewCounts->max_length) )
          goto LABEL_96;
        skillViewCounts->m_Items[v13] = 0;
        if ( v13 )
        {
          line2Sprites = this->fields.line2Sprites;
          if ( !line2Sprites )
            goto LABEL_95;
          if ( (unsigned int)v13 >= LODWORD(line2Sprites->max_length) )
            goto LABEL_96;
          v21 = line2Sprites->m_Items[v13];
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetDownloadCommonSprite(v21, (System_String_o *)StringLiteral_20424/*"img_line_04"*/, 0);
        }
        GrandServantStatusListViewItemDrawEquip__SetEquipIcon(this, v13, item, v12);
        GrandServantStatusListViewItemDrawEquip__SetEquipInfoLabel(this, v13, item, v22);
        GrandServantStatusListViewItemDrawEquip__SetEquipExpInfo(this, v13, item, v23);
        GrandServantStatusListViewItemDrawEquip__SetEquipLimitCount(this, v13, item, v24);
        ServantStatusListViewItem__GetEquipSkillInfoByIndex(item, v13, &skillInfoList, 0);
        SkillIconComponent = (GrandServantStatusListViewItemDrawEquip_o *)GrandServantStatusListViewItemDrawEquip__GetSkillIconComponent(
                                                                            this,
                                                                            v13,
                                                                            v25);
        Master_object = (UISprite_o *)GrandServantStatusListViewItemDrawEquip__GetSkillInfoListNum(
                                        SkillIconComponent,
                                        v27,
                                        skillInfoList,
                                        (SkillIconComponent_array *)SkillIconComponent,
                                        v28);
        lineSprites = this->fields.lineSprites;
        if ( !lineSprites )
          goto LABEL_95;
        if ( (unsigned int)v13 >= LODWORD(lineSprites->max_length) )
          goto LABEL_96;
        v30 = (int)Master_object;
        v31 = (UnityEngine_Object_o *)lineSprites->m_Items[v13];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = (UISprite_o *)UnityEngine_Object__op_Inequality(v31, 0, 0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          v32 = this->fields.lineSprites;
          if ( !v32 )
            goto LABEL_95;
          if ( (unsigned int)v13 >= LODWORD(v32->max_length) )
            goto LABEL_96;
          Master_object = v32->m_Items[v13];
          if ( !Master_object )
            goto LABEL_95;
          Master_object = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)Master_object,
                                          0);
          if ( !Master_object )
            goto LABEL_95;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v30 > 0, 0);
        }
        newRange = 0;
        v33 = sub_1C372A4(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v33, 0);
        if ( v13 != 1 )
          goto LABEL_46;
        Master_object = (UISprite_o *)ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill(item, 0);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          goto LABEL_46;
        Value = ConstantMaster__getValue((System_String_o *)StringLiteral_7001/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/, 0);
        Master_object = (UISprite_o *)v81;
        if ( !v81 )
          goto LABEL_95;
        Master_object = (UISprite_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        v81,
                                        &entity,
                                        Value,
                                        (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !v33 )
            goto LABEL_95;
          *(_DWORD *)(v33 + 16) = Value;
          Master_object = (UISprite_o *)entity;
          if ( !entity )
            goto LABEL_95;
          EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0);
          *(_QWORD *)(v33 + 40) = EffectExplanation;
          sub_1C36FFC((CGThumbnailListItem_o *)(v33 + 40), (int32_t)EffectExplanation, v36, v37);
          Master_object = (UISprite_o *)entity;
          if ( !entity )
            goto LABEL_95;
          Name = SkillEntity__getName((SkillEntity_o *)entity, 0);
          *(_QWORD *)(v33 + 32) = Name;
          sub_1C36FFC((CGThumbnailListItem_o *)(v33 + 32), (int32_t)Name, v39, v40);
          v41 = 1;
        }
        else
        {
LABEL_46:
          if ( !v33 )
            goto LABEL_95;
          v41 = 0;
        }
        v42 = skillInfoList;
        v43 = *(System_String_o **)(v33 + 40);
        IsMine = ServantStatusListViewItem__get_IsMine(item, 0);
        IsNeedAddAdjust = GrandServantStatusListViewItemDrawEquip__IsNeedAddAdjust(
                            this,
                            v13,
                            v42,
                            0,
                            (SkillIconComponent_array *)SkillIconComponent,
                            &newRange,
                            v41,
                            v43,
                            IsMine,
                            v80);
        GrandServantStatusListViewItemDrawEquip__SetReinforce(
          this,
          v13,
          item,
          IsNeedAddAdjust,
          newRange,
          &newRange,
          v46);
        baseSizes = this->fields.baseSizes;
        if ( !baseSizes )
          goto LABEL_95;
        if ( (unsigned int)v13 >= LODWORD(baseSizes->max_length) )
          goto LABEL_96;
        v48 = (float *)((char *)baseSizes + 12 * v13);
        v49 = newRange;
        v50 = v48[8];
        v51 = v48[9] + (float)newRange;
        y = this->fields.baseColliderSizes.fields.y;
        v53 = this->fields.baseSpriteSizes;
        if ( v50 == INFINITY )
          v54 = 0x80000000;
        else
          v54 = (int)v50;
        if ( v51 == INFINITY )
          v55 = 0x80000000;
        else
          v55 = (int)v51;
        this->fields.baseColliderSizes.fields.x = (float)v54;
        this->fields.baseColliderSizes.fields.y = y + (float)v55;
        if ( !v53 )
          goto LABEL_95;
        if ( (unsigned int)v13 >= LODWORD(v53->max_length) )
          goto LABEL_96;
        v56 = (float *)((char *)v53 + 12 * v13);
        v57 = v56[9] + (float)v55;
        v56[8] = (float)v54;
        v56[9] = v57;
        Master_object = this->fields.baseSprite;
        if ( !Master_object )
          goto LABEL_95;
        UIWidget__set_width((UIWidget_o *)Master_object, v54, 0);
        Master_object = this->fields.baseSprite;
        if ( !Master_object )
          goto LABEL_95;
        UIWidget__set_height((UIWidget_o *)Master_object, v55, 0);
        titleBasePositions = this->fields.titleBasePositions;
        if ( !titleBasePositions )
          goto LABEL_95;
        if ( (unsigned int)v13 >= LODWORD(titleBasePositions->max_length) )
          goto LABEL_96;
        titleSprites = this->fields.titleSprites;
        v60 = v49 >= 0 ? v49 : v49 + 1;
        if ( !titleSprites )
          goto LABEL_95;
        if ( (unsigned int)v13 >= LODWORD(titleSprites->max_length) )
          goto LABEL_96;
        Master_object = titleSprites->m_Items[v13];
        if ( !Master_object )
          goto LABEL_95;
        v61 = (float *)((char *)titleBasePositions + 12 * v13);
        v62 = v61[8];
        v63 = v61[9];
        v64 = v61[10];
        Master_object = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
        if ( !Master_object )
          goto LABEL_95;
        v65 = (float)(v60 >> 1);
        v86.fields.y = v63 + v65;
        v86.fields.x = v62;
        v86.fields.z = v64;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, v86, 0);
        skillBasePositions = this->fields.skillBasePositions;
        if ( !skillBasePositions )
          goto LABEL_95;
        if ( (unsigned int)v13 >= LODWORD(skillBasePositions->max_length) )
          goto LABEL_96;
        v68 = (float *)((char *)skillBasePositions + 12 * v13);
        v87.fields.z = v68[10];
        v87.fields.y = v68[9] + v65;
        newTb.fields.x = v68[8];
        v87.fields.x = newTb.fields.x;
        newTb.fields.y = v87.fields.y;
        newTb.fields.z = v87.fields.z;
        GrandServantStatusListViewItemDrawEquip__SetSkillInfo(
          this,
          v13,
          skillInfoList,
          item,
          v87,
          &newTb,
          v41,
          (SkillInfo_o *)v33,
          v66);
        if ( item->fields.isEquipChangeMode )
        {
          v69 = 1;
        }
        else
        {
          Master_object = (UISprite_o *)ServantStatusListViewItem__IsEquipByIndex(item, v13, 0);
          v69 = (unsigned __int8)Master_object & 1;
        }
        equipButtons = this->fields.equipButtons;
        if ( !equipButtons )
          goto LABEL_95;
        if ( (unsigned int)v13 >= LODWORD(equipButtons->max_length) )
          goto LABEL_96;
        Master_object = (UISprite_o *)equipButtons->m_Items[v13];
        if ( !Master_object )
          goto LABEL_95;
        UICommonButton__SetColliderEnable((UICommonButton_o *)Master_object, v69, 1, 0);
        ++v13;
        Master_object = (UISprite_o *)ServantStatusListViewItem__GetEquipListCount(item, 0);
      }
      while ( v13 < (int)Master_object );
    }
    baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (UISprite_o *)UnityEngine_Object__op_Inequality(baseCollider, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      Master_object = (UISprite_o *)this->fields.baseCollider;
      if ( !Master_object )
        goto LABEL_95;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Master_object, this->fields.baseColliderSizes, 0);
    }
    v72 = this->fields.baseSpriteSizes;
    if ( !v72 )
LABEL_95:
      sub_1C372B4(Master_object);
    if ( LODWORD(v72->max_length) <= 2 )
LABEL_96:
      sub_1C372BC(Master_object);
    Master_object = this->fields.baseSprite;
    if ( !Master_object )
      goto LABEL_95;
    v73 = v72->m_Items[1].fields.y;
    v74 = v72->m_Items[2].fields.y;
    v75 = v72->m_Items[0].fields.y;
    v76 = (int)v73;
    if ( v73 == INFINITY )
      v76 = 0x80000000;
    if ( v74 == INFINITY )
      v77 = 0x80000000;
    else
      v77 = (int)v74;
    v78 = (int)v75 - 7;
    if ( v75 == INFINITY )
      v78 = 2147483641;
    UIWidget__set_height((UIWidget_o *)Master_object, v78 + v76 + v77, 0);
    GrandServantStatusListViewItemDrawEquip__SetPosition(this, item, v79);
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
  float v35; // s9
  __int64 v36; // x29
  int v37; // w25
  GrandServantStatusListViewItemDrawEquip_o **v38; // x27
  float v39; // s10
  float v40; // s11
  const MethodInfo *v41; // x2
  float v42; // s14
  float v43; // s15
  float v44; // s8
  GrandServantStatusListViewItemDrawEquip_o *v45; // x23
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
  if ( (byte_4C3E27E & 1) == 0 )
  {
    this = (GrandServantStatusListViewItemDrawEquip_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E27E = 1;
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
  v52.fields.y = (float)((float)((float)(y * 0.5) + (float)(v9 * 0.5)) + (float)(v10 * 0.5)) + -4.0;
  v52.fields.x = x;
  v52.fields.z = z;
  v49 = v52.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v52, 0);
  v13 = v4->fields.titleSprites;
  if ( !v13 )
    goto LABEL_79;
  if ( LODWORD(v13->max_length) <= 1 )
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
  if ( LODWORD(v15->max_length) <= 1 )
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
  if ( LODWORD(v20->max_length) <= 1 )
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
    v35 = v32 + -330.0;
    v36 = 0;
    v37 = 0;
    v38 = (GrandServantStatusListViewItemDrawEquip_o **)(&v28->fields.dispMode + 2 * v26);
    v39 = (float)(v32 - v29->m_Items[v26].fields.y) + 23.0;
    v40 = v32 + -220.0;
    while ( 1 )
    {
      if ( (unsigned int)v26 >= LODWORD(skillViewCounts->max_length) )
        goto LABEL_80;
      if ( (int)v36 >= skillViewCounts->m_Items[v26] )
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
              v60.fields.x = value;
              v60.fields.y = v31;
              v60.fields.z = v34;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v60, 0);
              goto LABEL_77;
            }
          }
LABEL_79:
          sub_1C372B4(this);
        }
LABEL_80:
        sub_1C372BC(this);
      }
      if ( (unsigned int)v26 >= LODWORD(v28->fields.m_CancellationTokenSource) )
        goto LABEL_80;
      this = *v38;
      if ( !*v38 )
        goto LABEL_79;
      this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0);
      if ( !this )
        goto LABEL_79;
      v58 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      v42 = v58.fields.x;
      v43 = v58.fields.z;
      if ( (_DWORD)v36 == 1 )
      {
        this = (GrandServantStatusListViewItemDrawEquip_o *)GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillExplanationLabel(
                                                              v4,
                                                              v26,
                                                              v41);
        if ( v26 == 1 )
        {
          v45 = this;
          this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill(
                                                                item,
                                                                0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)v45,
                                                                  0,
                                                                  0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v45 )
                goto LABEL_79;
              v37 = v37 - HIDWORD(v45->fields.expBases) - 50;
            }
          }
        }
        v44 = v35;
      }
      else
      {
        if ( (_DWORD)v36 )
        {
          v44 = v58.fields.y;
          goto LABEL_67;
        }
        v44 = v40;
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
          v59.fields.y = v44 + (float)v37;
          v59.fields.x = v42;
          v59.fields.z = v43;
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
  struct UnityEngine_GameObject_array *v19; // x8
  UnityEngine_GameObject_o *v20; // x0
  int32_t v21; // w8

  if ( !item )
    goto LABEL_22;
  v8 = this;
  EquipServantByIndex = ServantStatusListViewItem__GetEquipServantByIndex(item, index, 0);
  if ( !EquipServantByIndex )
    goto LABEL_21;
  if ( !item->fields._IsDisplayCombineButton_k__BackingField )
    goto LABEL_21;
  v14 = EquipServantByIndex;
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
    || (BYTE1(this->fields.nameRangeLabels) = 1,
        UICommonButton__SetEnable((UICommonButton_o *)this, item->fields._CanMoveCombine_k__BackingField, 0),
        (v19 = v8->fields.reinforceObject) == 0) )
  {
LABEL_22:
    sub_1C372B4(this);
  }
  if ( LODWORD(v19->max_length) <= index )
LABEL_23:
    sub_1C372BC(this);
  range += v17;
  v20 = v19->m_Items[index];
  if ( range >= 0 )
    v21 = range;
  else
    v21 = range + 1;
  GameObjectExtensions__SetLocalPositionY(v20, (float)-(v21 >> 1), 0);
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
  const MethodInfo *v18; // x2
  UILabel_array *EquipSkillExplanationLabelList; // x26
  const MethodInfo *v20; // x2
  UnityEngine_GameObject_o *SkillIconComponent; // x0
  int max_length; // w8
  UnityEngine_GameObject_o *v23; // x22
  unsigned int v24; // w21
  unsigned int v25; // w9
  SkillInfo_o *v26; // x23
  UnityEngine_GameObject_c **v27; // x22
  void **v28; // x22
  UnityEngine_GameObject_o *v29; // t1
  const MethodInfo *v30; // x2
  UnityEngine_GameObject_o *v31; // x28
  UnityEngine_GameObject_c **v32; // x27
  void **v33; // x27
  UnityEngine_GameObject_o *v34; // t1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v36; // x19
  __int64 v37; // x28
  int32_t v38; // w28
  bool v39; // w28
  UILabel_o *v40; // x8
  int32_t mHeight; // w19
  struct System_Int32_array *skillPitches; // x8
  int v43; // w8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  __int64 v45; // x19
  __int64 v46; // x28
  struct System_Int32_array *skillViewCounts; // x8
  int32_t v48; // w19
  const MethodInfo *v49; // x2
  UnityEngine_Object_o *v50; // x19
  const MethodInfo *v51; // x2
  int32_t id; // w1
  UnityEngine_Object_o *v53; // x19
  struct System_String_StaticFields *p_title; // x8
  _BOOL4 value; // [xsp+Ch] [xbp-B4h]
  SkillInfo_o *v56; // [xsp+10h] [xbp-B0h]
  SkillInfo_array *v57; // [xsp+18h] [xbp-A8h]
  UnityEngine_GameObject_o *v58; // [xsp+20h] [xbp-A0h]
  UnityEngine_GameObject_o *v59; // [xsp+30h] [xbp-90h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  z = tb.fields.z;
  y = tb.fields.y;
  x = tb.fields.x;
  v15 = skillInfoList;
  if ( (byte_4C3E284 & 1) == 0 )
  {
    sub_1C37058(&GrandServantStatusListViewItemDrawEquip_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C37058(&string_TypeInfo);
    byte_4C3E284 = 1;
  }
  SkillBase = GrandServantStatusListViewItemDrawEquip__GetSkillBase(this, index, (const MethodInfo *)skillInfoList);
  EquipSkillExplanationLabelList = GrandServantStatusListViewItemDrawEquip__GetEquipSkillExplanationLabelList(
                                     this,
                                     index,
                                     v18);
  SkillIconComponent = (UnityEngine_GameObject_o *)GrandServantStatusListViewItemDrawEquip__GetSkillIconComponent(
                                                     this,
                                                     index,
                                                     v20);
  newTb->fields.x = x;
  newTb->fields.y = y;
  newTb->fields.z = z;
  if ( !SkillBase )
LABEL_80:
    sub_1C372B4(SkillIconComponent);
  max_length = SkillBase->max_length;
  v56 = changeSkillInfo;
  if ( max_length >= 1 )
  {
    value = changeSkillInfo != 0 && isChangeEquipSkill;
    v23 = SkillIconComponent;
    v24 = 0;
    v57 = v15;
    v59 = SkillIconComponent;
    while ( 1 )
    {
      if ( !v15 )
        goto LABEL_26;
      v25 = v15->max_length;
      if ( (int)v24 >= (int)v25 )
        goto LABEL_26;
      if ( v24 >= v25 )
        goto LABEL_81;
      v26 = v15->m_Items[v24];
      if ( !v26 || v26->fields.id < 1 )
      {
LABEL_26:
        v39 = 0;
        goto LABEL_27;
      }
      if ( v24 >= max_length )
        goto LABEL_81;
      SkillIconComponent = SkillBase->m_Items[v24];
      if ( !SkillIconComponent )
        goto LABEL_80;
      SkillIconComponent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(SkillIconComponent, 0);
      if ( !SkillIconComponent )
        goto LABEL_80;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SkillIconComponent, *newTb, 0);
      if ( !v23 )
        goto LABEL_80;
      if ( v24 >= LODWORD(v23[1].klass) )
        goto LABEL_81;
      v27 = &v23->klass + (int)v24;
      v29 = (UnityEngine_GameObject_o *)v27[4];
      v28 = (void **)(v27 + 4);
      SkillIconComponent = v29;
      if ( !v29 )
        goto LABEL_80;
      SkillIconComponent__Set((SkillIconComponent_o *)SkillIconComponent, v26->fields.id, 0);
      SkillIconComponent = (UnityEngine_GameObject_o *)GrandServantStatusListViewItemDrawEquip__GetSkillTitleRangeLabel(
                                                         this,
                                                         index,
                                                         v30);
      if ( !SkillIconComponent )
        goto LABEL_80;
      v31 = SkillIconComponent;
      if ( v24 >= LODWORD(SkillIconComponent[1].klass) )
        goto LABEL_81;
      v32 = &SkillIconComponent->klass + (int)v24;
      v34 = (UnityEngine_GameObject_o *)v32[4];
      v33 = (void **)(v32 + 4);
      SkillIconComponent = v34;
      if ( !v34 )
        goto LABEL_80;
      UIRangeLabel__Set((UIRangeLabel_o *)SkillIconComponent, v26->fields.title, 0, 1, 0, 0, 0);
      if ( !item )
        goto LABEL_80;
      userSvtEntity = item->fields.userSvtEntity;
      v58 = v31;
      if ( userSvtEntity )
        break;
      servantLeaderInfo = item->fields.servantLeaderInfo;
      if ( servantLeaderInfo )
      {
        v46 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v45 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v63.fields.currentCryptoKey = v46;
        *(_QWORD *)&v63.fields.fakeValue = v45;
        SkillIconComponent = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                           v63,
                                                           0);
        if ( !item->fields.servantLeaderInfo )
          goto LABEL_80;
        v38 = (int)SkillIconComponent;
        SkillIconComponent = (UnityEngine_GameObject_o *)ServantLeaderInfo__getRarity(item->fields.servantLeaderInfo, 0);
        goto LABEL_45;
      }
      v48 = -1;
      v38 = -1;
LABEL_48:
      SkillIconComponent = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !SkillIconComponent )
        goto LABEL_80;
      SkillIconComponent = (UnityEngine_GameObject_o *)PartyOrganizationUtility__IsRarityRestriction_34604572(
                                                         (PartyOrganizationUtility_o *)SkillIconComponent,
                                                         v38,
                                                         v48,
                                                         v26->fields.id,
                                                         v26->fields.lv,
                                                         0);
      if ( ((unsigned __int8)SkillIconComponent & 1) != 0 )
      {
        if ( v24 >= LODWORD(v59[1].klass) )
          goto LABEL_81;
        SkillIconComponent = (UnityEngine_GameObject_o *)*v28;
        if ( !*v28 )
          goto LABEL_80;
        SkillIconComponent__SetInvalidColor((SkillIconComponent_o *)SkillIconComponent, this->fields.ColorInvalid, 0);
        if ( v24 >= LODWORD(v58[1].klass) )
          goto LABEL_81;
        SkillIconComponent = (UnityEngine_GameObject_o *)*v33;
        if ( !*v33 )
          goto LABEL_80;
        UIRangeLabel__set_color((UIRangeLabel_o *)SkillIconComponent, this->fields.ColorInvalid, 0);
        if ( !EquipSkillExplanationLabelList )
          goto LABEL_80;
        if ( v24 >= LODWORD(EquipSkillExplanationLabelList->max_length) )
          goto LABEL_81;
        SkillIconComponent = (UnityEngine_GameObject_o *)EquipSkillExplanationLabelList->m_Items[v24];
        if ( !SkillIconComponent )
          goto LABEL_80;
        UIWidget__set_color((UIWidget_o *)SkillIconComponent, this->fields.ColorInvalid, 0);
      }
      if ( v24 )
      {
        v15 = v57;
        v23 = v59;
      }
      else
      {
        v15 = v57;
        v23 = v59;
        v50 = (UnityEngine_Object_o *)GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillIconComponent(
                                        this,
                                        index,
                                        v49);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        SkillIconComponent = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v50, 0, 0);
        if ( ((unsigned __int8)SkillIconComponent & 1) != 0 )
        {
          if ( !v50 )
            goto LABEL_80;
          SkillIconComponent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v50, 0);
          if ( !SkillIconComponent )
            goto LABEL_80;
          UnityEngine_GameObject__SetActive(SkillIconComponent, value, 0);
          if ( value )
            id = v56->fields.id;
          else
            id = 0;
          SkillIconComponent__Set((SkillIconComponent_o *)v50, id, 0);
        }
        v53 = (UnityEngine_Object_o *)GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillTitleRangeLabel(
                                        this,
                                        index,
                                        v51);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        SkillIconComponent = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v53, 0, 0);
        if ( ((unsigned __int8)SkillIconComponent & 1) != 0 )
        {
          if ( !v53 )
            goto LABEL_80;
          SkillIconComponent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v53, 0);
          if ( !SkillIconComponent )
            goto LABEL_80;
          UnityEngine_GameObject__SetActive(SkillIconComponent, value, 0);
          p_title = (struct System_String_StaticFields *)&v56->fields.title;
          if ( !value )
            p_title = string_TypeInfo->static_fields;
          v39 = 1;
          UIRangeLabel__Set((UIRangeLabel_o *)v53, p_title->Empty, 0, 1, 0, 0, 0);
          goto LABEL_27;
        }
      }
      v39 = 1;
LABEL_27:
      if ( v24 >= LODWORD(SkillBase->max_length) )
        goto LABEL_81;
      SkillIconComponent = SkillBase->m_Items[v24];
      if ( !SkillIconComponent )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive(SkillIconComponent, v39, 0);
      if ( !EquipSkillExplanationLabelList )
        goto LABEL_80;
      if ( v24 >= LODWORD(EquipSkillExplanationLabelList->max_length) )
        goto LABEL_81;
      v40 = EquipSkillExplanationLabelList->m_Items[v24];
      if ( !v40 )
        goto LABEL_80;
      SkillIconComponent = (UnityEngine_GameObject_o *)GrandServantStatusListViewItemDrawEquip_TypeInfo;
      mHeight = v40->fields.mHeight;
      if ( !GrandServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GrandServantStatusListViewItemDrawEquip_TypeInfo);
        SkillIconComponent = (UnityEngine_GameObject_o *)GrandServantStatusListViewItemDrawEquip_TypeInfo;
      }
      skillPitches = this->fields.skillPitches;
      if ( !skillPitches )
        goto LABEL_80;
      if ( LODWORD(skillPitches->max_length) <= index )
        goto LABEL_81;
      v43 = skillPitches->m_Items[index];
      ++v24;
      if ( *(_DWORD *)(SkillIconComponent[7].fields.m_CachedPtr + 4) + mHeight >= v43 )
        v43 = *(_DWORD *)(SkillIconComponent[7].fields.m_CachedPtr + 4) + mHeight;
      newTb->fields.y = newTb->fields.y - (float)v43;
      max_length = SkillBase->max_length;
      if ( (int)v24 >= max_length )
        return;
    }
    v37 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v36 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v62.fields.currentCryptoKey = v37;
    *(_QWORD *)&v62.fields.fakeValue = v36;
    SkillIconComponent = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                       v62,
                                                       0);
    if ( !item->fields.userSvtEntity )
      goto LABEL_80;
    v38 = (int)SkillIconComponent;
    SkillIconComponent = (UnityEngine_GameObject_o *)UserServantEntity__getRarity(item->fields.userSvtEntity, 0);
LABEL_45:
    skillViewCounts = this->fields.skillViewCounts;
    if ( !skillViewCounts )
      goto LABEL_80;
    if ( LODWORD(skillViewCounts->max_length) <= index )
LABEL_81:
      sub_1C372BC(SkillIconComponent);
    v48 = (int)SkillIconComponent;
    skillViewCounts->m_Items[index] = v24 + 1;
    goto LABEL_48;
  }
}