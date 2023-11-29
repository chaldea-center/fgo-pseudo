void __fastcall StandFigureRenderWaitStatus___ctor(
        StandFigureRenderWaitStatus_o *this,
        int32_t id,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // [xsp+0h] [xbp-10h]

  StandFigureRenderWaitStatus___ctor_26846364(this, 0LL, id, faceType, 0, 0, textureList, callback, v6);
}


void __fastcall StandFigureRenderWaitStatus___ctor_26845644(
        StandFigureRenderWaitStatus_o *this,
        UnityEngine_RenderTexture_o *renderTex,
        int32_t id,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // [xsp+0h] [xbp-10h]

  StandFigureRenderWaitStatus___ctor_26846364(this, renderTex, id, faceType, 0, 0, textureList, callback, v7);
}


void __fastcall StandFigureRenderWaitStatus___ctor_26846120(
        StandFigureRenderWaitStatus_o *this,
        UnityEngine_RenderTexture_o *renderTex,
        int32_t id,
        int32_t faceType,
        int32_t formId,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v8; // [xsp+0h] [xbp-10h]

  StandFigureRenderWaitStatus___ctor_26846364(this, renderTex, id, faceType, formId, 0, textureList, callback, v8);
}


void __fastcall StandFigureRenderWaitStatus___ctor_26846364(
        StandFigureRenderWaitStatus_o *this,
        UnityEngine_RenderTexture_o *renderTex,
        int32_t id,
        int32_t faceType,
        int32_t formId,
        bool isFaceOnly,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.imageId = id;
  this->fields.faceType = faceType;
  this->fields.formId = formId;
  this->fields.textureList = textureList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.textureList,
    (System_Int32_array **)textureList,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.renderTex = renderTex;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.renderTex,
    (System_Int32_array **)renderTex,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.isFaceOnly = isFaceOnly;
  if ( callback )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
}


void __fastcall StandFigureRenderWaitStatus__Callback(
        StandFigureRenderWaitStatus_o *this,
        UnityEngine_RenderTexture_o *renderTex,
        const MethodInfo *method)
{
  StandFigureRenderWaitStatus_EndHandler_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    StandFigureRenderWaitStatus_EndHandler__Invoke(callbackFunc, renderTex, 0LL);
  }
  else
  {
    if ( !renderTex )
      sub_B170D4();
    UnityEngine_RenderTexture__Release(renderTex, 0LL);
  }
}


UnityEngine_RenderTexture_o *__fastcall StandFigureRenderWaitStatus__GetRenderTexture(
        StandFigureRenderWaitStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.renderTex;
}


bool __fastcall StandFigureRenderWaitStatus__IsFaceOnly(StandFigureRenderWaitStatus_o *this, const MethodInfo *method)
{
  return this->fields.isFaceOnly;
}


void __fastcall StandFigureRenderWaitStatus__SetCharacter(
        StandFigureRenderWaitStatus_o *this,
        UIStandFigureRender_o *standFigureRender,
        const MethodInfo *method)
{
  int32_t imageId; // w1
  int32_t faceType; // w2
  int32_t formId; // w3
  UnityEngine_Texture2D_array *textureList; // x4

  if ( !standFigureRender )
    sub_B170D4();
  imageId = this->fields.imageId;
  faceType = this->fields.faceType;
  formId = this->fields.formId;
  textureList = this->fields.textureList;
  if ( this->fields.isFaceOnly )
    UIStandFigureRender__SetFace(standFigureRender, imageId, faceType, formId, textureList, 0LL);
  else
    UIStandFigureRender__SetCharacter(standFigureRender, imageId, faceType, formId, textureList, 0LL);
}


void __fastcall StandFigureRenderWaitStatus__add_callbackFunc(
        StandFigureRenderWaitStatus_o *this,
        StandFigureRenderWaitStatus_EndHandler_o *value,
        const MethodInfo *method)
{
  struct StandFigureRenderWaitStatus_EndHandler_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct StandFigureRenderWaitStatus_EndHandler_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  StandFigureRenderWaitStatus_o *v11; // x0
  StandFigureRenderWaitStatus_EndHandler_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FAE74 & 1) == 0 )
  {
    sub_B16FFC(&StandFigureRenderWaitStatus_EndHandler_TypeInfo, value);
    byte_40FAE74 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (StandFigureRenderWaitStatus_EndHandler_c *)v8->klass != StandFigureRenderWaitStatus_EndHandler_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (StandFigureRenderWaitStatus_o *)sub_B173C8(v8);
  StandFigureRenderWaitStatus__remove_callbackFunc(v11, v12, v13);
}


void __fastcall StandFigureRenderWaitStatus__remove_callbackFunc(
        StandFigureRenderWaitStatus_o *this,
        StandFigureRenderWaitStatus_EndHandler_o *value,
        const MethodInfo *method)
{
  struct StandFigureRenderWaitStatus_EndHandler_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct StandFigureRenderWaitStatus_EndHandler_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  StandFigureRenderWaitStatus_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FAE75 & 1) == 0 )
  {
    sub_B16FFC(&StandFigureRenderWaitStatus_EndHandler_TypeInfo, value);
    byte_40FAE75 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (StandFigureRenderWaitStatus_EndHandler_c *)v8->klass != StandFigureRenderWaitStatus_EndHandler_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (StandFigureRenderWaitStatus_o *)sub_B173C8(v8);
  StandFigureRenderWaitStatus__GetRenderTexture(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureRenderWaitStatus_EndHandler___ctor(
        StandFigureRenderWaitStatus_EndHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall StandFigureRenderWaitStatus_EndHandler__BeginInvoke(
        StandFigureRenderWaitStatus_EndHandler_o *this,
        UnityEngine_RenderTexture_o *texture,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)texture;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B16FA0(this, v6, callback, object);
}


void __fastcall StandFigureRenderWaitStatus_EndHandler__EndInvoke(
        StandFigureRenderWaitStatus_EndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall StandFigureRenderWaitStatus_EndHandler__Invoke(
        StandFigureRenderWaitStatus_EndHandler_o *this,
        UnityEngine_RenderTexture_o *texture,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  StandFigureRenderWaitStatus_EndHandler_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  UnityEngine_RenderTexture_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  unsigned int v16; // w23
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  _DWORD *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  void (__fastcall **v24)(UnityEngine_RenderTexture_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, UnityEngine_RenderTexture_o *, _QWORD); // x0
  StandFigureRenderWaitStatus_EndHandler_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(UnityEngine_RenderTexture_o *, __int64); // x23
  char v31; // w0
  int v32; // w8
  char v33; // w23
  char v34; // w0
  __int64 v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  unsigned __int64 v38; // x10
  _DWORD *v39; // x11
  char v40; // w22
  char v41; // w0
  UnityEngine_RenderTexture_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  StandFigureRenderWaitStatus_EndHandler_o *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v47;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (StandFigureRenderWaitStatus_EndHandler_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(UnityEngine_RenderTexture_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v27->fields.extra_arg, texture, method);
      v31 = sub_B1702C(v28);
      v32 = *(unsigned __int8 *)(v28 + 74);
      if ( (v31 & 1) != 0 )
      {
        if ( v32 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v32 != 1 )
        {
          if ( *(__int16 *)(v28 + 72) != -1 && this->fields.m_target )
          {
            v40 = sub_B17024(v28);
            v41 = sub_B17428(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = texture->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&texture->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&texture->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_AAFEF8(texture, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&texture->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(UnityEngine_RenderTexture_o *, _QWORD))sub_B170AC(v15, v28);
              (*v24)(texture, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = texture->klass;
                if ( *(_WORD *)&texture->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&texture->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_AAFEF8(texture, class_0, v9);
                }
                (*(void (__fastcall **)(UnityEngine_RenderTexture_o *, _QWORD))v14)(texture, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(UnityEngine_RenderTexture_o *, _QWORD))&texture->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  texture,
                  *((_QWORD *)&texture->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(texture, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B17024(v28);
          v34 = sub_B17428(v28);
          if ( (v33 & 1) != 0 )
          {
            if ( (v34 & 1) != 0 )
            {
              v35 = *v29;
              v36 = *(_QWORD *)(v28 + 24);
              v37 = *(unsigned __int16 *)(v28 + 72);
              if ( *(_WORD *)(*v29 + 298) )
              {
                v38 = 0LL;
                v39 = (_DWORD *)(*(_QWORD *)(v35 + 176) + 8LL);
                while ( *((_QWORD *)v39 - 1) != v36 )
                {
                  ++v38;
                  v39 += 4;
                  if ( v38 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_48;
                }
                v25 = v35 + 16LL * (*v39 + (int)v37) + 312;
              }
              else
              {
LABEL_48:
                v25 = sub_AAFEF8(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, UnityEngine_RenderTexture_o *, _QWORD))sub_B170AC(v22, v28);
            (*v26)(v29, texture, v26);
          }
          else
          {
            v16 = *(unsigned __int16 *)(v28 + 72);
            if ( (v34 & 1) != 0 )
            {
              v17 = j_il2cpp_method_get_class_0(v28);
              v18 = *v29;
              if ( *(_WORD *)(*v29 + 298) )
              {
                v19 = 0LL;
                v20 = (_DWORD *)(*(_QWORD *)(v18 + 176) + 8LL);
                while ( *((_QWORD *)v20 - 1) != v17 )
                {
                  ++v19;
                  v20 += 4;
                  if ( v19 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_19;
                }
                v21 = v18 + 16LL * (int)(*v20 + v16) + 312;
              }
              else
              {
LABEL_19:
                v21 = sub_AAFEF8(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, UnityEngine_RenderTexture_o *, _QWORD))v21)(
                v29,
                texture,
                *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, UnityEngine_RenderTexture_o *, _QWORD))(*v29
                                                                                       + 16LL
                                                                                       * *(unsigned __int16 *)(v28 + 72)
                                                                                       + 312))(
                v29,
                texture,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, UnityEngine_RenderTexture_o *, __int64))v30)(v29, texture, v28);
    }
  }
}