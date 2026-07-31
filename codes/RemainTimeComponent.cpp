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
    sub_21FFECC(remainLabel, isRemainHours);
  }
  ComponentHelper__SetLocalPositionX(
    (UnityEngine_Component_o *)remainLabel,
    (float)(v11 + (float)numLabel->fields.mWidth) + (float)((float)remainLabel->fields.mWidth * 0.5),
    0);
  v13 = log10f(remainTime);
  if ( isRemainHours )
    v14 = 88;
  else
    v14 = 84;
  v15 = *(float *)((char *)&this->klass + v14);
  if ( v13 == INFINITY || (v16 = (int)v13, digitOffset = 0.0, v16 + 1 <= 1) )
    digitOffset = this->fields.digitOffset;
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
    sub_21FFECC(remainLabel, method);
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
  __int64 v2; // x2
  UILabel_o *remainLabel; // x20
  int v5; // w8
  System_String_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t timeLimit; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  unsigned __int64 v13; // x8
  UILabel_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *v17; // x20
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x1
  float v20; // s0 OVERLAPPED
  float v21; // s1
  float v22; // s2
  UILabel_o *timeOverLabel; // x20
  UILabel_o *numLabel; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  UILabel_o *timeUnitLabel; // x20
  const MethodInfo *v28; // x2
  __int64 v29; // x8
  RemainTimeComponent_o *v30; // x0
  bool v31; // w1
  UILabel_o *v32; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  UILabel_o *v35; // x20
  float v36; // s3
  signed __int64 v37; // [xsp+0h] [xbp-40h] BYREF
  unsigned __int64 v38; // [xsp+8h] [xbp-38h] BYREF
  unsigned __int64 v39; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_59348C3 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13940/*"TIME_REST6_TIMEOVER"*/);
    sub_21FFC50(&StringLiteral_13970/*"TIME_STR_MINUTES"*/);
    sub_21FFC50(&StringLiteral_13968/*"TIME_STR_DAYS"*/);
    sub_21FFC50(&StringLiteral_13936/*"TIME_REST6_HEAD"*/);
    sub_21FFC50(&StringLiteral_13969/*"TIME_STR_HOURS"*/);
    byte_59348C3 = 1;
  }
  remainLabel = this->fields.remainLabel;
  v39 = 0;
  v5 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  v37 = 0;
  v38 = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13936/*"TIME_REST6_HEAD"*/, 0);
  if ( !remainLabel )
    goto LABEL_32;
  UILabel__set_text(remainLabel, v6, 0);
  timeLimit = this->fields.timeLimit;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  v13 = timeLimit - NetworkManager__getTime(0);
  if ( (v13 & 0x8000000000000000LL) != 0LL )
  {
    timeOverLabel = this->fields.timeOverLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13940/*"TIME_REST6_TIMEOVER"*/, 0);
    if ( timeOverLabel )
    {
      UILabel__set_text(timeOverLabel, v6, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.timeOverLabel, 1, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.remainLabel, 0, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.numLabel, 0, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.timeUnitLabel, 0, 0);
      UnityEngine_MonoBehaviour__CancelInvoke((UnityEngine_MonoBehaviour_o *)this, 0);
      return;
    }
    goto LABEL_32;
  }
  v39 = v13 / 0x3C;
  if ( v13 <= 0xE0F )
  {
    numLabel = this->fields.numLabel;
    v6 = System_Int64__ToString((int64_t)&v39, 0);
    if ( numLabel )
    {
      UILabel__set_text(numLabel, v6, 0);
      timeUnitLabel = this->fields.timeUnitLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v26);
      v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13970/*"TIME_STR_MINUTES"*/, 0);
      if ( timeUnitLabel )
      {
        UILabel__set_text(timeUnitLabel, v6, 0);
        v29 = v39;
        v30 = this;
        v31 = 0;
LABEL_30:
        RemainTimeComponent__AdjustLayout(v30, (float)v29, v31, v28);
        v22 = 0.0;
        v20 = 1.0;
        v21 = 1.0;
        goto LABEL_31;
      }
    }
LABEL_32:
    sub_21FFECC(v6, v7);
  }
  v38 = v13 / 0xE10;
  if ( v13 >> 7 <= 0x2A2 )
  {
    v32 = this->fields.numLabel;
    v6 = System_Int64__ToString((int64_t)&v38, 0);
    if ( v32 )
    {
      UILabel__set_text(v32, v6, 0);
      v35 = this->fields.timeUnitLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
      v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13969/*"TIME_STR_HOURS"*/, 0);
      if ( v35 )
      {
        UILabel__set_text(v35, v6, 0);
        v29 = v38;
        v30 = this;
        v31 = 1;
        goto LABEL_30;
      }
    }
    goto LABEL_32;
  }
  v14 = this->fields.numLabel;
  v37 = v13 / 0x15180;
  v6 = System_Int64__ToString((int64_t)&v37, 0);
  if ( !v14 )
    goto LABEL_32;
  UILabel__set_text(v14, v6, 0);
  v17 = this->fields.timeUnitLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13968/*"TIME_STR_DAYS"*/, 0);
  if ( !v17 )
    goto LABEL_32;
  UILabel__set_text(v17, v6, 0);
  RemainTimeComponent__AdjustLayout(this, (float)v37, 0, v18);
  v20 = 1.0;
  v21 = 1.0;
  v22 = 1.0;
LABEL_31:
  v36 = 1.0;
  RemainTimeComponent__SetLabelsColor(this, *(UnityEngine_Color_o *)&v20, v19);
}


void RemainTimeComponent__StartTimeUpdate(RemainTimeComponent_o *this, int64_t limit, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  AssetData_o *AssetStorage; // x0
  void *ObjectList_object; // x0
  __int64 v9; // x1
  int v10; // w8
  void *v11; // x21
  unsigned int v12; // w26
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Component_object; // x22

  if ( (byte_59348C4 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObjectList_GameObject___);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_13691/*"SummonBanners/DownloadSummonBanner"*/);
    sub_21FFC50(&StringLiteral_21541/*"img_summon_limit_base"*/);
    sub_21FFC50(&StringLiteral_13327/*"SetRemainTime"*/);
    byte_59348C4 = 1;
  }
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.timeOverLabel, 0, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.remainLabel, 1, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.numLabel, 1, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.timeUnitLabel, 1, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5, v6);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_13691/*"SummonBanners/DownloadSummonBanner"*/, 0);
  if ( AssetStorage )
  {
    ObjectList_object = AssetData__GetObjectList_object_(
                          AssetStorage,
                          (const MethodInfo_379F258 *)Method_AssetData_GetObjectList_GameObject___);
    if ( !ObjectList_object )
      goto LABEL_22;
    v10 = *((_DWORD *)ObjectList_object + 6);
    v11 = ObjectList_object;
    if ( v10 >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= v10 )
          sub_21FFED4(ObjectList_object);
        ObjectList_object = (void *)*((_QWORD *)v11 + (int)v12 + 4);
        if ( !ObjectList_object )
          goto LABEL_22;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)ObjectList_object,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
        ObjectList_object = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)ObjectList_object & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_22;
          ObjectList_object = UIAtlas__GetSprite(
                                (UIAtlas_o *)Component_object,
                                (System_String_o *)StringLiteral_21541/*"img_summon_limit_base"*/,
                                0);
          if ( ObjectList_object )
            break;
        }
        v10 = *((_DWORD *)v11 + 6);
        if ( (int)++v12 >= v10 )
          goto LABEL_21;
      }
      ObjectList_object = this->fields.backGround;
      if ( ObjectList_object )
      {
        UISprite__set_atlas((UISprite_o *)ObjectList_object, (UIAtlas_o *)Component_object, 0);
        ObjectList_object = this->fields.backGround;
        if ( ObjectList_object )
        {
          UISprite__set_spriteName((UISprite_o *)ObjectList_object, (System_String_o *)StringLiteral_21541/*"img_summon_limit_base"*/, 0);
          goto LABEL_21;
        }
      }
LABEL_22:
      sub_21FFECC(ObjectList_object, v9);
    }
  }
LABEL_21:
  this->fields.timeLimit = limit;
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13327/*"SetRemainTime"*/,
    0.0,
    1.0,
    0);
}