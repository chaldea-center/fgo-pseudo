void __fastcall SummonMiniBannerComponent___ctor(SummonMiniBannerComponent_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.SCALING_POS = 0x431B00003F666666LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall SummonMiniBannerComponent__GetBannerIndex(
        SummonMiniBannerComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.bannerIdx;
}


VaildGachaInfo_o *__fastcall SummonMiniBannerComponent__GetBannerSummonInfo(
        SummonMiniBannerComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.info;
}


int32_t __fastcall SummonMiniBannerComponent__GetMoveBannerIndex(
        SummonMiniBannerComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.moveBannerIdx;
}


void __fastcall SummonMiniBannerComponent__OnClickBanner(SummonMiniBannerComponent_o *this, const MethodInfo *method)
{
  SummonMiniBannerComponent_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    SummonMiniBannerComponent_CallbackFunc__Invoke(callbackFunc, this->fields.moveBannerIdx, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonMiniBannerComponent__SetBannerInfo(
        SummonMiniBannerComponent_o *this,
        VaildGachaInfo_o *info,
        int32_t idx,
        int32_t moveIdx,
        UnityEngine_GameObject_o *bannerAtlas,
        System_String_o *imgName,
        SummonMiniBannerComponent_CallbackFunc_o *callback,
        UIPanel_o *parent,
        const MethodInfo *method)
{
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UIAtlas_o *Component_srcLineSprite; // x0
  __int64 v31; // x1

  if ( (byte_418AE2E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, info);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    byte_418AE2E = 1;
  }
  this->fields.info = info;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.info,
    (System_Int32_array **)info,
    *(System_String_array ***)&idx,
    *(System_String_array ***)&moveIdx,
    (System_Boolean_array **)bannerAtlas,
    (System_Int32_array **)imgName,
    (System_Int32_array *)callback,
    (System_Int32_array *)parent);
  this->fields.bannerIdx = idx;
  this->fields.moveBannerIdx = moveIdx;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.scrollPanel = parent;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.scrollPanel,
    (System_Int32_array **)parent,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UIAtlas_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
  {
    if ( !bannerAtlas
      || (Component_srcLineSprite = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   bannerAtlas,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.bannerImg)
      || (UISprite__set_atlas(this->fields.bannerImg, Component_srcLineSprite, 0LL),
          (Component_srcLineSprite = (UIAtlas_o *)this->fields.bannerImg) == 0LL) )
    {
      sub_B2C434(Component_srcLineSprite, v31);
    }
    UISprite__set_spriteName((UISprite_o *)Component_srcLineSprite, imgName, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonMiniBannerComponent__SetEnableCollider(
        SummonMiniBannerComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *Component_WebViewObject; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_418AE2F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, isEnable);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418AE2F = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v7 )
  {
    if ( !Component_WebViewObject )
      sub_B2C434(v7, v8);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isEnable, 0LL);
  }
}


void __fastcall SummonMiniBannerComponent__Update(SummonMiniBannerComponent_o *this, const MethodInfo *method)
{
  struct UIPanel_o *scrollPanel; // x8
  float x; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v6; // s0
  float v7; // s8
  UnityEngine_GameObject_o *v8; // x0

  scrollPanel = this->fields.scrollPanel;
  if ( !scrollPanel )
    sub_B2C434(this, method);
  x = scrollPanel->fields.mClipOffset.fields.x;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = vabds_f32(x, GameObjectExtensions__GetLocalPositionX(gameObject, 0LL));
  if ( v6 <= 0.1 )
    v7 = 1.0;
  else
    v7 = 1.0 - (float)(v6 * (float)((float)(1.0 - this->fields.SCALING_POS) / *(&this->fields.SCALING_POS + 1)));
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_31328144(v8, v7, v7, 0LL);
}


void __fastcall SummonMiniBannerComponent__add_callbackFunc(
        SummonMiniBannerComponent_o *this,
        SummonMiniBannerComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SummonMiniBannerComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SummonMiniBannerComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SummonMiniBannerComponent_o *v11; // x0
  SummonMiniBannerComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_418AE2C & 1) == 0 )
  {
    sub_B2C35C(&SummonMiniBannerComponent_CallbackFunc_TypeInfo, value);
    byte_418AE2C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SummonMiniBannerComponent_CallbackFunc_c *)v8->klass != SummonMiniBannerComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  SummonMiniBannerComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SummonMiniBannerComponent__remove_callbackFunc(
        SummonMiniBannerComponent_o *this,
        SummonMiniBannerComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SummonMiniBannerComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SummonMiniBannerComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SummonMiniBannerComponent_o *v11; // x0
  VaildGachaInfo_o *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_GameObject_o *v15; // x4
  System_String_o *v16; // x5
  SummonMiniBannerComponent_CallbackFunc_o *v17; // x6
  UIPanel_o *v18; // x7
  const MethodInfo *v19; // [xsp+30h] [xbp+10h]

  if ( (byte_418AE2D & 1) == 0 )
  {
    sub_B2C35C(&SummonMiniBannerComponent_CallbackFunc_TypeInfo, value);
    byte_418AE2D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SummonMiniBannerComponent_CallbackFunc_c *)v8->klass != SummonMiniBannerComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  SummonMiniBannerComponent__SetBannerInfo(v11, v12, v13, v14, v15, v16, v17, v18, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonMiniBannerComponent_CallbackFunc___ctor(
        SummonMiniBannerComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SummonMiniBannerComponent_CallbackFunc__BeginInvoke(
        SummonMiniBannerComponent_CallbackFunc_o *this,
        int32_t moveIndex,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = moveIndex;
  if ( (byte_41847C5 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&moveIndex);
    byte_41847C5 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall SummonMiniBannerComponent_CallbackFunc__EndInvoke(
        SummonMiniBannerComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonMiniBannerComponent_CallbackFunc__Invoke(
        SummonMiniBannerComponent_CallbackFunc_o *this,
        int32_t moveIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  SummonMiniBannerComponent_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  SummonMiniBannerComponent_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(_QWORD, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  SummonMiniBannerComponent_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (SummonMiniBannerComponent_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(_QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&moveIndex, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int)moveIndex, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, (unsigned int)moveIndex, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, (unsigned int)moveIndex, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            (unsigned int)moveIndex,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, (unsigned int)moveIndex, v22);
    goto LABEL_37;
  }
}