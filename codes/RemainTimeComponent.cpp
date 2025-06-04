void __fastcall RemainTimeComponent___ctor(RemainTimeComponent_o *this, const MethodInfo *method)
{
  this->fields.onRemainHoursPositionX = 149.0;
  *(_QWORD *)&this->fields.digitOffset = 0x431E000041000000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RemainTimeComponent__AdjustLayout(
        RemainTimeComponent_o *this,
        float remainTime,
        bool isRemainHours,
        const MethodInfo *method)
{
  struct UILabel_o *remainLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  struct UILabel_o *v10; // x8
  float v11; // s9
  struct UILabel_o *numLabel; // x8
  float v13; // s0
  __int64 v14; // x8
  float v15; // s1
  int v16; // w8
  bool v17; // nf
  float digitOffset; // s0

  remainLabel = this->fields.remainLabel;
  if ( !remainLabel )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)remainLabel, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  v10 = this->fields.remainLabel;
  if ( !v10
    || (remainLabel = this->fields.numLabel) == 0LL
    || (v11 = LocalPositionX + (float)((float)v10->fields.mWidth * 0.5),
        ComponentHelper__SetLocalPositionX(
          (UnityEngine_Component_o *)remainLabel,
          v11 + (float)((float)remainLabel->fields.mWidth * 0.5),
          0LL),
        (numLabel = this->fields.numLabel) == 0LL)
    || (remainLabel = this->fields.timeUnitLabel) == 0LL )
  {
LABEL_13:
    sub_1BC3264(remainLabel, isRemainHours);
  }
  ComponentHelper__SetLocalPositionX(
    (UnityEngine_Component_o *)remainLabel,
    (float)(v11 + (float)numLabel->fields.mWidth) + (float)((float)remainLabel->fields.mWidth * 0.5),
    0LL);
  v13 = log10f(remainTime);
  v14 = 84LL;
  if ( isRemainHours )
    v14 = 88LL;
  v15 = *(float *)((char *)&this->klass + v14);
  if ( v13 == INFINITY
    || (v16 = (int)v13 + 1, v17 = (int)v13 < 0, digitOffset = 0.0, v17 ^ __OFSUB__(v16, 1) | (v16 == 1)) )
  {
    digitOffset = this->fields.digitOffset;
  }
  GameObjectExtensions__SetLocalPositionX(this->fields.labelRoot, v15 + digitOffset, 0LL);
}


void __fastcall RemainTimeComponent__Awake(RemainTimeComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RemainTimeComponent__SetLabelsColor(
        RemainTimeComponent_o *this,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  UIWidget_o *remainLabel; // x0
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  remainLabel = (UIWidget_o *)this->fields.remainLabel;
  if ( !remainLabel )
    goto LABEL_5;
  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  UIWidget__set_color(remainLabel, color, 0LL);
  remainLabel = (UIWidget_o *)this->fields.numLabel;
  if ( !remainLabel
    || (v9.fields.r = r,
        v9.fields.g = g,
        v9.fields.b = b,
        v9.fields.a = a,
        UIWidget__set_color(remainLabel, v9, 0LL),
        (remainLabel = (UIWidget_o *)this->fields.timeUnitLabel) == 0LL) )
  {
LABEL_5:
    sub_1BC3264(remainLabel, method);
  }
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UIWidget__set_color(remainLabel, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RemainTimeComponent__SetRemainTime(RemainTimeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UILabel_o *remainLabel; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  int64_t timeLimit; // x20
  __int64 v13; // x8
  UILabel_o *v14; // x20
  UILabel_o *v15; // x20
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  float v18; // s0
  float v19; // s1
  float v20; // s2
  UILabel_o *timeOverLabel; // x20
  UILabel_o *numLabel; // x20
  UILabel_o *timeUnitLabel; // x20
  const MethodInfo *v24; // x2
  __int64 v25; // x8
  RemainTimeComponent_o *v26; // x0
  bool v27; // w1
  UILabel_o *v28; // x20
  UILabel_o *v29; // x20
  float v30; // s3
  unsigned __int64 v31; // [xsp+0h] [xbp-40h] BYREF
  unsigned __int64 v32; // [xsp+8h] [xbp-38h] BYREF
  unsigned __int64 v33; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4AFE4D6 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    sub_1BC3008(&NetworkManager_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_13286/*"TIME_REST6_TIMEOVER"*/, v4);
    sub_1BC3008(&StringLiteral_13316/*"TIME_STR_MINUTES"*/, v5);
    sub_1BC3008(&StringLiteral_13314/*"TIME_STR_DAYS"*/, v6);
    sub_1BC3008(&StringLiteral_13282/*"TIME_REST6_HEAD"*/, v7);
    sub_1BC3008(&StringLiteral_13315/*"TIME_STR_HOURS"*/, v8);
    byte_4AFE4D6 = 1;
  }
  v31 = 0LL;
  v32 = 0LL;
  remainLabel = this->fields.remainLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13282/*"TIME_REST6_HEAD"*/, 0LL);
  if ( !remainLabel )
    goto LABEL_33;
  UILabel__set_text(remainLabel, v10, 0LL);
  timeLimit = this->fields.timeLimit;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v13 = timeLimit - NetworkManager__getTime(0LL);
  if ( v13 < 0 )
  {
    timeOverLabel = this->fields.timeOverLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13286/*"TIME_REST6_TIMEOVER"*/, 0LL);
    if ( timeOverLabel )
    {
      UILabel__set_text(timeOverLabel, v10, 0LL);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.timeOverLabel, 1, 0LL);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.remainLabel, 0, 0LL);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.numLabel, 0, 0LL);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.timeUnitLabel, 0, 0LL);
      UnityEngine_MonoBehaviour__CancelInvoke((UnityEngine_MonoBehaviour_o *)this, 0LL);
      return;
    }
    goto LABEL_33;
  }
  v33 = v13 / 0x3CuLL;
  if ( v13 <= 3599 )
  {
    numLabel = this->fields.numLabel;
    v10 = System_Int64__ToString((int64_t)&v33, 0LL);
    if ( numLabel )
    {
      UILabel__set_text(numLabel, v10, 0LL);
      timeUnitLabel = this->fields.timeUnitLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13316/*"TIME_STR_MINUTES"*/, 0LL);
      if ( timeUnitLabel )
      {
        UILabel__set_text(timeUnitLabel, v10, 0LL);
        v25 = v33;
        v26 = this;
        v27 = 0;
LABEL_30:
        RemainTimeComponent__AdjustLayout(v26, (float)v25, v27, v24);
        v18 = 1.0;
        v19 = 1.0;
        v20 = 0.0;
        goto LABEL_31;
      }
    }
LABEL_33:
    sub_1BC3264(v10, v11);
  }
  v32 = v13 / 0xE10uLL;
  if ( (unsigned __int64)v13 >> 7 <= 0x2A2 )
  {
    v28 = this->fields.numLabel;
    v10 = System_Int64__ToString((int64_t)&v32, 0LL);
    if ( v28 )
    {
      UILabel__set_text(v28, v10, 0LL);
      v29 = this->fields.timeUnitLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13315/*"TIME_STR_HOURS"*/, 0LL);
      if ( v29 )
      {
        UILabel__set_text(v29, v10, 0LL);
        v25 = v32;
        v27 = 1;
        v26 = this;
        goto LABEL_30;
      }
    }
    goto LABEL_33;
  }
  v31 = v13 / 0x15180uLL;
  v14 = this->fields.numLabel;
  v10 = System_Int64__ToString((int64_t)&v31, 0LL);
  if ( !v14 )
    goto LABEL_33;
  UILabel__set_text(v14, v10, 0LL);
  v15 = this->fields.timeUnitLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13314/*"TIME_STR_DAYS"*/, 0LL);
  if ( !v15 )
    goto LABEL_33;
  UILabel__set_text(v15, v10, 0LL);
  RemainTimeComponent__AdjustLayout(this, (float)(__int64)v31, 0, v16);
  v18 = 1.0;
  v19 = 1.0;
  v20 = 1.0;
LABEL_31:
  v30 = 1.0;
  RemainTimeComponent__SetLabelsColor(this, *(UnityEngine_Color_o *)&v18, v17);
}


void __fastcall RemainTimeComponent__StartTimeUpdate(
        RemainTimeComponent_o *this,
        int64_t limit,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AssetData_o *AssetStorage; // x0
  void *ObjectList_object; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int v15; // w8
  void *v16; // x21
  unsigned int v17; // w24
  Il2CppObject *Component_object; // x22

  if ( (byte_4AFE4D7 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObjectList_GameObject___, limit);
    sub_1BC3008(&AssetManager_TypeInfo, v5);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&StringLiteral_13039/*"SummonBanners/DownloadSummonBanner"*/, v8);
    sub_1BC3008(&StringLiteral_20386/*"img_summon_limit_base"*/, v9);
    sub_1BC3008(&StringLiteral_12689/*"SetRemainTime"*/, v10);
    byte_4AFE4D7 = 1;
  }
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.timeOverLabel, 0, 0LL);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.remainLabel, 1, 0LL);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.numLabel, 1, 0LL);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.timeUnitLabel, 1, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_13039/*"SummonBanners/DownloadSummonBanner"*/, 0LL);
  if ( AssetStorage )
  {
    ObjectList_object = AssetData__GetObjectList_object_(
                          AssetStorage,
                          (const MethodInfo_2FE3548 *)Method_AssetData_GetObjectList_GameObject___);
    if ( !ObjectList_object )
      goto LABEL_22;
    v15 = *((_DWORD *)ObjectList_object + 6);
    v16 = ObjectList_object;
    if ( v15 >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= v15 )
          sub_1BC326C(ObjectList_object, v13, v14);
        ObjectList_object = (void *)*((_QWORD *)v16 + (int)v17 + 4);
        if ( !ObjectList_object )
          goto LABEL_22;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)ObjectList_object,
                             (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ObjectList_object = (void *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)Component_object,
                                      0LL,
                                      0LL);
        if ( ((unsigned __int8)ObjectList_object & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_22;
          ObjectList_object = UIAtlas__GetSprite(
                                (UIAtlas_o *)Component_object,
                                (System_String_o *)StringLiteral_20386/*"img_summon_limit_base"*/,
                                0LL);
          if ( ObjectList_object )
            break;
        }
        v15 = *((_DWORD *)v16 + 6);
        if ( (int)++v17 >= v15 )
          goto LABEL_21;
      }
      ObjectList_object = this->fields.backGround;
      if ( ObjectList_object )
      {
        UISprite__set_atlas((UISprite_o *)ObjectList_object, (UIAtlas_o *)Component_object, 0LL);
        ObjectList_object = this->fields.backGround;
        if ( ObjectList_object )
        {
          UISprite__set_spriteName((UISprite_o *)ObjectList_object, (System_String_o *)StringLiteral_20386/*"img_summon_limit_base"*/, 0LL);
          goto LABEL_21;
        }
      }
LABEL_22:
      sub_1BC3264(ObjectList_object, v13);
    }
  }
LABEL_21:
  this->fields.timeLimit = limit;
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12689/*"SetRemainTime"*/,
    0.0,
    1.0,
    0LL);
}