void __fastcall GrandServantStatusListViewItemDrawEquip___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFD731 & 1) == 0 )
  {
    sub_1BC3008(&GrandServantStatusListViewItemDrawEquip_TypeInfo, v1);
    byte_4AFD731 = 1;
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

  if ( (byte_4AFD730 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&int___TypeInfo, v3);
    sub_1BC3008(&SkillInfoObject___TypeInfo, v4);
    sub_1BC3008(&UnityEngine_Vector3___TypeInfo, v5);
    byte_4AFD730 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct SkillInfoObject_array *)sub_1BC30B0(
                                         SkillInfoObject___TypeInfo,
                                         (unsigned int)v6->static_fields->GrandSvtEquipMax);
  this->fields.skillInfoObjectList = v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.skillInfoObjectList, (int32_t)v7, v8, v9);
  v10 = (struct System_Int32_array *)sub_1BC30B0(int___TypeInfo, 3LL);
  this->fields.skillPitches = v10;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.skillPitches, (int32_t)v10, v11, v12);
  v13 = (struct UnityEngine_Vector3_array *)sub_1BC30B0(UnityEngine_Vector3___TypeInfo, 3LL);
  this->fields.baseSizes = v13;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseSizes, (int32_t)v13, v14, v15);
  v16 = (struct UnityEngine_Vector3_array *)sub_1BC30B0(UnityEngine_Vector3___TypeInfo, 3LL);
  this->fields.titleBasePositions = v16;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.titleBasePositions, (int32_t)v16, v17, v18);
  v19 = (struct UnityEngine_Vector3_array *)sub_1BC30B0(UnityEngine_Vector3___TypeInfo, 3LL);
  this->fields.skillBasePositions = v19;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.skillBasePositions, (int32_t)v19, v20, v21);
  v22 = (struct UnityEngine_Vector3_array *)sub_1BC30B0(UnityEngine_Vector3___TypeInfo, 3LL);
  this->fields.baseSpriteSizes = v22;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseSpriteSizes, (int32_t)v22, v23, v24);
  this->fields.ColorInvalid = (struct UnityEngine_Color_o)xmmword_BDF150;
  this->fields.ColorCostZero = UnityEngine_Color__HSVToRGB_69955876(0.0, 0.0, 0.5, 1, 0LL);
  this->fields.ColorCost = UnityEngine_Color__HSVToRGB_69955876(0.0, 0.0, 1.0, 1, 0LL);
  v25 = (struct System_Int32_array *)sub_1BC30B0(int___TypeInfo, 3LL);
  this->fields.skillViewCounts = v25;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.skillViewCounts, (int32_t)v25, v26, v27);
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
    sub_1BC3264(this, method);
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
      sub_1BC326C(this, method, v2);
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
    sub_1BC326C(this, *(_QWORD *)&index, method);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1BC3264(this, index);
  return v4->fields.equipSkillExplanationLabelList;
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

  if ( (byte_4AFD72B & 1) == 0 )
  {
    this = (GrandServantStatusListViewItemDrawEquip_o *)sub_1BC3008(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          *(_QWORD *)&index);
    byte_4AFD72B = 1;
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
    sub_1BC3264(this, *(_QWORD *)&index);
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v10, 0LL);
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
    sub_1BC326C(this, *(_QWORD *)&index, method);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1BC3264(this, index);
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
    sub_1BC326C(this, *(_QWORD *)&index, method);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1BC3264(this, index);
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
            sub_1BC326C(IsNullOrEmpty, v8, v9);
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
    sub_1BC3264(IsNullOrEmpty, v8);
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
    sub_1BC326C(this, *(_QWORD *)&index, method);
  v4 = skillInfoObjectList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1BC3264(this, index);
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
        const MethodInfo *method)
{
  UILabel_array *EquipSkillExplanationLabelList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  UILabel_array *v16; // x29
  char v17; // w27
  unsigned __int64 v18; // x28
  UILabel_o **m_Items; // x15
  unsigned __int64 max_length; // x8
  SkillInfo_o *v21; // x8
  GrandServantStatusListViewItemDrawEquip_c *v22; // x0
  UILabel_o *v23; // x25
  System_String_o *explanation; // x26
  UILabel_o **v25; // x24
  UILabel_o *v26; // x8
  struct System_Int32_array *skillPitches; // x9
  int32_t mHeight; // w12
  char *v29; // x8
  _DWORD *v30; // x8
  int v31; // w11
  int v32; // t1
  int32_t v33; // w10
  int v34; // w9
  __int64 v35; // x10
  SkillInfo_o *v36; // x10
  UILabel_array *v38; // [xsp+0h] [xbp-70h]

  if ( (byte_4AFD72E & 1) == 0 )
  {
    sub_1BC3008(&GrandServantStatusListViewItemDrawEquip_TypeInfo, *(_QWORD *)&index);
    byte_4AFD72E = 1;
  }
  *newRange = range;
  EquipSkillExplanationLabelList = GrandServantStatusListViewItemDrawEquip__GetEquipSkillExplanationLabelList(
                                     this,
                                     index,
                                     (const MethodInfo *)skillInfoList);
  if ( !equipSkillIcon )
LABEL_31:
    sub_1BC3264(EquipSkillExplanationLabelList, v14);
  if ( (int)equipSkillIcon->max_length >= 1 )
  {
    v16 = EquipSkillExplanationLabelList;
    v17 = 0;
    v18 = 0LL;
    m_Items = EquipSkillExplanationLabelList->m_Items;
    v38 = EquipSkillExplanationLabelList;
    while ( 1 )
    {
      if ( skillInfoList )
      {
        max_length = skillInfoList->max_length;
        if ( (__int64)v18 < (int)max_length )
        {
          if ( v18 >= max_length )
            goto LABEL_30;
          v21 = skillInfoList->m_Items[v18];
          if ( v21 )
          {
            if ( v21->fields.id >= 1 )
            {
              if ( !v16 )
                goto LABEL_31;
              if ( v18 >= v16->max_length )
                goto LABEL_30;
              v22 = GrandServantStatusListViewItemDrawEquip_TypeInfo;
              v23 = m_Items[v18];
              explanation = v21->fields.explanation;
              v25 = m_Items;
              if ( !GrandServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(GrandServantStatusListViewItemDrawEquip_TypeInfo);
                v22 = GrandServantStatusListViewItemDrawEquip_TypeInfo;
                v16 = v38;
              }
              EquipSkillExplanationLabelList = (UILabel_array *)WrapControlText__textAdjust(
                                                                  v23,
                                                                  explanation,
                                                                  v22->static_fields->DetailFontSize,
                                                                  v22->static_fields->DetailFontSize,
                                                                  0LL);
              if ( v18 >= v16->max_length )
LABEL_30:
                sub_1BC326C(EquipSkillExplanationLabelList, v14, v15);
              v26 = v25[v18];
              if ( !v26 )
                goto LABEL_31;
              skillPitches = this->fields.skillPitches;
              if ( !skillPitches )
                goto LABEL_31;
              if ( skillPitches->max_length <= index )
                goto LABEL_30;
              mHeight = v26->fields.mHeight;
              m_Items = v25;
              v29 = (char *)skillPitches + 4 * index;
              v32 = *((_DWORD *)v29 + 8);
              v30 = v29 + 32;
              v31 = v32;
              v33 = *newRange;
              v34 = GrandServantStatusListViewItemDrawEquip_TypeInfo->static_fields->AdjustHeight + mHeight;
              if ( v34 >= v32 )
              {
                *newRange = v33 + v34;
                v35 = *(_QWORD *)&skillInfoList->max_length;
                if ( v18 == (_DWORD)v35 - 1 )
                  goto LABEL_25;
                if ( v18 + 1 >= (unsigned int)v35 )
                  goto LABEL_30;
                v36 = skillInfoList->m_Items[v18 + 1];
                if ( !v36 || v36->fields.id <= 0 )
LABEL_25:
                  v17 |= v34 - *v30 > 10;
              }
              else
              {
                *newRange = v33 + v31;
              }
            }
          }
        }
      }
      if ( (__int64)++v18 >= (int)equipSkillIcon->max_length )
        return v17 & 1;
    }
  }
  v17 = 0;
  return v17 & 1;
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
  if ( (byte_4AFD72D & 1) == 0 )
  {
    this = (GrandServantStatusListViewItemDrawEquip_o *)sub_1BC3008(&LocalizationManager_TypeInfo, *(_QWORD *)&index);
    byte_4AFD72D = 1;
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
    sub_1BC326C(this, *(_QWORD *)&index, v7);
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
          sub_1BC3264(this, *(_QWORD *)&index);
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
  if ( (byte_4AFD72A & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_20208/*"img_frames_nodata6"*/, *(_QWORD *)&index);
    this = (GrandServantStatusListViewItemDrawEquip_o *)sub_1BC3008(&StringLiteral_20207/*"img_frames_nodata5"*/, v7);
    byte_4AFD72A = 1;
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
          ServantFaceIconComponent__Set_40035652(v10, (int64_t)this, 0LL, 0LL, 0LL);
          return;
        }
LABEL_50:
        sub_1BC3264(this, *(_QWORD *)&index);
      }
LABEL_51:
      sub_1BC326C(this, *(_QWORD *)&index, servantLeaderInfo);
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
        ServantFaceIconComponent__Set_40041964((ServantFaceIconComponent_o *)this, equipTarget3, 0LL, 0LL, 0LL);
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
      v17 = &StringLiteral_20207/*"img_frames_nodata5"*/;
LABEL_38:
      ServantFaceIconComponent__NoMount_40030376((ServantFaceIconComponent_o *)this, (System_String_o *)*v17, 1, 0LL);
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
      v17 = &StringLiteral_20208/*"img_frames_nodata6"*/;
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
  if ( (byte_4AFD72C & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&StringLiteral_24860/*"{0}"*/, v8);
    sub_1BC3008(&StringLiteral_113/*" "*/, v9);
    this = (GrandServantStatusListViewItemDrawEquip_o *)sub_1BC3008(&StringLiteral_1/*""*/, v10);
    byte_4AFD72C = 1;
  }
  nameRangeLabels = v6->fields.nameRangeLabels;
  if ( !nameRangeLabels )
LABEL_97:
    sub_1BC3264(this, *(_QWORD *)&index);
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
  UIIconLabel__Set_40054380(v18, 5, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  hpIconLabels = v6->fields.hpIconLabels;
  if ( !hpIconLabels )
    goto LABEL_97;
  if ( hpIconLabels->max_length <= v5 )
    goto LABEL_98;
  v20 = hpIconLabels->m_Items[v5];
  this = (GrandServantStatusListViewItemDrawEquip_o *)ServantStatusListViewItem__GetEquipHpByIndex(item, v5, 0LL);
  if ( !v20 )
    goto LABEL_97;
  UIIconLabel__Set_40054380(v20, 3, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
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
    sub_1BC326C(this, *(_QWORD *)&index, item);
  }
  v21 = v6->fields.costLabels;
  if ( !v21 )
    goto LABEL_97;
  if ( v21->max_length <= v5 )
    goto LABEL_98;
  v22 = v21->m_Items[v5];
  EquipCostByIndex = ServantStatusListViewItem__GetEquipCostByIndex(item, v5, 0LL);
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &EquipCostByIndex, v23, v24, v25);
  v27 = System_String__Format((System_String_o *)StringLiteral_24860/*"{0}"*/, v26, 0LL);
  this = (GrandServantStatusListViewItemDrawEquip_o *)System_String__Concat_62348648(
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
    sub_1BC326C(this, *(_QWORD *)&index, v7);
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
    sub_1BC3264(this, *(_QWORD *)&index);
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
  __int64 EquipListCount; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  struct UILabel_array *explanationLabels; // x8
  float z; // s1
  UILabel_o *v17; // x22
  const MethodInfo *v18; // x3
  int32_t v19; // w22
  struct UnityEngine_Vector3_array *baseSpriteSizes; // x23
  struct UnityEngine_Vector3_StaticFields *v21; // x8
  __int64 v22; // d0
  float v23; // s1
  char *v24; // x8
  struct System_Int32_array *skillViewCounts; // x8
  struct UISprite_array *line2Sprites; // x8
  UISprite_o *v27; // x23
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x2
  GrandServantStatusListViewItemDrawEquip_o *SkillIconComponent; // x23
  int32_t v33; // w1
  const MethodInfo *v34; // x4
  struct UISprite_array *lineSprites; // x8
  int v36; // w24
  UnityEngine_Object_o *v37; // x25
  const MethodInfo *v38; // x6
  struct UISprite_array *v39; // x8
  bool IsNeedAddAdjust; // w0
  const MethodInfo *v41; // x6
  struct UnityEngine_Vector3_array *baseSizes; // x8
  float *v43; // x8
  int32_t v44; // w24
  float v45; // s1
  float v46; // s0
  float y; // s3
  struct UnityEngine_Vector3_array *v48; // x8
  int32_t v49; // w23
  float *v50; // x8
  float v51; // s1
  struct UnityEngine_Vector3_array *titleBasePositions; // x8
  struct UISprite_array *titleSprites; // x9
  int v54; // w23
  float *v55; // x8
  float v56; // s8
  float v57; // s11
  float v58; // s9
  float v59; // s10
  const MethodInfo *v60; // x5
  struct UnityEngine_Vector3_array *skillBasePositions; // x8
  float *v62; // x8
  struct UICommonButton_array *equipButtons; // x8
  UnityEngine_Object_o *baseCollider; // x21
  struct UnityEngine_Vector3_array *v65; // x8
  float v66; // s1
  float v67; // s2
  float v68; // s0
  int v69; // w10
  int v70; // w9
  int v71; // w8
  const MethodInfo *v72; // x2
  UnityEngine_Vector3_o newTb; // [xsp+8h] [xbp-98h] BYREF
  int32_t newRange; // [xsp+14h] [xbp-8Ch] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFD729 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, item);
    sub_1BC3008(&LocalizationManager_TypeInfo, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_11801/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, v9);
    sub_1BC3008(&StringLiteral_20223/*"img_line_04"*/, v10);
    byte_4AFD729 = 1;
  }
  skillInfoList = 0LL;
  newTb.fields.z = 0.0;
  *(_QWORD *)&newTb.fields.x = 0LL;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( mode )
  {
    if ( !byte_4AFBDB1 )
    {
      EquipListCount = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v12);
      byte_4AFBDB1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    explanationLabels = this->fields.explanationLabels;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)&this->fields.baseColliderSizes.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    this->fields.baseColliderSizes.fields.z = z;
    if ( !explanationLabels )
      goto LABEL_83;
    if ( !explanationLabels->max_length )
      goto LABEL_84;
    v17 = explanationLabels->m_Items[0];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    EquipListCount = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11801/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, 0LL);
    if ( !v17 )
      goto LABEL_83;
    UILabel__set_text(v17, (System_String_o *)EquipListCount, 0LL);
    if ( !item )
      goto LABEL_83;
    EquipListCount = ServantStatusListViewItem__GetEquipListCount(item, 0LL);
    if ( (int)EquipListCount >= 1 )
    {
      v19 = 0;
      do
      {
        baseSpriteSizes = this->fields.baseSpriteSizes;
        if ( !byte_4AFBDB1 )
        {
          EquipListCount = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v12);
          byte_4AFBDB1 = 1;
        }
        if ( !baseSpriteSizes )
          goto LABEL_83;
        if ( v19 >= baseSpriteSizes->max_length )
          goto LABEL_84;
        v21 = UnityEngine_Vector3_TypeInfo->static_fields;
        v22 = *(_QWORD *)&v21->zeroVector.fields.x;
        v23 = v21->zeroVector.fields.z;
        v24 = (char *)baseSpriteSizes + 12 * v19;
        *((_QWORD *)v24 + 4) = v22;
        *((float *)v24 + 10) = v23;
        skillViewCounts = this->fields.skillViewCounts;
        if ( !skillViewCounts )
          goto LABEL_83;
        if ( v19 >= skillViewCounts->max_length )
          goto LABEL_84;
        skillViewCounts->m_Items[v19 + 1] = 0;
        if ( v19 )
        {
          line2Sprites = this->fields.line2Sprites;
          if ( !line2Sprites )
            goto LABEL_83;
          if ( v19 >= line2Sprites->max_length )
            goto LABEL_84;
          v27 = line2Sprites->m_Items[v19];
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetDownloadCommonSprite(v27, (System_String_o *)StringLiteral_20223/*"img_line_04"*/, 0LL);
        }
        GrandServantStatusListViewItemDrawEquip__SetEquipIcon(this, v19, item, v18);
        GrandServantStatusListViewItemDrawEquip__SetEquipInfoLabel(this, v19, item, v28);
        GrandServantStatusListViewItemDrawEquip__SetEquipExpInfo(this, v19, item, v29);
        GrandServantStatusListViewItemDrawEquip__SetEquipLimitCount(this, v19, item, v30);
        ServantStatusListViewItem__GetEquipSkillInfoByIndex(item, v19, &skillInfoList, 0LL);
        SkillIconComponent = (GrandServantStatusListViewItemDrawEquip_o *)GrandServantStatusListViewItemDrawEquip__GetSkillIconComponent(
                                                                            this,
                                                                            v19,
                                                                            v31);
        EquipListCount = GrandServantStatusListViewItemDrawEquip__GetSkillInfoListNum(
                           SkillIconComponent,
                           v33,
                           skillInfoList,
                           (SkillIconComponent_array *)SkillIconComponent,
                           v34);
        lineSprites = this->fields.lineSprites;
        if ( !lineSprites )
          goto LABEL_83;
        if ( v19 >= lineSprites->max_length )
          goto LABEL_84;
        v36 = EquipListCount;
        v37 = (UnityEngine_Object_o *)lineSprites->m_Items[v19];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        EquipListCount = UnityEngine_Object__op_Inequality(v37, 0LL, 0LL);
        if ( (EquipListCount & 1) != 0 )
        {
          v39 = this->fields.lineSprites;
          if ( !v39 )
            goto LABEL_83;
          if ( v19 >= v39->max_length )
            goto LABEL_84;
          EquipListCount = (__int64)v39->m_Items[v19];
          if ( !EquipListCount )
            goto LABEL_83;
          EquipListCount = (__int64)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)EquipListCount,
                                      0LL);
          if ( !EquipListCount )
            goto LABEL_83;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EquipListCount, v36 > 0, 0LL);
        }
        newRange = 0;
        IsNeedAddAdjust = GrandServantStatusListViewItemDrawEquip__IsNeedAddAdjust(
                            this,
                            v19,
                            skillInfoList,
                            0,
                            (SkillIconComponent_array *)SkillIconComponent,
                            &newRange,
                            v38);
        GrandServantStatusListViewItemDrawEquip__SetReinforce(
          this,
          v19,
          item,
          IsNeedAddAdjust,
          newRange,
          &newRange,
          v41);
        baseSizes = this->fields.baseSizes;
        if ( !baseSizes )
          goto LABEL_83;
        if ( v19 >= baseSizes->max_length )
          goto LABEL_84;
        v43 = (float *)((char *)baseSizes + 12 * v19);
        v44 = newRange;
        v45 = v43[8];
        v46 = v43[9] + (float)newRange;
        y = this->fields.baseColliderSizes.fields.y;
        v48 = this->fields.baseSpriteSizes;
        if ( v45 == INFINITY )
          v12 = 0x80000000LL;
        else
          v12 = (unsigned int)(int)v45;
        if ( v46 == INFINITY )
          v49 = 0x80000000;
        else
          v49 = (int)v46;
        this->fields.baseColliderSizes.fields.x = (float)(int)v12;
        this->fields.baseColliderSizes.fields.y = y + (float)v49;
        if ( !v48 )
          goto LABEL_83;
        if ( v19 >= v48->max_length )
          goto LABEL_84;
        v50 = (float *)((char *)v48 + 12 * v19);
        v51 = v50[9] + (float)v49;
        v50[8] = (float)(int)v12;
        v50[9] = v51;
        EquipListCount = (__int64)this->fields.baseSprite;
        if ( !EquipListCount )
          goto LABEL_83;
        UIWidget__set_width((UIWidget_o *)EquipListCount, v12, 0LL);
        EquipListCount = (__int64)this->fields.baseSprite;
        if ( !EquipListCount )
          goto LABEL_83;
        UIWidget__set_height((UIWidget_o *)EquipListCount, v49, 0LL);
        titleBasePositions = this->fields.titleBasePositions;
        if ( !titleBasePositions )
          goto LABEL_83;
        if ( v19 >= titleBasePositions->max_length )
          goto LABEL_84;
        titleSprites = this->fields.titleSprites;
        v54 = v44 >= 0 ? v44 : v44 + 1;
        if ( !titleSprites )
          goto LABEL_83;
        if ( v19 >= titleSprites->max_length )
          goto LABEL_84;
        EquipListCount = (__int64)titleSprites->m_Items[v19];
        if ( !EquipListCount )
          goto LABEL_83;
        v55 = (float *)((char *)titleBasePositions + 12 * v19);
        v56 = v55[8];
        v57 = v55[9];
        v58 = v55[10];
        EquipListCount = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)EquipListCount, 0LL);
        if ( !EquipListCount )
          goto LABEL_83;
        v59 = (float)(v54 >> 1);
        v76.fields.y = v57 + v59;
        v76.fields.x = v56;
        v76.fields.z = v58;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)EquipListCount, v76, 0LL);
        skillBasePositions = this->fields.skillBasePositions;
        if ( !skillBasePositions )
          goto LABEL_83;
        if ( v19 >= skillBasePositions->max_length )
          goto LABEL_84;
        v62 = (float *)((char *)skillBasePositions + 12 * v19);
        v77.fields.z = v62[10];
        v77.fields.y = v62[9] + v59;
        newTb.fields.x = v62[8];
        v77.fields.x = newTb.fields.x;
        newTb.fields.y = v77.fields.y;
        newTb.fields.z = v77.fields.z;
        GrandServantStatusListViewItemDrawEquip__SetSkillInfo(this, v19, skillInfoList, item, v77, &newTb, v60);
        if ( item->fields.isEquipChangeMode )
        {
          v12 = 1LL;
        }
        else
        {
          EquipListCount = ServantStatusListViewItem__IsEquipByIndex(item, v19, 0LL);
          v12 = EquipListCount & 1;
        }
        equipButtons = this->fields.equipButtons;
        if ( !equipButtons )
          goto LABEL_83;
        if ( v19 >= equipButtons->max_length )
          goto LABEL_84;
        EquipListCount = (__int64)equipButtons->m_Items[v19];
        if ( !EquipListCount )
          goto LABEL_83;
        UICommonButton__SetColliderEnable((UICommonButton_o *)EquipListCount, v12, 1, 0LL);
        ++v19;
        EquipListCount = ServantStatusListViewItem__GetEquipListCount(item, 0LL);
      }
      while ( v19 < (int)EquipListCount );
    }
    baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    EquipListCount = UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL);
    if ( (EquipListCount & 1) != 0 )
    {
      EquipListCount = (__int64)this->fields.baseCollider;
      if ( !EquipListCount )
        goto LABEL_83;
      UnityEngine_BoxCollider__set_size(
        (UnityEngine_BoxCollider_o *)EquipListCount,
        this->fields.baseColliderSizes,
        0LL);
    }
    v65 = this->fields.baseSpriteSizes;
    if ( !v65 )
LABEL_83:
      sub_1BC3264(EquipListCount, v12);
    if ( v65->max_length < 3 )
LABEL_84:
      sub_1BC326C(EquipListCount, v12, v13);
    EquipListCount = (__int64)this->fields.baseSprite;
    if ( !EquipListCount )
      goto LABEL_83;
    v66 = v65->m_Items[1].fields.z;
    v67 = v65->m_Items[2].fields.z;
    v68 = v65->m_Items[0].fields.z;
    v69 = (int)v66;
    if ( v66 == INFINITY )
      v69 = 0x80000000;
    if ( v67 == INFINITY )
      v70 = 0x80000000;
    else
      v70 = (int)v67;
    v71 = (int)v68 - 7;
    if ( v68 == INFINITY )
      v71 = 2147483641;
    UIWidget__set_height((UIWidget_o *)EquipListCount, v71 + v69 + v70, 0LL);
    GrandServantStatusListViewItemDrawEquip__SetPosition(this, item, v72);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantStatusListViewItemDrawEquip__SetPosition(
        GrandServantStatusListViewItemDrawEquip_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  struct UISprite_array *titleSprites; // x8
  GrandServantStatusListViewItemDrawEquip_o *v4; // x19
  float v6; // s0
  float v7; // s2
  struct UnityEngine_Vector3_array *baseSpriteSizes; // x8
  struct UISprite_array *v9; // x9
  float z; // s11
  float v11; // s12
  float v12; // s8
  float v13; // s9
  float v14; // s10
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
  float v40; // s10
  float v41; // s0
  struct System_Int32_array *skillViewCounts; // x8
  float v43; // s12
  float v44; // s9
  __int64 v45; // x27
  GrandServantStatusListViewItemDrawEquip_o **v46; // x29
  float v47; // s13
  float v48; // s11
  float v49; // s1
  float v50; // s0
  float v51; // s14
  float v52; // s2
  float v53; // s8
  float v54; // s15
  struct UnityEngine_GameObject_array *v55; // x8
  float v56; // [xsp+0h] [xbp-B0h]
  float v57; // [xsp+4h] [xbp-ACh]
  float y; // [xsp+8h] [xbp-A8h]
  float value; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  titleSprites = this->fields.titleSprites;
  if ( !titleSprites )
    goto LABEL_69;
  if ( !titleSprites->max_length )
    goto LABEL_70;
  v4 = this;
  this = (GrandServantStatusListViewItemDrawEquip_o *)titleSprites->m_Items[0];
  if ( !this )
    goto LABEL_69;
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_69;
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  baseSpriteSizes = v4->fields.baseSpriteSizes;
  if ( !baseSpriteSizes )
    goto LABEL_69;
  if ( baseSpriteSizes->max_length < 3 )
    goto LABEL_70;
  v9 = v4->fields.titleSprites;
  if ( !v9 )
    goto LABEL_69;
  if ( !v9->max_length )
    goto LABEL_70;
  this = (GrandServantStatusListViewItemDrawEquip_o *)v9->m_Items[0];
  if ( !this )
    goto LABEL_69;
  z = baseSpriteSizes->m_Items[1].fields.z;
  v11 = baseSpriteSizes->m_Items[2].fields.z;
  v12 = baseSpriteSizes->m_Items[0].fields.z;
  v13 = v6;
  v14 = v7;
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_69;
  v60.fields.y = (float)((float)((float)(z * 0.5) + (float)(v11 * 0.5)) + (float)(v12 * 0.5)) + -4.0;
  v60.fields.x = v13;
  v60.fields.z = v14;
  y = v60.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v60, 0LL);
  v15 = v4->fields.titleSprites;
  if ( !v15 )
    goto LABEL_69;
  if ( v15->max_length <= 1 )
    goto LABEL_70;
  this = (GrandServantStatusListViewItemDrawEquip_o *)v15->m_Items[1];
  if ( !this )
    goto LABEL_69;
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_69;
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v18 = v4->fields.baseSpriteSizes;
  if ( !v18 )
    goto LABEL_69;
  if ( !v18->max_length )
    goto LABEL_70;
  v19 = v4->fields.titleSprites;
  if ( !v19 )
    goto LABEL_69;
  if ( v19->max_length <= 1 )
    goto LABEL_70;
  this = (GrandServantStatusListViewItemDrawEquip_o *)v19->m_Items[1];
  if ( !this )
    goto LABEL_69;
  v20 = v18->m_Items[0].fields.z;
  v21 = v16;
  v22 = v17;
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_69;
  v61.fields.z = v22;
  v61.fields.y = (float)(y - v20) + 6.0;
  v61.fields.x = v21;
  v57 = v61.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v61, 0LL);
  v23 = v4->fields.titleSprites;
  if ( !v23 )
    goto LABEL_69;
  if ( v23->max_length <= 2 )
    goto LABEL_70;
  this = (GrandServantStatusListViewItemDrawEquip_o *)v23->m_Items[2];
  if ( !this )
    goto LABEL_69;
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_69;
  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v26 = v4->fields.baseSpriteSizes;
  if ( !v26 )
    goto LABEL_69;
  if ( v26->max_length <= 1 )
    goto LABEL_70;
  v27 = v4->fields.titleSprites;
  if ( !v27 )
    goto LABEL_69;
  if ( v27->max_length <= 2 )
    goto LABEL_70;
  this = (GrandServantStatusListViewItemDrawEquip_o *)v27->m_Items[2];
  if ( !this )
    goto LABEL_69;
  v28 = v26->m_Items[1].fields.z;
  v29 = v24;
  v30 = v25;
  this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_69;
  v62.fields.z = v30;
  v62.fields.y = (float)(v57 - v28) + 6.0;
  v62.fields.x = v29;
  v56 = v62.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v62, 0LL);
  if ( !item )
    goto LABEL_69;
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
        goto LABEL_69;
      if ( v32 >= reinforceObject->max_length )
        goto LABEL_70;
      v34 = this;
      this = (GrandServantStatusListViewItemDrawEquip_o *)reinforceObject->m_Items[v32];
      if ( !this )
        goto LABEL_69;
      this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0LL);
      if ( !this )
        goto LABEL_69;
      *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      v38 = v4->fields.baseSpriteSizes;
      if ( !v38 )
        goto LABEL_69;
      if ( v32 >= v38->max_length )
        goto LABEL_70;
      v39 = v35;
      v40 = v36;
      v41 = y;
      if ( v32 == 1 )
        v41 = v57;
      if ( v32 == 2 )
        v41 = v56;
      if ( v34 )
        break;
LABEL_67:
      if ( ++v32 >= ServantStatusListViewItem__GetEquipListCount(item, 0LL) )
        return;
    }
    skillViewCounts = v4->fields.skillViewCounts;
    value = v39;
    if ( !skillViewCounts )
      goto LABEL_69;
    v43 = v37;
    v44 = v41 + -330.0;
    v45 = 0LL;
    v46 = (GrandServantStatusListViewItemDrawEquip_o **)(&v34->fields.dispMode + 2 * v32);
    v47 = (float)(v41 - v38->m_Items[v32].fields.z) + 23.0;
    v48 = v41 + -220.0;
    while ( 1 )
    {
      if ( v32 >= skillViewCounts->max_length )
        goto LABEL_70;
      if ( (int)v45 >= skillViewCounts->m_Items[v32 + 1] )
      {
        v55 = v4->fields.reinforceObject;
        if ( !v55 )
          goto LABEL_69;
        if ( v32 < v55->max_length )
        {
          this = (GrandServantStatusListViewItemDrawEquip_o *)v55->m_Items[v32];
          if ( this )
          {
            this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL);
            if ( this )
            {
              v64.fields.x = value;
              v64.fields.y = v40;
              v64.fields.z = v43;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v64, 0LL);
              goto LABEL_67;
            }
          }
LABEL_69:
          sub_1BC3264(this, item);
        }
LABEL_70:
        sub_1BC326C(this, item, method);
      }
      if ( (unsigned int)v32 >= LODWORD(v34->fields.m_CancellationTokenSource) )
        goto LABEL_70;
      this = *v46;
      if ( !*v46 )
        goto LABEL_69;
      this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0LL);
      if ( !this )
        goto LABEL_69;
      *(UnityEngine_Vector3_o *)(&v49 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      v51 = v50;
      v53 = v52;
      if ( (_DWORD)v45 == 1 )
        break;
      v54 = v49;
      if ( !(_DWORD)v45 )
      {
        v54 = v48;
LABEL_56:
        v40 = v47;
      }
      if ( (unsigned int)v45 >= LODWORD(v34->fields.m_CancellationTokenSource) )
        goto LABEL_70;
      this = (GrandServantStatusListViewItemDrawEquip_o *)*((_QWORD *)&v34->fields.dispMode + v45);
      if ( this )
      {
        this = (GrandServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
        if ( this )
        {
          v63.fields.x = v51;
          v63.fields.y = v54;
          v63.fields.z = v53;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v63, 0LL);
          skillViewCounts = v4->fields.skillViewCounts;
          ++v45;
          if ( skillViewCounts )
            continue;
        }
      }
      goto LABEL_69;
    }
    v54 = v44;
    goto LABEL_56;
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
    sub_1BC3264(this, *(_QWORD *)&index);
  }
  if ( v20->max_length <= index )
LABEL_23:
    sub_1BC326C(this, *(_QWORD *)&index, v16);
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
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  SkillInfo_array *v12; // x29
  int32_t v13; // w27
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_GameObject_array *SkillBase; // x24
  const MethodInfo *v18; // x2
  UILabel_array *EquipSkillExplanationLabelList; // x25
  const MethodInfo *v20; // x2
  UnityEngine_GameObject_o *SkillIconComponent; // x0
  _BOOL8 v22; // x1
  __int64 v23; // x2
  int max_length; // w8
  __int64 v25; // x23
  int v26; // w20
  il2cpp_array_size_t v27; // w26
  il2cpp_array_size_t v28; // w9
  SkillInfo_o *v29; // x22
  UnityEngine_GameObject_c **v30; // x27
  void **v31; // x27
  UnityEngine_GameObject_o *v32; // t1
  const MethodInfo *v33; // x2
  UnityEngine_GameObject_o *v34; // x29
  UnityEngine_GameObject_c **v35; // x21
  void **v36; // x21
  UnityEngine_GameObject_o *v37; // t1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v39; // x23
  __int64 v40; // x29
  int32_t v41; // w23
  UILabel_o *v42; // x8
  int32_t mHeight; // w21
  struct System_Int32_array *skillPitches; // x8
  int v45; // w8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  __int64 v48; // x23
  __int64 v49; // x29
  struct System_Int32_array *skillViewCounts; // x8
  int32_t v51; // w29
  SkillInfo_array *v52; // [xsp+0h] [xbp-B0h]
  UnityEngine_GameObject_o *v53; // [xsp+8h] [xbp-A8h]
  UnityEngine_GameObject_o *v54; // [xsp+10h] [xbp-A0h]
  __int64 v55; // [xsp+18h] [xbp-98h]
  ServantStatusListViewItem_o *v56; // [xsp+20h] [xbp-90h]
  unsigned int indexa; // [xsp+38h] [xbp-78h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  z = tb.fields.z;
  y = tb.fields.y;
  x = tb.fields.x;
  v12 = skillInfoList;
  v13 = index;
  if ( (byte_4AFD72F & 1) == 0 )
  {
    sub_1BC3008(&GrandServantStatusListViewItemDrawEquip_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v16);
    byte_4AFD72F = 1;
  }
  v56 = item;
  SkillBase = GrandServantStatusListViewItemDrawEquip__GetSkillBase(this, v13, (const MethodInfo *)skillInfoList);
  EquipSkillExplanationLabelList = GrandServantStatusListViewItemDrawEquip__GetEquipSkillExplanationLabelList(
                                     this,
                                     v13,
                                     v18);
  SkillIconComponent = (UnityEngine_GameObject_o *)GrandServantStatusListViewItemDrawEquip__GetSkillIconComponent(
                                                     this,
                                                     v13,
                                                     v20);
  v54 = SkillIconComponent;
  newTb->fields.x = x;
  newTb->fields.y = y;
  newTb->fields.z = z;
  if ( !SkillBase )
LABEL_62:
    sub_1BC3264(SkillIconComponent, v22);
  max_length = SkillBase->max_length;
  if ( max_length >= 1 )
  {
    v25 = v13;
    v26 = 1;
    v52 = v12;
    v55 = v13;
    indexa = v13;
    while ( 1 )
    {
      v27 = v26 - 1;
      if ( v12 )
      {
        v28 = v12->max_length;
        if ( (int)v27 < (int)v28 )
        {
          if ( v27 >= v28 )
            goto LABEL_63;
          v29 = v12->m_Items[v27];
          if ( v29 )
          {
            if ( v29->fields.id >= 1 )
              break;
          }
        }
      }
      v22 = 0LL;
LABEL_27:
      if ( v27 >= SkillBase->max_length )
        goto LABEL_63;
      SkillIconComponent = SkillBase->m_Items[v27];
      if ( !SkillIconComponent )
        goto LABEL_62;
      UnityEngine_GameObject__SetActive(SkillIconComponent, v22, 0LL);
      if ( !EquipSkillExplanationLabelList )
        goto LABEL_62;
      if ( v27 >= EquipSkillExplanationLabelList->max_length )
        goto LABEL_63;
      v42 = EquipSkillExplanationLabelList->m_Items[v27];
      if ( !v42 )
        goto LABEL_62;
      SkillIconComponent = (UnityEngine_GameObject_o *)GrandServantStatusListViewItemDrawEquip_TypeInfo;
      mHeight = v42->fields.mHeight;
      if ( !GrandServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GrandServantStatusListViewItemDrawEquip_TypeInfo);
        SkillIconComponent = (UnityEngine_GameObject_o *)GrandServantStatusListViewItemDrawEquip_TypeInfo;
      }
      skillPitches = this->fields.skillPitches;
      if ( !skillPitches )
        goto LABEL_62;
      if ( skillPitches->max_length <= v13 )
        goto LABEL_63;
      v45 = skillPitches->m_Items[v25 + 1];
      if ( *(_DWORD *)(*(_QWORD *)&SkillIconComponent[7].fields.m_CachedPtr + 4LL) + mHeight >= v45 )
        v45 = *(_DWORD *)(*(_QWORD *)&SkillIconComponent[7].fields.m_CachedPtr + 4LL) + mHeight;
      newTb->fields.y = newTb->fields.y - (float)v45;
      max_length = SkillBase->max_length;
      if ( v26++ >= max_length )
        return;
    }
    if ( v27 >= max_length )
      goto LABEL_63;
    SkillIconComponent = SkillBase->m_Items[v27];
    if ( !SkillIconComponent )
      goto LABEL_62;
    SkillIconComponent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(SkillIconComponent, 0LL);
    if ( !SkillIconComponent )
      goto LABEL_62;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SkillIconComponent, *newTb, 0LL);
    if ( !v54 )
      goto LABEL_62;
    if ( v27 >= LODWORD(v54[1].klass) )
      goto LABEL_63;
    v30 = &v54->klass + (int)v27;
    v32 = (UnityEngine_GameObject_o *)v30[4];
    v31 = (void **)(v30 + 4);
    SkillIconComponent = v32;
    if ( !v32 )
      goto LABEL_62;
    SkillIconComponent__Set((SkillIconComponent_o *)SkillIconComponent, v29->fields.id, 0LL);
    SkillIconComponent = (UnityEngine_GameObject_o *)GrandServantStatusListViewItemDrawEquip__GetSkillTitleRangeLabel(
                                                       this,
                                                       indexa,
                                                       v33);
    if ( !SkillIconComponent )
      goto LABEL_62;
    v34 = SkillIconComponent;
    if ( v27 >= LODWORD(SkillIconComponent[1].klass) )
      goto LABEL_63;
    v35 = &SkillIconComponent->klass + (int)v27;
    v37 = (UnityEngine_GameObject_o *)v35[4];
    v36 = (void **)(v35 + 4);
    SkillIconComponent = v37;
    if ( !v37 )
      goto LABEL_62;
    UIRangeLabel__Set((UIRangeLabel_o *)SkillIconComponent, v29->fields.title, 0LL, 1, 0, 0, 0LL);
    if ( !v56 )
      goto LABEL_62;
    userSvtEntity = v56->fields.userSvtEntity;
    v53 = v34;
    if ( userSvtEntity )
    {
      v40 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v39 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v58.fields.currentCryptoKey = v40;
      *(_QWORD *)&v58.fields.fakeValue = v39;
      SkillIconComponent = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                         v58,
                                                         0LL);
      if ( !v56->fields.userSvtEntity )
        goto LABEL_62;
      v41 = (int)SkillIconComponent;
      SkillIconComponent = (UnityEngine_GameObject_o *)UserServantEntity__getRarity(v56->fields.userSvtEntity, 0LL);
    }
    else
    {
      servantLeaderInfo = v56->fields.servantLeaderInfo;
      if ( !servantLeaderInfo )
      {
        v51 = -1;
        v41 = -1;
LABEL_48:
        SkillIconComponent = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !SkillIconComponent )
          goto LABEL_62;
        SkillIconComponent = (UnityEngine_GameObject_o *)PartyOrganizationUtility__IsRarityRestriction_33614768(
                                                           (PartyOrganizationUtility_o *)SkillIconComponent,
                                                           v41,
                                                           v51,
                                                           v29->fields.id,
                                                           v29->fields.lv,
                                                           0LL);
        if ( ((unsigned __int8)SkillIconComponent & 1) != 0 )
        {
          v25 = v55;
          v12 = v52;
          if ( v27 >= LODWORD(v54[1].klass) )
            goto LABEL_63;
          SkillIconComponent = (UnityEngine_GameObject_o *)*v31;
          if ( !*v31 )
            goto LABEL_62;
          SkillIconComponent__SetInvalidColor(
            (SkillIconComponent_o *)SkillIconComponent,
            this->fields.ColorInvalid,
            0LL);
          v13 = indexa;
          if ( v27 >= LODWORD(v53[1].klass) )
            goto LABEL_63;
          SkillIconComponent = (UnityEngine_GameObject_o *)*v36;
          if ( !*v36 )
            goto LABEL_62;
          UIRangeLabel__set_color((UIRangeLabel_o *)SkillIconComponent, this->fields.ColorInvalid, 0LL);
          if ( !EquipSkillExplanationLabelList )
            goto LABEL_62;
          if ( v27 >= EquipSkillExplanationLabelList->max_length )
            goto LABEL_63;
          SkillIconComponent = (UnityEngine_GameObject_o *)EquipSkillExplanationLabelList->m_Items[v27];
          if ( !SkillIconComponent )
            goto LABEL_62;
          UIWidget__set_color((UIWidget_o *)SkillIconComponent, this->fields.ColorInvalid, 0LL);
        }
        else
        {
          v12 = v52;
          v13 = indexa;
          v25 = v55;
        }
        v22 = 1LL;
        goto LABEL_27;
      }
      v49 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v48 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v59.fields.currentCryptoKey = v49;
      *(_QWORD *)&v59.fields.fakeValue = v48;
      SkillIconComponent = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                         v59,
                                                         0LL);
      if ( !v56->fields.servantLeaderInfo )
        goto LABEL_62;
      v41 = (int)SkillIconComponent;
      SkillIconComponent = (UnityEngine_GameObject_o *)ServantLeaderInfo__getRarity(v56->fields.servantLeaderInfo, 0LL);
    }
    skillViewCounts = this->fields.skillViewCounts;
    if ( !skillViewCounts )
      goto LABEL_62;
    if ( skillViewCounts->max_length <= indexa )
LABEL_63:
      sub_1BC326C(SkillIconComponent, v22, v23);
    v51 = (int)SkillIconComponent;
    skillViewCounts->m_Items[v55 + 1] = v26;
    goto LABEL_48;
  }
}