void DesignCardManager___ctor(DesignCardManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int v11; // w8
  const MethodInfo_47A2F28 *v12; // x1

  if ( (byte_596FE96 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DesignCardManager___ctor__);
    byte_596FE96 = 1;
  }
  v3 = sub_2213B20(int___TypeInfo, 2);
  if ( !v3 )
    sub_2213CDC(0, v4);
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11 || (*(_DWORD *)(v3 + 32) = 512, v11 == 1) )
    sub_2213CE4(v3);
  *(_DWORD *)(v3 + 36) = 875;
  this->fields.cardTextureSize = (struct System_Int32_array *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.cardTextureSize, v3, v5, v6, v7, v8, v9, v10);
  v12 = (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_DesignCardManager___ctor__;
  this->fields.SVT_EQ_IMAGE_ID = 9999;
  SingletonMonoBehaviour_object____ctor((SingletonMonoBehaviour_T__o *)this, v12);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *DesignCardManager__GetCommanCodeCardPath(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  System_String_o *DesignCardPrefix; // x0
  __int64 v6; // x1
  System_String_o *v7; // x19
  System_String_o *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = imageId;
  if ( (byte_596FE91 & 1) == 0 )
  {
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&StringLiteral_19092/*"cord_b"*/);
    sub_2213A60(&StringLiteral_19091/*"cord"*/);
    sub_2213A60(&StringLiteral_18772/*"class"*/);
    sub_2213A60(&StringLiteral_4763/*"CommandCord/"*/);
    sub_2213A60(&StringLiteral_19093/*"cord_n"*/);
    byte_596FE91 = 1;
  }
  if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, *(_QWORD *)&imageId);
  DesignCardPrefix = Rarity__getDesignCardPrefix(rarity, 0);
  if ( !DesignCardPrefix
    || (DesignCardPrefix = System_String__Replace_75703400(
                             DesignCardPrefix,
                             (System_String_o *)StringLiteral_18772/*"class"*/,
                             (System_String_o *)StringLiteral_19091/*"cord"*/,
                             0)) == 0 )
  {
    sub_2213CDC(DesignCardPrefix, v6);
  }
  v7 = System_String__Replace_75703400(
         DesignCardPrefix,
         (System_String_o *)StringLiteral_19093/*"cord_n"*/,
         (System_String_o *)StringLiteral_19092/*"cord_b"*/,
         0);
  v8 = System_Int32__ToString((int32_t)&v10, 0);
  return System_String__Concat_75694928((System_String_o *)StringLiteral_4763/*"CommandCord/"*/, v7, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *DesignCardManager__GetDesignCardPath(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  int v7; // w8
  System_String_o *DesignCardPrefix; // x21
  int v9; // w8
  System_String_o *v10; // x0
  int v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596FE90 & 1) == 0 )
  {
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&StringLiteral_4655/*"ClassCard/"*/);
    byte_596FE90 = 1;
  }
  v7 = *(&Rarity_TypeInfo->_2.cctor_finished + 1);
  v12 = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, *(_QWORD *)&imageId);
  DesignCardPrefix = Rarity__getDesignCardPrefix(rarity, 0);
  v9 = imageId + (imageId & 1) - 1;
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    v9 = 1;
  v12 = v9;
  v10 = System_Int32__ToString((int32_t)&v12, 0);
  return System_String__Concat_75694928((System_String_o *)StringLiteral_4655/*"ClassCard/"*/, DesignCardPrefix, v10, 0);
}


int32_t DesignCardManager__GetEnableOverwriteClassImageId(
        DesignCardManager_o *this,
        Il2CppObject *scriptValue,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  __int64 v6; // x10
  Il2CppObject *Item; // x0
  __int64 v8; // x1
  int32_t v9; // w20
  Il2CppObject *v10; // x0
  bool v11; // w0
  int32_t v12; // w8
  Il2CppObject *v13; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+0h] [xbp-80h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF
  int32_t result[2]; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_596FE95 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    byte_596FE95 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  *(_QWORD *)result = 0;
  v15 = 0;
  if ( scriptValue )
  {
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( scriptValue->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (System_Collections_Generic_List_object__c *)scriptValue->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo
      && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)scriptValue, 0) )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)scriptValue,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
      v16 = v14;
      v14.fields._list = 0;
      *(_QWORD *)&v14.fields._index = &v16;
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v16,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
          goto LABEL_25;
        scriptValue = v16.fields._current;
        if ( !v16.fields._current )
          goto LABEL_32;
        v6 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
        if ( v16.fields._current->klass->_2.naturalAligment < (unsigned int)v6
          || (System_Collections_Generic_List_object__c *)v16.fields._current->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_List_object__TypeInfo
          || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v16.fields._current, 0) )
        {
LABEL_25:
          LODWORD(scriptValue) = 0;
          goto LABEL_32;
        }
        if ( LODWORD(scriptValue[1].monitor) == 1 )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)scriptValue,
                 1,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_object__get_Item__);
        if ( Item )
          Item = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                   Item,
                                   Item->klass->vtable[3].method);
        if ( System_Int32__TryParse((System_String_o *)Item, &result[1], 0) )
        {
          v9 = result[1];
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v8);
          if ( CondType__IsOpen(113, v9, 0, 0, 0, 0) )
          {
            v10 = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)scriptValue,
                    0,
                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_object__get_Item__);
            if ( v10 )
              v10 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v10->klass->vtable[3].methodPtr)(
                                      v10,
                                      v10->klass->vtable[3].method);
            v11 = System_Int32__TryParse((System_String_o *)v10, &v15, 0);
            v12 = v15;
            goto LABEL_29;
          }
        }
      }
      v13 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)scriptValue,
              0,
              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_object__get_Item__);
      if ( v13 )
        v13 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v13->klass->vtable[3].methodPtr)(
                                v13,
                                v13->klass->vtable[3].method);
      v11 = System_Int32__TryParse((System_String_o *)v13, result, 0);
      v12 = result[0];
LABEL_29:
      if ( v11 )
        LODWORD(scriptValue) = v12;
      else
        LODWORD(scriptValue) = 0;
LABEL_32:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    }
    else
    {
      LODWORD(scriptValue) = 0;
    }
  }
  return (int)scriptValue;
}


System_String_o *DesignCardManager__GetExceedFrameCardPath(
        DesignCardManager_o *this,
        int32_t imageId,
        System_String_o *prefix,
        const MethodInfo *method)
{
  int v7; // w8
  System_String_o *v8; // x0
  int v10; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596FE92 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4655/*"ClassCard/"*/);
    byte_596FE92 = 1;
  }
  v7 = imageId + (imageId & 1) - 1;
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    v7 = 1;
  v10 = v7;
  v8 = System_Int32__ToString((int32_t)&v10, 0);
  return System_String__Concat_75694928((System_String_o *)StringLiteral_4655/*"ClassCard/"*/, prefix, v8, 0);
}


int32_t DesignCardManager__GetFileIndex(DesignCardManager_o *this, int32_t imageId, const MethodInfo *method)
{
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    return 1;
  else
    return imageId + (imageId & 1) - 1;
}


System_String_o *DesignCardManager__GetGrandDesignCardPath(
        DesignCardManager_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  int v5; // w8
  Il2CppObject *v6; // x0
  int v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596FE93 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4656/*"ClassCard/class_g_{0}"*/);
    byte_596FE93 = 1;
  }
  v5 = classId + (classId & 1) - 1;
  if ( this->fields.SVT_EQ_IMAGE_ID == classId )
    v5 = 1;
  v8 = v5;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v8);
  return System_String__Format((System_String_o *)StringLiteral_4656/*"ClassCard/class_g_{0}"*/, v6, 0);
}


void DesignCardManager__LoadDesignCardTexture(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        System_Action_Texture2D__o *callback,
        const MethodInfo *method)
{
  DesignCardManager_o *DesignCardPath; // x0
  const MethodInfo *v7; // x3

  DesignCardPath = (DesignCardManager_o *)DesignCardManager__GetDesignCardPath(
                                            this,
                                            imageId,
                                            rarity,
                                            (const MethodInfo *)callback);
  DesignCardManager__LoadDesignCardTexture_48222740(DesignCardPath, (System_String_o *)DesignCardPath, callback, v7);
}


void DesignCardManager__LoadDesignCardTexture_48222740(
        DesignCardManager_o *this,
        System_String_o *filePath,
        System_Action_Texture2D__o *callback,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  AssetLoader_LoadEndDataHandler_o *v15; // x20
  __int64 v16; // x1

  if ( (byte_596FE8C & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_DesignCardManager___c__DisplayClass4_0__LoadDesignCardTexture_b__0__);
    sub_2213A60(&DesignCardManager___c__DisplayClass4_0_TypeInfo);
    byte_596FE8C = 1;
  }
  v6 = sub_2213CCC(DesignCardManager___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_2213CDC(v7, v8);
  *(_QWORD *)(v6 + 16) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)callback, v9, v10, v11, v12, v13, v14);
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)v6,
    Method_DesignCardManager___c__DisplayClass4_0__LoadDesignCardTexture_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v16);
  AssetManager__loadAssetStorage(filePath, v15, 1, 0, 0);
}


void DesignCardManager__ReleaseDesignTexture(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *DesignCardPath; // x19

  if ( (byte_596FE8D & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596FE8D = 1;
  }
  DesignCardPath = DesignCardManager__GetDesignCardPath(this, imageId, rarity, method);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
  AssetManager__releaseAssetStorage(DesignCardPath, 0);
}


void DesignCardManager__SetupCardImage(
        DesignCardManager_o *this,
        AssetData_o *d,
        UnityEngine_Transform_o *cardNode,
        int32_t imageId,
        const MethodInfo *method)
{
  DesignCardManager_o *v8; // x20
  DesignCardManager_o *v9; // x22
  Il2CppObject *Component_object; // x2
  const MethodInfo *v11; // x4

  v8 = this;
  if ( (byte_596FE94 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D___);
    this = (DesignCardManager_o *)sub_2213A60(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_596FE94 = 1;
  }
  if ( !d
    || (this = (DesignCardManager_o *)AssetData__GetObject_object_(
                                        d,
                                        (const MethodInfo_37D239C *)Method_AssetData_GetObject_Texture2D___),
        !cardNode) )
  {
    sub_2213CDC(this, d);
  }
  v9 = this;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)cardNode,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  DesignCardManager__SetupDesignCardTexture(
    v8,
    imageId,
    (UITexture_o *)Component_object,
    (UnityEngine_Texture2D_o *)v9,
    v11);
}


void DesignCardManager__SetupDesignCard(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        UITexture_o *target,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w21
  System_Action_object__o *v33; // x22
  const MethodInfo *v34; // x3
  DesignCardManager_o *DesignCardPath; // x0
  const MethodInfo *v36; // x3

  if ( (byte_596FE8E & 1) == 0 )
  {
    sub_2213A60(&System_Action_Texture2D__TypeInfo);
    sub_2213A60(&Method_DesignCardManager___c__DisplayClass6_0__SetupDesignCard_b__0__);
    sub_2213A60(&DesignCardManager___c__DisplayClass6_0_TypeInfo);
    byte_596FE8E = 1;
  }
  v11 = sub_2213CCC(DesignCardManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_2213CDC(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v11 + 24) = imageId;
  *(_QWORD *)(v11 + 32) = target;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)target, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 40) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 40), (int32_t)callback, v26, v27, v28, v29, v30, v31);
  v32 = *(_DWORD *)(v11 + 24);
  v33 = (System_Action_object__o *)sub_2213CCC(System_Action_Texture2D__TypeInfo);
  System_Action_object____ctor(
    v33,
    (Il2CppObject *)v11,
    Method_DesignCardManager___c__DisplayClass6_0__SetupDesignCard_b__0__,
    0);
  DesignCardPath = (DesignCardManager_o *)DesignCardManager__GetDesignCardPath(this, v32, rarity, v34);
  DesignCardManager__LoadDesignCardTexture_48222740(
    DesignCardPath,
    (System_String_o *)DesignCardPath,
    (System_Action_Texture2D__o *)v33,
    v36);
}


// local variable allocation has failed, the output may be wrong!
void DesignCardManager__SetupDesignCardTexture(
        DesignCardManager_o *this,
        int32_t imageId,
        UITexture_o *target,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  char v6; // w20
  DesignCardManager_o *v7; // x21
  struct System_Int32_array *cardTextureSize; // x8
  UnityEngine_Rect_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !target
    || (v6 = imageId,
        v7 = this,
        this = (DesignCardManager_o *)((__int64 (__fastcall *)(UITexture_o *, UnityEngine_Texture2D_o *, const MethodInfo *))target->klass->vtable._27_set_mainTexture.methodPtr)(
                                        target,
                                        tex,
                                        target->klass->vtable._27_set_mainTexture.method),
        (cardTextureSize = v7->fields.cardTextureSize) == 0) )
  {
    sub_2213CDC(this, *(_QWORD *)&imageId);
  }
  if ( (cardTextureSize->max_length & 0xFFFFFFFE) == 0 )
    sub_2213CE4(this);
  v9.fields.m_Width = 0.5;
  v9.fields.m_Height = (float)cardTextureSize->m_Items[1] * 0.00097656;
  v9.fields.m_XMin = vcvts_n_f32_s32((v6 & 1) == 0, 1u);
  v9.fields.m_YMin = 1.0 - v9.fields.m_Height;
  UITexture__set_uvRect(target, v9, 0);
}


void DesignCardManager__SetupDesignCard_48223416(
        DesignCardManager_o *this,
        int32_t imageId,
        System_String_o *filePath,
        UITexture_o *target,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Action_object__o *v32; // x20
  DesignCardManager_o *v33; // x0
  const MethodInfo *v34; // x3

  if ( (byte_596FE8F & 1) == 0 )
  {
    sub_2213A60(&System_Action_Texture2D__TypeInfo);
    sub_2213A60(&Method_DesignCardManager___c__DisplayClass7_0__SetupDesignCard_b__0__);
    sub_2213A60(&DesignCardManager___c__DisplayClass7_0_TypeInfo);
    byte_596FE8F = 1;
  }
  v11 = sub_2213CCC(DesignCardManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_2213CDC(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v11 + 24) = imageId;
  *(_QWORD *)(v11 + 32) = target;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)target, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 40) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 40), (int32_t)callback, v26, v27, v28, v29, v30, v31);
  v32 = (System_Action_object__o *)sub_2213CCC(System_Action_Texture2D__TypeInfo);
  System_Action_object____ctor(
    v32,
    (Il2CppObject *)v11,
    Method_DesignCardManager___c__DisplayClass7_0__SetupDesignCard_b__0__,
    0);
  DesignCardManager__LoadDesignCardTexture_48222740(v33, filePath, (System_Action_Texture2D__o *)v32, v34);
}


void DesignCardManager___c__DisplayClass4_0___ctor(
        DesignCardManager___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DesignCardManager___c__DisplayClass4_0___LoadDesignCardTexture_b__0(
        DesignCardManager___c__DisplayClass4_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  DesignCardManager___c__DisplayClass4_0_o *v4; // x19
  Il2CppObject *Object_object; // x0
  struct System_Action_Texture2D__o *callback; // x8

  v4 = this;
  if ( (byte_596FE97 & 1) == 0 )
  {
    this = (DesignCardManager___c__DisplayClass4_0_o *)sub_2213A60(&Method_AssetData_GetObject_Texture2D___);
    byte_596FE97 = 1;
  }
  if ( !data )
    sub_2213CDC(this, data);
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_37D239C *)Method_AssetData_GetObject_Texture2D___);
  callback = v4->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      Object_object,
      callback->fields.method);
}


void DesignCardManager___c__DisplayClass6_0___ctor(
        DesignCardManager___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DesignCardManager___c__DisplayClass6_0___SetupDesignCard_b__0(
        DesignCardManager___c__DisplayClass6_0_o *this,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  DesignCardManager_o *_4__this; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, tex);
  DesignCardManager__SetupDesignCardTexture(_4__this, this->fields.imageId, this->fields.target, tex, v3);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}


void DesignCardManager___c__DisplayClass7_0___ctor(
        DesignCardManager___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DesignCardManager___c__DisplayClass7_0___SetupDesignCard_b__0(
        DesignCardManager___c__DisplayClass7_0_o *this,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  DesignCardManager_o *_4__this; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, tex);
  DesignCardManager__SetupDesignCardTexture(_4__this, this->fields.imageId, this->fields.target, tex, v3);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}