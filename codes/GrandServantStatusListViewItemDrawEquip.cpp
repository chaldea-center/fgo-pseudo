void __fastcall GrandServantStatusListViewItemDrawEquip___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B17B21 & 1) == 0 )
  {
    sub_1BCAFF8(&GrandServantStatusListViewItemDrawEquip_TypeInfo, v1);
    byte_4B17B21 = 1;
  }
  *GrandServantStatusListViewItemDrawEquip_TypeInfo->static_fields = (struct GrandServantStatusListViewItemDrawEquip_StaticFields)0x2800000012LL;
}


void __fastcall GrandServantStatusListViewItemDrawEquip___ctor(
        GrandServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  struct SkillInfoObject_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Int32_array *v10; // x0
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
  struct UnityEngine_Vector3_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Int32_array *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4B17B20 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&int___TypeInfo, v3);
    sub_1BCAFF8(&SkillInfoObject___TypeInfo, v4);
    sub_1BCAFF8(&UnityEngine_Vector3___TypeInfo, v5);
    byte_4B17B20 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct SkillInfoObject_array *)sub_1BCB0A0(
                                         SkillInfoObject___TypeInfo,
                                         (unsigned int)v6->static_fields->GrandSvtEquipMax);
  this->fields.skillInfoObjectList = v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillInfoObjectList, (int32_t)v7, v8, v9);
  v10 = (struct System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 3LL);
  this->fields.skillPitches = v10;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillPitches, (int32_t)v10, v11, v12);
  v13 = (struct UnityEngine_Vector3_array *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 3LL);
  this->fields.baseSizes = v13;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseSizes, (int32_t)v13, v14, v15);
  v16 = (struct UnityEngine_Vector3_array *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 3LL);
  this->fields.titleBasePositions = v16;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.titleBasePositions, (int32_t)v16, v17, v18);
  v19 = (struct UnityEngine_Vector3_array *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 3LL);
  this->fields.skillBasePositions = v19;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillBasePositions, (int32_t)v19, v20, v21);
  v22 = (struct UnityEngine_Vector3_array *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 3LL);
  this->fields.baseSpriteSizes = v22;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseSpriteSizes, (int32_t)v22, v23, v24);
  this->fields.ColorInvalid = (struct UnityEngine_Color_o)xmmword_BE2C60;
  this->fields.ColorCostZero = UnityEngine_Color__HSVToRGB_70057652(0.0, 0.0, 0.5, 1, 0LL);
  this->fields.ColorCost = UnityEngine_Color__HSVToRGB_70057652(0.0, 0.0, 1.0, 1, 0LL);
  v25 = (struct System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 3LL);
  this->fields.skillViewCounts = v25;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillViewCounts, (int32_t)v25, v26, v27);
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantStatusListViewItemDrawEquip__Awake(
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
  float v9; // s1
  float v10; // s8
  float v11; // s1
  int v12; // w8
  struct System_Int32_array *v13; // x8
  struct UISprite_o *baseSprite; // x9
  struct UnityEngine_Vector3_array *baseSizes; // x10
  float *v16; // x10
  int v17; // w25
  float v18; // s1
  struct UISprite_array *v19; // x8
  struct UnityEngine_Vector3_array *titleBasePositions; // x26
  int v21; // s0
  int v22; // s1
  int v23; // s2
  _DWORD *v24; // x8
  struct UnityEngine_Vector3_array *v25; // x8
  float *v26; // x8
  int v27; // w9
  float v28; // s8
  struct UnityEngine_Vector3_array *skillBasePositions; // x21
  int v30; // s0
  int v31; // s1
  int v32; // s2
  _DWORD *v33; // x8
  struct UnityEngine_Vector3_array *v34; // x8
  float *v35; // x8

  titleSprites = this->fields.titleSprites;
  if ( !titleSprites )
LABEL_40:
    sub_1BCB254(this, method);
  v4 = this;
  v5 = 0LL;
  v6 = 40LL;
  while ( (int)v5 < (signed int)titleSprites->max_length )
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
                                                            0LL);
      if ( !this )
        goto LABEL_40;
      *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)this,
                                              0LL);
      if ( LODWORD(v7->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_42;
      this = (GrandServantStatusListViewItemDrawEquip_o *)v7->fields.baseButton;
      if ( !this )
        goto LABEL_40;
      v10 = v9;
      this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0LL);
      if ( !this )
        goto LABEL_40;
      *(UnityEngine_Vector3_o *)(&v11 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      if ( !skillPitches )
        goto LABEL_40;
      if ( (unsigned int)v5 >= skillPitches->max_length )
        goto LABEL_42;
      v12 = (int)(float)(v10 - v11);
      if ( (float)(v10 - v11) == INFINITY )
        v12 = 0x80000000;
      skillPitches->m_Items[(int)v5 + 1] = v12;
    }
    v13 = v4->fields.skillPitches;
    if ( !v13 )
      goto LABEL_40;
    if ( (unsigned int)v5 >= v13->max_length )
LABEL_42:
      sub_1BCB25C(this, method, v2);
    baseSprite = v4->fields.baseSprite;
    if ( baseSprite )
    {
      baseSizes = v4->fields.baseSizes;
      if ( baseSizes )
      {
        if ( (unsigned int)v5 >= baseSizes->max_length )
          goto LABEL_42;
        v16 = (float *)((char *)baseSizes + v6);
        v17 = v13->m_Items[v5 + 1] * LODWORD(v7->fields.m_CancellationTokenSource);
        v18 = (float)(baseSprite->fields.mHeight - v17);
        *(v16 - 2) = (float)baseSprite->fields.mWidth;
        *(v16 - 1) = v18;
        *v16 = 0.0;
        v19 = v4->fields.titleSprites;
        if ( v19 )
        {
          if ( (unsigned int)v5 >= v19->max_length )
            goto LABEL_42;
          this = (GrandServantStatusListViewItemDrawEquip_o *)v19->m_Items[v5];
          if ( this )
          {
            titleBasePositions = v4->fields.titleBasePositions;
            this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
            if ( this )
            {
              *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
              if ( titleBasePositions )
              {
                if ( (unsigned int)v5 >= titleBasePositions->max_length )
                  goto LABEL_42;
                v24 = (_DWORD *)((char *)titleBasePositions + v6);
                *(v24 - 2) = v21;
                *(v24 - 1) = v22;
                *v24 = v23;
                v25 = v4->fields.titleBasePositions;
                if ( v25 )
                {
                  if ( (unsigned int)v5 >= v25->max_length )
                    goto LABEL_42;
                  v26 = (float *)((char *)v25 + v6);
                  v27 = v17 >= 0 ? v17 : v17 + 1;
                  v28 = (float)(v27 >> 1);
                  *(v26 - 1) = *(v26 - 1) - v28;
                  if ( !LODWORD(v7->fields.m_CancellationTokenSource) )
                    goto LABEL_42;
                  this = *(GrandServantStatusListViewItemDrawEquip_o **)&v7->fields.dispMode;
                  if ( this )
                  {
                    skillBasePositions = v4->fields.skillBasePositions;
                    this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                                          (UnityEngine_GameObject_o *)this,
                                                                          0LL);
                    if ( this )
                    {
                      *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__get_localPosition(
                                                         (UnityEngine_Transform_o *)this,
                                                         0LL);
                      if ( skillBasePositions )
                      {
                        if ( (unsigned int)v5 >= skillBasePositions->max_length )
                          goto LABEL_42;
                        v33 = (_DWORD *)((char *)skillBasePositions + v6);
                        *(v33 - 2) = v30;
                        *(v33 - 1) = v31;
                        *v33 = v32;
                        v34 = v4->fields.skillBasePositions;
                        if ( v34 )
                        {
                          if ( (unsigned int)v5 >= v34->max_length )
                            goto LABEL_42;
                          v35 = (float *)((char *)v34 + v6);
                          ++v5;
                          v6 += 12LL;
                          *(v35 - 1) = *(v35 - 1) - v28;
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


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillBase(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( skillInfoObjectList->max_length <= index )
    sub_1BCB25C(this, *(_QWORD *)&index, method);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1BCB254(this, index);
  return v4->fields.changeSkillBase;
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *__fastcall GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillExplanationLabel(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( skillInfoObjectList->max_length <= index )
    sub_1BCB25C(this, *(_QWORD *)&index, method);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1BCB254(this, index);
  return v4->fields.changeSkillExplanationLabel;
}


// local variable allocation has failed, the output may be wrong!
SkillIconComponent_o *__fastcall GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillIconComponent(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( skillInfoObjectList->max_length <= index )
    sub_1BCB25C(this, *(_QWORD *)&index, method);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1BCB254(this, index);
  return v4->fields.changeSkillIcon;
}


// local variable allocation has failed, the output may be wrong!
UIRangeLabel_o *__fastcall GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillTitleRangeLabel(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( skillInfoObjectList->max_length <= index )
    sub_1BCB25C(this, *(_QWORD *)&index, method);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1BCB254(this, index);
  return v4->fields.changeSkillTitleRangeLabel;
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *__fastcall GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillTypeLabel(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( skillInfoObjectList->max_length <= index )
    sub_1BCB25C(this, *(_QWORD *)&index, method);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1BCB254(this, index);
  return v4->fields.changeSkillTypeLabel;
}


// local variable allocation has failed, the output may be wrong!
UILabel_array *__fastcall GrandServantStatusListViewItemDrawEquip__GetEquipSkillExplanationLabelList(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( skillInfoObjectList->max_length <= index )
    sub_1BCB25C(this, *(_QWORD *)&index, method);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1BCB254(this, index);
  return v4->fields.equipSkillExplanationLabelList;
}


// local variable allocation has failed, the output may be wrong!
UISprite_o *__fastcall GrandServantStatusListViewItemDrawEquip__GetEquipSkillMask(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( skillInfoObjectList->max_length <= index )
    sub_1BCB25C(this, *(_QWORD *)&index, method);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1BCB254(this, index);
  return v4->fields.equipSkillMask;
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *__fastcall GrandServantStatusListViewItemDrawEquip__GetEquipSkillMaskLabel(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( skillInfoObjectList->max_length <= index )
    sub_1BCB25C(this, *(_QWORD *)&index, method);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1BCB254(this, index);
  return v4->fields.equipSkillMaskLabel;
}


int32_t __fastcall GrandServantStatusListViewItemDrawEquip__GetKind(
        GrandServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  return 20;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall GrandServantStatusListViewItemDrawEquip__GetServantLeaderDataEquipId(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        ServantLeaderInfo_o *info,
        const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget3; // x8
  __int64 v7; // x19
  __int64 v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4B17B1B & 1) == 0 )
  {
    this = (GrandServantStatusListViewItemDrawEquip_o *)sub_1BCAFF8(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          *(_QWORD *)&index);
    byte_4B17B1B = 1;
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
    sub_1BCB254(this, *(_QWORD *)&index);
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_array *__fastcall GrandServantStatusListViewItemDrawEquip__GetSkillBase(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( skillInfoObjectList->max_length <= index )
    sub_1BCB25C(this, *(_QWORD *)&index, method);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1BCB254(this, index);
  return v4->fields.equipSkillBaseList;
}


// local variable allocation has failed, the output may be wrong!
SkillIconComponent_array *__fastcall GrandServantStatusListViewItemDrawEquip__GetSkillIconComponent(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( skillInfoObjectList->max_length <= index )
    sub_1BCB25C(this, *(_QWORD *)&index, method);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1BCB254(this, index);
  return v4->fields.equipSkillIconList;
}


int32_t __fastcall GrandServantStatusListViewItemDrawEquip__GetSkillInfoListNum(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        SkillInfo_array *skillInfoList,
        SkillIconComponent_array *equipSkillIcon,
        const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  unsigned __int64 v10; // x9
  unsigned __int64 max_length; // x11
  SkillInfo_o *v12; // x11

  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillInfoList, 0LL);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( equipSkillIcon )
    {
      LODWORD(IsNullOrEmpty) = 0;
      if ( (int)*(_QWORD *)&equipSkillIcon->max_length < 1 )
        return IsNullOrEmpty;
      IsNullOrEmpty = 0LL;
      v10 = 0LL;
      while ( skillInfoList )
      {
        max_length = skillInfoList->max_length;
        if ( (__int64)v10 < (int)max_length )
        {
          if ( v10 >= max_length )
            sub_1BCB25C(IsNullOrEmpty, v8, v9);
          v12 = skillInfoList->m_Items[v10];
          if ( v12 )
          {
            if ( v12->fields.id >= 1 )
              IsNullOrEmpty = (unsigned int)(v10 + 1);
            else
              IsNullOrEmpty = (unsigned int)IsNullOrEmpty;
          }
        }
        if ( (unsigned int)*(_QWORD *)&equipSkillIcon->max_length == ++v10 )
          return IsNullOrEmpty;
      }
    }
    sub_1BCB254(IsNullOrEmpty, v8);
  }
  LODWORD(IsNullOrEmpty) = 0;
  return IsNullOrEmpty;
}


// local variable allocation has failed, the output may be wrong!
UIRangeLabel_array *__fastcall GrandServantStatusListViewItemDrawEquip__GetSkillTitleRangeLabel(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SkillInfoObject_array *skillInfoObjectList; // x8
  SkillInfoObject_o *v4; // x8

  skillInfoObjectList = this->fields.skillInfoObjectList;
  if ( !skillInfoObjectList )
    goto LABEL_5;
  if ( skillInfoObjectList->max_length <= index )
    sub_1BCB25C(this, *(_QWORD *)&index, method);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1BCB254(this, index);
  return v4->fields.equipSkillTitleRangeLabelList;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GrandServantStatusListViewItemDrawEquip__IsNeedAddAdjust(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  UILabel_array *EquipSkillExplanationLabelList; // x26
  UnityEngine_GameObject_o *Master_object; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  int v27; // w22
  unsigned __int64 v28; // x20
  unsigned __int64 max_length; // x8
  SkillInfo_o *v30; // x8
  GrandServantStatusListViewItemDrawEquip_c *v31; // x0
  System_String_o *explanation; // x27
  UILabel_o *v33; // x19
  UILabel_o *v34; // x8
  int v35; // w27
  UnityEngine_Object_o *v36; // x19
  int mHeight; // w8
  int v38; // w9
  int v39; // w28
  UnityEngine_Transform_o *transform; // x0
  UILabel_o *v41; // x28
  const MethodInfo *v42; // x2
  UnityEngine_Object_o *v43; // x19
  const MethodInfo *v44; // x2
  UnityEngine_Object_o *EquipSkillMask; // x19
  const MethodInfo *v46; // x2
  UnityEngine_Object_o *EquipSkillMaskLabel; // x29
  int32_t v48; // w22
  UnityEngine_Object_o *v49; // x19
  System_String_o **v50; // x8
  System_String_o *v51; // x19
  int v52; // w8
  int v53; // w19
  UnityEngine_Transform_o *v54; // x0
  float v55; // s0
  GrandServantStatusListViewItemDrawEquip_c *v56; // x0
  struct System_Int32_array *skillPitches; // x8
  char *v58; // x8
  _DWORD *v59; // x8
  int v60; // w10
  int v61; // t1
  int32_t v62; // w9
  __int64 v63; // x9
  SkillInfo_o *v64; // x9
  System_String_o *text; // [xsp+10h] [xbp-A0h]
  int32_t *v67; // [xsp+18h] [xbp-98h]
  int v68; // [xsp+24h] [xbp-8Ch]
  UnityEngine_Object_o *v69; // [xsp+28h] [xbp-88h]
  SkillIconComponent_array *v70; // [xsp+30h] [xbp-80h]
  UILabel_o **m_Items; // [xsp+48h] [xbp-68h]

  if ( (byte_4B17B1E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillMaster___, *(_QWORD *)&index);
    sub_1BCAFF8(&DataManager_TypeInfo, v16);
    sub_1BCAFF8(&GrandServantStatusListViewItemDrawEquip_TypeInfo, v17);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v18);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v19);
    sub_1BCAFF8(&StringLiteral_6936/*"GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/, v20);
    sub_1BCAFF8(&StringLiteral_6387/*"FOLLOWER_GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/, v21);
    sub_1BCAFF8(&StringLiteral_6937/*"GRAND_BOND_EQUIP_SKILL_INFO_ANOTHER_SKILL_HEADER"*/, v22);
    byte_4B17B1E = 1;
  }
  *newRange = range;
  EquipSkillExplanationLabelList = GrandServantStatusListViewItemDrawEquip__GetEquipSkillExplanationLabelList(
                                     this,
                                     index,
                                     (const MethodInfo *)skillInfoList);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !equipSkillIcon )
LABEL_113:
    sub_1BCB254(Master_object, v25);
  if ( (int)equipSkillIcon->max_length >= 1 )
  {
    v27 = 0;
    v28 = 0LL;
    v70 = equipSkillIcon;
    m_Items = EquipSkillExplanationLabelList->m_Items;
    v67 = newRange;
    while ( 1 )
    {
      if ( skillInfoList )
      {
        max_length = skillInfoList->max_length;
        if ( (__int64)v28 < (int)max_length )
        {
          if ( v28 >= max_length )
            goto LABEL_114;
          v30 = skillInfoList->m_Items[v28];
          if ( v30 )
          {
            if ( v30->fields.id >= 1 )
            {
              if ( !EquipSkillExplanationLabelList )
                goto LABEL_113;
              if ( v28 >= EquipSkillExplanationLabelList->max_length )
                goto LABEL_114;
              v31 = GrandServantStatusListViewItemDrawEquip_TypeInfo;
              explanation = v30->fields.explanation;
              v33 = m_Items[v28];
              if ( !GrandServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(GrandServantStatusListViewItemDrawEquip_TypeInfo);
                v31 = GrandServantStatusListViewItemDrawEquip_TypeInfo;
              }
              Master_object = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                            v33,
                                                            explanation,
                                                            v31->static_fields->DetailFontSize,
                                                            v31->static_fields->DetailFontSize,
                                                            0LL);
              if ( v28 >= EquipSkillExplanationLabelList->max_length )
                goto LABEL_114;
              v34 = m_Items[v28];
              if ( !v34 )
                goto LABEL_113;
              v35 = GrandServantStatusListViewItemDrawEquip_TypeInfo->static_fields->AdjustHeight + v34->fields.mHeight;
              if ( !v28 )
              {
                v68 = v27;
                v36 = (UnityEngine_Object_o *)GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillBase(
                                                this,
                                                index,
                                                v26);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
                if ( ((unsigned __int8)Master_object & 1) != 0 )
                {
                  if ( !v36 )
                    goto LABEL_113;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v36, isChangeSkill, 0LL);
                  if ( isChangeSkill )
                  {
                    if ( !EquipSkillExplanationLabelList->max_length )
                      goto LABEL_114;
                    if ( !*m_Items )
                      goto LABEL_113;
                    mHeight = (*m_Items)->fields.mHeight;
                    if ( mHeight >= 71 )
                      v38 = -76;
                    else
                      v38 = -64;
                    v39 = v38 - mHeight;
                    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v36, 0LL);
                    TransformHelper__SetLocalPositionY(transform, (float)v39, 0LL);
                  }
                }
                v41 = GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillExplanationLabel(this, index, v26);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                              (UnityEngine_Object_o *)v41,
                                                              0LL,
                                                              0LL);
                if ( ((unsigned __int8)Master_object & 1) != 0 )
                {
                  if ( !v41 )
                    goto LABEL_113;
                  Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v41, 0LL);
                  if ( !Master_object )
                    goto LABEL_113;
                  UnityEngine_GameObject__SetActive(Master_object, isChangeSkill, 0LL);
                }
                v43 = (UnityEngine_Object_o *)GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillTypeLabel(
                                                this,
                                                index,
                                                v42);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
                if ( ((unsigned __int8)Master_object & 1) != 0 )
                {
                  if ( !v43 )
                    goto LABEL_113;
                  Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v43, 0LL);
                  if ( !Master_object )
                    goto LABEL_113;
                  UnityEngine_GameObject__SetActive(Master_object, isChangeSkill, 0LL);
                }
                v69 = v43;
                EquipSkillMask = (UnityEngine_Object_o *)GrandServantStatusListViewItemDrawEquip__GetEquipSkillMask(
                                                           this,
                                                           index,
                                                           v44);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(EquipSkillMask, 0LL, 0LL);
                if ( ((unsigned __int8)Master_object & 1) != 0 )
                {
                  if ( !EquipSkillMask )
                    goto LABEL_113;
                  Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EquipSkillMask, 0LL);
                  if ( !Master_object )
                    goto LABEL_113;
                  UnityEngine_GameObject__SetActive(Master_object, isChangeSkill, 0LL);
                }
                EquipSkillMaskLabel = (UnityEngine_Object_o *)GrandServantStatusListViewItemDrawEquip__GetEquipSkillMaskLabel(
                                                                this,
                                                                index,
                                                                v46);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                              EquipSkillMaskLabel,
                                                              0LL,
                                                              0LL);
                if ( ((unsigned __int8)Master_object & 1) != 0 )
                {
                  if ( !EquipSkillMaskLabel )
                    goto LABEL_113;
                  Master_object = UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)EquipSkillMaskLabel,
                                    0LL);
                  if ( !Master_object )
                    goto LABEL_113;
                  UnityEngine_GameObject__SetActive(Master_object, isChangeSkill, 0LL);
                }
                if ( isChangeSkill )
                {
                  if ( !EquipSkillExplanationLabelList->max_length )
                    goto LABEL_114;
                  if ( !*m_Items )
                    goto LABEL_113;
                  v48 = (*m_Items)->fields.mHeight;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                EquipSkillMask,
                                                                0LL,
                                                                0LL);
                  if ( ((unsigned __int8)Master_object & 1) != 0 )
                  {
                    if ( !EquipSkillExplanationLabelList->max_length )
                      goto LABEL_114;
                    if ( !*m_Items )
                      goto LABEL_113;
                    if ( (*m_Items)->fields.mHeight >= 71 )
                    {
                      if ( !EquipSkillMask )
                        goto LABEL_113;
                      UIWidget__set_height((UIWidget_o *)EquipSkillMask, v48 + 38, 0LL);
                    }
                  }
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  v49 = v69;
                  if ( UnityEngine_Object__op_Inequality(EquipSkillMaskLabel, 0LL, 0LL) )
                  {
                    v50 = (System_String_o **)&StringLiteral_6936/*"GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/;
                    if ( !isMine )
                      v50 = (System_String_o **)&StringLiteral_6387/*"FOLLOWER_GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/;
                    v51 = *v50;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    Master_object = (UnityEngine_GameObject_o *)LocalizationManager__Get(v51, 0LL);
                    if ( !EquipSkillMaskLabel )
                      goto LABEL_113;
                    UILabel__set_text((UILabel_o *)EquipSkillMaskLabel, (System_String_o *)Master_object, 0LL);
                    v49 = v69;
                    if ( !EquipSkillExplanationLabelList->max_length )
                      goto LABEL_114;
                    if ( !*m_Items )
                      goto LABEL_113;
                    if ( (*m_Items)->fields.mHeight >= 71 )
                    {
                      v52 = -38 - v48;
                      if ( -38 - v48 < 0 )
                        v52 = -37 - v48;
                      v53 = v52 >> 1;
                      v54 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)EquipSkillMaskLabel, 0LL);
                      v55 = (float)v53;
                      v49 = v69;
                      TransformHelper__SetLocalPositionY(v54, v55, 0LL);
                    }
                  }
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  newRange = v67;
                  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v41, 0LL, 0LL) )
                  {
                    v56 = GrandServantStatusListViewItemDrawEquip_TypeInfo;
                    if ( !GrandServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(GrandServantStatusListViewItemDrawEquip_TypeInfo);
                      v56 = GrandServantStatusListViewItemDrawEquip_TypeInfo;
                    }
                    Master_object = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                                  v41,
                                                                  text,
                                                                  v56->static_fields->DetailFontSize,
                                                                  v56->static_fields->DetailFontSize,
                                                                  0LL);
                    v49 = v69;
                    if ( !v41 )
                      goto LABEL_113;
                    if ( !EquipSkillExplanationLabelList->max_length )
                      goto LABEL_114;
                    if ( !*m_Items )
                      goto LABEL_113;
                    if ( (*m_Items)->fields.mHeight >= 71 )
                      v35 += v41->fields.mHeight + 62;
                    else
                      v35 += v41->fields.mHeight + 50;
                  }
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v49, 0LL, 0LL);
                  v27 = v68;
                  if ( ((unsigned __int8)Master_object & 1) != 0 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    Master_object = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_6937/*"GRAND_BOND_EQUIP_SKILL_INFO_ANOTHER_SKILL_HEADER"*/,
                                                                  0LL);
                    if ( !v49 )
                      goto LABEL_113;
                    UILabel__set_text((UILabel_o *)v49, (System_String_o *)Master_object, 0LL);
                  }
                }
                else
                {
                  newRange = v67;
                }
              }
              skillPitches = this->fields.skillPitches;
              if ( !skillPitches )
                goto LABEL_113;
              if ( skillPitches->max_length <= index )
LABEL_114:
                sub_1BCB25C(Master_object, v25, v26);
              v58 = (char *)skillPitches + 4 * index;
              v61 = *((_DWORD *)v58 + 8);
              v59 = v58 + 32;
              v60 = v61;
              v62 = *newRange;
              if ( v35 >= v61 )
              {
                *newRange = v62 + v35;
                v63 = *(_QWORD *)&skillInfoList->max_length;
                if ( v28 == (_DWORD)v63 - 1 )
                  goto LABEL_107;
                if ( v28 + 1 >= (unsigned int)v63 )
                  goto LABEL_114;
                v64 = skillInfoList->m_Items[v28 + 1];
                if ( !v64 || v64->fields.id <= 0 )
LABEL_107:
                  v27 |= v35 - *v59 > 10;
              }
              else
              {
                *newRange = v62 + v60;
              }
              equipSkillIcon = v70;
            }
          }
        }
      }
      if ( (__int64)++v28 >= (int)equipSkillIcon->max_length )
        return v27 & 1;
    }
  }
  LOBYTE(v27) = 0;
  return v27 & 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantStatusListViewItemDrawEquip__SetEquipExpInfo(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  GrandServantStatusListViewItemDrawEquip_o *v6; // x20
  __int64 v7; // x2
  struct UnityEngine_GameObject_array *expBases; // x8
  UnityEngine_GameObject_o *v9; // x8
  struct UnityEngine_GameObject_array *lateExpBases; // x8
  struct UILabel_array *lateExpLabels; // x8
  UILabel_o *v12; // x21
  int32_t v13; // w22
  struct UISlider_array *expBars; // x8
  float barExp; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-38h] BYREF

  v6 = this;
  if ( (byte_4B17B1D & 1) == 0 )
  {
    this = (GrandServantStatusListViewItemDrawEquip_o *)sub_1BCAFF8(&LocalizationManager_TypeInfo, *(_QWORD *)&index);
    byte_4B17B1D = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  if ( !item )
    goto LABEL_22;
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipExpInfoByIndex(
                                                        item,
                                                        index,
                                                        &lateExp[1],
                                                        lateExp,
                                                        &barExp,
                                                        0LL);
  expBases = v6->fields.expBases;
  if ( !expBases )
    goto LABEL_22;
  if ( expBases->max_length <= index )
LABEL_23:
    sub_1BCB25C(this, *(_QWORD *)&index, v7);
  v9 = expBases->m_Items[index];
  if ( !v9 )
    goto LABEL_22;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive(v9, 1, 0LL);
    lateExpBases = v6->fields.lateExpBases;
    if ( !lateExpBases )
      goto LABEL_22;
    if ( lateExpBases->max_length > index )
    {
      this = (GrandServantStatusListViewItemDrawEquip_o *)lateExpBases->m_Items[index];
      if ( !this )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, lateExp[0] > 0, 0LL);
      lateExpLabels = v6->fields.lateExpLabels;
      if ( !lateExpLabels )
        goto LABEL_22;
      if ( lateExpLabels->max_length > index )
      {
        v12 = lateExpLabels->m_Items[index];
        v13 = lateExp[0];
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (GrandServantStatusListViewItemDrawEquip_o *)LocalizationManager__GetNumberFormat(v13, 0LL);
        if ( !v12 )
          goto LABEL_22;
        UILabel__set_text(v12, (System_String_o *)this, 0LL);
        expBars = v6->fields.expBars;
        if ( !expBars )
          goto LABEL_22;
        if ( expBars->max_length > index )
        {
          this = (GrandServantStatusListViewItemDrawEquip_o *)expBars->m_Items[index];
          if ( this )
          {
            UIProgressBar__set_value((UIProgressBar_o *)this, barExp, 0LL);
            return;
          }
LABEL_22:
          sub_1BCB254(this, *(_QWORD *)&index);
        }
      }
    }
    goto LABEL_23;
  }
  UnityEngine_GameObject__SetActive(v9, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantStatusListViewItemDrawEquip__SetEquipIcon(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  GrandServantStatusListViewItemDrawEquip_o *v6; // x21
  __int64 v7; // x1
  ServantLeaderInfo_o *servantLeaderInfo; // x2
  struct ServantFaceIconComponent_array *equipIcons; // x8
  ServantFaceIconComponent_o *v10; // x21
  struct ServantFaceIconComponent_array *v11; // x8
  struct ServantLeaderInfo_o *v12; // x9
  EquipTargetInfo_o *equipTarget3; // x1
  struct UnityEngine_Vector3_array *baseSpriteSizes; // x9
  struct ServantFaceIconComponent_array *v15; // x9
  struct ServantFaceIconComponent_array *v16; // x9
  __int64 *v17; // x8
  struct ServantFaceIconComponent_array *v18; // x9
  struct ServantFaceIconComponent_array *v19; // x8
  struct ServantLeaderInfo_o *v20; // x9
  struct ServantFaceIconComponent_array *v21; // x8
  struct ServantLeaderInfo_o *v22; // x9

  v6 = this;
  if ( (byte_4B17B1A & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20223/*"img_frames_nodata6"*/, *(_QWORD *)&index);
    this = (GrandServantStatusListViewItemDrawEquip_o *)sub_1BCAFF8(&StringLiteral_20222/*"img_frames_nodata5"*/, v7);
    byte_4B17B1A = 1;
  }
  if ( !item )
    goto LABEL_50;
  if ( item->fields.userSvtEntity )
  {
    this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipIdByIndex(item, index, 0LL);
    if ( (__int64)this >= 1 )
    {
      equipIcons = v6->fields.equipIcons;
      if ( !equipIcons )
        goto LABEL_50;
      if ( equipIcons->max_length > index )
      {
        v10 = equipIcons->m_Items[index];
        this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipIdByIndex(
                                                              item,
                                                              index,
                                                              0LL);
        if ( v10 )
        {
          ServantFaceIconComponent__Set_40190024(v10, (int64_t)this, 0LL, 0LL, 0LL);
          return;
        }
LABEL_50:
        sub_1BCB254(this, *(_QWORD *)&index);
      }
LABEL_51:
      sub_1BCB25C(this, *(_QWORD *)&index, servantLeaderInfo);
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
          v19 = v6->fields.equipIcons;
          if ( !v19 )
            goto LABEL_50;
          if ( v19->max_length <= 2 )
            goto LABEL_51;
          v20 = item->fields.servantLeaderInfo;
          if ( !v20 )
            goto LABEL_50;
          this = (GrandServantStatusListViewItemDrawEquip_o *)v19->m_Items[2];
          if ( !this )
            goto LABEL_50;
          equipTarget3 = v20->fields.equipTarget3;
        }
        else if ( index == 1 )
        {
          v21 = v6->fields.equipIcons;
          if ( !v21 )
            goto LABEL_50;
          if ( v21->max_length <= 1 )
            goto LABEL_51;
          v22 = item->fields.servantLeaderInfo;
          if ( !v22 )
            goto LABEL_50;
          this = (GrandServantStatusListViewItemDrawEquip_o *)v21->m_Items[1];
          if ( !this )
            goto LABEL_50;
          equipTarget3 = v22->fields.equipTarget2;
        }
        else
        {
          if ( index )
            return;
          v11 = v6->fields.equipIcons;
          if ( !v11 )
            goto LABEL_50;
          if ( !v11->max_length )
            goto LABEL_51;
          v12 = item->fields.servantLeaderInfo;
          if ( !v12 )
            goto LABEL_50;
          this = (GrandServantStatusListViewItemDrawEquip_o *)v11->m_Items[0];
          if ( !this )
            goto LABEL_50;
          equipTarget3 = v12->fields.equipTarget1;
        }
        ServantFaceIconComponent__Set_40196320((ServantFaceIconComponent_o *)this, equipTarget3, 0LL, 0LL, 0LL);
        return;
      }
    }
  }
  baseSpriteSizes = v6->fields.baseSpriteSizes;
  v6->fields.baseColliderSizes.fields.y = v6->fields.baseColliderSizes.fields.y + -11.0;
  if ( !baseSpriteSizes )
    goto LABEL_50;
  if ( baseSpriteSizes->max_length <= index )
    goto LABEL_51;
  baseSpriteSizes->m_Items[index].fields.z = baseSpriteSizes->m_Items[index].fields.z + -11.0;
  switch ( index )
  {
    case 2:
      v16 = v6->fields.equipIcons;
      if ( !v16 )
        goto LABEL_50;
      if ( v16->max_length <= 2 )
        goto LABEL_51;
      this = (GrandServantStatusListViewItemDrawEquip_o *)v16->m_Items[2];
      if ( !this )
        goto LABEL_50;
      v17 = &StringLiteral_20222/*"img_frames_nodata5"*/;
LABEL_38:
      ServantFaceIconComponent__NoMount_40184764((ServantFaceIconComponent_o *)this, (System_String_o *)*v17, 1, 0LL);
      return;
    case 1:
      v18 = v6->fields.equipIcons;
      if ( !v18 )
        goto LABEL_50;
      if ( v18->max_length <= 1 )
        goto LABEL_51;
      this = (GrandServantStatusListViewItemDrawEquip_o *)v18->m_Items[1];
      if ( !this )
        goto LABEL_50;
      v17 = &StringLiteral_20223/*"img_frames_nodata6"*/;
      goto LABEL_38;
    case 0:
      v15 = v6->fields.equipIcons;
      if ( !v15 )
        goto LABEL_50;
      if ( !v15->max_length )
        goto LABEL_51;
      this = (GrandServantStatusListViewItemDrawEquip_o *)v15->m_Items[0];
      if ( !this )
        goto LABEL_50;
      ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)this, 0LL);
      break;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantStatusListViewItemDrawEquip__SetEquipInfoLabel(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v5; // w19
  GrandServantStatusListViewItemDrawEquip_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct UIRangeLabel_array *nameRangeLabels; // x8
  UIRangeLabel_o *v12; // x22
  struct UIExtrusionLabel_array *levelLabels; // x8
  UIExtrusionLabel_o *v14; // x22
  struct UILabel_array *maxLevelLabels; // x8
  UILabel_o *v16; // x22
  struct UIIconLabel_array *attackIconLabels; // x8
  UIIconLabel_o *v18; // x22
  struct UIIconLabel_array *hpIconLabels; // x8
  UIIconLabel_o *v20; // x22
  struct UILabel_array *v21; // x8
  UILabel_o *v22; // x22
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
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

  v5 = index;
  v6 = this;
  if ( (byte_4B17B1C & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, *(_QWORD *)&index);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_24882/*"{0}"*/, v8);
    sub_1BCAFF8(&StringLiteral_113/*" "*/, v9);
    this = (GrandServantStatusListViewItemDrawEquip_o *)sub_1BCAFF8(&StringLiteral_1/*""*/, v10);
    byte_4B17B1C = 1;
  }
  nameRangeLabels = v6->fields.nameRangeLabels;
  if ( !nameRangeLabels )
LABEL_97:
    sub_1BCB254(this, *(_QWORD *)&index);
  if ( nameRangeLabels->max_length <= v5 )
    goto LABEL_98;
  if ( !item )
    goto LABEL_97;
  v12 = nameRangeLabels->m_Items[v5];
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipServantByIndex(item, v5, 0LL);
  if ( this )
  {
    this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipServantByIndex(item, v5, 0LL);
    if ( !this )
      goto LABEL_97;
    this = (GrandServantStatusListViewItemDrawEquip_o *)ServantEntity__getName((ServantEntity_o *)this, -1, -1, 0, 0LL);
    *(_QWORD *)&index = this;
    if ( !v12 )
      goto LABEL_97;
  }
  else
  {
    *(_QWORD *)&index = StringLiteral_1/*""*/;
    if ( !v12 )
      goto LABEL_97;
  }
  UIRangeLabel__Set(v12, *(System_String_o **)&index, 0LL, 1, 0, 0, 0LL);
  levelLabels = v6->fields.levelLabels;
  if ( !levelLabels )
    goto LABEL_97;
  if ( levelLabels->max_length <= v5 )
    goto LABEL_98;
  v14 = levelLabels->m_Items[v5];
  EquipLevelByIndex = ServantStatusListViewItem__GetEquipLevelByIndex(item, v5, 0LL);
  this = (GrandServantStatusListViewItemDrawEquip_o *)System_Int32__ToString((int32_t)&EquipLevelByIndex, 0LL);
  if ( !v14 )
    goto LABEL_97;
  UIExtrusionLabel__set_text(v14, (System_String_o *)this, 0LL);
  maxLevelLabels = v6->fields.maxLevelLabels;
  if ( !maxLevelLabels )
    goto LABEL_97;
  if ( maxLevelLabels->max_length <= v5 )
    goto LABEL_98;
  v16 = maxLevelLabels->m_Items[v5];
  EquipLevelByIndex = ServantStatusListViewItem__GetEquipMaxLevelByIndex(item, v5, 0LL);
  this = (GrandServantStatusListViewItemDrawEquip_o *)System_Int32__ToString((int32_t)&EquipLevelByIndex, 0LL);
  if ( !v16 )
    goto LABEL_97;
  UILabel__set_text(v16, (System_String_o *)this, 0LL);
  attackIconLabels = v6->fields.attackIconLabels;
  if ( !attackIconLabels )
    goto LABEL_97;
  if ( attackIconLabels->max_length <= v5 )
    goto LABEL_98;
  v18 = attackIconLabels->m_Items[v5];
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipAtkByIndex(item, v5, 0LL);
  if ( !v18 )
    goto LABEL_97;
  UIIconLabel__Set_40290232(v18, 5, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  hpIconLabels = v6->fields.hpIconLabels;
  if ( !hpIconLabels )
    goto LABEL_97;
  if ( hpIconLabels->max_length <= v5 )
    goto LABEL_98;
  v20 = hpIconLabels->m_Items[v5];
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipHpByIndex(item, v5, 0LL);
  if ( !v20 )
    goto LABEL_97;
  UIIconLabel__Set_40290232(v20, 3, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  if ( !v5
    || (this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipCostByIndex(
                                                              item,
                                                              v5,
                                                              0LL),
        !(_DWORD)this) )
  {
    costLabels = v6->fields.costLabels;
    if ( !costLabels )
      goto LABEL_97;
    if ( costLabels->max_length > v5 )
    {
      v42 = costLabels->m_Items[v5];
      EquipLevelByIndex = ServantStatusListViewItem__GetEquipCostByIndex(item, v5, 0LL);
      this = (GrandServantStatusListViewItemDrawEquip_o *)System_Int32__ToString((int32_t)&EquipLevelByIndex, 0LL);
      if ( !v42 )
        goto LABEL_97;
      UILabel__set_text(v42, (System_String_o *)this, 0LL);
      v43 = v6->fields.costLabels;
      if ( !v43 )
        goto LABEL_97;
      if ( v43->max_length > v5 )
      {
        this = (GrandServantStatusListViewItemDrawEquip_o *)v43->m_Items[v5];
        if ( !this )
          goto LABEL_97;
        UIWidget__set_color((UIWidget_o *)this, v6->fields.ColorCost, 0LL);
        zeroCostObjects = v6->fields.zeroCostObjects;
        if ( !zeroCostObjects )
          goto LABEL_97;
        if ( zeroCostObjects->max_length > v5 )
        {
          v45 = (UnityEngine_Object_o *)zeroCostObjects->m_Items[v5];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(v45, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v46 = v6->fields.zeroCostObjects;
            if ( !v46 )
              goto LABEL_97;
            if ( v46->max_length <= v5 )
              goto LABEL_98;
            this = (GrandServantStatusListViewItemDrawEquip_o *)v46->m_Items[v5];
            if ( !this )
              goto LABEL_97;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          }
          lineLabels = v6->fields.lineLabels;
          if ( !lineLabels )
            goto LABEL_97;
          if ( lineLabels->max_length > v5 )
          {
            v48 = (UnityEngine_Object_o *)lineLabels->m_Items[v5];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(v48, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v49 = v6->fields.lineLabels;
              if ( !v49 )
                goto LABEL_97;
              if ( v49->max_length <= v5 )
                goto LABEL_98;
              this = (GrandServantStatusListViewItemDrawEquip_o *)v49->m_Items[v5];
              if ( !this )
                goto LABEL_97;
              this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
              if ( !this )
                goto LABEL_97;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            }
            line2Labels = v6->fields.line2Labels;
            if ( !line2Labels )
              goto LABEL_97;
            if ( line2Labels->max_length > v5 )
            {
              v51 = (UnityEngine_Object_o *)line2Labels->m_Items[v5];
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(v51, 0LL, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                return;
              v52 = v6->fields.line2Labels;
              if ( !v52 )
                goto LABEL_97;
              if ( v52->max_length > v5 )
              {
                this = (GrandServantStatusListViewItemDrawEquip_o *)v52->m_Items[v5];
                if ( !this )
                  goto LABEL_97;
                this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0LL);
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
    sub_1BCB25C(this, *(_QWORD *)&index, item);
  }
  v21 = v6->fields.costLabels;
  if ( !v21 )
    goto LABEL_97;
  if ( v21->max_length <= v5 )
    goto LABEL_98;
  v22 = v21->m_Items[v5];
  EquipCostByIndex = ServantStatusListViewItem__GetEquipCostByIndex(item, v5, 0LL);
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &EquipCostByIndex, v23, v24, v25);
  v27 = System_String__Format((System_String_o *)StringLiteral_24882/*"{0}"*/, v26, 0LL);
  this = (GrandServantStatusListViewItemDrawEquip_o *)System_String__Concat_62450424(
                                                        v27,
                                                        (System_String_o *)StringLiteral_113/*" "*/,
                                                        0LL);
  if ( !v22 )
    goto LABEL_97;
  UILabel__set_text(v22, (System_String_o *)this, 0LL);
  v28 = v6->fields.costLabels;
  if ( !v28 )
    goto LABEL_97;
  if ( v28->max_length <= v5 )
    goto LABEL_98;
  this = (GrandServantStatusListViewItemDrawEquip_o *)v28->m_Items[v5];
  if ( !this )
    goto LABEL_97;
  UIWidget__set_color((UIWidget_o *)this, v6->fields.ColorCostZero, 0LL);
  v29 = v6->fields.zeroCostObjects;
  if ( !v29 )
    goto LABEL_97;
  if ( v29->max_length <= v5 )
    goto LABEL_98;
  v30 = (UnityEngine_Object_o *)v29->m_Items[v5];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v31 = v6->fields.zeroCostObjects;
    if ( !v31 )
      goto LABEL_97;
    if ( v31->max_length <= v5 )
      goto LABEL_98;
    this = (GrandServantStatusListViewItemDrawEquip_o *)v31->m_Items[v5];
    if ( !this )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  }
  v32 = v6->fields.lineLabels;
  if ( !v32 )
    goto LABEL_97;
  if ( v32->max_length <= v5 )
    goto LABEL_98;
  v33 = (UnityEngine_Object_o *)v32->m_Items[v5];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(v33, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v34 = v6->fields.lineLabels;
    if ( !v34 )
      goto LABEL_97;
    if ( v34->max_length <= v5 )
      goto LABEL_98;
    this = (GrandServantStatusListViewItemDrawEquip_o *)v34->m_Items[v5];
    if ( !this )
      goto LABEL_97;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipCostByIndex(item, v5, 0LL);
    if ( !gameObject )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive(gameObject, (int)this < 10, 0LL);
  }
  v36 = v6->fields.line2Labels;
  if ( !v36 )
    goto LABEL_97;
  if ( v36->max_length <= v5 )
    goto LABEL_98;
  v37 = (UnityEngine_Object_o *)v36->m_Items[v5];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(v37, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v38 = v6->fields.line2Labels;
    if ( !v38 )
      goto LABEL_97;
    if ( v38->max_length > v5 )
    {
      this = (GrandServantStatusListViewItemDrawEquip_o *)v38->m_Items[v5];
      if ( !this )
        goto LABEL_97;
      v39 = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
      this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipCostByIndex(item, v5, 0LL);
      if ( !v39 )
        goto LABEL_97;
      v40 = (int)this > 9;
      this = v39;
LABEL_95:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v40, 0LL);
      return;
    }
    goto LABEL_98;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantStatusListViewItemDrawEquip__SetEquipLimitCount(
        GrandServantStatusListViewItemDrawEquip_o *this,
        int32_t index,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  GrandServantStatusListViewItemDrawEquip_o *v5; // x21
  __int64 v7; // x2
  struct ServantStatusLimitCountGauge_array *limitCountGauges; // x8
  Il2CppClass **v9; // x8
  ServantStatusLimitCountGauge_o *v10; // x22
  GrandServantStatusListViewItemDrawEquip_o *v11; // x21
  int32_t explanationLabels; // w2
  int32_t v13; // w1
  ServantStatusLimitCountGauge_o *v14; // x0

  if ( !item )
    goto LABEL_10;
  v5 = this;
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipServantByIndex(
                                                        item,
                                                        index,
                                                        0LL);
  limitCountGauges = v5->fields.limitCountGauges;
  if ( !limitCountGauges )
    goto LABEL_10;
  if ( limitCountGauges->max_length <= index )
    sub_1BCB25C(this, *(_QWORD *)&index, v7);
  v9 = &limitCountGauges->obj.klass + index;
  v10 = (ServantStatusLimitCountGauge_o *)v9[4];
  v11 = this;
  if ( !this )
  {
    if ( v10 )
    {
      v14 = (ServantStatusLimitCountGauge_o *)v9[4];
      v13 = 0;
      explanationLabels = 0;
      goto LABEL_9;
    }
LABEL_10:
    sub_1BCB254(this, *(_QWORD *)&index);
  }
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipLimitCountByIndex(
                                                        item,
                                                        index,
                                                        0LL);
  if ( !v10 )
    goto LABEL_10;
  explanationLabels = (int32_t)v11->fields.explanationLabels;
  v13 = (int)this;
  v14 = v10;
LABEL_9:
  ServantStatusLimitCountGauge__Set(v14, v13, explanationLabels, 0LL);
}


void __fastcall GrandServantStatusListViewItemDrawEquip__SetItem(
        GrandServantStatusListViewItemDrawEquip_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 Master_object; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  struct UILabel_array *explanationLabels; // x8
  float z; // s1
  UILabel_o *v22; // x22
  const MethodInfo *v23; // x3
  int32_t v24; // w23
  struct UnityEngine_Vector3_array *baseSpriteSizes; // x24
  struct UnityEngine_Vector3_StaticFields *v26; // x8
  __int64 v27; // d0
  float v28; // s1
  char *v29; // x8
  struct System_Int32_array *skillViewCounts; // x8
  struct UISprite_array *line2Sprites; // x8
  UISprite_o *v32; // x24
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x2
  GrandServantStatusListViewItemDrawEquip_o *SkillIconComponent; // x25
  int32_t v38; // w1
  const MethodInfo *v39; // x4
  struct UISprite_array *lineSprites; // x8
  int v41; // w24
  UnityEngine_Object_o *v42; // x26
  struct UISprite_array *v43; // x8
  __int64 v44; // x24
  int32_t Value; // w26
  System_String_o *EffectExplanation; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_String_o *Name; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  bool v52; // w26
  SkillInfo_array *v53; // x27
  System_String_o *v54; // x28
  bool IsMine; // w0
  bool IsNeedAddAdjust; // w0
  const MethodInfo *v57; // x6
  struct UnityEngine_Vector3_array *baseSizes; // x8
  float *v59; // x8
  int32_t v60; // w27
  float v61; // s1
  float v62; // s0
  float y; // s3
  struct UnityEngine_Vector3_array *v64; // x8
  int32_t v65; // w25
  float *v66; // x8
  float v67; // s1
  struct UnityEngine_Vector3_array *titleBasePositions; // x8
  struct UISprite_array *titleSprites; // x9
  int v70; // w25
  float *v71; // x8
  float v72; // s8
  float v73; // s11
  float v74; // s9
  float v75; // s10
  const MethodInfo *v76; // x7
  struct UnityEngine_Vector3_array *skillBasePositions; // x8
  float *v78; // x8
  struct UICommonButton_array *equipButtons; // x8
  UnityEngine_Object_o *baseCollider; // x21
  struct UnityEngine_Vector3_array *v81; // x8
  float v82; // s1
  float v83; // s2
  float v84; // s0
  int v85; // w10
  int v86; // w9
  int v87; // w8
  const MethodInfo *v88; // x2
  const MethodInfo *v89; // [xsp+8h] [xbp-B8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v90; // [xsp+18h] [xbp-A8h]
  Il2CppObject *entity; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o newTb; // [xsp+28h] [xbp-98h] BYREF
  int32_t newRange; // [xsp+34h] [xbp-8Ch] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17B18 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, item);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillMaster___, v7);
    sub_1BCAFF8(&DataManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v9);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    sub_1BCAFF8(&SkillInfo_TypeInfo, v12);
    sub_1BCAFF8(&StringLiteral_11812/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, v13);
    sub_1BCAFF8(&StringLiteral_6944/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/, v14);
    sub_1BCAFF8(&StringLiteral_20238/*"img_line_04"*/, v15);
    byte_4B17B18 = 1;
  }
  skillInfoList = 0LL;
  newTb.fields.z = 0.0;
  entity = 0LL;
  *(_QWORD *)&newTb.fields.x = 0LL;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( mode )
  {
    if ( !byte_4B16191 )
    {
      Master_object = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v17);
      byte_4B16191 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    explanationLabels = this->fields.explanationLabels;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)&this->fields.baseColliderSizes.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    this->fields.baseColliderSizes.fields.z = z;
    if ( !explanationLabels )
      goto LABEL_95;
    if ( !explanationLabels->max_length )
      goto LABEL_96;
    v22 = explanationLabels->m_Items[0];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11812/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, 0LL);
    if ( !v22 )
      goto LABEL_95;
    UILabel__set_text(v22, (System_String_o *)Master_object, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
    v90 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !item )
      goto LABEL_95;
    Master_object = ServantStatusListViewItem__GetEquipListCount(item, 0LL);
    if ( (int)Master_object >= 1 )
    {
      v24 = 0;
      do
      {
        baseSpriteSizes = this->fields.baseSpriteSizes;
        if ( !byte_4B16191 )
        {
          Master_object = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v17);
          byte_4B16191 = 1;
        }
        if ( !baseSpriteSizes )
          goto LABEL_95;
        if ( v24 >= baseSpriteSizes->max_length )
          goto LABEL_96;
        v26 = UnityEngine_Vector3_TypeInfo->static_fields;
        v27 = *(_QWORD *)&v26->zeroVector.fields.x;
        v28 = v26->zeroVector.fields.z;
        v29 = (char *)baseSpriteSizes + 12 * v24;
        *((_QWORD *)v29 + 4) = v27;
        *((float *)v29 + 10) = v28;
        skillViewCounts = this->fields.skillViewCounts;
        if ( !skillViewCounts )
          goto LABEL_95;
        if ( v24 >= skillViewCounts->max_length )
          goto LABEL_96;
        skillViewCounts->m_Items[v24 + 1] = 0;
        if ( v24 )
        {
          line2Sprites = this->fields.line2Sprites;
          if ( !line2Sprites )
            goto LABEL_95;
          if ( v24 >= line2Sprites->max_length )
            goto LABEL_96;
          v32 = line2Sprites->m_Items[v24];
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetDownloadCommonSprite(v32, (System_String_o *)StringLiteral_20238/*"img_line_04"*/, 0LL);
        }
        GrandServantStatusListViewItemDrawEquip__SetEquipIcon(this, v24, item, v23);
        GrandServantStatusListViewItemDrawEquip__SetEquipInfoLabel(this, v24, item, v33);
        GrandServantStatusListViewItemDrawEquip__SetEquipExpInfo(this, v24, item, v34);
        GrandServantStatusListViewItemDrawEquip__SetEquipLimitCount(this, v24, item, v35);
        ServantStatusListViewItem__GetEquipSkillInfoByIndex(item, v24, &skillInfoList, 0LL);
        SkillIconComponent = (GrandServantStatusListViewItemDrawEquip_o *)GrandServantStatusListViewItemDrawEquip__GetSkillIconComponent(
                                                                            this,
                                                                            v24,
                                                                            v36);
        Master_object = GrandServantStatusListViewItemDrawEquip__GetSkillInfoListNum(
                          SkillIconComponent,
                          v38,
                          skillInfoList,
                          (SkillIconComponent_array *)SkillIconComponent,
                          v39);
        lineSprites = this->fields.lineSprites;
        if ( !lineSprites )
          goto LABEL_95;
        if ( v24 >= lineSprites->max_length )
          goto LABEL_96;
        v41 = Master_object;
        v42 = (UnityEngine_Object_o *)lineSprites->m_Items[v24];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
        if ( (Master_object & 1) != 0 )
        {
          v43 = this->fields.lineSprites;
          if ( !v43 )
            goto LABEL_95;
          if ( v24 >= v43->max_length )
            goto LABEL_96;
          Master_object = (__int64)v43->m_Items[v24];
          if ( !Master_object )
            goto LABEL_95;
          Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
          if ( !Master_object )
            goto LABEL_95;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v41 > 0, 0LL);
        }
        newRange = 0;
        v44 = sub_1BCB244(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v44, 0LL);
        if ( v24 != 1 )
          goto LABEL_46;
        Master_object = ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill(item, 0LL);
        if ( (Master_object & 1) == 0 )
          goto LABEL_46;
        Value = ConstantMaster__getValue((System_String_o *)StringLiteral_6944/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/, 0LL);
        Master_object = (__int64)v90;
        if ( !v90 )
          goto LABEL_95;
        Master_object = DataMasterBase_object__object__int___TryGetEntity(
                          v90,
                          &entity,
                          Value,
                          (const MethodInfo_32C7E4C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( (Master_object & 1) != 0 )
        {
          if ( !v44 )
            goto LABEL_95;
          *(_DWORD *)(v44 + 16) = Value;
          Master_object = (__int64)entity;
          if ( !entity )
            goto LABEL_95;
          EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
          *(_QWORD *)(v44 + 40) = EffectExplanation;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v44 + 40), (int32_t)EffectExplanation, v47, v48);
          Master_object = (__int64)entity;
          if ( !entity )
            goto LABEL_95;
          Name = SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          *(_QWORD *)(v44 + 32) = Name;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v44 + 32), (int32_t)Name, v50, v51);
          v52 = 1;
        }
        else
        {
LABEL_46:
          if ( !v44 )
            goto LABEL_95;
          v52 = 0;
        }
        v53 = skillInfoList;
        v54 = *(System_String_o **)(v44 + 40);
        IsMine = ServantStatusListViewItem__get_IsMine(item, 0LL);
        IsNeedAddAdjust = GrandServantStatusListViewItemDrawEquip__IsNeedAddAdjust(
                            this,
                            v24,
                            v53,
                            0,
                            (SkillIconComponent_array *)SkillIconComponent,
                            &newRange,
                            v52,
                            v54,
                            IsMine,
                            v89);
        GrandServantStatusListViewItemDrawEquip__SetReinforce(
          this,
          v24,
          item,
          IsNeedAddAdjust,
          newRange,
          &newRange,
          v57);
        baseSizes = this->fields.baseSizes;
        if ( !baseSizes )
          goto LABEL_95;
        if ( v24 >= baseSizes->max_length )
          goto LABEL_96;
        v59 = (float *)((char *)baseSizes + 12 * v24);
        v60 = newRange;
        v61 = v59[8];
        v62 = v59[9] + (float)newRange;
        y = this->fields.baseColliderSizes.fields.y;
        v64 = this->fields.baseSpriteSizes;
        if ( v61 == INFINITY )
          v17 = 0x80000000LL;
        else
          v17 = (unsigned int)(int)v61;
        if ( v62 == INFINITY )
          v65 = 0x80000000;
        else
          v65 = (int)v62;
        this->fields.baseColliderSizes.fields.x = (float)(int)v17;
        this->fields.baseColliderSizes.fields.y = y + (float)v65;
        if ( !v64 )
          goto LABEL_95;
        if ( v24 >= v64->max_length )
          goto LABEL_96;
        v66 = (float *)((char *)v64 + 12 * v24);
        v67 = v66[9] + (float)v65;
        v66[8] = (float)(int)v17;
        v66[9] = v67;
        Master_object = (__int64)this->fields.baseSprite;
        if ( !Master_object )
          goto LABEL_95;
        UIWidget__set_width((UIWidget_o *)Master_object, v17, 0LL);
        Master_object = (__int64)this->fields.baseSprite;
        if ( !Master_object )
          goto LABEL_95;
        UIWidget__set_height((UIWidget_o *)Master_object, v65, 0LL);
        titleBasePositions = this->fields.titleBasePositions;
        if ( !titleBasePositions )
          goto LABEL_95;
        if ( v24 >= titleBasePositions->max_length )
          goto LABEL_96;
        titleSprites = this->fields.titleSprites;
        v70 = v60 >= 0 ? v60 : v60 + 1;
        if ( !titleSprites )
          goto LABEL_95;
        if ( v24 >= titleSprites->max_length )
          goto LABEL_96;
        Master_object = (__int64)titleSprites->m_Items[v24];
        if ( !Master_object )
          goto LABEL_95;
        v71 = (float *)((char *)titleBasePositions + 12 * v24);
        v72 = v71[8];
        v73 = v71[9];
        v74 = v71[10];
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_95;
        v75 = (float)(v70 >> 1);
        v95.fields.y = v73 + v75;
        v95.fields.x = v72;
        v95.fields.z = v74;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, v95, 0LL);
        skillBasePositions = this->fields.skillBasePositions;
        if ( !skillBasePositions )
          goto LABEL_95;
        if ( v24 >= skillBasePositions->max_length )
          goto LABEL_96;
        v78 = (float *)((char *)skillBasePositions + 12 * v24);
        v96.fields.z = v78[10];
        v96.fields.y = v78[9] + v75;
        newTb.fields.x = v78[8];
        v96.fields.x = newTb.fields.x;
        newTb.fields.y = v96.fields.y;
        newTb.fields.z = v96.fields.z;
        GrandServantStatusListViewItemDrawEquip__SetSkillInfo(
          this,
          v24,
          skillInfoList,
          item,
          v96,
          &newTb,
          v52,
          (SkillInfo_o *)v44,
          v76);
        if ( item->fields.isEquipChangeMode )
        {
          v17 = 1LL;
        }
        else
        {
          Master_object = ServantStatusListViewItem__IsEquipByIndex(item, v24, 0LL);
          v17 = Master_object & 1;
        }
        equipButtons = this->fields.equipButtons;
        if ( !equipButtons )
          goto LABEL_95;
        if ( v24 >= equipButtons->max_length )
          goto LABEL_96;
        Master_object = (__int64)equipButtons->m_Items[v24];
        if ( !Master_object )
          goto LABEL_95;
        UICommonButton__SetColliderEnable((UICommonButton_o *)Master_object, v17, 1, 0LL);
        ++v24;
        Master_object = ServantStatusListViewItem__GetEquipListCount(item, 0LL);
      }
      while ( v24 < (int)Master_object );
    }
    baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL);
    if ( (Master_object & 1) != 0 )
    {
      Master_object = (__int64)this->fields.baseCollider;
      if ( !Master_object )
        goto LABEL_95;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Master_object, this->fields.baseColliderSizes, 0LL);
    }
    v81 = this->fields.baseSpriteSizes;
    if ( !v81 )
LABEL_95:
      sub_1BCB254(Master_object, v17);
    if ( v81->max_length < 3 )
LABEL_96:
      sub_1BCB25C(Master_object, v17, v18);
    Master_object = (__int64)this->fields.baseSprite;
    if ( !Master_object )
      goto LABEL_95;
    v82 = v81->m_Items[1].fields.z;
    v83 = v81->m_Items[2].fields.z;
    v84 = v81->m_Items[0].fields.z;
    v85 = (int)v82;
    if ( v82 == INFINITY )
      v85 = 0x80000000;
    if ( v83 == INFINITY )
      v86 = 0x80000000;
    else
      v86 = (int)v83;
    v87 = (int)v84 - 7;
    if ( v84 == INFINITY )
      v87 = 2147483641;
    UIWidget__set_height((UIWidget_o *)Master_object, v87 + v85 + v86, 0LL);
    GrandServantStatusListViewItemDrawEquip__SetPosition(this, item, v88);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantStatusListViewItemDrawEquip__SetPosition(
        GrandServantStatusListViewItemDrawEquip_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  GrandServantStatusListViewItemDrawEquip_o *v4; // x20
  struct UISprite_array *titleSprites; // x8
  float v6; // s0
  float v7; // s2
  struct UnityEngine_Vector3_array *baseSpriteSizes; // x8
  struct UISprite_array *v9; // x9
  float z; // s11
  float v11; // s12
  float v12; // s10
  float v13; // s8
  float v14; // s9
  struct UISprite_array *v15; // x8
  float v16; // s0
  float v17; // s2
  struct UnityEngine_Vector3_array *v18; // x8
  struct UISprite_array *v19; // x9
  float v20; // s9
  float v21; // s8
  float v22; // s10
  struct UISprite_array *v23; // x8
  float v24; // s0
  float v25; // s2
  struct UnityEngine_Vector3_array *v26; // x8
  struct UISprite_array *v27; // x9
  float v28; // s9
  float v29; // s8
  float v30; // s11
  const MethodInfo *v31; // x2
  int32_t v32; // w21
  struct UnityEngine_GameObject_array *reinforceObject; // x8
  GrandServantStatusListViewItemDrawEquip_o *v34; // x22
  float v35; // s0
  float v36; // s1
  float v37; // s2
  struct UnityEngine_Vector3_array *v38; // x9
  float v39; // s3
  float v40; // s13
  float v41; // s0
  struct System_Int32_array *skillViewCounts; // x8
  float v43; // s12
  float v44; // s9
  __int64 v45; // x29
  int v46; // w25
  GrandServantStatusListViewItemDrawEquip_o **v47; // x27
  float v48; // s10
  float v49; // s11
  float v50; // s1
  float v51; // s0
  float v52; // s14
  float v53; // s2
  float v54; // s15
  float v55; // s8
  GrandServantStatusListViewItemDrawEquip_o *v56; // x23
  struct UnityEngine_GameObject_array *v57; // x8
  float v58; // [xsp+0h] [xbp-B0h]
  float v59; // [xsp+4h] [xbp-ACh]
  float y; // [xsp+8h] [xbp-A8h]
  float value; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B17B19 & 1) == 0 )
  {
    this = (GrandServantStatusListViewItemDrawEquip_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, item);
    byte_4B17B19 = 1;
  }
  titleSprites = v4->fields.titleSprites;
  if ( !titleSprites )
    goto LABEL_79;
  if ( !titleSprites->max_length )
    goto LABEL_80;
  this = (GrandServantStatusListViewItemDrawEquip_o *)titleSprites->m_Items[0];
  if ( !this )
    goto LABEL_79;
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_79;
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  baseSpriteSizes = v4->fields.baseSpriteSizes;
  if ( !baseSpriteSizes )
    goto LABEL_79;
  if ( baseSpriteSizes->max_length < 3 )
    goto LABEL_80;
  v9 = v4->fields.titleSprites;
  if ( !v9 )
    goto LABEL_79;
  if ( !v9->max_length )
    goto LABEL_80;
  this = (GrandServantStatusListViewItemDrawEquip_o *)v9->m_Items[0];
  if ( !this )
    goto LABEL_79;
  z = baseSpriteSizes->m_Items[1].fields.z;
  v11 = baseSpriteSizes->m_Items[2].fields.z;
  v12 = baseSpriteSizes->m_Items[0].fields.z;
  v13 = v6;
  v14 = v7;
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_79;
  v62.fields.y = (float)((float)((float)(z * 0.5) + (float)(v11 * 0.5)) + (float)(v12 * 0.5)) + -4.0;
  v62.fields.x = v13;
  v62.fields.z = v14;
  y = v62.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v62, 0LL);
  v15 = v4->fields.titleSprites;
  if ( !v15 )
    goto LABEL_79;
  if ( v15->max_length <= 1 )
    goto LABEL_80;
  this = (GrandServantStatusListViewItemDrawEquip_o *)v15->m_Items[1];
  if ( !this )
    goto LABEL_79;
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_79;
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v18 = v4->fields.baseSpriteSizes;
  if ( !v18 )
    goto LABEL_79;
  if ( !v18->max_length )
    goto LABEL_80;
  v19 = v4->fields.titleSprites;
  if ( !v19 )
    goto LABEL_79;
  if ( v19->max_length <= 1 )
    goto LABEL_80;
  this = (GrandServantStatusListViewItemDrawEquip_o *)v19->m_Items[1];
  if ( !this )
    goto LABEL_79;
  v20 = v18->m_Items[0].fields.z;
  v21 = v16;
  v22 = v17;
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_79;
  v63.fields.z = v22;
  v63.fields.y = (float)(y - v20) + 6.0;
  v63.fields.x = v21;
  v59 = v63.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v63, 0LL);
  v23 = v4->fields.titleSprites;
  if ( !v23 )
    goto LABEL_79;
  if ( v23->max_length <= 2 )
    goto LABEL_80;
  this = (GrandServantStatusListViewItemDrawEquip_o *)v23->m_Items[2];
  if ( !this )
    goto LABEL_79;
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_79;
  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v26 = v4->fields.baseSpriteSizes;
  if ( !v26 )
    goto LABEL_79;
  if ( v26->max_length <= 1 )
    goto LABEL_80;
  v27 = v4->fields.titleSprites;
  if ( !v27 )
    goto LABEL_79;
  if ( v27->max_length <= 2 )
    goto LABEL_80;
  this = (GrandServantStatusListViewItemDrawEquip_o *)v27->m_Items[2];
  if ( !this )
    goto LABEL_79;
  v28 = v26->m_Items[1].fields.z;
  v29 = v24;
  v30 = v25;
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_79;
  v64.fields.z = v30;
  v64.fields.y = (float)(v59 - v28) + 6.0;
  v64.fields.x = v29;
  v58 = v64.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v64, 0LL);
  if ( !item )
    goto LABEL_79;
  if ( ServantStatusListViewItem__GetEquipListCount(item, 0LL) >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      this = (GrandServantStatusListViewItemDrawEquip_o *)GrandServantStatusListViewItemDrawEquip__GetSkillBase(
                                                            v4,
                                                            v32,
                                                            v31);
      reinforceObject = v4->fields.reinforceObject;
      if ( !reinforceObject )
        goto LABEL_79;
      if ( v32 >= reinforceObject->max_length )
        goto LABEL_80;
      v34 = this;
      this = (GrandServantStatusListViewItemDrawEquip_o *)reinforceObject->m_Items[v32];
      if ( !this )
        goto LABEL_79;
      this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0LL);
      if ( !this )
        goto LABEL_79;
      *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      v38 = v4->fields.baseSpriteSizes;
      if ( !v38 )
        goto LABEL_79;
      if ( v32 >= v38->max_length )
        goto LABEL_80;
      v39 = v35;
      v40 = v36;
      v41 = y;
      if ( v32 == 1 )
        v41 = v59;
      if ( v32 == 2 )
        v41 = v58;
      if ( v34 )
        break;
LABEL_77:
      if ( ++v32 >= ServantStatusListViewItem__GetEquipListCount(item, 0LL) )
        return;
    }
    skillViewCounts = v4->fields.skillViewCounts;
    value = v39;
    if ( !skillViewCounts )
      goto LABEL_79;
    v43 = v37;
    v44 = v41 + -330.0;
    v45 = 0LL;
    v46 = 0;
    v47 = (GrandServantStatusListViewItemDrawEquip_o **)(&v34->fields.dispMode + 2 * v32);
    v48 = (float)(v41 - v38->m_Items[v32].fields.z) + 23.0;
    v49 = v41 + -220.0;
    while ( 1 )
    {
      if ( v32 >= skillViewCounts->max_length )
        goto LABEL_80;
      if ( (int)v45 >= skillViewCounts->m_Items[v32 + 1] )
      {
        v57 = v4->fields.reinforceObject;
        if ( !v57 )
          goto LABEL_79;
        if ( v32 < v57->max_length )
        {
          this = (GrandServantStatusListViewItemDrawEquip_o *)v57->m_Items[v32];
          if ( this )
          {
            this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL);
            if ( this )
            {
              v66.fields.x = value;
              v66.fields.y = v40;
              v66.fields.z = v43;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v66, 0LL);
              goto LABEL_77;
            }
          }
LABEL_79:
          sub_1BCB254(this, item);
        }
LABEL_80:
        sub_1BCB25C(this, item, method);
      }
      if ( (unsigned int)v32 >= LODWORD(v34->fields.m_CancellationTokenSource) )
        goto LABEL_80;
      this = *v47;
      if ( !*v47 )
        goto LABEL_79;
      this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0LL);
      if ( !this )
        goto LABEL_79;
      *(UnityEngine_Vector3_o *)(&v50 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      v52 = v51;
      v54 = v53;
      if ( (_DWORD)v45 == 1 )
      {
        this = (GrandServantStatusListViewItemDrawEquip_o *)GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillExplanationLabel(
                                                              v4,
                                                              v32,
                                                              method);
        if ( v32 == 1 )
        {
          v56 = this;
          this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill(
                                                                item,
                                                                0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)v56,
                                                                  0LL,
                                                                  0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v56 )
                goto LABEL_79;
              v46 = v46 - HIDWORD(v56->fields.expBases) - 50;
            }
          }
        }
        v55 = v44;
      }
      else
      {
        if ( (_DWORD)v45 )
        {
          v55 = v50;
          goto LABEL_67;
        }
        v55 = v49;
      }
      v40 = v48;
LABEL_67:
      if ( (unsigned int)v45 >= LODWORD(v34->fields.m_CancellationTokenSource) )
        goto LABEL_80;
      this = (GrandServantStatusListViewItemDrawEquip_o *)*((_QWORD *)&v34->fields.dispMode + v45);
      if ( this )
      {
        this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
        if ( this )
        {
          v65.fields.y = v55 + (float)v46;
          v65.fields.x = v52;
          v65.fields.z = v54;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v65, 0LL);
          skillViewCounts = v4->fields.skillViewCounts;
          ++v45;
          if ( skillViewCounts )
            continue;
        }
      }
      goto LABEL_79;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantStatusListViewItemDrawEquip__SetReinforce(
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
  __int64 v16; // x2
  struct UnityEngine_GameObject_array *reinforceObject; // x8
  int v18; // w24
  struct UICommonButton_array *reinforceButton; // x8
  struct UnityEngine_GameObject_array *v20; // x8
  UnityEngine_GameObject_o *v21; // x0
  int32_t v22; // w8

  if ( !item )
    goto LABEL_22;
  v8 = this;
  EquipServantByIndex = ServantStatusListViewItem__GetEquipServantByIndex(item, index, 0LL);
  if ( !EquipServantByIndex )
    goto LABEL_21;
  if ( !item->fields._IsDisplayCombineButton_k__BackingField )
    goto LABEL_21;
  v14 = EquipServantByIndex;
  EquipLevelByIndex = ServantStatusListViewItem__GetEquipLevelByIndex(item, index, 0LL);
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipMaxLevelByIndex(
                                                        item,
                                                        index,
                                                        0LL);
  if ( EquipLevelByIndex >= (int)this )
  {
    this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipLimitCountByIndex(
                                                          item,
                                                          index,
                                                          0LL);
    if ( (int)this >= v14->fields.limitMax )
      goto LABEL_21;
  }
  reinforceObject = v8->fields.reinforceObject;
  v18 = isNeedAddAdjust ? 42 : 30;
  if ( !reinforceObject )
    goto LABEL_22;
  if ( reinforceObject->max_length <= index )
    goto LABEL_23;
  this = (GrandServantStatusListViewItemDrawEquip_o *)reinforceObject->m_Items[index];
  if ( !this )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  reinforceButton = v8->fields.reinforceButton;
  if ( !reinforceButton )
    goto LABEL_22;
  if ( reinforceButton->max_length <= index )
    goto LABEL_23;
  this = (GrandServantStatusListViewItemDrawEquip_o *)reinforceButton->m_Items[index];
  if ( !this
    || (BYTE1(this->fields.nameRangeLabels) = 1,
        UICommonButton__SetEnable((UICommonButton_o *)this, item->fields._CanMoveCombine_k__BackingField, 0LL),
        (v20 = v8->fields.reinforceObject) == 0LL) )
  {
LABEL_22:
    sub_1BCB254(this, *(_QWORD *)&index);
  }
  if ( v20->max_length <= index )
LABEL_23:
    sub_1BCB25C(this, *(_QWORD *)&index, v16);
  range += v18;
  v21 = v20->m_Items[index];
  if ( range >= 0 )
    v22 = range;
  else
    v22 = range + 1;
  GameObjectExtensions__SetLocalPositionY(v21, (float)-(v22 >> 1), 0LL);
LABEL_21:
  *newRange = range;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantStatusListViewItemDrawEquip__SetSkillInfo(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_GameObject_array *SkillBase; // x25
  const MethodInfo *v22; // x2
  UILabel_array *EquipSkillExplanationLabelList; // x26
  const MethodInfo *v24; // x2
  UnityEngine_GameObject_o *SkillIconComponent; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  int max_length; // w8
  UnityEngine_GameObject_o *v29; // x22
  unsigned int v30; // w21
  il2cpp_array_size_t v31; // w9
  SkillInfo_o *v32; // x23
  UnityEngine_GameObject_c **v33; // x22
  void **v34; // x22
  UnityEngine_GameObject_o *v35; // t1
  const MethodInfo *v36; // x2
  UnityEngine_GameObject_o *v37; // x28
  UnityEngine_GameObject_c **v38; // x27
  void **v39; // x27
  UnityEngine_GameObject_o *v40; // t1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v42; // x19
  __int64 v43; // x28
  int32_t v44; // w28
  bool v45; // w28
  UILabel_o *v46; // x8
  int32_t mHeight; // w19
  struct System_Int32_array *skillPitches; // x8
  int v49; // w8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  __int64 v51; // x19
  __int64 v52; // x28
  struct System_Int32_array *skillViewCounts; // x8
  int32_t v54; // w19
  UnityEngine_Object_o *v55; // x19
  const MethodInfo *v56; // x2
  int32_t id; // w1
  UnityEngine_Object_o *v58; // x19
  struct System_String_StaticFields *p_title; // x8
  _BOOL4 value; // [xsp+Ch] [xbp-B4h]
  SkillInfo_o *v61; // [xsp+10h] [xbp-B0h]
  SkillInfo_array *v62; // [xsp+18h] [xbp-A8h]
  UnityEngine_GameObject_o *v63; // [xsp+20h] [xbp-A0h]
  UnityEngine_GameObject_o *v64; // [xsp+30h] [xbp-90h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  z = tb.fields.z;
  y = tb.fields.y;
  x = tb.fields.x;
  v15 = skillInfoList;
  if ( (byte_4B17B1F & 1) == 0 )
  {
    sub_1BCAFF8(&GrandServantStatusListViewItemDrawEquip_TypeInfo, *(_QWORD *)&index);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v17);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1BCAFF8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v19);
    sub_1BCAFF8(&string_TypeInfo, v20);
    byte_4B17B1F = 1;
  }
  SkillBase = GrandServantStatusListViewItemDrawEquip__GetSkillBase(this, index, (const MethodInfo *)skillInfoList);
  EquipSkillExplanationLabelList = GrandServantStatusListViewItemDrawEquip__GetEquipSkillExplanationLabelList(
                                     this,
                                     index,
                                     v22);
  SkillIconComponent = (UnityEngine_GameObject_o *)GrandServantStatusListViewItemDrawEquip__GetSkillIconComponent(
                                                     this,
                                                     index,
                                                     v24);
  newTb->fields.x = x;
  newTb->fields.y = y;
  newTb->fields.z = z;
  if ( !SkillBase )
LABEL_80:
    sub_1BCB254(SkillIconComponent, v26);
  max_length = SkillBase->max_length;
  v61 = changeSkillInfo;
  if ( max_length >= 1 )
  {
    value = changeSkillInfo != 0LL && isChangeEquipSkill;
    v29 = SkillIconComponent;
    v30 = 0;
    v62 = v15;
    v64 = SkillIconComponent;
    while ( 1 )
    {
      if ( !v15 )
        goto LABEL_26;
      v31 = v15->max_length;
      if ( (int)v30 >= (int)v31 )
        goto LABEL_26;
      if ( v30 >= v31 )
        goto LABEL_81;
      v32 = v15->m_Items[v30];
      if ( !v32 || v32->fields.id < 1 )
      {
LABEL_26:
        v45 = 0;
        goto LABEL_27;
      }
      if ( v30 >= max_length )
        goto LABEL_81;
      SkillIconComponent = SkillBase->m_Items[v30];
      if ( !SkillIconComponent )
        goto LABEL_80;
      SkillIconComponent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(SkillIconComponent, 0LL);
      if ( !SkillIconComponent )
        goto LABEL_80;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SkillIconComponent, *newTb, 0LL);
      if ( !v29 )
        goto LABEL_80;
      if ( v30 >= LODWORD(v29[1].klass) )
        goto LABEL_81;
      v33 = &v29->klass + (int)v30;
      v35 = (UnityEngine_GameObject_o *)v33[4];
      v34 = (void **)(v33 + 4);
      SkillIconComponent = v35;
      if ( !v35 )
        goto LABEL_80;
      SkillIconComponent__Set((SkillIconComponent_o *)SkillIconComponent, v32->fields.id, 0LL);
      SkillIconComponent = (UnityEngine_GameObject_o *)GrandServantStatusListViewItemDrawEquip__GetSkillTitleRangeLabel(
                                                         this,
                                                         index,
                                                         v36);
      if ( !SkillIconComponent )
        goto LABEL_80;
      v37 = SkillIconComponent;
      if ( v30 >= LODWORD(SkillIconComponent[1].klass) )
        goto LABEL_81;
      v38 = &SkillIconComponent->klass + (int)v30;
      v40 = (UnityEngine_GameObject_o *)v38[4];
      v39 = (void **)(v38 + 4);
      SkillIconComponent = v40;
      if ( !v40 )
        goto LABEL_80;
      UIRangeLabel__Set((UIRangeLabel_o *)SkillIconComponent, v32->fields.title, 0LL, 1, 0, 0, 0LL);
      if ( !item )
        goto LABEL_80;
      userSvtEntity = item->fields.userSvtEntity;
      v63 = v37;
      if ( userSvtEntity )
        break;
      servantLeaderInfo = item->fields.servantLeaderInfo;
      if ( servantLeaderInfo )
      {
        v52 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v51 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v68.fields.currentCryptoKey = v52;
        *(_QWORD *)&v68.fields.fakeValue = v51;
        SkillIconComponent = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                           v68,
                                                           0LL);
        if ( !item->fields.servantLeaderInfo )
          goto LABEL_80;
        v44 = (int)SkillIconComponent;
        SkillIconComponent = (UnityEngine_GameObject_o *)ServantLeaderInfo__getRarity(
                                                           item->fields.servantLeaderInfo,
                                                           0LL);
        goto LABEL_45;
      }
      v54 = -1;
      v44 = -1;
LABEL_48:
      SkillIconComponent = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !SkillIconComponent )
        goto LABEL_80;
      SkillIconComponent = (UnityEngine_GameObject_o *)PartyOrganizationUtility__IsRarityRestriction_33755820(
                                                         (PartyOrganizationUtility_o *)SkillIconComponent,
                                                         v44,
                                                         v54,
                                                         v32->fields.id,
                                                         v32->fields.lv,
                                                         0LL);
      if ( ((unsigned __int8)SkillIconComponent & 1) != 0 )
      {
        if ( v30 >= LODWORD(v64[1].klass) )
          goto LABEL_81;
        SkillIconComponent = (UnityEngine_GameObject_o *)*v34;
        if ( !*v34 )
          goto LABEL_80;
        SkillIconComponent__SetInvalidColor((SkillIconComponent_o *)SkillIconComponent, this->fields.ColorInvalid, 0LL);
        if ( v30 >= LODWORD(v63[1].klass) )
          goto LABEL_81;
        SkillIconComponent = (UnityEngine_GameObject_o *)*v39;
        if ( !*v39 )
          goto LABEL_80;
        UIRangeLabel__set_color((UIRangeLabel_o *)SkillIconComponent, this->fields.ColorInvalid, 0LL);
        if ( !EquipSkillExplanationLabelList )
          goto LABEL_80;
        if ( v30 >= EquipSkillExplanationLabelList->max_length )
          goto LABEL_81;
        SkillIconComponent = (UnityEngine_GameObject_o *)EquipSkillExplanationLabelList->m_Items[v30];
        if ( !SkillIconComponent )
          goto LABEL_80;
        UIWidget__set_color((UIWidget_o *)SkillIconComponent, this->fields.ColorInvalid, 0LL);
      }
      if ( v30 )
      {
        v15 = v62;
        v29 = v64;
      }
      else
      {
        v15 = v62;
        v29 = v64;
        v55 = (UnityEngine_Object_o *)GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillIconComponent(
                                        this,
                                        index,
                                        v27);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        SkillIconComponent = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v55, 0LL, 0LL);
        if ( ((unsigned __int8)SkillIconComponent & 1) != 0 )
        {
          if ( !v55 )
            goto LABEL_80;
          SkillIconComponent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v55, 0LL);
          if ( !SkillIconComponent )
            goto LABEL_80;
          UnityEngine_GameObject__SetActive(SkillIconComponent, value, 0LL);
          if ( value )
            id = v61->fields.id;
          else
            id = 0;
          SkillIconComponent__Set((SkillIconComponent_o *)v55, id, 0LL);
        }
        v58 = (UnityEngine_Object_o *)GrandServantStatusListViewItemDrawEquip__GetEquipChangeSkillTitleRangeLabel(
                                        this,
                                        index,
                                        v56);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        SkillIconComponent = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
        if ( ((unsigned __int8)SkillIconComponent & 1) != 0 )
        {
          if ( !v58 )
            goto LABEL_80;
          SkillIconComponent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v58, 0LL);
          if ( !SkillIconComponent )
            goto LABEL_80;
          UnityEngine_GameObject__SetActive(SkillIconComponent, value, 0LL);
          p_title = (struct System_String_StaticFields *)&v61->fields.title;
          if ( !value )
            p_title = string_TypeInfo->static_fields;
          v45 = 1;
          UIRangeLabel__Set((UIRangeLabel_o *)v58, p_title->Empty, 0LL, 1, 0, 0, 0LL);
          goto LABEL_27;
        }
      }
      v45 = 1;
LABEL_27:
      if ( v30 >= SkillBase->max_length )
        goto LABEL_81;
      SkillIconComponent = SkillBase->m_Items[v30];
      if ( !SkillIconComponent )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive(SkillIconComponent, v45, 0LL);
      if ( !EquipSkillExplanationLabelList )
        goto LABEL_80;
      if ( v30 >= EquipSkillExplanationLabelList->max_length )
        goto LABEL_81;
      v46 = EquipSkillExplanationLabelList->m_Items[v30];
      if ( !v46 )
        goto LABEL_80;
      SkillIconComponent = (UnityEngine_GameObject_o *)GrandServantStatusListViewItemDrawEquip_TypeInfo;
      mHeight = v46->fields.mHeight;
      if ( !GrandServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GrandServantStatusListViewItemDrawEquip_TypeInfo);
        SkillIconComponent = (UnityEngine_GameObject_o *)GrandServantStatusListViewItemDrawEquip_TypeInfo;
      }
      skillPitches = this->fields.skillPitches;
      if ( !skillPitches )
        goto LABEL_80;
      if ( skillPitches->max_length <= index )
        goto LABEL_81;
      v49 = skillPitches->m_Items[index + 1];
      ++v30;
      if ( *(_DWORD *)(*(_QWORD *)&SkillIconComponent[7].fields.m_CachedPtr + 4LL) + mHeight >= v49 )
        v49 = *(_DWORD *)(*(_QWORD *)&SkillIconComponent[7].fields.m_CachedPtr + 4LL) + mHeight;
      newTb->fields.y = newTb->fields.y - (float)v49;
      max_length = SkillBase->max_length;
      if ( (int)v30 >= max_length )
        return;
    }
    v43 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v42 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v67.fields.currentCryptoKey = v43;
    *(_QWORD *)&v67.fields.fakeValue = v42;
    SkillIconComponent = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                       v67,
                                                       0LL);
    if ( !item->fields.userSvtEntity )
      goto LABEL_80;
    v44 = (int)SkillIconComponent;
    SkillIconComponent = (UnityEngine_GameObject_o *)UserServantEntity__getRarity(item->fields.userSvtEntity, 0LL);
LABEL_45:
    skillViewCounts = this->fields.skillViewCounts;
    if ( !skillViewCounts )
      goto LABEL_80;
    if ( skillViewCounts->max_length <= index )
LABEL_81:
      sub_1BCB25C(SkillIconComponent, v26, v27);
    v54 = (int)SkillIconComponent;
    skillViewCounts->m_Items[index + 1] = v30 + 1;
    goto LABEL_48;
  }
}