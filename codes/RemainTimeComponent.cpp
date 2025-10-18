void RemainTimeComponent___ctor(RemainTimeComponent_o *this, const MethodInfo *method)
{
  this->fields.onRemainHoursPositionX = 149.0;
  *(_QWORD *)&this->fields.digitOffset = 0x431E000041000000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


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
    sub_1C372B4(remainLabel);
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
    sub_1C372B4(remainLabel);
  }
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UIWidget__set_color(remainLabel, v10, 0);
}


// local variable allocation has failed, the output may be wrong!
void RemainTimeComponent__SetRemainTime(RemainTimeComponent_o *this, const MethodInfo *method)
{
  UILabel_o *remainLabel; // x20
  System_String_o *v4; // x0
  int64_t timeLimit; // x20
  __int64 v6; // x8
  UILabel_o *v7; // x20
  UILabel_o *v8; // x20
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  float v11; // s0 OVERLAPPED
  float v12; // s1
  float v13; // s2
  UILabel_o *timeOverLabel; // x20
  UILabel_o *numLabel; // x20
  UILabel_o *timeUnitLabel; // x20
  const MethodInfo *v17; // x2
  __int64 v18; // x8
  RemainTimeComponent_o *v19; // x0
  bool v20; // w1
  UILabel_o *v21; // x20
  UILabel_o *v22; // x20
  float v23; // s3
  signed __int64 v24; // [xsp+0h] [xbp-40h] BYREF
  unsigned __int64 v25; // [xsp+8h] [xbp-38h] BYREF
  unsigned __int64 v26; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C3F45F & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_13414/*"TIME_REST6_TIMEOVER"*/);
    sub_1C37058(&StringLiteral_13444/*"TIME_STR_MINUTES"*/);
    sub_1C37058(&StringLiteral_13442/*"TIME_STR_DAYS"*/);
    sub_1C37058(&StringLiteral_13410/*"TIME_REST6_HEAD"*/);
    sub_1C37058(&StringLiteral_13443/*"TIME_STR_HOURS"*/);
    byte_4C3F45F = 1;
  }
  v24 = 0;
  v25 = 0;
  remainLabel = this->fields.remainLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13410/*"TIME_REST6_HEAD"*/, 0);
  if ( !remainLabel )
    goto LABEL_33;
  UILabel__set_text(remainLabel, v4, 0);
  timeLimit = this->fields.timeLimit;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v6 = timeLimit - NetworkManager__getTime(0);
  if ( v6 < 0 )
  {
    timeOverLabel = this->fields.timeOverLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13414/*"TIME_REST6_TIMEOVER"*/, 0);
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
  v26 = v6 / 0x3CuLL;
  if ( v6 <= 3599 )
  {
    numLabel = this->fields.numLabel;
    v4 = System_Int64__ToString((int64_t)&v26, 0);
    if ( numLabel )
    {
      UILabel__set_text(numLabel, v4, 0);
      timeUnitLabel = this->fields.timeUnitLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13444/*"TIME_STR_MINUTES"*/, 0);
      if ( timeUnitLabel )
      {
        UILabel__set_text(timeUnitLabel, v4, 0);
        v18 = v26;
        v19 = this;
        v20 = 0;
LABEL_30:
        RemainTimeComponent__AdjustLayout(v19, (float)v18, v20, v17);
        v11 = 1.0;
        v12 = 1.0;
        v13 = 0.0;
        goto LABEL_31;
      }
    }
LABEL_33:
    sub_1C372B4(v4);
  }
  v25 = v6 / 0xE10uLL;
  if ( (unsigned __int64)v6 >> 7 <= 0x2A2 )
  {
    v21 = this->fields.numLabel;
    v4 = System_Int64__ToString((int64_t)&v25, 0);
    if ( v21 )
    {
      UILabel__set_text(v21, v4, 0);
      v22 = this->fields.timeUnitLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13443/*"TIME_STR_HOURS"*/, 0);
      if ( v22 )
      {
        UILabel__set_text(v22, v4, 0);
        v18 = v25;
        v20 = 1;
        v19 = this;
        goto LABEL_30;
      }
    }
    goto LABEL_33;
  }
  v24 = v6 / 0x15180uLL;
  v7 = this->fields.numLabel;
  v4 = System_Int64__ToString((int64_t)&v24, 0);
  if ( !v7 )
    goto LABEL_33;
  UILabel__set_text(v7, v4, 0);
  v8 = this->fields.timeUnitLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13442/*"TIME_STR_DAYS"*/, 0);
  if ( !v8 )
    goto LABEL_33;
  UILabel__set_text(v8, v4, 0);
  RemainTimeComponent__AdjustLayout(this, (float)v24, 0, v9);
  v11 = 1.0;
  v12 = 1.0;
  v13 = 1.0;
LABEL_31:
  v23 = 1.0;
  RemainTimeComponent__SetLabelsColor(this, *(UnityEngine_Color_o *)&v11, v10);
}


void RemainTimeComponent__StartTimeUpdate(RemainTimeComponent_o *this, int64_t limit, const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  void *ObjectList_object; // x0
  int v7; // w8
  void *v8; // x21
  unsigned int v9; // w24
  Il2CppObject *Component_object; // x22

  if ( (byte_4C3F460 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObjectList_GameObject___);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_13167/*"SummonBanners/DownloadSummonBanner"*/);
    sub_1C37058(&StringLiteral_20588/*"img_summon_limit_base"*/);
    sub_1C37058(&StringLiteral_12815/*"SetRemainTime"*/);
    byte_4C3F460 = 1;
  }
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.timeOverLabel, 0, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.remainLabel, 1, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.numLabel, 1, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.timeUnitLabel, 1, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_13167/*"SummonBanners/DownloadSummonBanner"*/, 0);
  if ( AssetStorage )
  {
    ObjectList_object = AssetData__GetObjectList_object_(
                          AssetStorage,
                          (const MethodInfo_30C9180 *)Method_AssetData_GetObjectList_GameObject___);
    if ( !ObjectList_object )
      goto LABEL_22;
    v7 = *((_DWORD *)ObjectList_object + 6);
    v8 = ObjectList_object;
    if ( v7 >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= v7 )
          sub_1C372BC(ObjectList_object);
        ObjectList_object = (void *)*((_QWORD *)v8 + (int)v9 + 4);
        if ( !ObjectList_object )
          goto LABEL_22;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)ObjectList_object,
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ObjectList_object = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)ObjectList_object & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_22;
          ObjectList_object = UIAtlas__GetSprite(
                                (UIAtlas_o *)Component_object,
                                (System_String_o *)StringLiteral_20588/*"img_summon_limit_base"*/,
                                0);
          if ( ObjectList_object )
            break;
        }
        v7 = *((_DWORD *)v8 + 6);
        if ( (int)++v9 >= v7 )
          goto LABEL_21;
      }
      ObjectList_object = this->fields.backGround;
      if ( ObjectList_object )
      {
        UISprite__set_atlas((UISprite_o *)ObjectList_object, (UIAtlas_o *)Component_object, 0);
        ObjectList_object = this->fields.backGround;
        if ( ObjectList_object )
        {
          UISprite__set_spriteName((UISprite_o *)ObjectList_object, (System_String_o *)StringLiteral_20588/*"img_summon_limit_base"*/, 0);
          goto LABEL_21;
        }
      }
LABEL_22:
      sub_1C372B4(ObjectList_object);
    }
  }
LABEL_21:
  this->fields.timeLimit = limit;
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12815/*"SetRemainTime"*/,
    0.0,
    1.0,
    0);
}