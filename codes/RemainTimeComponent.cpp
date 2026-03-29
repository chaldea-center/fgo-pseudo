void RemainTimeComponent___ctor(RemainTimeComponent_o *this, const MethodInfo *method)
{
  this->fields.onRemainHoursPositionX = 149.0;
  *(_QWORD *)&this->fields.digitOffset = 0x431E000041000000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void RemainTimeComponent__AdjustLayout(
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
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)remainLabel, 0);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
  v10 = this->fields.remainLabel;
  if ( !v10
    || (remainLabel = this->fields.numLabel) == 0
    || (v11 = LocalPositionX + (float)((float)v10->fields.mWidth * 0.5),
        ComponentHelper__SetLocalPositionX(
          (UnityEngine_Component_o *)remainLabel,
          v11 + (float)((float)remainLabel->fields.mWidth * 0.5),
          0),
        (numLabel = this->fields.numLabel) == 0)
    || (remainLabel = this->fields.timeUnitLabel) == 0 )
  {
LABEL_13:
    sub_1C93D2C(remainLabel, isRemainHours);
  }
  ComponentHelper__SetLocalPositionX(
    (UnityEngine_Component_o *)remainLabel,
    (float)(v11 + (float)numLabel->fields.mWidth) + (float)((float)remainLabel->fields.mWidth * 0.5),
    0);
  v13 = log10f(remainTime);
  v14 = 84;
  if ( isRemainHours )
    v14 = 88;
  v15 = *(float *)((char *)&this->klass + v14);
  if ( v13 == INFINITY
    || (v16 = (int)v13 + 1, v17 = (int)v13 < 0, digitOffset = 0.0, v17 ^ __OFSUB__(v16, 1) | (v16 == 1)) )
  {
    digitOffset = this->fields.digitOffset;
  }
  GameObjectExtensions__SetLocalPositionX(this->fields.labelRoot, v15 + digitOffset, 0);
}


void RemainTimeComponent__Awake(RemainTimeComponent_o *this, const MethodInfo *method)
{
  ;
}


void RemainTimeComponent__SetLabelsColor(
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
  UIWidget__set_color(remainLabel, color, 0);
  remainLabel = (UIWidget_o *)this->fields.numLabel;
  if ( !remainLabel
    || (v9.fields.r = r,
        v9.fields.g = g,
        v9.fields.b = b,
        v9.fields.a = a,
        UIWidget__set_color(remainLabel, v9, 0),
        (remainLabel = (UIWidget_o *)this->fields.timeUnitLabel) == 0) )
  {
LABEL_5:
    sub_1C93D2C(remainLabel, method);
  }
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UIWidget__set_color(remainLabel, v10, 0);
}


void RemainTimeComponent__SetRemainTime(RemainTimeComponent_o *this, const MethodInfo *method)
{
  UILabel_o *remainLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  int64_t timeLimit; // x20
  __int64 v7; // x8
  UILabel_o *v8; // x20
  UILabel_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  UILabel_o *timeOverLabel; // x20
  UILabel_o *numLabel; // x20
  UILabel_o *timeUnitLabel; // x20
  const MethodInfo *v17; // x2
  __int64 v18; // x8
  RemainTimeComponent_o *v19; // x0
  bool v20; // w1
  UILabel_o *v21; // x20
  UILabel_o *v22; // x20
  signed __int64 v23; // [xsp+0h] [xbp-40h] BYREF
  unsigned __int64 v24; // [xsp+8h] [xbp-38h] BYREF
  unsigned __int64 v25; // [xsp+18h] [xbp-28h] BYREF
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2CCE6 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_13512/*"TIME_REST6_TIMEOVER"*/);
    sub_1C93AD4(&StringLiteral_13542/*"TIME_STR_MINUTES"*/);
    sub_1C93AD4(&StringLiteral_13540/*"TIME_STR_DAYS"*/);
    sub_1C93AD4(&StringLiteral_13508/*"TIME_REST6_HEAD"*/);
    sub_1C93AD4(&StringLiteral_13541/*"TIME_STR_HOURS"*/);
    byte_4D2CCE6 = 1;
  }
  v23 = 0;
  v24 = 0;
  remainLabel = this->fields.remainLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13508/*"TIME_REST6_HEAD"*/, 0);
  if ( !remainLabel )
    goto LABEL_33;
  UILabel__set_text(remainLabel, v4, 0);
  timeLimit = this->fields.timeLimit;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v7 = timeLimit - NetworkManager__getTime(0);
  if ( v7 < 0 )
  {
    timeOverLabel = this->fields.timeOverLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13512/*"TIME_REST6_TIMEOVER"*/, 0);
    if ( timeOverLabel )
    {
      UILabel__set_text(timeOverLabel, v4, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.timeOverLabel, 1, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.remainLabel, 0, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.numLabel, 0, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.timeUnitLabel, 0, 0);
      UnityEngine_MonoBehaviour__CancelInvoke((UnityEngine_MonoBehaviour_o *)this, 0);
      return;
    }
    goto LABEL_33;
  }
  v25 = v7 / 0x3CuLL;
  if ( v7 <= 3599 )
  {
    numLabel = this->fields.numLabel;
    v4 = System_Int64__ToString((int64_t)&v25, 0);
    if ( numLabel )
    {
      UILabel__set_text(numLabel, v4, 0);
      timeUnitLabel = this->fields.timeUnitLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13542/*"TIME_STR_MINUTES"*/, 0);
      if ( timeUnitLabel )
      {
        UILabel__set_text(timeUnitLabel, v4, 0);
        v18 = v25;
        v19 = this;
        v20 = 0;
LABEL_30:
        RemainTimeComponent__AdjustLayout(v19, (float)v18, v20, v17);
        v26.fields.r = 1.0;
        v26.fields.g = 1.0;
        v26.fields.b = 0.0;
        goto LABEL_31;
      }
    }
LABEL_33:
    sub_1C93D2C(v4, v5);
  }
  v24 = v7 / 0xE10uLL;
  if ( (unsigned __int64)v7 >> 7 <= 0x2A2 )
  {
    v21 = this->fields.numLabel;
    v4 = System_Int64__ToString((int64_t)&v24, 0);
    if ( v21 )
    {
      UILabel__set_text(v21, v4, 0);
      v22 = this->fields.timeUnitLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13541/*"TIME_STR_HOURS"*/, 0);
      if ( v22 )
      {
        UILabel__set_text(v22, v4, 0);
        v18 = v24;
        v20 = 1;
        v19 = this;
        goto LABEL_30;
      }
    }
    goto LABEL_33;
  }
  v23 = v7 / 0x15180uLL;
  v8 = this->fields.numLabel;
  v4 = System_Int64__ToString((int64_t)&v23, 0);
  if ( !v8 )
    goto LABEL_33;
  UILabel__set_text(v8, v4, 0);
  v9 = this->fields.timeUnitLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13540/*"TIME_STR_DAYS"*/, 0);
  if ( !v9 )
    goto LABEL_33;
  UILabel__set_text(v9, v4, 0);
  RemainTimeComponent__AdjustLayout(this, (float)v23, 0, v10);
  v26.fields.r = 1.0;
  v26.fields.g = 1.0;
  v26.fields.b = 1.0;
LABEL_31:
  v26.fields.a = 1.0;
  RemainTimeComponent__SetLabelsColor(this, v26, v11);
}


void RemainTimeComponent__StartTimeUpdate(RemainTimeComponent_o *this, int64_t limit, const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  void *ObjectList_object; // x0
  __int64 v7; // x1
  int v8; // w8
  void *v9; // x21
  unsigned int v10; // w24
  Il2CppObject *Component_object; // x22

  if ( (byte_4D2CCE7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObjectList_GameObject___);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_13262/*"SummonBanners/DownloadSummonBanner"*/);
    sub_1C93AD4(&StringLiteral_20821/*"img_summon_limit_base"*/);
    sub_1C93AD4(&StringLiteral_12913/*"SetRemainTime"*/);
    byte_4D2CCE7 = 1;
  }
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.timeOverLabel, 0, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.remainLabel, 1, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.numLabel, 1, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.timeUnitLabel, 1, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_13262/*"SummonBanners/DownloadSummonBanner"*/, 0);
  if ( AssetStorage )
  {
    ObjectList_object = AssetData__GetObjectList_object_(
                          AssetStorage,
                          (const MethodInfo_3185C54 *)Method_AssetData_GetObjectList_GameObject___);
    if ( !ObjectList_object )
      goto LABEL_22;
    v8 = *((_DWORD *)ObjectList_object + 6);
    v9 = ObjectList_object;
    if ( v8 >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= v8 )
          sub_1C93D34(ObjectList_object);
        ObjectList_object = (void *)*((_QWORD *)v9 + (int)v10 + 4);
        if ( !ObjectList_object )
          goto LABEL_22;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)ObjectList_object,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ObjectList_object = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)ObjectList_object & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_22;
          ObjectList_object = UIAtlas__GetSprite(
                                (UIAtlas_o *)Component_object,
                                (System_String_o *)StringLiteral_20821/*"img_summon_limit_base"*/,
                                0);
          if ( ObjectList_object )
            break;
        }
        v8 = *((_DWORD *)v9 + 6);
        if ( (int)++v10 >= v8 )
          goto LABEL_21;
      }
      ObjectList_object = this->fields.backGround;
      if ( ObjectList_object )
      {
        UISprite__set_atlas((UISprite_o *)ObjectList_object, (UIAtlas_o *)Component_object, 0);
        ObjectList_object = this->fields.backGround;
        if ( ObjectList_object )
        {
          UISprite__set_spriteName((UISprite_o *)ObjectList_object, (System_String_o *)StringLiteral_20821/*"img_summon_limit_base"*/, 0);
          goto LABEL_21;
        }
      }
LABEL_22:
      sub_1C93D2C(ObjectList_object, v7);
    }
  }
LABEL_21:
  this->fields.timeLimit = limit;
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12913/*"SetRemainTime"*/,
    0.0,
    1.0,
    0);
}