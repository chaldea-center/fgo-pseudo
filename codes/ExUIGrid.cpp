void __fastcall ExUIGrid___ctor(ExUIGrid_o *this, const MethodInfo *method)
{
  UIGrid___ctor((UIGrid_o *)this, 0LL);
}


void __fastcall ExUIGrid__ResetPosition(
        ExUIGrid_o *this,
        System_Collections_Generic_List_Transform__o *list,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 IsNullOrEmpty; // x0
  __int64 v9; // x1
  int32_t maxPerLine; // w8
  float v11; // s9
  float size; // s8
  float v13; // s8
  unsigned int v14; // w8
  int v15; // w25
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  float v17; // s2
  int v18; // w26
  float v19; // s0
  int32_t v20; // w8
  int v21; // w2
  System_Collections_Generic_List_object__o *v22; // x22
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s15
  int v25; // w8
  float y; // s12
  float v27; // s0
  float v28; // s14
  int32_t v29; // w23
  float v30; // s13
  UnityEngine_Component_o *v31; // x24
  int32_t arrangement; // w8
  float x; // s9
  float v34; // s10
  float v35; // s8
  float cellWidth; // s0
  float v37; // s9
  double v38; // d0
  double v39; // d0
  float v40; // s1
  __int64 v41; // x8
  float v42; // s0
  float v43; // s1
  float cellHeight; // s0
  float v45; // s10
  double v46; // d0
  double v47; // d0
  float v48; // s1
  __int64 v49; // x8
  float v50; // s0
  float v51; // s1
  float v52; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v54; // [xsp+Ch] [xbp-B4h]
  double iptr; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B460FD & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Application_TypeInfo, list);
    sub_1BDB878(&Method_System_Collections_Generic_List_Transform__GetRange__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Transform__get_Count__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Transform__get_Item__, v7);
    byte_4B460FD = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)list, 0LL);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    maxPerLine = this->fields.maxPerLine;
    if ( maxPerLine <= 0 )
    {
      UIGrid__ResetPosition((UIGrid_o *)this, list, 0LL);
    }
    else
    {
      this->fields.mReposition = 0;
      if ( !list )
LABEL_72:
        sub_1BDBAD4(IsNullOrEmpty, v9);
      v11 = (float)maxPerLine;
      size = (float)list->fields._size;
      if ( !byte_4B3EFD1 )
      {
        sub_1BDB878(&System_Math_TypeInfo, v9);
        byte_4B3EFD1 = 1;
      }
      v13 = size / v11;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v14 = vcvtps_s32_f32(v13);
      if ( ceilf(v13) == INFINITY )
        v15 = 0x80000000;
      else
        v15 = v14;
      PivotOffset = NGUIMath__GetPivotOffset(this->fields.pivot, 0LL);
      if ( v15 >= 1 )
      {
        v17 = fminf(PivotOffset.fields.x, 1.0);
        v18 = 0;
        if ( PivotOffset.fields.x < 0.0 )
          v19 = 0.0;
        else
          v19 = v17;
        v54 = v19;
        while ( 1 )
        {
          v20 = this->fields.maxPerLine;
          if ( list->fields._size - v20 * v18 >= v20 )
            v21 = this->fields.maxPerLine;
          else
            v21 = list->fields._size - v20 * v18;
          IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___GetRange(
                                     (System_Collections_Generic_List_object__o *)list,
                                     v20 * v18,
                                     v21,
                                     (const MethodInfo_36D6994 *)Method_System_Collections_Generic_List_Transform__GetRange__);
          v22 = (System_Collections_Generic_List_object__o *)IsNullOrEmpty;
          if ( !byte_4B3E911 )
          {
            IsNullOrEmpty = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v9);
            byte_4B3E911 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          z = static_fields->zeroVector.fields.z;
          if ( this->fields.arrangement )
          {
            if ( !v22 )
              goto LABEL_72;
            v25 = v22->fields._size;
            y = static_fields->zeroVector.fields.y;
            v27 = this->fields.cellHeight * (float)(1 - v25);
            v28 = v27 + (float)(PivotOffset.fields.y * (float)(0.0 - v27));
          }
          else
          {
            if ( !v22 )
              goto LABEL_72;
            v25 = v22->fields._size;
            y = (float)(this->fields.cellHeight * (float)(1 - v15))
              + (float)(PivotOffset.fields.y * (float)(0.0 - (float)(this->fields.cellHeight * (float)(1 - v15))));
            v28 = (float)(v54 * (float)(this->fields.cellWidth * (float)(v25 - 1))) + 0.0;
          }
          if ( v25 >= 1 )
            break;
LABEL_69:
          if ( ++v18 == v15 )
            return;
        }
        v29 = 0;
        v30 = (float)v18;
        while ( 1 )
        {
          IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v22,
                                     v29,
                                     (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_Transform__get_Item__);
          if ( !IsNullOrEmpty )
            goto LABEL_72;
          v31 = (UnityEngine_Component_o *)IsNullOrEmpty;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)IsNullOrEmpty, 0LL);
          arrangement = this->fields.arrangement;
          x = localPosition.fields.x;
          v34 = localPosition.fields.y;
          v35 = localPosition.fields.z;
          if ( arrangement != 2 )
          {
            if ( arrangement == 1 )
            {
              x = this->fields.cellWidth * v30;
              v34 = (float)v29 * (float)-this->fields.cellHeight;
            }
            else if ( !arrangement )
            {
              x = this->fields.cellWidth * (float)v29;
              v34 = v30 * (float)-this->fields.cellHeight;
            }
            goto LABEL_60;
          }
          cellWidth = this->fields.cellWidth;
          if ( cellWidth > 0.0 )
            break;
LABEL_48:
          cellHeight = this->fields.cellHeight;
          if ( cellHeight <= 0.0 )
            goto LABEL_60;
          v45 = v34 / cellHeight;
          v46 = modf(v45, &iptr);
          if ( v45 >= 0.0 )
          {
            if ( v46 == 0.5 )
            {
              v47 = iptr;
              v48 = 1.0;
LABEL_54:
              v49 = (__int64)v47;
              v50 = v47;
              v51 = v50 + v48;
              if ( (v49 & 1) != 0 )
                v50 = v51;
              goto LABEL_59;
            }
            v50 = floorf(v45 + 0.5);
          }
          else
          {
            if ( v46 == -0.5 )
            {
              v47 = iptr;
              v48 = -1.0;
              goto LABEL_54;
            }
            v50 = ceilf(v45 + -0.5);
          }
LABEL_59:
          v34 = v50 * this->fields.cellHeight;
LABEL_60:
          v52 = v35 - z;
          if ( !this->fields.animateSmoothly )
            goto LABEL_66;
          if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
          if ( UnityEngine_Application__get_isPlaying(0LL) )
          {
            gameObject = UnityEngine_Component__get_gameObject(v31, 0LL);
            v57.fields.x = x - v28;
            v57.fields.y = v34 - y;
            v57.fields.z = v52;
            IsNullOrEmpty = (__int64)SpringPosition__Begin(gameObject, v57, 15.0, 0LL);
            if ( !IsNullOrEmpty )
              goto LABEL_72;
            *(_WORD *)(IsNullOrEmpty + 49) = 257;
          }
          else
          {
LABEL_66:
            IsNullOrEmpty = (__int64)UnityEngine_Component__get_transform(v31, 0LL);
            if ( !IsNullOrEmpty )
              goto LABEL_72;
            v58.fields.x = x - v28;
            v58.fields.y = v34 - y;
            v58.fields.z = v52;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsNullOrEmpty, v58, 0LL);
          }
          if ( ++v29 >= v22->fields._size )
            goto LABEL_69;
        }
        v37 = x / cellWidth;
        v38 = modf(v37, &iptr);
        if ( v37 >= 0.0 )
        {
          if ( v38 == 0.5 )
          {
            v39 = iptr;
            v40 = 1.0;
LABEL_42:
            v41 = (__int64)v39;
            v42 = v39;
            v43 = v42 + v40;
            if ( (v41 & 1) != 0 )
              v42 = v43;
            goto LABEL_47;
          }
          v42 = floorf(v37 + 0.5);
        }
        else
        {
          if ( v38 == -0.5 )
          {
            v39 = iptr;
            v40 = -1.0;
            goto LABEL_42;
          }
          v42 = ceilf(v37 + -0.5);
        }
LABEL_47:
        x = v42 * this->fields.cellWidth;
        goto LABEL_48;
      }
    }
  }
}